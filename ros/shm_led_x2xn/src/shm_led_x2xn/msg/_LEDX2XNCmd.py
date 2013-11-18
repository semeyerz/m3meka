"""autogenerated by genpy from shm_led_x2xn/LEDX2XNCmd.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import shm_led_x2xn.msg
import std_msgs.msg

class LEDX2XNCmd(genpy.Message):
  _md5sum = "d1c07f75260256e0d40356eab79bc22f"
  _type = "shm_led_x2xn/LEDX2XNCmd"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
uint8 enable_a
uint8 enable_b
LEDX2XNRGB[] branch_a
LEDX2XNRGB[] branch_b

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: shm_led_x2xn/LEDX2XNRGB
uint32 r
uint32 g
uint32 b
"""
  __slots__ = ['header','enable_a','enable_b','branch_a','branch_b']
  _slot_types = ['std_msgs/Header','uint8','uint8','shm_led_x2xn/LEDX2XNRGB[]','shm_led_x2xn/LEDX2XNRGB[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,enable_a,enable_b,branch_a,branch_b

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LEDX2XNCmd, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.enable_a is None:
        self.enable_a = 0
      if self.enable_b is None:
        self.enable_b = 0
      if self.branch_a is None:
        self.branch_a = []
      if self.branch_b is None:
        self.branch_b = []
    else:
      self.header = std_msgs.msg.Header()
      self.enable_a = 0
      self.enable_b = 0
      self.branch_a = []
      self.branch_b = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2B.pack(_x.enable_a, _x.enable_b))
      length = len(self.branch_a)
      buff.write(_struct_I.pack(length))
      for val1 in self.branch_a:
        _x = val1
        buff.write(_struct_3I.pack(_x.r, _x.g, _x.b))
      length = len(self.branch_b)
      buff.write(_struct_I.pack(length))
      for val1 in self.branch_b:
        _x = val1
        buff.write(_struct_3I.pack(_x.r, _x.g, _x.b))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.branch_a is None:
        self.branch_a = None
      if self.branch_b is None:
        self.branch_b = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.enable_a, _x.enable_b,) = _struct_2B.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.branch_a = []
      for i in range(0, length):
        val1 = shm_led_x2xn.msg.LEDX2XNRGB()
        _x = val1
        start = end
        end += 12
        (_x.r, _x.g, _x.b,) = _struct_3I.unpack(str[start:end])
        self.branch_a.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.branch_b = []
      for i in range(0, length):
        val1 = shm_led_x2xn.msg.LEDX2XNRGB()
        _x = val1
        start = end
        end += 12
        (_x.r, _x.g, _x.b,) = _struct_3I.unpack(str[start:end])
        self.branch_b.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2B.pack(_x.enable_a, _x.enable_b))
      length = len(self.branch_a)
      buff.write(_struct_I.pack(length))
      for val1 in self.branch_a:
        _x = val1
        buff.write(_struct_3I.pack(_x.r, _x.g, _x.b))
      length = len(self.branch_b)
      buff.write(_struct_I.pack(length))
      for val1 in self.branch_b:
        _x = val1
        buff.write(_struct_3I.pack(_x.r, _x.g, _x.b))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.branch_a is None:
        self.branch_a = None
      if self.branch_b is None:
        self.branch_b = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.enable_a, _x.enable_b,) = _struct_2B.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.branch_a = []
      for i in range(0, length):
        val1 = shm_led_x2xn.msg.LEDX2XNRGB()
        _x = val1
        start = end
        end += 12
        (_x.r, _x.g, _x.b,) = _struct_3I.unpack(str[start:end])
        self.branch_a.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.branch_b = []
      for i in range(0, length):
        val1 = shm_led_x2xn.msg.LEDX2XNRGB()
        _x = val1
        start = end
        end += 12
        (_x.r, _x.g, _x.b,) = _struct_3I.unpack(str[start:end])
        self.branch_b.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_2B = struct.Struct("<2B")