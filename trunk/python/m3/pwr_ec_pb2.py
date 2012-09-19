# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2



_M3PWRECSTATUS = descriptor.Descriptor(
  name='M3PwrEcStatus',
  full_name='M3PwrEcStatus',
  filename='pwr_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3PwrEcStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ethercat', full_name='M3PwrEcStatus.ethercat', index=1,
      number=2, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='timestamp', full_name='M3PwrEcStatus.timestamp', index=2,
      number=3, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='motor_enabled', full_name='M3PwrEcStatus.motor_enabled', index=3,
      number=4, type=8, cpp_type=7, label=1,
      default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_bus_voltage', full_name='M3PwrEcStatus.adc_bus_voltage', index=4,
      number=5, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_current_digital', full_name='M3PwrEcStatus.adc_current_digital', index=5,
      number=6, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_ext_0', full_name='M3PwrEcStatus.adc_ext_0', index=6,
      number=7, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='flags', full_name='M3PwrEcStatus.flags', index=7,
      number=8, type=5, cpp_type=1, label=1,
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


_M3PWRECCOMMAND = descriptor.Descriptor(
  name='M3PwrEcCommand',
  full_name='M3PwrEcCommand',
  filename='pwr_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='enable_motor', full_name='M3PwrEcCommand.enable_motor', index=0,
      number=1, type=5, cpp_type=1, label=1,
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


_M3PWRECPARAM = descriptor.Descriptor(
  name='M3PwrEcParam',
  full_name='M3PwrEcParam',
  filename='pwr_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='config', full_name='M3PwrEcParam.config', index=0,
      number=1, type=5, cpp_type=1, label=1,
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

_M3PWRECSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS
_M3PWRECSTATUS.fields_by_name['ethercat'].message_type = component_base_pb2._M3ETHERCATSTATUS

class M3PwrEcStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3PWRECSTATUS

class M3PwrEcCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3PWRECCOMMAND

class M3PwrEcParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3PWRECPARAM
