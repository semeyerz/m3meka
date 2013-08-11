# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import component_base_pb2

DESCRIPTOR = descriptor.FileDescriptor(
  name='omnibase.proto',
  package='',
  serialized_pb='\n\x0eomnibase.proto\x1a\x14\x63omponent_base.proto\"\xa0\x05\n\x10M3OmnibaseStatus\x12\x1b\n\x04\x62\x61se\x18\x01 \x01(\x0b\x32\r.M3BaseStatus\x12\x12\n\ncalibrated\x18\x02 \x03(\x05\x12\x17\n\x0fglobal_position\x18\x03 \x03(\x01\x12\x17\n\x0fglobal_velocity\x18\x04 \x03(\x01\x12\x16\n\x0elocal_velocity\x18\x05 \x03(\x01\x12\x1b\n\x13roll_torque_desired\x18\x06 \x03(\x01\x12\x1c\n\x14steer_torque_desired\x18\x07 \x03(\x01\x12\x13\n\x0bsteer_angle\x18\x08 \x03(\x01\x12\x16\n\x0esteer_velocity\x18\t \x03(\x01\x12\x12\n\nroll_angle\x18\n \x03(\x01\x12\x15\n\rroll_velocity\x18\x0b \x03(\x01\x12\x13\n\x0blocal_force\x18\x0c \x03(\x01\x12\x1a\n\x12local_acceleration\x18\r \x03(\x01\x12\x1c\n\x14motor_torque_desired\x18\x0e \x03(\x01\x12\x16\n\x0elocal_position\x18\x0f \x03(\x01\x12\x18\n\x10position_desired\x18\x10 \x03(\x01\x12\x18\n\x10velocity_desired\x18\x11 \x03(\x01\x12\x1c\n\x14\x61\x63\x63\x65leration_desired\x18\x12 \x03(\x01\x12\x19\n\x11traj_goal_reached\x18\x13 \x01(\x05\x12\x13\n\x0b\x62us_voltage\x18\x14 \x01(\x01\x12\x16\n\x0eposition_error\x18\x15 \x03(\x01\x12\x16\n\x0evelocity_error\x18\x16 \x03(\x01\x12\x15\n\rmotor_current\x18\x17 \x03(\x01\x12\x1c\n\x14roll_torque_internal\x18\x18 \x03(\x01\x12\x1d\n\x15steer_torque_internal\x18\x19 \x03(\x01\x12\x11\n\ttruss_vel\x18\x1a \x03(\x01\"}\n\x0fM3OmnibaseParam\x12\x18\n\x10\x65nable_breakbeam\x18\x01 \x03(\x05\x12\x0c\n\x04ks_i\x18\x02 \x01(\x01\x12\x12\n\nks_i_limit\x18\x03 \x01(\x01\x12\x12\n\nks_i_range\x18\x04 \x01(\x01\x12\x0c\n\x04ks_p\x18\x05 \x01(\x01\x12\x0c\n\x04ks_d\x18\x06 \x01(\x01\"\x84\x07\n\x11M3OmnibaseCommand\x12&\n\tctrl_mode\x18\x01 \x01(\x0e\x32\x13.OMNIBASE_CTRL_MODE\x12&\n\ttraj_mode\x18\x02 \x01(\x0e\x32\x13.OMNIBASE_TRAJ_MODE\x12\x1b\n\x13roll_torque_desired\x18\x03 \x03(\x01\x12\x1d\n\x15opspace_force_desired\x18\x04 \x03(\x01\x12\x1e\n\x16local_position_desired\x18\x05 \x03(\x01\x12\x1e\n\x16local_velocity_desired\x18\x06 \x03(\x01\x12\"\n\x1alocal_acceleration_desired\x18\x07 \x03(\x01\x12\x1f\n\x17global_position_desired\x18\x08 \x03(\x01\x12\x1f\n\x17global_velocity_desired\x18\t \x03(\x01\x12#\n\x1bglobal_acceleration_desired\x18\n \x03(\x01\x12\x1c\n\x14steer_torque_desired\x18\x0b \x03(\x01\x12\x12\n\njoystick_x\x18\x0c \x01(\x01\x12\x12\n\njoystick_y\x18\r \x01(\x01\x12\x14\n\x0cjoystick_yaw\x18\x0e \x01(\x01\x12\x1e\n\x16steer_velocity_desired\x18\x0f \x03(\x01\x12\x1d\n\x15roll_velocity_desired\x18\x10 \x03(\x01\x12\x17\n\x0fjoystick_button\x18\x11 \x01(\x05\x12*\n\x0b\x63\x61ster_mode\x18\x13 \x03(\x0e\x32\x15.OMNIBASE_CASTER_MODE\x12\x11\n\ttraj_goal\x18\x14 \x03(\x01\x12\x17\n\x0fglobal_position\x18\x15 \x03(\x01\x12\x16\n\x0elocal_position\x18\x16 \x03(\x01\x12\x1d\n\x15\x61\x64just_local_position\x18\x17 \x01(\x05\x12\x1e\n\x16\x61\x64just_global_position\x18\x18 \x01(\x05\x12\x18\n\x04vias\x18\x19 \x03(\x0b\x32\n.M3OmniVia\x12\x1b\n\x13max_linear_velocity\x18\x1a \x01(\x01\x12\x1d\n\x15max_rotation_velocity\x18\x1b \x01(\x01\x12\x1f\n\x17max_linear_acceleration\x18\x1c \x01(\x01\x12!\n\x19max_rotation_acceleration\x18\x1d \x01(\x01\x12\x1b\n\x13steer_theta_desired\x18\x1e \x03(\x01\"f\n\tM3OmniVia\x12\x0b\n\x03idx\x18\x01 \x01(\x05\x12\x18\n\x10position_desired\x18\x02 \x03(\x01\x12\x18\n\x10lin_velocity_avg\x18\x03 \x01(\x01\x12\x18\n\x10\x61ng_velocity_avg\x18\x04 \x01(\x01*\xe0\x01\n\x12OMNIBASE_CTRL_MODE\x12\x15\n\x11OMNIBASE_CTRL_OFF\x10\x00\x12\x1b\n\x17OMNIBASE_CTRL_CALIBRATE\x10\x01\x12\x18\n\x14OMNIBASE_CTRL_CASTER\x10\x02\x12\x1f\n\x1bOMNIBASE_CTRL_OPSPACE_FORCE\x10\x03\x12\x1e\n\x1aOMNIBASE_CTRL_OPSPACE_TRAJ\x10\x04\x12\x1c\n\x18OMNIBASE_CTRL_CART_LOCAL\x10\x05\x12\x1d\n\x19OMNIBASE_CTRL_CART_GLOBAL\x10\x06*\x84\x01\n\x14OMNIBASE_CASTER_MODE\x12\x17\n\x13OMNIBASE_CASTER_OFF\x10\x00\x12\x1a\n\x16OMNIBASE_CASTER_TORQUE\x10\x01\x12\x1c\n\x18OMNIBASE_CASTER_VELOCITY\x10\x02\x12\x19\n\x15OMNIBASE_CASTER_THETA\x10\x03*w\n\x12OMNIBASE_TRAJ_MODE\x12\x15\n\x11OMNIBASE_TRAJ_OFF\x10\x00\x12\x1a\n\x16OMNIBASE_TRAJ_JOYSTICK\x10\x01\x12\x16\n\x12OMNIBASE_TRAJ_GOAL\x10\x02\x12\x16\n\x12OMNIBASE_TRAJ_VIAS\x10\x03\x42\x02H\x01')

