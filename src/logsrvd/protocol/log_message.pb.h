// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_message.proto

#ifndef PROTOBUF_log_5fmessage_2eproto__INCLUDED
#define PROTOBUF_log_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace logsrv {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_log_5fmessage_2eproto();
void protobuf_AssignDesc_log_5fmessage_2eproto();
void protobuf_ShutdownFile_log_5fmessage_2eproto();

class LogMessage;
class LogServerStop;

enum LogMessage_MessageType {
  LogMessage_MessageType_AU_TYPE = 1,
  LogMessage_MessageType_GW_TYPE = 2,
  LogMessage_MessageType_DB_TYPE = 3,
  LogMessage_MessageType_GS_TYPE = 4,
  LogMessage_MessageType_LINK_TYPE = 5,
  LogMessage_MessageType_MASTER_TYPE = 6,
  LogMessage_MessageType_MATCH_TYPE = 7
};
bool LogMessage_MessageType_IsValid(int value);
const LogMessage_MessageType LogMessage_MessageType_MessageType_MIN = LogMessage_MessageType_AU_TYPE;
const LogMessage_MessageType LogMessage_MessageType_MessageType_MAX = LogMessage_MessageType_MATCH_TYPE;
const int LogMessage_MessageType_MessageType_ARRAYSIZE = LogMessage_MessageType_MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* LogMessage_MessageType_descriptor();
inline const ::std::string& LogMessage_MessageType_Name(LogMessage_MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    LogMessage_MessageType_descriptor(), value);
}
inline bool LogMessage_MessageType_Parse(
    const ::std::string& name, LogMessage_MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LogMessage_MessageType>(
    LogMessage_MessageType_descriptor(), name, value);
}
enum LogMessage_LogLevel {
  LogMessage_LogLevel_TRACE = 1,
  LogMessage_LogLevel_DEBUG = 2,
  LogMessage_LogLevel_INFO = 3,
  LogMessage_LogLevel_WARN = 4,
  LogMessage_LogLevel_ERROR = 5,
  LogMessage_LogLevel_FATAL = 6
};
bool LogMessage_LogLevel_IsValid(int value);
const LogMessage_LogLevel LogMessage_LogLevel_LogLevel_MIN = LogMessage_LogLevel_TRACE;
const LogMessage_LogLevel LogMessage_LogLevel_LogLevel_MAX = LogMessage_LogLevel_FATAL;
const int LogMessage_LogLevel_LogLevel_ARRAYSIZE = LogMessage_LogLevel_LogLevel_MAX + 1;

const ::google::protobuf::EnumDescriptor* LogMessage_LogLevel_descriptor();
inline const ::std::string& LogMessage_LogLevel_Name(LogMessage_LogLevel value) {
  return ::google::protobuf::internal::NameOfEnum(
    LogMessage_LogLevel_descriptor(), value);
}
inline bool LogMessage_LogLevel_Parse(
    const ::std::string& name, LogMessage_LogLevel* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LogMessage_LogLevel>(
    LogMessage_LogLevel_descriptor(), name, value);
}
enum LogServerStop_StopReason {
  LogServerStop_StopReason_NORMAL_EXIT = 0
};
bool LogServerStop_StopReason_IsValid(int value);
const LogServerStop_StopReason LogServerStop_StopReason_StopReason_MIN = LogServerStop_StopReason_NORMAL_EXIT;
const LogServerStop_StopReason LogServerStop_StopReason_StopReason_MAX = LogServerStop_StopReason_NORMAL_EXIT;
const int LogServerStop_StopReason_StopReason_ARRAYSIZE = LogServerStop_StopReason_StopReason_MAX + 1;

const ::google::protobuf::EnumDescriptor* LogServerStop_StopReason_descriptor();
inline const ::std::string& LogServerStop_StopReason_Name(LogServerStop_StopReason value) {
  return ::google::protobuf::internal::NameOfEnum(
    LogServerStop_StopReason_descriptor(), value);
}
inline bool LogServerStop_StopReason_Parse(
    const ::std::string& name, LogServerStop_StopReason* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LogServerStop_StopReason>(
    LogServerStop_StopReason_descriptor(), name, value);
}
// ===================================================================

class LogMessage : public ::google::protobuf::Message {
 public:
  LogMessage();
  virtual ~LogMessage();
  
  LogMessage(const LogMessage& from);
  
