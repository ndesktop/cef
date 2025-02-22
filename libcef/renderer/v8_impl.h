// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_LIBCEF_RENDERER_V8_IMPL_H_
#define CEF_LIBCEF_RENDERER_V8_IMPL_H_
#pragma once

#include <vector>

#include "include/cef_v8.h"
#include "libcef/common/tracker.h"

#include "base/location.h"
#include "base/logging.h"
#include "base/memory/ref_counted.h"
#include "base/task/single_thread_task_runner.h"
#include "v8/include/v8.h"

class CefTrackNode;
class GURL;

namespace blink {
class WebLocalFrame;
}

// Call after a V8 Isolate has been created and entered for the first time.
void CefV8IsolateCreated();

// Call before a V8 Isolate is exited and destroyed.
void CefV8IsolateDestroyed();

// Call to detach all handles associated with the specified context.
void CefV8ReleaseContext(v8::Local<v8::Context> context);

// Set the stack size for uncaught exceptions.
void CefV8SetUncaughtExceptionStackSize(int stack_size);

// Set attributes associated with a WebWorker thread.
void CefV8SetWorkerAttributes(int worker_id, const GURL& worker_url);

// Used to detach handles when the associated context is released.
class CefV8ContextState : public base::RefCounted<CefV8ContextState> {
 public:
  CefV8ContextState() : valid_(true) {}

  bool IsValid() { return valid_; }
  void Detach() {
    DCHECK(valid_);
    valid_ = false;
    track_manager_.DeleteAll();
  }

  void AddTrackObject(CefTrackNode* object) {
    DCHECK(valid_);
    track_manager_.Add(object);
  }

  void DeleteTrackObject(CefTrackNode* object) {
    DCHECK(valid_);
    track_manager_.Delete(object);
  }

 private:
  friend class base::RefCounted<CefV8ContextState>;

  ~CefV8ContextState() {}

  bool valid_;
  CefTrackManager track_manager_;
};

// Use this template in conjuction with RefCountedThreadSafe to ensure that a
// V8 object is deleted on the correct thread.
struct CefV8DeleteOnMessageLoopThread {
  template <typename T>
  static void Destruct(const T* x) {
    if (x->task_runner()->RunsTasksInCurrentSequence()) {
      delete x;
    } else {
      if (!x->task_runner()->DeleteSoon(FROM_HERE, x)) {
#if defined(UNIT_TEST)
        // Only logged under unit testing because leaks at shutdown
        // are acceptable under normal circumstances.
        LOG(ERROR) << "DeleteSoon failed on thread " << thread;
#endif  // UNIT_TEST
      }
    }
  }
};

// Base class for V8 Handle types.
class CefV8HandleBase
    : public base::RefCountedThreadSafe<CefV8HandleBase,
                                        CefV8DeleteOnMessageLoopThread> {
 public:
  // Returns true if there is no underlying context or if the underlying context
  // is valid.
  bool IsValid() const {
    return (!context_state_.get() || context_state_->IsValid());
  }

  bool BelongsToCurrentThread() const;

  v8::Isolate* isolate() const { return isolate_; }
  scoped_refptr<base::SingleThreadTaskRunner> task_runner() const {
    return task_runner_;
  }

 protected:
  friend class base::DeleteHelper<CefV8HandleBase>;
  friend class base::RefCountedThreadSafe<CefV8HandleBase,
                                          CefV8DeleteOnMessageLoopThread>;
  friend struct CefV8DeleteOnMessageLoopThread;

  // |context| is the context that owns this handle. If empty the current
  // context will be used.
  CefV8HandleBase(v8::Isolate* isolate, v8::Local<v8::Context> context);
  virtual ~CefV8HandleBase();

 protected:
  v8::Isolate* isolate_;
  scoped_refptr<base::SingleThreadTaskRunner> task_runner_;
  scoped_refptr<CefV8ContextState> context_state_;
};

// Template for V8 Handle types. This class is used to ensure that V8 objects
// are only released on the render thread.
template <typename v8class>
class CefV8Handle : public CefV8HandleBase {
 public:
  using handleType = v8::Local<v8class>;
  using persistentType = v8::Persistent<v8class>;

  CefV8Handle(v8::Isolate* isolate,
              v8::Local<v8::Context> context,
              handleType v)
      : CefV8HandleBase(isolate, context), handle_(isolate, v) {}

  CefV8Handle(const CefV8Handle&) = delete;
  CefV8Handle& operator=(const CefV8Handle&) = delete;

  handleType GetNewV8Handle() {
    DCHECK(IsValid());
    return handleType::New(isolate(), handle_);
  }

  persistentType& GetPersistentV8Handle() { return handle_; }

 protected:
  ~CefV8Handle() override { handle_.Reset(); }

