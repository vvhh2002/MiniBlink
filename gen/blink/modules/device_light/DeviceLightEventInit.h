// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef DeviceLightEventInit_h
#define DeviceLightEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT DeviceLightEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    DeviceLightEventInit();

    bool hasValue() const { return !m_value.isNull(); }
    double value() const { return m_value.get(); }
    void setValue(double value) { m_value = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<double> m_value;

    friend class V8DeviceLightEventInit;
};

} // namespace blink

#endif // DeviceLightEventInit_h