_OMNIBASE_CTRL_MODE = descriptor.EnumDescriptor(
  name='OMNIBASE_CTRL_MODE',
  full_name='OMNIBASE_CTRL_MODE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_OFF', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_CALIBRATE', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_CASTER', index=2, number=2,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_OPSPACE_FORCE', index=3, number=3,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_OPSPACE_TRAJ', index=4, number=4,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_CART_LOCAL', index=5, number=5,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CTRL_CART_GLOBAL', index=6, number=6,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1850,
  serialized_end=2074,
)


_OMNIBASE_CASTER_MODE = descriptor.EnumDescriptor(
  name='OMNIBASE_CASTER_MODE',
  full_name='OMNIBASE_CASTER_MODE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CASTER_OFF', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CASTER_TORQUE', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CASTER_VELOCITY', index=2, number=2,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_CASTER_THETA', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=2077,
  serialized_end=2209,
)


_OMNIBASE_TRAJ_MODE = descriptor.EnumDescriptor(
  name='OMNIBASE_TRAJ_MODE',
  full_name='OMNIBASE_TRAJ_MODE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_TRAJ_OFF', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_TRAJ_JOYSTICK', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_TRAJ_GOAL', index=2, number=2,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OMNIBASE_TRAJ_VIAS', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=2211,
  serialized_end=2330,
)


