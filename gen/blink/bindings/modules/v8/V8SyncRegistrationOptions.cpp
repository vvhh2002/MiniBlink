// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SyncRegistrationOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8SyncRegistrationOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, SyncRegistrationOptions& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> tagValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "tag")).ToLocal(&tagValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (tagValue.IsEmpty() || tagValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> tag = tagValue;
            if (!tag.prepare(exceptionState))
                return;
            impl.setTag(tag);
        }
    }

}

v8::Local<v8::Value> toV8(const SyncRegistrationOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8SyncRegistrationOptions(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8SyncRegistrationOptions(const SyncRegistrationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasTag()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "tag"), v8String(isolate, impl.tag()))))
            return false;
    }

    return true;
}

SyncRegistrationOptions NativeValueTraits<SyncRegistrationOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    SyncRegistrationOptions impl;
    V8SyncRegistrationOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