  inline LogMessage& operator=(const LogMessage& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const LogMessage& default_instance();
  
  void Swap(LogMessage* other);
  
  // implements Message ----------------------------------------------
  
  LogMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogMessage& from);
  void MergeFrom(const LogMessage& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef LogMessage_MessageType MessageType;
  static const MessageType AU_TYPE = LogMessage_MessageType_AU_TYPE;
  static const MessageType GW_TYPE = LogMessage_MessageType_GW_TYPE;
  static const MessageType DB_TYPE = LogMessage_MessageType_DB_TYPE;
  static const MessageType GS_TYPE = LogMessage_MessageType_GS_TYPE;
  static const MessageType LINK_TYPE = LogMessage_MessageType_LINK_TYPE;
  static const MessageType MASTER_TYPE = LogMessage_MessageType_MASTER_TYPE;
  static const MessageType MATCH_TYPE = LogMessage_MessageType_MATCH_TYPE;
  static inline bool MessageType_IsValid(int value) {
    return LogMessage_MessageType_IsValid(value);
  }
  static const MessageType MessageType_MIN =
    LogMessage_MessageType_MessageType_MIN;
  static const MessageType MessageType_MAX =
    LogMessage_MessageType_MessageType_MAX;
  static const int MessageType_ARRAYSIZE =
    LogMessage_MessageType_MessageType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MessageType_descriptor() {
    return LogMessage_MessageType_descriptor();
  }
  static inline const ::std::string& MessageType_Name(MessageType value) {
    return LogMessage_MessageType_Name(value);
  }
  static inline bool MessageType_Parse(const ::std::string& name,
      MessageType* value) {
    return LogMessage_MessageType_Parse(name, value);
  }
  
  typedef LogMessage_LogLevel LogLevel;
  static const LogLevel TRACE = LogMessage_LogLevel_TRACE;
  static const LogLevel DEBUG = LogMessage_LogLevel_DEBUG;
  static const LogLevel INFO = LogMessage_LogLevel_INFO;
  static const LogLevel WARN = LogMessage_LogLevel_WARN;
  static const LogLevel ERROR = LogMessage_LogLevel_ERROR;
  static const LogLevel FATAL = LogMessage_LogLevel_FATAL;
  static inline bool LogLevel_IsValid(int value) {
    return LogMessage_LogLevel_IsValid(value);
  }
  static const LogLevel LogLevel_MIN =
    LogMessage_LogLevel_LogLevel_MIN;
  static const LogLevel LogLevel_MAX =
    LogMessage_LogLevel_LogLevel_MAX;
  static const int LogLevel_ARRAYSIZE =
    LogMessage_LogLevel_LogLevel_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LogLevel_descriptor() {
    return LogMessage_LogLevel_descriptor();
  }
  static inline const ::std::string& LogLevel_Name(LogLevel value) {
    return LogMessage_LogLevel_Name(value);
  }
  static inline bool LogLevel_Parse(const ::std::string& name,
      LogLevel* value) {
    return LogMessage_LogLevel_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .logsrv.LogMessage.MessageType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::logsrv::LogMessage_MessageType type() const;
  inline void set_type(::logsrv::LogMessage_MessageType value);
  
  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // required .logsrv.LogMessage.LogLevel level = 3;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 3;
  inline ::logsrv::LogMessage_LogLevel level() const;
  inline void set_level(::logsrv::LogMessage_LogLevel value);
  
  // required bytes msg = 4;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 4;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const void* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  
  // @@protoc_insertion_point(class_scope:logsrv.LogMessage)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_msg();
  inline void clear_has_msg();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int type_;
  ::google::protobuf::int32 id_;
  ::std::string* msg_;
  int level_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_log_5fmessage_2eproto();
  friend void protobuf_AssignDesc_log_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_log_5fmessage_2eproto();
  
  void InitAsDefaultInstance();
  static LogMessage* default_instance_;
};
// -------------------------------------------------------------------

class LogServerStop : public ::google::protobuf::Message {
 public:
  LogServerStop();
  virtual ~LogServerStop();
  
  LogServerStop(const LogServerStop& from);
  
  inline LogServerStop& operator=(const LogServerStop& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const LogServerStop& default_instance();
  
  void Swap(LogServerStop* other);
  
  // implements Message ----------------------------------------------
  
  LogServerStop* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogServerStop& from);
  void MergeFrom(const LogServerStop& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef LogServerStop_StopReason StopReason;
  static const StopReason NORMAL_EXIT = LogServerStop_StopReason_NORMAL_EXIT;
  static inline bool StopReason_IsValid(int value) {
    return LogServerStop_StopReason_IsValid(value);
  }
  static const StopReason StopReason_MIN =
    LogServerStop_StopReason_StopReason_MIN;
  static const StopReason StopReason_MAX =
    LogServerStop_StopReason_StopReason_MAX;
  static const int StopReason_ARRAYSIZE =
    LogServerStop_StopReason_StopReason_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  StopReason_descriptor() {
    return LogServerStop_StopReason_descriptor();
  }
  static inline const ::std::string& StopReason_Name(StopReason value) {
    return LogServerStop_StopReason_Name(value);
  }
  static inline bool StopReason_Parse(const ::std::string& name,
      StopReason* value) {
    return LogServerStop_StopReason_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .logsrv.LogServerStop.StopReason reason = 1;
  inline bool has_reason() const;
  inline void clear_reason();
  static const int kReasonFieldNumber = 1;
  inline ::logsrv::LogServerStop_StopReason reason() const;
  inline void set_reason(::logsrv::LogServerStop_StopReason value);
  
  // @@protoc_insertion_point(class_scope:logsrv.LogServerStop)
 private:
  inline void set_has_reason();
  inline void clear_has_reason();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int reason_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_log_5fmessage_2eproto();
  friend void protobuf_AssignDesc_log_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_log_5fmessage_2eproto();
  
  void InitAsDefaultInstance();
  static LogServerStop* default_instance_;
};
// ===================================================================


// ===================================================================

// LogMessage

// required .logsrv.LogMessage.MessageType type = 1;
inline bool LogMessage::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogMessage::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogMessage::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogMessage::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::logsrv::LogMessage_MessageType LogMessage::type() const {
  return static_cast< ::logsrv::LogMessage_MessageType >(type_);
}
inline void LogMessage::set_type(::logsrv::LogMessage_MessageType value) {
  GOOGLE_DCHECK(::logsrv::LogMessage_MessageType_IsValid(value));
  set_has_type();
  type_ = value;
}

// required int32 id = 2;
inline bool LogMessage::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogMessage::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogMessage::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogMessage::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 LogMessage::id() const {
  return id_;
}
inline void LogMessage::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required .logsrv.LogMessage.LogLevel level = 3;
inline bool LogMessage::has_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogMessage::set_has_level() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LogMessage::clear_has_level() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LogMessage::clear_level() {
  level_ = 1;
  clear_has_level();
}
inline ::logsrv::LogMessage_LogLevel LogMessage::level() const {
  return static_cast< ::logsrv::LogMessage_LogLevel >(level_);
}
inline void LogMessage::set_level(::logsrv::LogMessage_LogLevel value) {
  GOOGLE_DCHECK(::logsrv::LogMessage_LogLevel_IsValid(value));
  set_has_level();
  level_ = value;
}

// required bytes msg = 4;
inline bool LogMessage::has_msg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogMessage::set_has_msg() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LogMessage::clear_has_msg() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LogMessage::clear_msg() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::std::string& LogMessage::msg() const {
  return *msg_;
}
inline void LogMessage::set_msg(const ::std::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void LogMessage::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void LogMessage::set_msg(const void* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LogMessage::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  return msg_;
}
inline ::std::string* LogMessage::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_;
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// LogServerStop

// required .logsrv.LogServerStop.StopReason reason = 1;
inline bool LogServerStop::has_reason() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogServerStop::set_has_reason() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogServerStop::clear_has_reason() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogServerStop::clear_reason() {
  reason_ = 0;
  clear_has_reason();
}
inline ::logsrv::LogServerStop_StopReason LogServerStop::reason() const {
  return static_cast< ::logsrv::LogServerStop_StopReason >(reason_);
}
inline void LogServerStop::set_reason(::logsrv::LogServerStop_StopReason value) {
  GOOGLE_DCHECK(::logsrv::LogServerStop_StopReason_IsValid(value));
  set_has_reason();
  reason_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace logsrv

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::logsrv::LogMessage_MessageType>() {
  return ::logsrv::LogMessage_MessageType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::logsrv::LogMessage_LogLevel>() {
  return ::logsrv::LogMessage_LogLevel_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::logsrv::LogServerStop_StopReason>() {
  return ::logsrv::LogServerStop_StopReason_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_log_5fmessage_2eproto__INCLUDED