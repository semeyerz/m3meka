// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ledx2xn_ec_shm.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* M3LedX2XNEcShmStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  M3LedX2XNEcShmStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* M3LedX2XNEcShmCommand_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  M3LedX2XNEcShmCommand_reflection_ = NULL;
const ::google::protobuf::Descriptor* M3LedX2XNEcShmParam_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  M3LedX2XNEcShmParam_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ledx2xn_5fec_5fshm_2eproto() {
  protobuf_AddDesc_ledx2xn_5fec_5fshm_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ledx2xn_ec_shm.proto");
  GOOGLE_CHECK(file != NULL);
  M3LedX2XNEcShmStatus_descriptor_ = file->message_type(0);
  static const int M3LedX2XNEcShmStatus_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmStatus, base_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmStatus, test_),
  };
  M3LedX2XNEcShmStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      M3LedX2XNEcShmStatus_descriptor_,
      M3LedX2XNEcShmStatus::default_instance_,
      M3LedX2XNEcShmStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(M3LedX2XNEcShmStatus));
  M3LedX2XNEcShmCommand_descriptor_ = file->message_type(1);
  static const int M3LedX2XNEcShmCommand_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmCommand, test_),
  };
  M3LedX2XNEcShmCommand_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      M3LedX2XNEcShmCommand_descriptor_,
      M3LedX2XNEcShmCommand::default_instance_,
      M3LedX2XNEcShmCommand_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmCommand, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmCommand, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(M3LedX2XNEcShmCommand));
  M3LedX2XNEcShmParam_descriptor_ = file->message_type(2);
  static const int M3LedX2XNEcShmParam_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmParam, test_),
  };
  M3LedX2XNEcShmParam_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      M3LedX2XNEcShmParam_descriptor_,
      M3LedX2XNEcShmParam::default_instance_,
      M3LedX2XNEcShmParam_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmParam, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LedX2XNEcShmParam, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(M3LedX2XNEcShmParam));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ledx2xn_5fec_5fshm_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    M3LedX2XNEcShmStatus_descriptor_, &M3LedX2XNEcShmStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    M3LedX2XNEcShmCommand_descriptor_, &M3LedX2XNEcShmCommand::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    M3LedX2XNEcShmParam_descriptor_, &M3LedX2XNEcShmParam::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ledx2xn_5fec_5fshm_2eproto() {
  delete M3LedX2XNEcShmStatus::default_instance_;
  delete M3LedX2XNEcShmStatus_reflection_;
  delete M3LedX2XNEcShmCommand::default_instance_;
  delete M3LedX2XNEcShmCommand_reflection_;
  delete M3LedX2XNEcShmParam::default_instance_;
  delete M3LedX2XNEcShmParam_reflection_;
}

void protobuf_AddDesc_ledx2xn_5fec_5fshm_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_component_5fbase_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024ledx2xn_ec_shm.proto\032\024component_base.p"
    "roto\"A\n\024M3LedX2XNEcShmStatus\022\033\n\004base\030\001 \001"
    "(\0132\r.M3BaseStatus\022\014\n\004test\030\002 \001(\001\"%\n\025M3Led"
    "X2XNEcShmCommand\022\014\n\004test\030\001 \001(\001\"#\n\023M3LedX"
    "2XNEcShmParam\022\014\n\004test\030\001 \001(\001B\002H\001", 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ledx2xn_ec_shm.proto", &protobuf_RegisterTypes);
  M3LedX2XNEcShmStatus::default_instance_ = new M3LedX2XNEcShmStatus();
  M3LedX2XNEcShmCommand::default_instance_ = new M3LedX2XNEcShmCommand();
  M3LedX2XNEcShmParam::default_instance_ = new M3LedX2XNEcShmParam();
  M3LedX2XNEcShmStatus::default_instance_->InitAsDefaultInstance();
  M3LedX2XNEcShmCommand::default_instance_->InitAsDefaultInstance();
  M3LedX2XNEcShmParam::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ledx2xn_5fec_5fshm_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ledx2xn_5fec_5fshm_2eproto {
  StaticDescriptorInitializer_ledx2xn_5fec_5fshm_2eproto() {
    protobuf_AddDesc_ledx2xn_5fec_5fshm_2eproto();
  }
} static_descriptor_initializer_ledx2xn_5fec_5fshm_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int M3LedX2XNEcShmStatus::kBaseFieldNumber;
const int M3LedX2XNEcShmStatus::kTestFieldNumber;
#endif  // !_MSC_VER

