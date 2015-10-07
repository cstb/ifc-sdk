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



#include <ifc2x3/IfcDerivedUnitElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDerivedUnitElement::IfcDerivedUnitElement(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_unit = NULL;
    m_exponent = Step::getUnset(m_exponent);
}

IfcDerivedUnitElement::~IfcDerivedUnitElement() {
}

bool IfcDerivedUnitElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDerivedUnitElement(this);
}

const std::string &IfcDerivedUnitElement::type() const {
    return IfcDerivedUnitElement::s_type.getName();
}

const Step::ClassType &IfcDerivedUnitElement::getClassType() {
    return IfcDerivedUnitElement::s_type;
}

const Step::ClassType &IfcDerivedUnitElement::getType() const {
    return IfcDerivedUnitElement::s_type;
}

bool IfcDerivedUnitElement::isOfType(const Step::ClassType &t) const {
    return IfcDerivedUnitElement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcNamedUnit *IfcDerivedUnitElement::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

const IfcNamedUnit *IfcDerivedUnitElement::getUnit() const {
    IfcDerivedUnitElement * deConstObject = const_cast< IfcDerivedUnitElement * > (this);
    return deConstObject->getUnit();
}

void IfcDerivedUnitElement::setUnit(const Step::RefPtr< IfcNamedUnit > &value) {
    m_unit = value;
}

void IfcDerivedUnitElement::unsetUnit() {
    m_unit = Step::getUnset(getUnit());
}

bool IfcDerivedUnitElement::testUnit() const {
    return !Step::isUnset(getUnit());
}

Step::Integer IfcDerivedUnitElement::getExponent() {
    if (Step::BaseObject::inited()) {
        return m_exponent;
    }
    else {
        return Step::getUnset(m_exponent);
    }
}

const Step::Integer IfcDerivedUnitElement::getExponent() const {
    IfcDerivedUnitElement * deConstObject = const_cast< IfcDerivedUnitElement * > (this);
    return deConstObject->getExponent();
}

void IfcDerivedUnitElement::setExponent(Step::Integer value) {
    m_exponent = value;
}

void IfcDerivedUnitElement::unsetExponent() {
    m_exponent = Step::getUnset(getExponent());
}

bool IfcDerivedUnitElement::testExponent() const {
    return !Step::isUnset(getExponent());
}

bool IfcDerivedUnitElement::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unit = NULL;
    }
    else {
        m_unit = static_cast< IfcNamedUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_exponent = Step::getUnset(m_exponent);
    }
    else {
        m_exponent = Step::spfToInteger(arg);
    }
    return true;
}

void IfcDerivedUnitElement::copy(const IfcDerivedUnitElement &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setUnit((IfcNamedUnit*)copyop(obj.m_unit.get()));
    setExponent(obj.m_exponent);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDerivedUnitElement::s_type("IfcDerivedUnitElement");
