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



#include <ifc2x3/IfcQuantityCount.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPhysicalSimpleQuantity.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcQuantityCount::IfcQuantityCount(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_countValue = Step::getUnset(m_countValue);
}

IfcQuantityCount::~IfcQuantityCount() {
}

bool IfcQuantityCount::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcQuantityCount(this);
}

const std::string &IfcQuantityCount::type() const {
    return IfcQuantityCount::s_type.getName();
}

const Step::ClassType &IfcQuantityCount::getClassType() {
    return IfcQuantityCount::s_type;
}

const Step::ClassType &IfcQuantityCount::getType() const {
    return IfcQuantityCount::s_type;
}

bool IfcQuantityCount::isOfType(const Step::ClassType &t) const {
    return IfcQuantityCount::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcCountMeasure IfcQuantityCount::getCountValue() {
    if (Step::BaseObject::inited()) {
        return m_countValue;
    }
    else {
        return Step::getUnset(m_countValue);
    }
}

const IfcCountMeasure IfcQuantityCount::getCountValue() const {
    IfcQuantityCount * deConstObject = const_cast< IfcQuantityCount * > (this);
    return deConstObject->getCountValue();
}

void IfcQuantityCount::setCountValue(IfcCountMeasure value) {
    m_countValue = value;
}

void IfcQuantityCount::unsetCountValue() {
    m_countValue = Step::getUnset(getCountValue());
}

bool IfcQuantityCount::testCountValue() const {
    return !Step::isUnset(getCountValue());
}

bool IfcQuantityCount::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_countValue = Step::getUnset(m_countValue);
    }
    else {
        m_countValue = Step::spfToInteger(arg);
    }
    return true;
}

void IfcQuantityCount::copy(const IfcQuantityCount &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setCountValue(obj.m_countValue);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcQuantityCount::s_type("IfcQuantityCount");
