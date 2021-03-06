// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaStreamEventInit_h
#define MediaStreamEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "modules/mediastream/MediaStream.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT MediaStreamEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    MediaStreamEventInit();

    bool hasStream() const { return m_stream; }
    MediaStream* stream() const { return m_stream; }
    void setStream(MediaStream* value) { m_stream = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Member<MediaStream> m_stream;

    friend class V8MediaStreamEventInit;
};

} // namespace blink

#endif // MediaStreamEventInit_h
