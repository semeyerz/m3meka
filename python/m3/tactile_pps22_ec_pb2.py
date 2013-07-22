# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import component_base_pb2

DESCRIPTOR = descriptor.FileDescriptor(
  name='tactile_pps22_ec.proto',
  package='',
  serialized_pb='\n\x16tactile_pps22_ec.proto\x1a\x14\x63omponent_base.proto\"}\n\x16M3TactilePPS22EcStatus\x12\x1b\n\x04\x62\x61se\x18\x01 \x01(\x0b\x32\r.M3BaseStatus\x12#\n\x08\x65thercat\x18\x02 \x01(\x0b\x32\x11.M3EtherCATStatus\x12\x11\n\ttimestamp\x18\x03 \x01(\x04\x12\x0e\n\x06taxels\x18\x04 \x03(\x05\"(\n\x17M3TactilePPS22EcCommand\x12\r\n\x05\x64ummy\x18\x01 \x01(\x05\"\'\n\x15M3TactilePPS22EcParam\x12\x0e\n\x06\x63onfig\x18\x01 \x01(\x05\x42\x02H\x01')




_M3TACTILEPPS22ECSTATUS = descriptor.Descriptor(
  name='M3TactilePPS22EcStatus',
  full_name='M3TactilePPS22EcStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3TactilePPS22EcStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ethercat', full_name='M3TactilePPS22EcStatus.ethercat', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='timestamp', full_name='M3TactilePPS22EcStatus.timestamp', index=2,
      number=3, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='taxels', full_name='M3TactilePPS22EcStatus.taxels', index=3,
      number=4, type=5, cpp_type=1, label=3,
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
  serialized_start=48,
  serialized_end=173,
)


_M3TACTILEPPS22ECCOMMAND = descriptor.Descriptor(
  name='M3TactilePPS22EcCommand',
  full_name='M3TactilePPS22EcCommand',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='dummy', full_name='M3TactilePPS22EcCommand.dummy', index=0,
      number=1, type=5, cpp_type=1, label=1,
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
  serialized_start=175,
  serialized_end=215,
)


_M3TACTILEPPS22ECPARAM = descriptor.Descriptor(
  name='M3TactilePPS22EcParam',
  full_name='M3TactilePPS22EcParam',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='config', full_name='M3TactilePPS22EcParam.config', index=0,
      number=1, type=5, cpp_type=1, label=1,
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
  serialized_start=217,
  serialized_end=256,
)

_M3TACTILEPPS22ECSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS
_M3TACTILEPPS22ECSTATUS.fields_by_name['ethercat'].message_type = component_base_pb2._M3ETHERCATSTATUS
DESCRIPTOR.message_types_by_name['M3TactilePPS22EcStatus'] = _M3TACTILEPPS22ECSTATUS
DESCRIPTOR.message_types_by_name['M3TactilePPS22EcCommand'] = _M3TACTILEPPS22ECCOMMAND
DESCRIPTOR.message_types_by_name['M3TactilePPS22EcParam'] = _M3TACTILEPPS22ECPARAM

class M3TactilePPS22EcStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3TACTILEPPS22ECSTATUS
  
  # @@protoc_insertion_point(class_scope:M3TactilePPS22EcStatus)

class M3TactilePPS22EcCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3TACTILEPPS22ECCOMMAND
  
  # @@protoc_insertion_point(class_scope:M3TactilePPS22EcCommand)

class M3TactilePPS22EcParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3TACTILEPPS22ECPARAM
  
  # @@protoc_insertion_point(class_scope:M3TactilePPS22EcParam)

# @@protoc_insertion_point(module_scope)