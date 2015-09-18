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



#include <ifc2x3/IfcQuantityTime.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPhysicalSimpleQuantity.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcQuantityTime::IfcQuantityTime(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_timeValue = Step::getUnset(m_timeValue);
}

IfcQuantityTime::~IfcQuantityTime() {
}

bool IfcQuantityTime::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcQuantityTime(this);
}

const std::string &IfcQuantityTime::type() const {
    return IfcQuantityTime::s_type.getName();
}

const Step::ClassType &IfcQuantityTime::getClassType() {
    return IfcQuantityTime::s_type;
}

const Step::ClassType &IfcQuantityTime::getType() const {
    return IfcQuantityTime::s_type;
}

bool IfcQuantityTime::isOfType(const Step::ClassType &t) const {
    return IfcQuantityTime::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcTimeMeasure IfcQuantityTime::getTimeValue() {
    if (Step::BaseObject::inited()) {
        return m_timeValue;
    }
    else {
        return Step::getUnset(m_timeValue);
    }
}

const IfcTimeMeasure IfcQuantityTime::getTimeValue() const {
    IfcQuantityTime * deConstObject = const_cast< IfcQuantityTime * > (this);
    return deConstObject->getTimeValue();
}

void IfcQuantityTime::setTimeValue(IfcTimeMeasure value) {
    m_timeValue = value;
}

void IfcQuantityTime::unsetTimeValue() {
    m_timeValue = Step::getUnset(getTimeValue());
}

bool IfcQuantityTime::testTimeValue() const {
    return !Step::isUnset(getTimeValue());
}

bool IfcQuantityTime::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeValue = Step::getUnset(m_timeValue);
    }
    else {
        m_timeValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityTime::copy(const IfcQuantityTime &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setTimeValue(obj.m_timeValue);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcQuantityTime::s_type("IfcQuantityTime");
