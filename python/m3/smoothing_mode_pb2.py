# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)



DESCRIPTOR = descriptor.FileDescriptor(
  name='smoothing_mode.proto',
  package='',
  serialized_pb='\n\x14smoothing_mode.proto*^\n\x0eSMOOTHING_MODE\x12\x16\n\x12SMOOTHING_MODE_OFF\x10\x00\x12\x17\n\x13SMOOTHING_MODE_SLEW\x10\x01\x12\x1b\n\x17SMOOTHING_MODE_MIN_JERK\x10\x02\x42\x02H\x01')

_SMOOTHING_MODE = descriptor.EnumDescriptor(
  name='SMOOTHING_MODE',
  full_name='SMOOTHING_MODE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='SMOOTHING_MODE_OFF', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SMOOTHING_MODE_SLEW', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SMOOTHING_MODE_MIN_JERK', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=24,
  serialized_end=118,
)


SMOOTHING_MODE_OFF = 0
SMOOTHING_MODE_SLEW = 1
SMOOTHING_MODE_MIN_JERK = 2



# @@protoc_insertion_point(module_scope)