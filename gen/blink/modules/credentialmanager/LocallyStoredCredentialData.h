// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef LocallyStoredCredentialData_h
#define LocallyStoredCredentialData_h

#include "modules/ModulesExport.h"
#include "modules/credentialmanager/CredentialData.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT LocallyStoredCredentialData : public CredentialData {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    LocallyStoredCredentialData();

    bool hasIconURL() const { return !m_iconURL.isNull(); }
    String iconURL() const { return m_iconURL; }
    void setIconURL(String value) { m_iconURL = value; }

    bool hasName() const { return !m_name.isNull(); }
    String name() const { return m_name; }
    void setName(String value) { m_name = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_iconURL;
    String m_name;

    friend class V8LocallyStoredCredentialData;
};

} // namespace blink

#endif // LocallyStoredCredentialData_h
