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



#include <ifc2x3/IfcRelaxation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelaxation::IfcRelaxation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relaxationValue = Step::getUnset(m_relaxationValue);
    m_initialStress = Step::getUnset(m_initialStress);
}

IfcRelaxation::~IfcRelaxation() {
}

bool IfcRelaxation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelaxation(this);
}

const std::string &IfcRelaxation::type() const {
    return IfcRelaxation::s_type.getName();
}

const Step::ClassType &IfcRelaxation::getClassType() {
    return IfcRelaxation::s_type;
}

const Step::ClassType &IfcRelaxation::getType() const {
    return IfcRelaxation::s_type;
}

bool IfcRelaxation::isOfType(const Step::ClassType &t) const {
    return IfcRelaxation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcNormalisedRatioMeasure IfcRelaxation::getRelaxationValue() {
    if (Step::BaseObject::inited()) {
        return m_relaxationValue;
    }
    else {
        return Step::getUnset(m_relaxationValue);
    }
}

const IfcNormalisedRatioMeasure IfcRelaxation::getRelaxationValue() const {
    IfcRelaxation * deConstObject = const_cast< IfcRelaxation * > (this);
    return deConstObject->getRelaxationValue();
}

void IfcRelaxation::setRelaxationValue(IfcNormalisedRatioMeasure value) {
    m_relaxationValue = value;
}

void IfcRelaxation::unsetRelaxationValue() {
    m_relaxationValue = Step::getUnset(getRelaxationValue());
}

bool IfcRelaxation::testRelaxationValue() const {
    return !Step::isUnset(getRelaxationValue());
}

IfcNormalisedRatioMeasure IfcRelaxation::getInitialStress() {
    if (Step::BaseObject::inited()) {
        return m_initialStress;
    }
    else {
        return Step::getUnset(m_initialStress);
    }
}

const IfcNormalisedRatioMeasure IfcRelaxation::getInitialStress() const {
    IfcRelaxation * deConstObject = const_cast< IfcRelaxation * > (this);
    return deConstObject->getInitialStress();
}

void IfcRelaxation::setInitialStress(IfcNormalisedRatioMeasure value) {
    m_initialStress = value;
}

void IfcRelaxation::unsetInitialStress() {
    m_initialStress = Step::getUnset(getInitialStress());
}

bool IfcRelaxation::testInitialStress() const {
    return !Step::isUnset(getInitialStress());
}

bool IfcRelaxation::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relaxationValue = Step::getUnset(m_relaxationValue);
    }
    else {
        m_relaxationValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_initialStress = Step::getUnset(m_initialStress);
    }
    else {
        m_initialStress = Step::spfToReal(arg);
    }
    return true;
}

void IfcRelaxation::copy(const IfcRelaxation &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRelaxationValue(obj.m_relaxationValue);
    setInitialStress(obj.m_initialStress);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelaxation::s_type("IfcRelaxation");
