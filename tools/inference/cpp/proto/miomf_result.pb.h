// Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: miomf_result.proto

#ifndef PROTOBUF_miomf_5fresult_2eproto__INCLUDED
#define PROTOBUF_miomf_5fresult_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace PaddleRec {
namespace infer {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_miomf_5fresult_2eproto();
void protobuf_InitDefaults_miomf_5fresult_2eproto();
void protobuf_AssignDesc_miomf_5fresult_2eproto();
void protobuf_ShutdownFile_miomf_5fresult_2eproto();

class MioMFResult;

// ===================================================================

class MioMFResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PaddleRec.infer.MioMFResult) */ {
 public:
  MioMFResult();
  virtual ~MioMFResult();

  MioMFResult(const MioMFResult& from);

  inline MioMFResult& operator=(const MioMFResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MioMFResult& default_instance();

  static const MioMFResult* internal_default_instance();

  void Swap(MioMFResult* other);

  // implements Message ----------------------------------------------

  inline MioMFResult* New() const { return New(NULL); }

  MioMFResult* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MioMFResult& from);
  void MergeFrom(const MioMFResult& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MioMFResult* other);
  void UnsafeMergeFrom(const MioMFResult& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional sint64 show = 2;
  bool has_show() const;
  void clear_show();
  static const int kShowFieldNumber = 2;
  ::google::protobuf::int64 show() const;
  void set_show(::google::protobuf::int64 value);

  // optional sint64 click = 3;
  bool has_click() const;
  void clear_click();
  static const int kClickFieldNumber = 3;
  ::google::protobuf::int64 click() const;
  void set_click(::google::protobuf::int64 value);

  // optional sint32 pred = 4;
  bool has_pred() const;
  void clear_pred();
  static const int kPredFieldNumber = 4;
  ::google::protobuf::int32 pred() const;
  void set_pred(::google::protobuf::int32 value);

  // optional sint32 weight_lr_person = 5;
  bool has_weight_lr_person() const;
  void clear_weight_lr_person();
  static const int kWeightLrPersonFieldNumber = 5;
  ::google::protobuf::int32 weight_lr_person() const;
  void set_weight_lr_person(::google::protobuf::int32 value);

  // repeated sint32 weight_mf = 7 [packed = true];
  int weight_mf_size() const;
  void clear_weight_mf();
  static const int kWeightMfFieldNumber = 7;
  ::google::protobuf::int32 weight_mf(int index) const;
  void set_weight_mf(int index, ::google::protobuf::int32 value);
  void add_weight_mf(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      weight_mf() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_weight_mf();

  // @@protoc_insertion_point(class_scope:PaddleRec.infer.MioMFResult)
 private:
  inline void set_has_show();
  inline void clear_has_show();
  inline void set_has_click();
  inline void clear_has_click();
  inline void set_has_pred();
  inline void clear_has_pred();
  inline void set_has_weight_lr_person();
  inline void clear_has_weight_lr_person();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > weight_mf_;
  mutable int _weight_mf_cached_byte_size_;
  ::google::protobuf::int64 show_;
  ::google::protobuf::int64 click_;
  ::google::protobuf::int32 pred_;
  ::google::protobuf::int32 weight_lr_person_;
  friend void  protobuf_InitDefaults_miomf_5fresult_2eproto_impl();
  friend void  protobuf_AddDesc_miomf_5fresult_2eproto_impl();
  friend void protobuf_AssignDesc_miomf_5fresult_2eproto();
  friend void protobuf_ShutdownFile_miomf_5fresult_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MioMFResult> MioMFResult_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MioMFResult

// optional sint64 show = 2;
inline bool MioMFResult::has_show() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MioMFResult::set_has_show() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MioMFResult::clear_has_show() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MioMFResult::clear_show() {
  show_ = GOOGLE_LONGLONG(0);
  clear_has_show();
}
inline ::google::protobuf::int64 MioMFResult::show() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.show)
  return show_;
}
inline void MioMFResult::set_show(::google::protobuf::int64 value) {
  set_has_show();
  show_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.show)
}

// optional sint64 click = 3;
inline bool MioMFResult::has_click() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MioMFResult::set_has_click() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MioMFResult::clear_has_click() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MioMFResult::clear_click() {
  click_ = GOOGLE_LONGLONG(0);
  clear_has_click();
}
inline ::google::protobuf::int64 MioMFResult::click() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.click)
  return click_;
}
inline void MioMFResult::set_click(::google::protobuf::int64 value) {
  set_has_click();
  click_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.click)
}

// optional sint32 pred = 4;
inline bool MioMFResult::has_pred() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MioMFResult::set_has_pred() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MioMFResult::clear_has_pred() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MioMFResult::clear_pred() {
  pred_ = 0;
  clear_has_pred();
}
inline ::google::protobuf::int32 MioMFResult::pred() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.pred)
  return pred_;
}
inline void MioMFResult::set_pred(::google::protobuf::int32 value) {
  set_has_pred();
  pred_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.pred)
}

// optional sint32 weight_lr_person = 5;
inline bool MioMFResult::has_weight_lr_person() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MioMFResult::set_has_weight_lr_person() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MioMFResult::clear_has_weight_lr_person() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MioMFResult::clear_weight_lr_person() {
  weight_lr_person_ = 0;
  clear_has_weight_lr_person();
}
inline ::google::protobuf::int32 MioMFResult::weight_lr_person() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.weight_lr_person)
  return weight_lr_person_;
}
inline void MioMFResult::set_weight_lr_person(::google::protobuf::int32 value) {
  set_has_weight_lr_person();
  weight_lr_person_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.weight_lr_person)
}

// repeated sint32 weight_mf = 7 [packed = true];
inline int MioMFResult::weight_mf_size() const {
  return weight_mf_.size();
}
inline void MioMFResult::clear_weight_mf() {
  weight_mf_.Clear();
}
inline ::google::protobuf::int32 MioMFResult::weight_mf(int index) const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.weight_mf)
  return weight_mf_.Get(index);
}
inline void MioMFResult::set_weight_mf(int index, ::google::protobuf::int32 value) {
  weight_mf_.Set(index, value);
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.weight_mf)
}
inline void MioMFResult::add_weight_mf(::google::protobuf::int32 value) {
  weight_mf_.Add(value);
  // @@protoc_insertion_point(field_add:PaddleRec.infer.MioMFResult.weight_mf)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
MioMFResult::weight_mf() const {
  // @@protoc_insertion_point(field_list:PaddleRec.infer.MioMFResult.weight_mf)
  return weight_mf_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
MioMFResult::mutable_weight_mf() {
  // @@protoc_insertion_point(field_mutable_list:PaddleRec.infer.MioMFResult.weight_mf)
  return &weight_mf_;
}

inline const MioMFResult* MioMFResult::internal_default_instance() {
  return &MioMFResult_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace infer
}  // namespace PaddleRec

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_miomf_5fresult_2eproto__INCLUDED
