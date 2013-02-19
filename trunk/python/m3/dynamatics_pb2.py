# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2



_M3DYNAMATICSSTATUS = descriptor.Descriptor(
  name='M3DynamaticsStatus',
  full_name='M3DynamaticsStatus',
  filename='dynamatics.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3DynamaticsStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='end_pos', full_name='M3DynamaticsStatus.end_pos', index=1,
      number=2, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='end_rot', full_name='M3DynamaticsStatus.end_rot', index=2,
      number=3, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='J', full_name='M3DynamaticsStatus.J', index=3,
      number=4, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='G', full_name='M3DynamaticsStatus.G', index=4,
      number=5, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='end_twist', full_name='M3DynamaticsStatus.end_twist', index=5,
      number=6, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='base_wrench', full_name='M3DynamaticsStatus.base_wrench', index=6,
      number=7, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='child_wrench', full_name='M3DynamaticsStatus.child_wrench', index=7,
      number=8, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_M3DYNAMATICSPARAM = descriptor.Descriptor(
  name='M3DynamaticsParam',
  full_name='M3DynamaticsParam',
  filename='dynamatics.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='payload_mass', full_name='M3DynamaticsParam.payload_mass', index=0,
      number=1, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='payload_com', full_name='M3DynamaticsParam.payload_com', index=1,
      number=2, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='payload_inertia', full_name='M3DynamaticsParam.payload_inertia', index=2,
      number=3, type=1, cpp_type=5, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='use_velocities', full_name='M3DynamaticsParam.use_velocities', index=3,
      number=4, type=8, cpp_type=7, label=1,
      default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='use_accelerations', full_name='M3DynamaticsParam.use_accelerations', index=4,
      number=5, type=8, cpp_type=7, label=1,
      default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_M3DYNAMATICSCOMMAND = descriptor.Descriptor(
  name='M3DynamaticsCommand',
  full_name='M3DynamaticsCommand',
  filename='dynamatics.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='test', full_name='M3DynamaticsCommand.test', index=0,
      number=1, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)

import component_base_pb2

_M3DYNAMATICSSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS

class M3DynamaticsStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3DYNAMATICSSTATUS

class M3DynamaticsParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3DYNAMATICSPARAM

class M3DynamaticsCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3DYNAMATICSCOMMAND