OMNIBASE_CTRL_OFF = 0
OMNIBASE_CTRL_CALIBRATE = 1
OMNIBASE_CTRL_CASTER = 2
OMNIBASE_CTRL_OPSPACE_FORCE = 3
OMNIBASE_CTRL_OPSPACE_TRAJ = 4
OMNIBASE_CTRL_CART_LOCAL = 5
OMNIBASE_CTRL_CART_GLOBAL = 6
OMNIBASE_CASTER_OFF = 0
OMNIBASE_CASTER_TORQUE = 1
OMNIBASE_CASTER_VELOCITY = 2
OMNIBASE_CASTER_THETA = 3
OMNIBASE_TRAJ_OFF = 0
OMNIBASE_TRAJ_JOYSTICK = 1
OMNIBASE_TRAJ_GOAL = 2
OMNIBASE_TRAJ_VIAS = 3



_M3OMNIBASESTATUS = descriptor.Descriptor(
  name='M3OmnibaseStatus',
  full_name='M3OmnibaseStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3OmnibaseStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='calibrated', full_name='M3OmnibaseStatus.calibrated', index=1,
      number=2, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='global_position', full_name='M3OmnibaseStatus.global_position', index=2,
      number=3, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='global_velocity', full_name='M3OmnibaseStatus.global_velocity', index=3,
      number=4, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_velocity', full_name='M3OmnibaseStatus.local_velocity', index=4,
      number=5, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='roll_torque_desired', full_name='M3OmnibaseStatus.roll_torque_desired', index=5,
      number=6, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_torque_desired', full_name='M3OmnibaseStatus.steer_torque_desired', index=6,
      number=7, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_angle', full_name='M3OmnibaseStatus.steer_angle', index=7,
      number=8, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_velocity', full_name='M3OmnibaseStatus.steer_velocity', index=8,
      number=9, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='roll_angle', full_name='M3OmnibaseStatus.roll_angle', index=9,
      number=10, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='roll_velocity', full_name='M3OmnibaseStatus.roll_velocity', index=10,
      number=11, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_force', full_name='M3OmnibaseStatus.local_force', index=11,
      number=12, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_acceleration', full_name='M3OmnibaseStatus.local_acceleration', index=12,
      number=13, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='motor_torque_desired', full_name='M3OmnibaseStatus.motor_torque_desired', index=13,
      number=14, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_position', full_name='M3OmnibaseStatus.local_position', index=14,
      number=15, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='position_desired', full_name='M3OmnibaseStatus.position_desired', index=15,
      number=16, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='velocity_desired', full_name='M3OmnibaseStatus.velocity_desired', index=16,
      number=17, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='acceleration_desired', full_name='M3OmnibaseStatus.acceleration_desired', index=17,
      number=18, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='traj_goal_reached', full_name='M3OmnibaseStatus.traj_goal_reached', index=18,
      number=19, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='bus_voltage', full_name='M3OmnibaseStatus.bus_voltage', index=19,
      number=20, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='position_error', full_name='M3OmnibaseStatus.position_error', index=20,
      number=21, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='velocity_error', full_name='M3OmnibaseStatus.velocity_error', index=21,
      number=22, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='motor_current', full_name='M3OmnibaseStatus.motor_current', index=22,
      number=23, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='roll_torque_internal', full_name='M3OmnibaseStatus.roll_torque_internal', index=23,
      number=24, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_torque_internal', full_name='M3OmnibaseStatus.steer_torque_internal', index=24,
      number=25, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='truss_vel', full_name='M3OmnibaseStatus.truss_vel', index=25,
      number=26, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=41,
  serialized_end=713,
)


_M3OMNIBASEPARAM = descriptor.Descriptor(
  name='M3OmnibaseParam',
  full_name='M3OmnibaseParam',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='enable_breakbeam', full_name='M3OmnibaseParam.enable_breakbeam', index=0,
      number=1, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ks_i', full_name='M3OmnibaseParam.ks_i', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ks_i_limit', full_name='M3OmnibaseParam.ks_i_limit', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ks_i_range', full_name='M3OmnibaseParam.ks_i_range', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ks_p', full_name='M3OmnibaseParam.ks_p', index=4,
      number=5, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ks_d', full_name='M3OmnibaseParam.ks_d', index=5,
      number=6, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=715,
  serialized_end=840,
)


