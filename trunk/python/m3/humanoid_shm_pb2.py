# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import component_base_pb2

DESCRIPTOR = descriptor.FileDescriptor(
  name='humanoid_shm.proto',
  package='',
  serialized_pb='\n\x12humanoid_shm.proto\x1a\x14\x63omponent_base.proto\"@\n\x13M3HumanoidShmStatus\x12\x1b\n\x04\x62\x61se\x18\x01 \x01(\x0b\x32\r.M3BaseStatus\x12\x0c\n\x04test\x18\x02 \x01(\x01\"$\n\x14M3HumanoidShmCommand\x12\x0c\n\x04test\x18\x01 \x01(\x01\"\"\n\x12M3HumanoidShmParam\x12\x0c\n\x04test\x18\x01 \x01(\x01\x42\x02H\x01')




_M3HUMANOIDSHMSTATUS = descriptor.Descriptor(
  name='M3HumanoidShmStatus',
  full_name='M3HumanoidShmStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3HumanoidShmStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='test', full_name='M3HumanoidShmStatus.test', index=1,
      number=2, type=1, cpp_type=5, label=1,
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
  serialized_start=44,
  serialized_end=108,
)


_M3HUMANOIDSHMCOMMAND = descriptor.Descriptor(
  name='M3HumanoidShmCommand',
  full_name='M3HumanoidShmCommand',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='test', full_name='M3HumanoidShmCommand.test', index=0,
      number=1, type=1, cpp_type=5, label=1,
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
  serialized_start=110,
  serialized_end=146,
)


_M3HUMANOIDSHMPARAM = descriptor.Descriptor(
  name='M3HumanoidShmParam',
  full_name='M3HumanoidShmParam',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='test', full_name='M3HumanoidShmParam.test', index=0,
      number=1, type=1, cpp_type=5, label=1,
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
  serialized_start=148,
  serialized_end=182,
)

_M3HUMANOIDSHMSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS
DESCRIPTOR.message_types_by_name['M3HumanoidShmStatus'] = _M3HUMANOIDSHMSTATUS
DESCRIPTOR.message_types_by_name['M3HumanoidShmCommand'] = _M3HUMANOIDSHMCOMMAND
DESCRIPTOR.message_types_by_name['M3HumanoidShmParam'] = _M3HUMANOIDSHMPARAM

class M3HumanoidShmStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3HUMANOIDSHMSTATUS
  
  # @@protoc_insertion_point(class_scope:M3HumanoidShmStatus)

class M3HumanoidShmCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3HUMANOIDSHMCOMMAND
  
  # @@protoc_insertion_point(class_scope:M3HumanoidShmCommand)

class M3HumanoidShmParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3HUMANOIDSHMPARAM
  
  # @@protoc_insertion_point(class_scope:M3HumanoidShmParam)

# @@protoc_insertion_point(module_scope)
