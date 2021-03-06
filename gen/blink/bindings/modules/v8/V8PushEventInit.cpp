// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PushEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8ExtendableEventInit.h"
#include "bindings/modules/v8/V8PushMessageData.h"

namespace blink {

void V8PushEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PushEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8ExtendableEventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> dataValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "data")).ToLocal(&dataValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
            // Do nothing.
        } else {
            PushMessageData* data = V8PushMessageData::toImplWithTypeCheck(isolate, dataValue);
            if (!data && !dataValue->IsNull()) {
                exceptionState.throwTypeError("member data is not of type PushMessageData.");
                return;
            }
            impl.setData(data);
        }
    }

}

v8::Local<v8::Value> toV8(const PushEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8ExtendableEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8PushEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8PushEventInit(const PushEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), toV8(impl.data(), creationContext, isolate))))
            return false;
    }

    return true;
}

PushEventInit NativeValueTraits<PushEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    PushEventInit impl;
    V8PushEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
