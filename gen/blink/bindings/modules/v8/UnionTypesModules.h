// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef UnionTypeModules_h
#define UnionTypeModules_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8Binding.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class Blob;
class CanvasGradient;
class CanvasPattern;
class DOMArrayBuffer;
class DOMArrayBufferView;
class DOMFormData;
class DOMStringList;
class HTMLCanvasElement;
class HTMLImageElement;
class HTMLVideoElement;
class ImageBitmap;
class MessagePort;
class Request;
class ServiceWorker;

class MODULES_EXPORT ArrayBufferOrArrayBufferViewOrDictionary final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ArrayBufferOrArrayBufferViewOrDictionary();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isArrayBuffer() const { return m_type == SpecificTypeArrayBuffer; }
    PassRefPtr<DOMArrayBuffer> getAsArrayBuffer() const;
    void setArrayBuffer(PassRefPtr<DOMArrayBuffer>);
    static ArrayBufferOrArrayBufferViewOrDictionary fromArrayBuffer(PassRefPtr<DOMArrayBuffer>);

    bool isArrayBufferView() const { return m_type == SpecificTypeArrayBufferView; }
    PassRefPtr<DOMArrayBufferView> getAsArrayBufferView() const;
    void setArrayBufferView(PassRefPtr<DOMArrayBufferView>);
    static ArrayBufferOrArrayBufferViewOrDictionary fromArrayBufferView(PassRefPtr<DOMArrayBufferView>);

    bool isDictionary() const { return m_type == SpecificTypeDictionary; }
    Dictionary getAsDictionary() const;
    void setDictionary(Dictionary);
    static ArrayBufferOrArrayBufferViewOrDictionary fromDictionary(Dictionary);

    ArrayBufferOrArrayBufferViewOrDictionary(const ArrayBufferOrArrayBufferViewOrDictionary&);
    ~ArrayBufferOrArrayBufferViewOrDictionary();
    ArrayBufferOrArrayBufferViewOrDictionary& operator=(const ArrayBufferOrArrayBufferViewOrDictionary&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeArrayBuffer,
        SpecificTypeArrayBufferView,
        SpecificTypeDictionary,
    };
    SpecificTypes m_type;

    RefPtr<DOMArrayBuffer> m_arrayBuffer;
    RefPtr<DOMArrayBufferView> m_arrayBufferView;
    Dictionary m_dictionary;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const ArrayBufferOrArrayBufferViewOrDictionary&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8ArrayBufferOrArrayBufferViewOrDictionary final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, ArrayBufferOrArrayBufferViewOrDictionary&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const ArrayBufferOrArrayBufferViewOrDictionary&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, ArrayBufferOrArrayBufferViewOrDictionary& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<ArrayBufferOrArrayBufferViewOrDictionary> {
    MODULES_EXPORT static ArrayBufferOrArrayBufferViewOrDictionary nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT ArrayBufferViewOrBlobOrStringOrFormData final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ArrayBufferViewOrBlobOrStringOrFormData();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isArrayBufferView() const { return m_type == SpecificTypeArrayBufferView; }
    PassRefPtr<DOMArrayBufferView> getAsArrayBufferView() const;
    void setArrayBufferView(PassRefPtr<DOMArrayBufferView>);
    static ArrayBufferViewOrBlobOrStringOrFormData fromArrayBufferView(PassRefPtr<DOMArrayBufferView>);

    bool isBlob() const { return m_type == SpecificTypeBlob; }
    Blob* getAsBlob() const;
    void setBlob(Blob*);
    static ArrayBufferViewOrBlobOrStringOrFormData fromBlob(Blob*);

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static ArrayBufferViewOrBlobOrStringOrFormData fromString(String);

    bool isFormData() const { return m_type == SpecificTypeFormData; }
    DOMFormData* getAsFormData() const;
    void setFormData(DOMFormData*);
    static ArrayBufferViewOrBlobOrStringOrFormData fromFormData(DOMFormData*);

    ArrayBufferViewOrBlobOrStringOrFormData(const ArrayBufferViewOrBlobOrStringOrFormData&);
    ~ArrayBufferViewOrBlobOrStringOrFormData();
    ArrayBufferViewOrBlobOrStringOrFormData& operator=(const ArrayBufferViewOrBlobOrStringOrFormData&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeArrayBufferView,
        SpecificTypeBlob,
        SpecificTypeString,
        SpecificTypeFormData,
    };
    SpecificTypes m_type;

    RefPtr<DOMArrayBufferView> m_arrayBufferView;
    Member<Blob> m_blob;
    String m_string;
    Member<DOMFormData> m_formData;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const ArrayBufferViewOrBlobOrStringOrFormData&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8ArrayBufferViewOrBlobOrStringOrFormData final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, ArrayBufferViewOrBlobOrStringOrFormData&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const ArrayBufferViewOrBlobOrStringOrFormData&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, ArrayBufferViewOrBlobOrStringOrFormData& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<ArrayBufferViewOrBlobOrStringOrFormData> {
    MODULES_EXPORT static ArrayBufferViewOrBlobOrStringOrFormData nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isBlob() const { return m_type == SpecificTypeBlob; }
    Blob* getAsBlob() const;
    void setBlob(Blob*);
    static BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString fromBlob(Blob*);

    bool isArrayBuffer() const { return m_type == SpecificTypeArrayBuffer; }
    PassRefPtr<DOMArrayBuffer> getAsArrayBuffer() const;
    void setArrayBuffer(PassRefPtr<DOMArrayBuffer>);
    static BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString fromArrayBuffer(PassRefPtr<DOMArrayBuffer>);

    bool isArrayBufferView() const { return m_type == SpecificTypeArrayBufferView; }
    PassRefPtr<DOMArrayBufferView> getAsArrayBufferView() const;
    void setArrayBufferView(PassRefPtr<DOMArrayBufferView>);
    static BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString fromArrayBufferView(PassRefPtr<DOMArrayBufferView>);

    bool isFormData() const { return m_type == SpecificTypeFormData; }
    DOMFormData* getAsFormData() const;
    void setFormData(DOMFormData*);
    static BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString fromFormData(DOMFormData*);

    bool isUSVString() const { return m_type == SpecificTypeUSVString; }
    String getAsUSVString() const;
    void setUSVString(String);
    static BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString fromUSVString(String);

    BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString(const BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString&);
    ~BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString();
    BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString& operator=(const BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeBlob,
        SpecificTypeArrayBuffer,
        SpecificTypeArrayBufferView,
        SpecificTypeFormData,
        SpecificTypeUSVString,
    };
    SpecificTypes m_type;

    Member<Blob> m_blob;
    RefPtr<DOMArrayBuffer> m_arrayBuffer;
    RefPtr<DOMArrayBufferView> m_arrayBufferView;
    Member<DOMFormData> m_formData;
    String m_uSVString;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString> {
    MODULES_EXPORT static BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT DictionaryOrString final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    DictionaryOrString();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isDictionary() const { return m_type == SpecificTypeDictionary; }
    Dictionary getAsDictionary() const;
    void setDictionary(Dictionary);
    static DictionaryOrString fromDictionary(Dictionary);

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static DictionaryOrString fromString(String);

    DictionaryOrString(const DictionaryOrString&);
    ~DictionaryOrString();
    DictionaryOrString& operator=(const DictionaryOrString&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeDictionary,
        SpecificTypeString,
    };
    SpecificTypes m_type;

    Dictionary m_dictionary;
    String m_string;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const DictionaryOrString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DictionaryOrString final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, DictionaryOrString&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const DictionaryOrString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, DictionaryOrString& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DictionaryOrString> {
    MODULES_EXPORT static DictionaryOrString nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isHTMLImageElement() const { return m_type == SpecificTypeHTMLImageElement; }
    PassRefPtrWillBeRawPtr<HTMLImageElement> getAsHTMLImageElement() const;
    void setHTMLImageElement(PassRefPtrWillBeRawPtr<HTMLImageElement>);
    static HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap fromHTMLImageElement(PassRefPtrWillBeRawPtr<HTMLImageElement>);

    bool isHTMLVideoElement() const { return m_type == SpecificTypeHTMLVideoElement; }
    PassRefPtrWillBeRawPtr<HTMLVideoElement> getAsHTMLVideoElement() const;
    void setHTMLVideoElement(PassRefPtrWillBeRawPtr<HTMLVideoElement>);
    static HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap fromHTMLVideoElement(PassRefPtrWillBeRawPtr<HTMLVideoElement>);

    bool isHTMLCanvasElement() const { return m_type == SpecificTypeHTMLCanvasElement; }
    PassRefPtrWillBeRawPtr<HTMLCanvasElement> getAsHTMLCanvasElement() const;
    void setHTMLCanvasElement(PassRefPtrWillBeRawPtr<HTMLCanvasElement>);
    static HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap fromHTMLCanvasElement(PassRefPtrWillBeRawPtr<HTMLCanvasElement>);

    bool isImageBitmap() const { return m_type == SpecificTypeImageBitmap; }
    PassRefPtrWillBeRawPtr<ImageBitmap> getAsImageBitmap() const;
    void setImageBitmap(PassRefPtrWillBeRawPtr<ImageBitmap>);
    static HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap fromImageBitmap(PassRefPtrWillBeRawPtr<ImageBitmap>);

    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&);
    ~HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap();
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& operator=(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeHTMLImageElement,
        SpecificTypeHTMLVideoElement,
        SpecificTypeHTMLCanvasElement,
        SpecificTypeImageBitmap,
    };
    SpecificTypes m_type;

    RefPtrWillBeMember<HTMLImageElement> m_htmlImageElement;
    RefPtrWillBeMember<HTMLVideoElement> m_htmlVideoElement;
    RefPtrWillBeMember<HTMLCanvasElement> m_htmlCanvasElement;
    RefPtrWillBeMember<ImageBitmap> m_imageBitmap;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap> {
    MODULES_EXPORT static HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT RequestOrUSVString final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    RequestOrUSVString();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isRequest() const { return m_type == SpecificTypeRequest; }
    Request* getAsRequest() const;
    void setRequest(Request*);
    static RequestOrUSVString fromRequest(Request*);

    bool isUSVString() const { return m_type == SpecificTypeUSVString; }
    String getAsUSVString() const;
    void setUSVString(String);
    static RequestOrUSVString fromUSVString(String);

    RequestOrUSVString(const RequestOrUSVString&);
    ~RequestOrUSVString();
    RequestOrUSVString& operator=(const RequestOrUSVString&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeRequest,
        SpecificTypeUSVString,
    };
    SpecificTypes m_type;

    Member<Request> m_request;
    String m_uSVString;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const RequestOrUSVString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8RequestOrUSVString final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, RequestOrUSVString&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const RequestOrUSVString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, RequestOrUSVString& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<RequestOrUSVString> {
    MODULES_EXPORT static RequestOrUSVString nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT ServiceWorkerOrMessagePort final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ServiceWorkerOrMessagePort();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isServiceWorker() const { return m_type == SpecificTypeServiceWorker; }
    PassRefPtrWillBeRawPtr<ServiceWorker> getAsServiceWorker() const;
    void setServiceWorker(PassRefPtrWillBeRawPtr<ServiceWorker>);
    static ServiceWorkerOrMessagePort fromServiceWorker(PassRefPtrWillBeRawPtr<ServiceWorker>);

    bool isMessagePort() const { return m_type == SpecificTypeMessagePort; }
    MessagePort* getAsMessagePort() const;
    void setMessagePort(MessagePort*);
    static ServiceWorkerOrMessagePort fromMessagePort(MessagePort*);

    ServiceWorkerOrMessagePort(const ServiceWorkerOrMessagePort&);
    ~ServiceWorkerOrMessagePort();
    ServiceWorkerOrMessagePort& operator=(const ServiceWorkerOrMessagePort&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeServiceWorker,
        SpecificTypeMessagePort,
    };
    SpecificTypes m_type;

    RefPtrWillBeMember<ServiceWorker> m_serviceWorker;
    Member<MessagePort> m_messagePort;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const ServiceWorkerOrMessagePort&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8ServiceWorkerOrMessagePort final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, ServiceWorkerOrMessagePort&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const ServiceWorkerOrMessagePort&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, ServiceWorkerOrMessagePort& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<ServiceWorkerOrMessagePort> {
    MODULES_EXPORT static ServiceWorkerOrMessagePort nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT StringOrCanvasGradientOrCanvasPattern final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    StringOrCanvasGradientOrCanvasPattern();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static StringOrCanvasGradientOrCanvasPattern fromString(String);

    bool isCanvasGradient() const { return m_type == SpecificTypeCanvasGradient; }
    CanvasGradient* getAsCanvasGradient() const;
    void setCanvasGradient(CanvasGradient*);
    static StringOrCanvasGradientOrCanvasPattern fromCanvasGradient(CanvasGradient*);

    bool isCanvasPattern() const { return m_type == SpecificTypeCanvasPattern; }
    CanvasPattern* getAsCanvasPattern() const;
    void setCanvasPattern(CanvasPattern*);
    static StringOrCanvasGradientOrCanvasPattern fromCanvasPattern(CanvasPattern*);

    StringOrCanvasGradientOrCanvasPattern(const StringOrCanvasGradientOrCanvasPattern&);
    ~StringOrCanvasGradientOrCanvasPattern();
    StringOrCanvasGradientOrCanvasPattern& operator=(const StringOrCanvasGradientOrCanvasPattern&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeString,
        SpecificTypeCanvasGradient,
        SpecificTypeCanvasPattern,
    };
    SpecificTypes m_type;

    String m_string;
    Member<CanvasGradient> m_canvasGradient;
    Member<CanvasPattern> m_canvasPattern;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrCanvasGradientOrCanvasPattern&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrCanvasGradientOrCanvasPattern final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrCanvasGradientOrCanvasPattern&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrCanvasGradientOrCanvasPattern&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, StringOrCanvasGradientOrCanvasPattern& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrCanvasGradientOrCanvasPattern> {
    MODULES_EXPORT static StringOrCanvasGradientOrCanvasPattern nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT StringOrStringSequence final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    StringOrStringSequence();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static StringOrStringSequence fromString(String);

    bool isStringSequence() const { return m_type == SpecificTypeStringSequence; }
    const Vector<String>& getAsStringSequence() const;
    void setStringSequence(const Vector<String>&);
    static StringOrStringSequence fromStringSequence(const Vector<String>&);

    StringOrStringSequence(const StringOrStringSequence&);
    ~StringOrStringSequence();
    StringOrStringSequence& operator=(const StringOrStringSequence&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeString,
        SpecificTypeStringSequence,
    };
    SpecificTypes m_type;

    String m_string;
    Vector<String> m_stringSequence;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrStringSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrStringSequence final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrStringSequence&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrStringSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, StringOrStringSequence& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrStringSequence> {
    MODULES_EXPORT static StringOrStringSequence nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT StringOrStringSequenceOrDOMStringList final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    StringOrStringSequenceOrDOMStringList();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static StringOrStringSequenceOrDOMStringList fromString(String);

    bool isStringSequence() const { return m_type == SpecificTypeStringSequence; }
    const Vector<String>& getAsStringSequence() const;
    void setStringSequence(const Vector<String>&);
    static StringOrStringSequenceOrDOMStringList fromStringSequence(const Vector<String>&);

    bool isDOMStringList() const { return m_type == SpecificTypeDOMStringList; }
    PassRefPtrWillBeRawPtr<DOMStringList> getAsDOMStringList() const;
    void setDOMStringList(PassRefPtrWillBeRawPtr<DOMStringList>);
    static StringOrStringSequenceOrDOMStringList fromDOMStringList(PassRefPtrWillBeRawPtr<DOMStringList>);

    StringOrStringSequenceOrDOMStringList(const StringOrStringSequenceOrDOMStringList&);
    ~StringOrStringSequenceOrDOMStringList();
    StringOrStringSequenceOrDOMStringList& operator=(const StringOrStringSequenceOrDOMStringList&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeString,
        SpecificTypeStringSequence,
        SpecificTypeDOMStringList,
    };
    SpecificTypes m_type;

    String m_string;
    Vector<String> m_stringSequence;
    RefPtrWillBeMember<DOMStringList> m_dOMStringList;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrStringSequenceOrDOMStringList&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrStringSequenceOrDOMStringList final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrStringSequenceOrDOMStringList&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrStringSequenceOrDOMStringList&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, StringOrStringSequenceOrDOMStringList& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrStringSequenceOrDOMStringList> {
    MODULES_EXPORT static StringOrStringSequenceOrDOMStringList nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT StringOrUnsignedLong final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    StringOrUnsignedLong();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static StringOrUnsignedLong fromString(String);

    bool isUnsignedLong() const { return m_type == SpecificTypeUnsignedLong; }
    unsigned getAsUnsignedLong() const;
    void setUnsignedLong(unsigned);
    static StringOrUnsignedLong fromUnsignedLong(unsigned);

    StringOrUnsignedLong(const StringOrUnsignedLong&);
    ~StringOrUnsignedLong();
    StringOrUnsignedLong& operator=(const StringOrUnsignedLong&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeString,
        SpecificTypeUnsignedLong,
    };
    SpecificTypes m_type;

    String m_string;
    unsigned m_unsignedLong;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrUnsignedLong&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrUnsignedLong final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrUnsignedLong&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const StringOrUnsignedLong&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, StringOrUnsignedLong& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrUnsignedLong> {
    MODULES_EXPORT static StringOrUnsignedLong nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT UnsignedLongLongOrString final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    UnsignedLongLongOrString();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isUnsignedLongLong() const { return m_type == SpecificTypeUnsignedLongLong; }
    unsigned long long getAsUnsignedLongLong() const;
    void setUnsignedLongLong(unsigned long long);
    static UnsignedLongLongOrString fromUnsignedLongLong(unsigned long long);

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static UnsignedLongLongOrString fromString(String);

    UnsignedLongLongOrString(const UnsignedLongLongOrString&);
    ~UnsignedLongLongOrString();
    UnsignedLongLongOrString& operator=(const UnsignedLongLongOrString&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeUnsignedLongLong,
        SpecificTypeString,
    };
    SpecificTypes m_type;

    unsigned long long m_unsignedLongLong;
    String m_string;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const UnsignedLongLongOrString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8UnsignedLongLongOrString final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, UnsignedLongLongOrString&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const UnsignedLongLongOrString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, UnsignedLongLongOrString& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<UnsignedLongLongOrString> {
    MODULES_EXPORT static UnsignedLongLongOrString nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class MODULES_EXPORT UnsignedLongOrUnsignedLongSequence final {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    UnsignedLongOrUnsignedLongSequence();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isUnsignedLong() const { return m_type == SpecificTypeUnsignedLong; }
    unsigned getAsUnsignedLong() const;
    void setUnsignedLong(unsigned);
    static UnsignedLongOrUnsignedLongSequence fromUnsignedLong(unsigned);

    bool isUnsignedLongSequence() const { return m_type == SpecificTypeUnsignedLongSequence; }
    const Vector<unsigned>& getAsUnsignedLongSequence() const;
    void setUnsignedLongSequence(const Vector<unsigned>&);
    static UnsignedLongOrUnsignedLongSequence fromUnsignedLongSequence(const Vector<unsigned>&);

    UnsignedLongOrUnsignedLongSequence(const UnsignedLongOrUnsignedLongSequence&);
    ~UnsignedLongOrUnsignedLongSequence();
    UnsignedLongOrUnsignedLongSequence& operator=(const UnsignedLongOrUnsignedLongSequence&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeUnsignedLong,
        SpecificTypeUnsignedLongSequence,
    };
    SpecificTypes m_type;

    unsigned m_unsignedLong;
    Vector<unsigned> m_unsignedLongSequence;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const UnsignedLongOrUnsignedLongSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8UnsignedLongOrUnsignedLongSequence final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, UnsignedLongOrUnsignedLongSequence&, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const UnsignedLongOrUnsignedLongSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, UnsignedLongOrUnsignedLongSequence& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<UnsignedLongOrUnsignedLongSequence> {
    MODULES_EXPORT static UnsignedLongOrUnsignedLongSequence nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

class V8ArrayBufferViewOrBlobOrStringOrFormDataOrNull final {
public:
    static void toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ArrayBufferViewOrBlobOrStringOrFormData& impl, ExceptionState& exceptionState)
    {
        if (isUndefinedOrNull(v8Value))
            return;
        V8ArrayBufferViewOrBlobOrStringOrFormData::toImpl(isolate, v8Value, impl, exceptionState);
    }
};

class V8ServiceWorkerOrMessagePortOrNull final {
public:
    static void toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ServiceWorkerOrMessagePort& impl, ExceptionState& exceptionState)
    {
        if (isUndefinedOrNull(v8Value))
            return;
        V8ServiceWorkerOrMessagePort::toImpl(isolate, v8Value, impl, exceptionState);
    }
};

class V8StringOrStringSequenceOrNull final {
public:
    static void toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrStringSequence& impl, ExceptionState& exceptionState)
    {
        if (isUndefinedOrNull(v8Value))
            return;
        V8StringOrStringSequence::toImpl(isolate, v8Value, impl, exceptionState);
    }
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::ArrayBufferOrArrayBufferViewOrDictionary);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::ArrayBufferViewOrBlobOrStringOrFormData);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DictionaryOrString);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::RequestOrUSVString);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::ServiceWorkerOrMessagePort);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrCanvasGradientOrCanvasPattern);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrStringSequence);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrStringSequenceOrDOMStringList);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrUnsignedLong);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::UnsignedLongLongOrString);
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::UnsignedLongOrUnsignedLongSequence);

#endif // UnionTypeModules_h