  persistentType handle_;
};

// Specialization for v8::Value with empty implementation to avoid incorrect
// usage.
template <>
class CefV8Handle<v8::Value> {};

class CefV8ContextImpl : public CefV8Context {
 public:
  CefV8ContextImpl(v8::Isolate* isolate, v8::Local<v8::Context> context);

  CefV8ContextImpl(const CefV8ContextImpl&) = delete;
  CefV8ContextImpl& operator=(const CefV8ContextImpl&) = delete;

  ~CefV8ContextImpl() override;

  CefRefPtr<CefTaskRunner> GetTaskRunner() override;
  bool IsValid() override;
  CefRefPtr<CefBrowser> GetBrowser() override;
  CefRefPtr<CefFrame> GetFrame() override;
  CefRefPtr<CefV8Value> GetGlobal() override;
  bool Enter() override;
  bool Exit() override;
  bool IsSame(CefRefPtr<CefV8Context> that) override;
  bool Eval(const CefString& code,
            const CefString& script_url,
            int start_line,
            CefRefPtr<CefV8Value>& retval,
            CefRefPtr<CefV8Exception>& exception) override;

  v8::Local<v8::Context> GetV8Context();
  blink::WebLocalFrame* GetWebFrame();

 private:
  using Handle = CefV8Handle<v8::Context>;
  scoped_refptr<Handle> handle_;
  v8::MicrotaskQueue* const microtask_queue_;

  int enter_count_ = 0;
  std::unique_ptr<v8::MicrotasksScope> microtasks_scope_;

  IMPLEMENT_REFCOUNTING(CefV8ContextImpl);
};

class CefV8ValueImpl : public CefV8Value {
 public:
  explicit CefV8ValueImpl(v8::Isolate* isolate);
  CefV8ValueImpl(v8::Isolate* isolate,
                 v8::Local<v8::Context> context,
                 v8::Local<v8::Value> value);

  CefV8ValueImpl(const CefV8ValueImpl&) = delete;
  CefV8ValueImpl& operator=(const CefV8ValueImpl&) = delete;

  ~CefV8ValueImpl() override;

  // Used for initializing the CefV8ValueImpl. Should be called a single time
  // after the CefV8ValueImpl is created.
  void InitFromV8Value(v8::Local<v8::Context> context,
                       v8::Local<v8::Value> value);
  void InitUndefined();
  void InitNull();
  void InitBool(bool value);
  void InitInt(int32_t value);
  void InitUInt(uint32_t value);
  void InitDouble(double value);
  void InitDate(CefBaseTime value);
  void InitString(CefString& value);
  void InitObject(v8::Local<v8::Value> value, CefTrackNode* tracker);

  // Creates a new V8 value for the underlying value or returns the existing
  // object handle.
  v8::Local<v8::Value> GetV8Value(bool should_persist);

  bool IsValid() override;
  bool IsUndefined() override;
  bool IsNull() override;
  bool IsBool() override;
  bool IsInt() override;
  bool IsUInt() override;
  bool IsDouble() override;
  bool IsDate() override;
  bool IsString() override;
  bool IsObject() override;
  bool IsArray() override;
  bool IsArrayBuffer() override;
  bool IsFunction() override;
  bool IsPromise() override;
  bool IsSame(CefRefPtr<CefV8Value> value) override;
  bool GetBoolValue() override;
  int32_t GetIntValue() override;
  uint32_t GetUIntValue() override;
  double GetDoubleValue() override;
  CefBaseTime GetDateValue() override;
  CefString GetStringValue() override;
  bool IsUserCreated() override;
  bool HasException() override;
  CefRefPtr<CefV8Exception> GetException() override;
  bool ClearException() override;
  bool WillRethrowExceptions() override;
  bool SetRethrowExceptions(bool rethrow) override;
  bool HasValue(const CefString& key) override;
  bool HasValue(int index) override;
  bool DeleteValue(const CefString& key) override;
  bool DeleteValue(int index) override;
  CefRefPtr<CefV8Value> GetValue(const CefString& key) override;
  CefRefPtr<CefV8Value> GetValue(int index) override;
  bool SetValue(const CefString& key,
                CefRefPtr<CefV8Value> value,
                PropertyAttribute attribute) override;
  bool SetValue(int index, CefRefPtr<CefV8Value> value) override;
  bool SetValue(const CefString& key,
                AccessControl settings,
                PropertyAttribute attribute) override;
  bool GetKeys(std::vector<CefString>& keys) override;
  bool SetUserData(CefRefPtr<CefBaseRefCounted> user_data) override;
  CefRefPtr<CefBaseRefCounted> GetUserData() override;
  int GetExternallyAllocatedMemory() override;
  int AdjustExternallyAllocatedMemory(int change_in_bytes) override;
  int GetArrayLength() override;
  CefRefPtr<CefV8ArrayBufferReleaseCallback> GetArrayBufferReleaseCallback()
      override;
  bool NeuterArrayBuffer() override;
  CefString GetFunctionName() override;
  CefRefPtr<CefV8Handler> GetFunctionHandler() override;
  CefRefPtr<CefV8Value> ExecuteFunction(
      CefRefPtr<CefV8Value> object,
      const CefV8ValueList& arguments) override;
  CefRefPtr<CefV8Value> ExecuteFunctionWithContext(
      CefRefPtr<CefV8Context> context,
      CefRefPtr<CefV8Value> object,
      const CefV8ValueList& arguments) override;

