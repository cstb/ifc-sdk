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



#include <ifc2x3/IfcElementType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTypeProduct.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElementType::IfcElementType(Step::Id id, Step::SPFData *args) : IfcTypeProduct(id, args) {
    m_elementType = Step::getUnset(m_elementType);
}

IfcElementType::~IfcElementType() {
}

bool IfcElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementType(this);
}

const std::string &IfcElementType::type() const {
    return IfcElementType::s_type.getName();
}

const Step::ClassType &IfcElementType::getClassType() {
    return IfcElementType::s_type;
}

const Step::ClassType &IfcElementType::getType() const {
    return IfcElementType::s_type;
}

bool IfcElementType::isOfType(const Step::ClassType &t) const {
    return IfcElementType::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcLabel IfcElementType::getElementType() {
    if (Step::BaseObject::inited()) {
        return m_elementType;
    }
    else {
        return Step::getUnset(m_elementType);
    }
}

const IfcLabel IfcElementType::getElementType() const {
    IfcElementType * deConstObject = const_cast< IfcElementType * > (this);
    return deConstObject->getElementType();
}

void IfcElementType::setElementType(const IfcLabel &value) {
    m_elementType = value;
}

void IfcElementType::unsetElementType() {
    m_elementType = Step::getUnset(getElementType());
}

bool IfcElementType::testElementType() const {
    return !Step::isUnset(getElementType());
}

bool IfcElementType::init() {
    bool status = IfcTypeProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elementType = Step::getUnset(m_elementType);
    }
    else {
        m_elementType = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcElementType::copy(const IfcElementType &obj, const CopyOp &copyop) {
    IfcTypeProduct::copy(obj, copyop);
    setElementType(obj.m_elementType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElementType::s_type("IfcElementType");
