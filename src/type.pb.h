// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: type.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_type_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_type_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
// #error "This file was generated by a newer version of protoc which is"
// #error "incompatible with your Protocol Buffer headers. Please update"
// #error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_type_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_type_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_type_2eproto;
namespace google {
namespace protobuf {
class Person;
struct PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace protobuf {

// ===================================================================


// -------------------------------------------------------------------

class Person final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Person) */ {
 public:
  inline Person() : Person(nullptr) {}
  ~Person() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Person(::google::protobuf::internal::ConstantInitialized);

  inline Person(const Person& from)
      : Person(nullptr, from) {}
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  inline Person& operator=(Person&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Person& default_instance() {
    return *internal_default_instance();
  }
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }
  inline void Swap(Person* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Person* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Person* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Person>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Person& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Person& from) {
    Person::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Person* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "google.protobuf.Person";
  }
  protected:
  explicit Person(::google::protobuf::Arena* arena);
  Person(::google::protobuf::Arena* arena, const Person& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kEmailFieldNumber = 3,
    kIdFieldNumber = 2,
  };
  // optional string name = 1;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // optional string email = 3;
  bool has_email() const;
  void clear_email() ;
  const std::string& email() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_email(Arg_&& arg, Args_... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* value);

  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(
      const std::string& value);
  std::string* _internal_mutable_email();

  public:
  // optional int32 id = 2;
  bool has_id() const;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:google.protobuf.Person)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      40, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr email_;
    ::int32_t id_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_type_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Person

// optional string name = 1;
inline bool Person::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Person::clear_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Person::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:google.protobuf.Person.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Person::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:google.protobuf.Person.name)
}
inline std::string* Person::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.Person.name)
  return _s;
}
inline const std::string& Person::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void Person::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Person::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Person::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:google.protobuf.Person.name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Person::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Person.name)
}

// optional int32 id = 2;
inline bool Person::has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Person::clear_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t Person::id() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Person.id)
  return _internal_id();
}
inline void Person::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Person.id)
}
inline ::int32_t Person::_internal_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.id_;
}
inline void Person::_internal_set_id(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.id_ = value;
}

// optional string email = 3;
inline bool Person::has_email() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Person::clear_email() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.email_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Person::email() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:google.protobuf.Person.email)
  return _internal_email();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Person::set_email(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.email_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:google.protobuf.Person.email)
}
inline std::string* Person::mutable_email() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:google.protobuf.Person.email)
  return _s;
}
inline const std::string& Person::_internal_email() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.email_.Get();
}
inline void Person::_internal_set_email(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.email_.Set(value, GetArena());
}
inline std::string* Person::_internal_mutable_email() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.email_.Mutable( GetArena());
}
inline std::string* Person::release_email() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:google.protobuf.Person.email)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.email_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.email_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Person::set_allocated_email(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.email_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.email_.IsDefault()) {
          _impl_.email_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Person.email)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_type_2eproto_2epb_2eh