_M3OMNIBASECOMMAND = descriptor.Descriptor(
  name='M3OmnibaseCommand',
  full_name='M3OmnibaseCommand',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='ctrl_mode', full_name='M3OmnibaseCommand.ctrl_mode', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='traj_mode', full_name='M3OmnibaseCommand.traj_mode', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='roll_torque_desired', full_name='M3OmnibaseCommand.roll_torque_desired', index=2,
      number=3, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='opspace_force_desired', full_name='M3OmnibaseCommand.opspace_force_desired', index=3,
      number=4, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_position_desired', full_name='M3OmnibaseCommand.local_position_desired', index=4,
      number=5, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_velocity_desired', full_name='M3OmnibaseCommand.local_velocity_desired', index=5,
      number=6, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_acceleration_desired', full_name='M3OmnibaseCommand.local_acceleration_desired', index=6,
      number=7, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='global_position_desired', full_name='M3OmnibaseCommand.global_position_desired', index=7,
      number=8, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='global_velocity_desired', full_name='M3OmnibaseCommand.global_velocity_desired', index=8,
      number=9, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='global_acceleration_desired', full_name='M3OmnibaseCommand.global_acceleration_desired', index=9,
      number=10, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_torque_desired', full_name='M3OmnibaseCommand.steer_torque_desired', index=10,
      number=11, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='joystick_x', full_name='M3OmnibaseCommand.joystick_x', index=11,
      number=12, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='joystick_y', full_name='M3OmnibaseCommand.joystick_y', index=12,
      number=13, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='joystick_yaw', full_name='M3OmnibaseCommand.joystick_yaw', index=13,
      number=14, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_velocity_desired', full_name='M3OmnibaseCommand.steer_velocity_desired', index=14,
      number=15, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='roll_velocity_desired', full_name='M3OmnibaseCommand.roll_velocity_desired', index=15,
      number=16, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='joystick_button', full_name='M3OmnibaseCommand.joystick_button', index=16,
      number=17, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='caster_mode', full_name='M3OmnibaseCommand.caster_mode', index=17,
      number=19, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='traj_goal', full_name='M3OmnibaseCommand.traj_goal', index=18,
      number=20, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='global_position', full_name='M3OmnibaseCommand.global_position', index=19,
      number=21, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='local_position', full_name='M3OmnibaseCommand.local_position', index=20,
      number=22, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adjust_local_position', full_name='M3OmnibaseCommand.adjust_local_position', index=21,
      number=23, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adjust_global_position', full_name='M3OmnibaseCommand.adjust_global_position', index=22,
      number=24, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='vias', full_name='M3OmnibaseCommand.vias', index=23,
      number=25, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='max_linear_velocity', full_name='M3OmnibaseCommand.max_linear_velocity', index=24,
      number=26, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='max_rotation_velocity', full_name='M3OmnibaseCommand.max_rotation_velocity', index=25,
      number=27, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='max_linear_acceleration', full_name='M3OmnibaseCommand.max_linear_acceleration', index=26,
      number=28, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='max_rotation_acceleration', full_name='M3OmnibaseCommand.max_rotation_acceleration', index=27,
      number=29, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='steer_theta_desired', full_name='M3OmnibaseCommand.steer_theta_desired', index=28,
      number=30, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=843,
  serialized_end=1743,
)


_M3OMNIVIA = descriptor.Descriptor(
  name='M3OmniVia',
  full_name='M3OmniVia',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='idx', full_name='M3OmniVia.idx', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='position_desired', full_name='M3OmniVia.position_desired', index=1,
      number=2, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='lin_velocity_avg', full_name='M3OmniVia.lin_velocity_avg', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ang_velocity_avg', full_name='M3OmniVia.ang_velocity_avg', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=1745,
  serialized_end=1847,
)

_M3OMNIBASESTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS
_M3OMNIBASECOMMAND.fields_by_name['ctrl_mode'].enum_type = _OMNIBASE_CTRL_MODE
_M3OMNIBASECOMMAND.fields_by_name['traj_mode'].enum_type = _OMNIBASE_TRAJ_MODE
_M3OMNIBASECOMMAND.fields_by_name['caster_mode'].enum_type = _OMNIBASE_CASTER_MODE
_M3OMNIBASECOMMAND.fields_by_name['vias'].message_type = _M3OMNIVIA
DESCRIPTOR.message_types_by_name['M3OmnibaseStatus'] = _M3OMNIBASESTATUS
DESCRIPTOR.message_types_by_name['M3OmnibaseParam'] = _M3OMNIBASEPARAM
DESCRIPTOR.message_types_by_name['M3OmnibaseCommand'] = _M3OMNIBASECOMMAND
DESCRIPTOR.message_types_by_name['M3OmniVia'] = _M3OMNIVIA

class M3OmnibaseStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3OMNIBASESTATUS
  
  # @@protoc_insertion_point(class_scope:M3OmnibaseStatus)

class M3OmnibaseParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3OMNIBASEPARAM
  
  # @@protoc_insertion_point(class_scope:M3OmnibaseParam)

class M3OmnibaseCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3OMNIBASECOMMAND
  
  # @@protoc_insertion_point(class_scope:M3OmnibaseCommand)

class M3OmniVia(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3OMNIVIA
  
  # @@protoc_insertion_point(class_scope:M3OmniVia)

# @@protoc_insertion_point(module_scope)