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



#include <ifc2x3/IfcCostValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCostValue::IfcCostValue(Step::Id id, Step::SPFData *args) : IfcAppliedValue(id, args) {
    m_costType = Step::getUnset(m_costType);
    m_condition = Step::getUnset(m_condition);
}

IfcCostValue::~IfcCostValue() {
}

bool IfcCostValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCostValue(this);
}

const std::string &IfcCostValue::type() const {
    return IfcCostValue::s_type.getName();
}

const Step::ClassType &IfcCostValue::getClassType() {
    return IfcCostValue::s_type;
}

const Step::ClassType &IfcCostValue::getType() const {
    return IfcCostValue::s_type;
}

bool IfcCostValue::isOfType(const Step::ClassType &t) const {
    return IfcCostValue::s_type == t ? true : IfcAppliedValue::isOfType(t);
}

IfcLabel IfcCostValue::getCostType() {
    if (Step::BaseObject::inited()) {
        return m_costType;
    }
    else {
        return Step::getUnset(m_costType);
    }
}

const IfcLabel IfcCostValue::getCostType() const {
    IfcCostValue * deConstObject = const_cast< IfcCostValue * > (this);
    return deConstObject->getCostType();
}

void IfcCostValue::setCostType(const IfcLabel &value) {
    m_costType = value;
}

void IfcCostValue::unsetCostType() {
    m_costType = Step::getUnset(getCostType());
}

bool IfcCostValue::testCostType() const {
    return !Step::isUnset(getCostType());
}

IfcText IfcCostValue::getCondition() {
    if (Step::BaseObject::inited()) {
        return m_condition;
    }
    else {
        return Step::getUnset(m_condition);
    }
}

const IfcText IfcCostValue::getCondition() const {
    IfcCostValue * deConstObject = const_cast< IfcCostValue * > (this);
    return deConstObject->getCondition();
}

void IfcCostValue::setCondition(const IfcText &value) {
    m_condition = value;
}

void IfcCostValue::unsetCondition() {
    m_condition = Step::getUnset(getCondition());
}

bool IfcCostValue::testCondition() const {
    return !Step::isUnset(getCondition());
}

bool IfcCostValue::init() {
    bool status = IfcAppliedValue::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_costType = Step::getUnset(m_costType);
    }
    else {
        m_costType = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_condition = Step::getUnset(m_condition);
    }
    else {
        m_condition = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcCostValue::copy(const IfcCostValue &obj, const CopyOp &copyop) {
    IfcAppliedValue::copy(obj, copyop);
    setCostType(obj.m_costType);
    setCondition(obj.m_condition);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCostValue::s_type("IfcCostValue");
