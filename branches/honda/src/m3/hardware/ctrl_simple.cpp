 /*************************************************************************
 * 
 * REDWOOD CONFIDENTIAL
 * Author: Aaron Edsinger
 * __________________
 * 
 *  [2012] - [+] Redwood Robotics Incorporated 
 *  All Rights Reserved.
 * 
 * All information contained herein is, and remains
 * the property of Redwood Robotics Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Redwood Robotics Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Redwood Robotics Incorporated.
 */
 
#include <cmath>

#include <m3rt/base/m3rt_def.h>
#include <m3rt/base/component_factory.h>

#include "ctrl_simple.h"

namespace m3{
	
using namespace m3rt;
using namespace std;
using namespace ros;


/////////////////////////////////////////////////////////////////////////////////////////////////////////
//			M3 Stuffs

void operator >> (const YAML::Node& node, M3ParamTrajectory* traj)
{
	mReal tmp;
	node["freq"] >> tmp; 		traj->set_freq(tmp);
	node["amp"] >> tmp;			traj->set_amp(tmp);
	node["zero"] >> tmp;		traj->set_zero(tmp);
}

void operator >> (const YAML::Node& node, M3ParamPID* pid)
{
	mReal val;
	node["k_p"] >> val;			pid->set_k_p(val);
	node["k_i"] >> val;			pid->set_k_i(val);
	node["k_d"] >> val;			pid->set_k_d(val);
	node["k_i_limit"] >> val;	pid->set_k_i_limit(val);
	node["k_i_range"] >> val;	pid->set_k_i_range(val);
}


bool M3CtrlSimple::ReadConfig(const char * filename)
{
	YAML::Node doc;
	mReal val;
	
	if (!M3Component::ReadConfig(filename))
		return false;

	GetYamlDoc(filename, doc);	
	
	//Misc
	doc["act_component"] >> act_name;

	doc["param"]["traj_current"] >> ParamTrajCurrent();
	doc["param"]["traj_theta"] >> ParamTrajTheta();
	
	doc["param"]["pid_theta"] >> ParamPidTheta();
	doc["param"]["pid_joint_torque"] >> ParamPidTorque();
	
	/*
	//Trajectoreis
	doc["param"]["traj_theta"]["freq"] >> val;
	ParamTrajTheta()->set_freq(val);
	doc["param"]["traj_theta"]["amp"] >> val;
	ParamTrajTheta()->set_amp(val);
	doc["param"]["traj_theta"]["zero"] >> val;
	ParamTrajTheta()->set_zero(val);

	doc["param"]["traj_current"]["freq"] >> val;
	ParamTrajCurrent()->set_freq(val);
	doc["param"]["traj_current"]["amp"] >> val;
	ParamTrajCurrent()->set_amp(val);
	doc["param"]["traj_current"]["zero"] >> val;
	ParamTrajCurrent()->set_zero(val);
	
	doc["param"]["traj_torque"]["freq"] >> val;
	ParamTrajTorque()->set_freq(val);
	doc["param"]["traj_torque"]["amp"] >> val;
	ParamTrajTorque()->set_amp(val);
	doc["param"]["traj_torque"]["zero"] >> val;
	ParamTrajTorque()->set_zero(val); */
	
	//PID
	/*doc["param"]["pid_theta"]["k_p"] >> val;
	ParamPidTheta()->set_k_p(val);
	doc["param"]["pid_theta"]["k_i"] >> val;
	ParamPidTheta()->set_k_i(val);
	doc["param"]["pid_theta"]["k_d"] >> val;
	ParamPidTheta()->set_k_d(val);
	doc["param"]["pid_theta"]["k_i_limit"] >> val;
	ParamPidTheta()->set_k_i_limit(val);
	doc["param"]["pid_theta"]["k_i_range"] >> val;
	ParamPidTheta()->set_k_i_range(val);*/


	return true;
} // end ReadConfig

bool M3CtrlSimple::LinkDependentComponents()
{
	act = (M3Actuator*) factory->GetComponent(act_name);
	if (act==NULL)
	{
		M3_INFO("M3Actuator component %s not found for component %s\n",act_name.c_str(),GetName().c_str());
		return false;
	}
	return true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void M3CtrlSimple::Startup()
{
	if (act!=NULL)
		SetStateSafeOp();
	else
		SetStateError();
}

void M3CtrlSimple::Shutdown()
{
}

////////////////////////////////////////////////////////////////////////////////
//			STATUS


void M3CtrlSimple::StepStatus()
{ 
	if (IsStateError())
		return;
      M3ActuatorStatus *act_status  = (M3ActuatorStatus*)(act->GetStatus());
      StatusActuator()->CopyFrom(*act_status);

} // end StepStatus


////////////////////////////////////////////////////////////////////////////////
//			COMMAND





void M3CtrlSimple::StepCommand()
{
	pnt_cnt++;
	
	if (!act || IsStateSafeOp())
		return;
	
	if(IsStateError())
	{
		act->SetDesiredControlMode(ACTUATOR_MODE_OFF);
		return;
	}
	
	/////////////// Handle Trajectories ////////////////////
	
	mReal	desired_theta;
	mReal	desired_current;
	mReal	desired_torque;
	
	//Trajectories
	mReal dt			= GetTimestamp()/1000000.0;//seconds

	mReal t_theta	= sin( 2*M_PI * dt * ParamTrajTheta()->freq());
	mReal t_current	= sin( 2*M_PI * dt * ParamTrajCurrent()->freq());
	mReal t_torque	= sin( 2*M_PI * dt * ParamTrajTorque()->freq());
	
	// Grab the commmand values
	desired_theta		= command.desired_theta();
	desired_current		= command.desired_current();
	desired_torque		= command.desired_torque();
	
	if (command.traj_mode() ==TRAJ_SQUARE && command.ctrl_mode()==CTRL_MODE_CURRENT)
	{
		if (t_current>0)
		    desired_current = ParamTrajCurrent()->zero()+ParamTrajCurrent()->amp();
		else
		    desired_current = ParamTrajCurrent()->zero()-ParamTrajCurrent()->amp();
	}
	if (command.traj_mode() ==TRAJ_SINE && command.ctrl_mode()==CTRL_MODE_CURRENT)
	{
	  desired_current	 = ParamTrajCurrent()->zero()+ParamTrajCurrent()->amp()*t_current;
	}
	
	if (command.traj_mode() ==TRAJ_SQUARE && 
	  (command.ctrl_mode()==CTRL_MODE_THETA ||command.ctrl_mode()==CTRL_MODE_THETA_IMP))
	{
		if (t_theta>0)
			desired_theta = ParamTrajTheta()->zero()+ParamTrajTheta()->amp();
		else
			desired_theta = ParamTrajTheta()->zero()-ParamTrajTheta()->amp();
	}
	if (command.traj_mode() ==TRAJ_SINE && 
	  (command.ctrl_mode()==CTRL_MODE_THETA ||command.ctrl_mode()==CTRL_MODE_THETA_IMP))
	{
		desired_theta = ParamTrajTheta()->zero()+ParamTrajTheta()->amp()*t_theta;
	}
	
	if (command.traj_mode() ==TRAJ_SQUARE && 
	  (command.ctrl_mode()==CTRL_MODE_TORQUE ||command.ctrl_mode()==CTRL_MODE_TORQUE_GC))
	{
		if (t_torque>0)
			desired_torque = ParamTrajTorque()->zero()+ParamTrajTorque()->amp();
		else
			desired_torque = ParamTrajTorque()->zero()-ParamTrajTorque()->amp();
	}
	if (command.traj_mode() ==TRAJ_SINE && 
	  (command.ctrl_mode()==CTRL_MODE_TORQUE ||command.ctrl_mode()==CTRL_MODE_TORQUE_GC))
	{
		  desired_torque = ParamTrajTorque()->zero()+ParamTrajTorque()->amp()*t_torque;
	}

	/////////////////// Command Actuator /////////////////////////
	//Reset
	StatusCommand()->set_current(0);
	StatusCommand()->set_torque(0);
	StatusCommand()->set_theta(0);
	
	if (command.ctrl_mode()== CTRL_MODE_TORQUE_GC)
	  desired_torque -= status.torque_gravity();
	
	//Handle Inner Control Loops
	switch(command.ctrl_mode())
	{
		case CTRL_MODE_CURRENT:
			act->SetDesiredControlMode(ACTUATOR_MODE_CURRENT);
			act->SetDesiredCurrent(desired_current);
			// update personal status
			StatusCommand()->set_current(desired_current);
			break;
		  case CTRL_MODE_TORQUE:
		  case CTRL_MODE_TORQUE_GC:
			//PID
			desired_current = pid_torque.Step(GetJointTorque(),
						  GetJointTorqueDot(),
						  desired_torque,
						  ParamPidTorque()->k_p(), 
						  ParamPidTorque()->k_i(),
						  ParamPidTorque()->k_d(),
						  ParamPidTorque()->k_i_limit(),
						  ParamPidTorque()->k_i_range());
			act->SetDesiredControlMode(ACTUATOR_MODE_CURRENT);
			act->SetDesiredCurrent(desired_current);
			// update personal status
			StatusCommand()->set_current(desired_current);
			StatusCommand()->set_torque(desired_torque);
			break;
		
		  case CTRL_MODE_THETA:
			//PID
			desired_current = pid_theta.Step(GetJointTheta(),
						  GetJointThetaDot(),
						  desired_theta,
						  ParamPidTheta()->k_p(), 
						  ParamPidTheta()->k_i(),
						  ParamPidTheta()->k_d(),
						  ParamPidTheta()->k_i_limit(),
						  ParamPidTheta()->k_i_range());
			act->SetDesiredControlMode(ACTUATOR_MODE_CURRENT);
			act->SetDesiredCurrent(desired_current);
			// update personal status
			StatusCommand()->set_current(desired_current);
			StatusCommand()->set_theta(desired_theta);
			break;
		case CTRL_MODE_THETA_IMP: //Not yet implemented
		case CTRL_MODE_OFF:
		default:
			act->SetDesiredControlMode(ACTUATOR_MODE_OFF);
			break;


	}

}


} // end StepCommand