M3LedX2XNEcShmStatus::M3LedX2XNEcShmStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void M3LedX2XNEcShmStatus::InitAsDefaultInstance() {
  base_ = const_cast< ::M3BaseStatus*>(&::M3BaseStatus::default_instance());
}

M3LedX2XNEcShmStatus::M3LedX2XNEcShmStatus(const M3LedX2XNEcShmStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void M3LedX2XNEcShmStatus::SharedCtor() {
  _cached_size_ = 0;
  base_ = NULL;
  test_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

M3LedX2XNEcShmStatus::~M3LedX2XNEcShmStatus() {
  SharedDtor();
}

void M3LedX2XNEcShmStatus::SharedDtor() {
  if (this != default_instance_) {
    delete base_;
  }
}

void M3LedX2XNEcShmStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* M3LedX2XNEcShmStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return M3LedX2XNEcShmStatus_descriptor_;
}

const M3LedX2XNEcShmStatus& M3LedX2XNEcShmStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ledx2xn_5fec_5fshm_2eproto();  return *default_instance_;
}

M3LedX2XNEcShmStatus* M3LedX2XNEcShmStatus::default_instance_ = NULL;

M3LedX2XNEcShmStatus* M3LedX2XNEcShmStatus::New() const {
  return new M3LedX2XNEcShmStatus;
}