  bool ResolvePromise(CefRefPtr<CefV8Value> arg) override;
  bool RejectPromise(const CefString& errorMsg) override;

 private:
  // Test for and record any exception.
  bool HasCaught(v8::Local<v8::Context> context, v8::TryCatch& try_catch);

  class Handle : public CefV8HandleBase {
   public:
    using handleType = v8::Local<v8::Value>;
    using persistentType = v8::Persistent<v8::Value>;

    Handle(v8::Isolate* isolate,
           v8::Local<v8::Context> context,
           handleType v,
           CefTrackNode* tracker);

    Handle(const Handle&) = delete;
    Handle& operator=(const Handle&) = delete;

    handleType GetNewV8Handle(bool should_persist);

    persistentType& GetPersistentV8Handle();

    void SetWeakIfNecessary();

   private:
    ~Handle() override;

   private:
    // Callbacks for weak persistent reference destruction.
    static void FirstWeakCallback(const v8::WeakCallbackInfo<Handle>& data);
    static void SecondWeakCallback(const v8::WeakCallbackInfo<Handle>& data);

    persistentType handle_;

    // For Object and Function types, we need to hold on to a reference to their
    // internal data or function handler objects that are reference counted.
    CefTrackNode* tracker_;

    // True if the handle needs to persist due to it being passed into V8.
    bool should_persist_;

    // True if the handle has been set as weak.
    bool is_set_weak_;
  };

  v8::Isolate* isolate_;

  enum {
    TYPE_INVALID = 0,
    TYPE_UNDEFINED,
    TYPE_NULL,
    TYPE_BOOL,
    TYPE_INT,
    TYPE_UINT,
    TYPE_DOUBLE,
    TYPE_DATE,
    TYPE_STRING,
    TYPE_OBJECT,
  } type_;

  union {
    bool bool_value_;
    int32_t int_value_;
    uint32_t uint_value_;
    double double_value_;
    cef_basetime_t date_value_;
    cef_string_t string_value_;
  };

  // Used with Object, Function and Array types.
  scoped_refptr<Handle> handle_;

  CefRefPtr<CefV8Exception> last_exception_;
  bool rethrow_exceptions_;

  IMPLEMENT_REFCOUNTING(CefV8ValueImpl);
};

class CefV8StackTraceImpl : public CefV8StackTrace {
 public:
  CefV8StackTraceImpl(v8::Isolate* isolate, v8::Local<v8::StackTrace> handle);

  CefV8StackTraceImpl(const CefV8StackTraceImpl&) = delete;
  CefV8StackTraceImpl& operator=(const CefV8StackTraceImpl&) = delete;

  ~CefV8StackTraceImpl() override;

  bool IsValid() override;
  int GetFrameCount() override;
  CefRefPtr<CefV8StackFrame> GetFrame(int index) override;

 private:
  std::vector<CefRefPtr<CefV8StackFrame>> frames_;

  IMPLEMENT_REFCOUNTING(CefV8StackTraceImpl);
};

class CefV8StackFrameImpl : public CefV8StackFrame {
 public:
  CefV8StackFrameImpl(v8::Isolate* isolate, v8::Local<v8::StackFrame> handle);

  CefV8StackFrameImpl(const CefV8StackFrameImpl&) = delete;
  CefV8StackFrameImpl& operator=(const CefV8StackFrameImpl&) = delete;

  ~CefV8StackFrameImpl() override;

  bool IsValid() override;
  CefString GetScriptName() override;
  CefString GetScriptNameOrSourceURL() override;
  CefString GetFunctionName() override;
  int GetLineNumber() override;
  int GetColumn() override;
  bool IsEval() override;
  bool IsConstructor() override;

 private:
  CefString script_name_;
  CefString script_name_or_source_url_;
  CefString function_name_;
  int line_number_;
  int column_;
  bool is_eval_;
  bool is_constructor_;

  IMPLEMENT_REFCOUNTING(CefV8StackFrameImpl);
};

#endif  // CEF_LIBCEF_RENDERER_V8_IMPL_H_
