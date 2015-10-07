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



#include <ifc2x3/IfcPropertyReferenceValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObjectReferenceSelect.h>
#include <ifc2x3/IfcSimpleProperty.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPropertyReferenceValue::IfcPropertyReferenceValue(Step::Id id, Step::SPFData *args) : IfcSimpleProperty(id, args) {
    m_usageName = Step::getUnset(m_usageName);
    m_propertyReference = NULL;
}

IfcPropertyReferenceValue::~IfcPropertyReferenceValue() {
}

bool IfcPropertyReferenceValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertyReferenceValue(this);
}

const std::string &IfcPropertyReferenceValue::type() const {
    return IfcPropertyReferenceValue::s_type.getName();
}

const Step::ClassType &IfcPropertyReferenceValue::getClassType() {
    return IfcPropertyReferenceValue::s_type;
}

const Step::ClassType &IfcPropertyReferenceValue::getType() const {
    return IfcPropertyReferenceValue::s_type;
}

bool IfcPropertyReferenceValue::isOfType(const Step::ClassType &t) const {
    return IfcPropertyReferenceValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

IfcLabel IfcPropertyReferenceValue::getUsageName() {
    if (Step::BaseObject::inited()) {
        return m_usageName;
    }
    else {
        return Step::getUnset(m_usageName);
    }
}

const IfcLabel IfcPropertyReferenceValue::getUsageName() const {
    IfcPropertyReferenceValue * deConstObject = const_cast< IfcPropertyReferenceValue * > (this);
    return deConstObject->getUsageName();
}

void IfcPropertyReferenceValue::setUsageName(const IfcLabel &value) {
    m_usageName = value;
}

void IfcPropertyReferenceValue::unsetUsageName() {
    m_usageName = Step::getUnset(getUsageName());
}

bool IfcPropertyReferenceValue::testUsageName() const {
    return !Step::isUnset(getUsageName());
}

IfcObjectReferenceSelect *IfcPropertyReferenceValue::getPropertyReference() {
    if (Step::BaseObject::inited()) {
        return m_propertyReference.get();
    }
    else {
        return NULL;
    }
}

const IfcObjectReferenceSelect *IfcPropertyReferenceValue::getPropertyReference() const {
    IfcPropertyReferenceValue * deConstObject = const_cast< IfcPropertyReferenceValue * > (this);
    return deConstObject->getPropertyReference();
}

void IfcPropertyReferenceValue::setPropertyReference(const Step::RefPtr< IfcObjectReferenceSelect > &value) {
    m_propertyReference = value;
}

void IfcPropertyReferenceValue::unsetPropertyReference() {
    m_propertyReference = Step::getUnset(getPropertyReference());
}

bool IfcPropertyReferenceValue::testPropertyReference() const {
    return !Step::isUnset(getPropertyReference());
}

bool IfcPropertyReferenceValue::init() {
    bool status = IfcSimpleProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usageName = Step::getUnset(m_usageName);
    }
    else {
        m_usageName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_propertyReference = NULL;
    }
    else {
        m_propertyReference = new IfcObjectReferenceSelect;
        if (arg[0] == '#') {
            m_propertyReference->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcPropertyReferenceValue::copy(const IfcPropertyReferenceValue &obj, const CopyOp &copyop) {
    IfcSimpleProperty::copy(obj, copyop);
    setUsageName(obj.m_usageName);
    m_propertyReference = new IfcObjectReferenceSelect;
    m_propertyReference->copy(*(obj.m_propertyReference.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertyReferenceValue::s_type("IfcPropertyReferenceValue");
