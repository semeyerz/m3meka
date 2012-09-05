/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/ROS_API/m3meka/ros/m3ctrl_msgs/msg/M3JointCmd.msg */
#ifndef M3CTRL_MSGS_MESSAGE_M3JOINTCMD_H
#define M3CTRL_MSGS_MESSAGE_M3JOINTCMD_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace m3ctrl_msgs
{
template <class ContainerAllocator>
struct M3JointCmd_ {
  typedef M3JointCmd_<ContainerAllocator> Type;

  M3JointCmd_()
  : header()
  , chain()
  , chain_idx()
  , stiffness()
  , velocity()
  , position()
  , control_mode()
  , smoothing_mode()
  {
  }

  M3JointCmd_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , chain(_alloc)
  , chain_idx(_alloc)
  , stiffness(_alloc)
  , velocity(_alloc)
  , position(_alloc)
  , control_mode(_alloc)
  , smoothing_mode(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _chain_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  chain;

  typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _chain_idx_type;
  std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  chain_idx;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _stiffness_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  stiffness;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _velocity_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  velocity;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _position_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  position;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _control_mode_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  control_mode;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _smoothing_mode_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  smoothing_mode;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3JointCmd
typedef  ::m3ctrl_msgs::M3JointCmd_<std::allocator<void> > M3JointCmd;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointCmd> M3JointCmdPtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointCmd const> M3JointCmdConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace m3ctrl_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > {
  static const char* value() 
  {
    return "537d840f3b6e483d60cb71f9f796de1e";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x537d840f3b6e483dULL;
  static const uint64_t static_value2 = 0x60cb71f9f796de1eULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointCmd";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint8[] chain\n\
int16[] chain_idx\n\
float32[] stiffness\n\
float32[] velocity\n\
float32[] position\n\
uint8[] control_mode\n\
uint8[] smoothing_mode\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.chain);
    stream.next(m.chain_idx);
    stream.next(m.stiffness);
    stream.next(m.velocity);
    stream.next(m.position);
    stream.next(m.control_mode);
    stream.next(m.smoothing_mode);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3JointCmd_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::m3ctrl_msgs::M3JointCmd_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "chain[]" << std::endl;
    for (size_t i = 0; i < v.chain.size(); ++i)
    {
      s << indent << "  chain[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.chain[i]);
    }
    s << indent << "chain_idx[]" << std::endl;
    for (size_t i = 0; i < v.chain_idx.size(); ++i)
    {
      s << indent << "  chain_idx[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.chain_idx[i]);
    }
    s << indent << "stiffness[]" << std::endl;
    for (size_t i = 0; i < v.stiffness.size(); ++i)
    {
      s << indent << "  stiffness[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.stiffness[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "control_mode[]" << std::endl;
    for (size_t i = 0; i < v.control_mode.size(); ++i)
    {
      s << indent << "  control_mode[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.control_mode[i]);
    }
    s << indent << "smoothing_mode[]" << std::endl;
    for (size_t i = 0; i < v.smoothing_mode.size(); ++i)
    {
      s << indent << "  smoothing_mode[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.smoothing_mode[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // M3CTRL_MSGS_MESSAGE_M3JOINTCMD_H