void M3LedX2XNEcShmStatus::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_base()) {
      if (base_ != NULL) base_->::M3BaseStatus::Clear();
    }
    test_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool M3LedX2XNEcShmStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .M3BaseStatus base = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_base()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_test;
        break;
      }
      
      // optional double test = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_test:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &test_)));
          set_has_test();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void M3LedX2XNEcShmStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .M3BaseStatus base = 1;
  if (has_base()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->base(), output);
  }
  
  // optional double test = 2;
  if (has_test()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->test(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* M3LedX2XNEcShmStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .M3BaseStatus base = 1;
  if (has_base()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->base(), target);
  }
  
  // optional double test = 2;
  if (has_test()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->test(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int M3LedX2XNEcShmStatus::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .M3BaseStatus base = 1;
    if (has_base()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->base());
    }
    
    // optional double test = 2;
    if (has_test()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void M3LedX2XNEcShmStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const M3LedX2XNEcShmStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const M3LedX2XNEcShmStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void M3LedX2XNEcShmStatus::MergeFrom(const M3LedX2XNEcShmStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_base()) {
      mutable_base()->::M3BaseStatus::MergeFrom(from.base());
    }
    if (from.has_test()) {
      set_test(from.test());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void M3LedX2XNEcShmStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void M3LedX2XNEcShmStatus::CopyFrom(const M3LedX2XNEcShmStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool M3LedX2XNEcShmStatus::IsInitialized() const {
  
  return true;
}

void M3LedX2XNEcShmStatus::Swap(M3LedX2XNEcShmStatus* other) {
  if (other != this) {
    std::swap(base_, other->base_);
    std::swap(test_, other->test_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata M3LedX2XNEcShmStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = M3LedX2XNEcShmStatus_descriptor_;
  metadata.reflection = M3LedX2XNEcShmStatus_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int M3LedX2XNEcShmCommand::kTestFieldNumber;
#endif  // !_MSC_VER

M3LedX2XNEcShmCommand::M3LedX2XNEcShmCommand()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void M3LedX2XNEcShmCommand::InitAsDefaultInstance() {
}

M3LedX2XNEcShmCommand::M3LedX2XNEcShmCommand(const M3LedX2XNEcShmCommand& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void M3LedX2XNEcShmCommand::SharedCtor() {
  _cached_size_ = 0;
  test_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

M3LedX2XNEcShmCommand::~M3LedX2XNEcShmCommand() {
  SharedDtor();
}

void M3LedX2XNEcShmCommand::SharedDtor() {
  if (this != default_instance_) {
  }
}

void M3LedX2XNEcShmCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* M3LedX2XNEcShmCommand::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return M3LedX2XNEcShmCommand_descriptor_;
}

const M3LedX2XNEcShmCommand& M3LedX2XNEcShmCommand::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ledx2xn_5fec_5fshm_2eproto();  return *default_instance_;
}

M3LedX2XNEcShmCommand* M3LedX2XNEcShmCommand::default_instance_ = NULL;

M3LedX2XNEcShmCommand* M3LedX2XNEcShmCommand::New() const {
  return new M3LedX2XNEcShmCommand;
}

void M3LedX2XNEcShmCommand::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    test_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool M3LedX2XNEcShmCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double test = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &test_)));
          set_has_test();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void M3LedX2XNEcShmCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double test = 1;
  if (has_test()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->test(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* M3LedX2XNEcShmCommand::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double test = 1;
  if (has_test()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->test(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int M3LedX2XNEcShmCommand::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double test = 1;
    if (has_test()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void M3LedX2XNEcShmCommand::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const M3LedX2XNEcShmCommand* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const M3LedX2XNEcShmCommand*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void M3LedX2XNEcShmCommand::MergeFrom(const M3LedX2XNEcShmCommand& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_test()) {
      set_test(from.test());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void M3LedX2XNEcShmCommand::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void M3LedX2XNEcShmCommand::CopyFrom(const M3LedX2XNEcShmCommand& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool M3LedX2XNEcShmCommand::IsInitialized() const {
  
  return true;
}

void M3LedX2XNEcShmCommand::Swap(M3LedX2XNEcShmCommand* other) {
  if (other != this) {
    std::swap(test_, other->test_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata M3LedX2XNEcShmCommand::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = M3LedX2XNEcShmCommand_descriptor_;
  metadata.reflection = M3LedX2XNEcShmCommand_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int M3LedX2XNEcShmParam::kTestFieldNumber;
#endif  // !_MSC_VER

M3LedX2XNEcShmParam::M3LedX2XNEcShmParam()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void M3LedX2XNEcShmParam::InitAsDefaultInstance() {
}

M3LedX2XNEcShmParam::M3LedX2XNEcShmParam(const M3LedX2XNEcShmParam& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void M3LedX2XNEcShmParam::SharedCtor() {
  _cached_size_ = 0;
  test_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

M3LedX2XNEcShmParam::~M3LedX2XNEcShmParam() {
  SharedDtor();
}

void M3LedX2XNEcShmParam::SharedDtor() {
  if (this != default_instance_) {
  }
}

void M3LedX2XNEcShmParam::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* M3LedX2XNEcShmParam::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return M3LedX2XNEcShmParam_descriptor_;
}

const M3LedX2XNEcShmParam& M3LedX2XNEcShmParam::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ledx2xn_5fec_5fshm_2eproto();  return *default_instance_;
}

M3LedX2XNEcShmParam* M3LedX2XNEcShmParam::default_instance_ = NULL;

M3LedX2XNEcShmParam* M3LedX2XNEcShmParam::New() const {
  return new M3LedX2XNEcShmParam;
}

void M3LedX2XNEcShmParam::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    test_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool M3LedX2XNEcShmParam::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double test = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &test_)));
          set_has_test();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void M3LedX2XNEcShmParam::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double test = 1;
  if (has_test()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->test(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* M3LedX2XNEcShmParam::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double test = 1;
  if (has_test()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->test(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int M3LedX2XNEcShmParam::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double test = 1;
    if (has_test()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void M3LedX2XNEcShmParam::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const M3LedX2XNEcShmParam* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const M3LedX2XNEcShmParam*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void M3LedX2XNEcShmParam::MergeFrom(const M3LedX2XNEcShmParam& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_test()) {
      set_test(from.test());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void M3LedX2XNEcShmParam::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void M3LedX2XNEcShmParam::CopyFrom(const M3LedX2XNEcShmParam& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool M3LedX2XNEcShmParam::IsInitialized() const {
  
  return true;
}

void M3LedX2XNEcShmParam::Swap(M3LedX2XNEcShmParam* other) {
  if (other != this) {
    std::swap(test_, other->test_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata M3LedX2XNEcShmParam::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = M3LedX2XNEcShmParam_descriptor_;
  metadata.reflection = M3LedX2XNEcShmParam_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)