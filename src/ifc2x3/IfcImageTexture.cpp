// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcImageTexture.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSurfaceTexture.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcImageTexture::IfcImageTexture(Step::Id id, Step::SPFData *args) : IfcSurfaceTexture(id, args) {
    m_urlReference = Step::getUnset(m_urlReference);
}

IfcImageTexture::~IfcImageTexture() {
}

bool IfcImageTexture::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcImageTexture(this);
}

const std::string &IfcImageTexture::type() const {
    return IfcImageTexture::s_type.getName();
}

const Step::ClassType &IfcImageTexture::getClassType() {
    return IfcImageTexture::s_type;
}

const Step::ClassType &IfcImageTexture::getType() const {
    return IfcImageTexture::s_type;
}

bool IfcImageTexture::isOfType(const Step::ClassType &t) const {
    return IfcImageTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcIdentifier IfcImageTexture::getUrlReference() {
    if (Step::BaseObject::inited()) {
        return m_urlReference;
    }
    else {
        return Step::getUnset(m_urlReference);
    }
}

const IfcIdentifier IfcImageTexture::getUrlReference() const {
    IfcImageTexture * deConstObject = const_cast< IfcImageTexture * > (this);
    return deConstObject->getUrlReference();
}

void IfcImageTexture::setUrlReference(const IfcIdentifier &value) {
    m_urlReference = value;
}

void IfcImageTexture::unsetUrlReference() {
    m_urlReference = Step::getUnset(getUrlReference());
}

bool IfcImageTexture::testUrlReference() const {
    return !Step::isUnset(getUrlReference());
}

bool IfcImageTexture::init() {
    bool status = IfcSurfaceTexture::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_urlReference = Step::getUnset(m_urlReference);
    }
    else {
        m_urlReference = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcImageTexture::copy(const IfcImageTexture &obj, const CopyOp &copyop) {
    IfcSurfaceTexture::copy(obj, copyop);
    setUrlReference(obj.m_urlReference);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcImageTexture::s_type("IfcImageTexture");
