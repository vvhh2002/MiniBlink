// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8HTMLMarqueeElement_h
#define V8HTMLMarqueeElement_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/V8HTMLElement.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/html/HTMLMarqueeElement.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8HTMLMarqueeElement {
public:
    class PrivateScript {
    public:
        static bool startMethod(LocalFrame* frame, HTMLMarqueeElement* holderImpl);
        static bool stopMethod(LocalFrame* frame, HTMLMarqueeElement* holderImpl);
        static bool createdCallbackMethod(LocalFrame* frame, HTMLMarqueeElement* holderImpl);
        static bool attachedCallbackMethod(LocalFrame* frame, HTMLMarqueeElement* holderImpl);
        static bool detachedCallbackMethod(LocalFrame* frame, HTMLMarqueeElement* holderImpl);
        static bool attributeChangedCallbackMethod(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String name, String oldValue, String newValue);
        static bool behaviorAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String* result);
        static bool behaviorAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String cppValue);
        static bool bgColorAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String* result);
        static bool bgColorAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String cppValue);
        static bool directionAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String* result);
        static bool directionAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String cppValue);
        static bool heightAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String* result);
        static bool heightAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String cppValue);
        static bool hspaceAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, unsigned* result);
        static bool hspaceAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, unsigned cppValue);
        static bool loopAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, int* result);
        static bool loopAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, int cppValue);
        static bool scrollAmountAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, int* result);
        static bool scrollAmountAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, int cppValue);
        static bool scrollDelayAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, int* result);
        static bool scrollDelayAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, int cppValue);
        static bool trueSpeedAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, bool* result);
        static bool trueSpeedAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, bool cppValue);
        static bool vspaceAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, unsigned* result);
        static bool vspaceAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, unsigned cppValue);
        static bool widthAttributeGetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String* result);
        static bool widthAttributeSetter(LocalFrame* frame, HTMLMarqueeElement* holderImpl, String cppValue);
    };

    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static HTMLMarqueeElement* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<HTMLMarqueeElement>();
    }
    CORE_EXPORT static HTMLMarqueeElement* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappable*);
    static void derefObject(ScriptWrappable*);
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
#if ENABLE(OILPAN)
        visitor->trace(scriptWrappable->toImpl<HTMLMarqueeElement>());
#endif
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installConditionallyEnabledProperties(v8::Local<v8::Object>, v8::Isolate*) { }
    static void preparePrototypeObject(v8::Isolate*, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<HTMLMarqueeElement> {
    typedef V8HTMLMarqueeElement Type;
};

} // namespace blink

#endif // V8HTMLMarqueeElement_h
