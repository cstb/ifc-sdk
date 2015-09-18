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



#include <ifc2x3/IfcGeneralProfileProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProfileProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcGeneralProfileProperties::IfcGeneralProfileProperties(Step::Id id, Step::SPFData *args) : IfcProfileProperties(id, args) {
    m_physicalWeight = Step::getUnset(m_physicalWeight);
    m_perimeter = Step::getUnset(m_perimeter);
    m_minimumPlateThickness = Step::getUnset(m_minimumPlateThickness);
    m_maximumPlateThickness = Step::getUnset(m_maximumPlateThickness);
    m_crossSectionArea = Step::getUnset(m_crossSectionArea);
}

IfcGeneralProfileProperties::~IfcGeneralProfileProperties() {
}

bool IfcGeneralProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeneralProfileProperties(this);
}

const std::string &IfcGeneralProfileProperties::type() const {
    return IfcGeneralProfileProperties::s_type.getName();
}

const Step::ClassType &IfcGeneralProfileProperties::getClassType() {
    return IfcGeneralProfileProperties::s_type;
}

const Step::ClassType &IfcGeneralProfileProperties::getType() const {
    return IfcGeneralProfileProperties::s_type;
}

bool IfcGeneralProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcGeneralProfileProperties::s_type == t ? true : IfcProfileProperties::isOfType(t);
}

IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight() {
    if (Step::BaseObject::inited()) {
        return m_physicalWeight;
    }
    else {
        return Step::getUnset(m_physicalWeight);
    }
}

const IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getPhysicalWeight();
}

void IfcGeneralProfileProperties::setPhysicalWeight(IfcMassPerLengthMeasure value) {
    m_physicalWeight = value;
}

void IfcGeneralProfileProperties::unsetPhysicalWeight() {
    m_physicalWeight = Step::getUnset(getPhysicalWeight());
}

bool IfcGeneralProfileProperties::testPhysicalWeight() const {
    return !Step::isUnset(getPhysicalWeight());
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter() {
    if (Step::BaseObject::inited()) {
        return m_perimeter;
    }
    else {
        return Step::getUnset(m_perimeter);
    }
}

const IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getPerimeter();
}

void IfcGeneralProfileProperties::setPerimeter(IfcPositiveLengthMeasure value) {
    m_perimeter = value;
}

void IfcGeneralProfileProperties::unsetPerimeter() {
    m_perimeter = Step::getUnset(getPerimeter());
}

bool IfcGeneralProfileProperties::testPerimeter() const {
    return !Step::isUnset(getPerimeter());
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness() {
    if (Step::BaseObject::inited()) {
        return m_minimumPlateThickness;
    }
    else {
        return Step::getUnset(m_minimumPlateThickness);
    }
}

const IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getMinimumPlateThickness();
}

void IfcGeneralProfileProperties::setMinimumPlateThickness(IfcPositiveLengthMeasure value) {
    m_minimumPlateThickness = value;
}

void IfcGeneralProfileProperties::unsetMinimumPlateThickness() {
    m_minimumPlateThickness = Step::getUnset(getMinimumPlateThickness());
}

bool IfcGeneralProfileProperties::testMinimumPlateThickness() const {
    return !Step::isUnset(getMinimumPlateThickness());
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness() {
    if (Step::BaseObject::inited()) {
        return m_maximumPlateThickness;
    }
    else {
        return Step::getUnset(m_maximumPlateThickness);
    }
}

const IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getMaximumPlateThickness();
}

void IfcGeneralProfileProperties::setMaximumPlateThickness(IfcPositiveLengthMeasure value) {
    m_maximumPlateThickness = value;
}

void IfcGeneralProfileProperties::unsetMaximumPlateThickness() {
    m_maximumPlateThickness = Step::getUnset(getMaximumPlateThickness());
}

bool IfcGeneralProfileProperties::testMaximumPlateThickness() const {
    return !Step::isUnset(getMaximumPlateThickness());
}

IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionArea;
    }
    else {
        return Step::getUnset(m_crossSectionArea);
    }
}

const IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getCrossSectionArea();
}

void IfcGeneralProfileProperties::setCrossSectionArea(IfcAreaMeasure value) {
    m_crossSectionArea = value;
}

void IfcGeneralProfileProperties::unsetCrossSectionArea() {
    m_crossSectionArea = Step::getUnset(getCrossSectionArea());
}

bool IfcGeneralProfileProperties::testCrossSectionArea() const {
    return !Step::isUnset(getCrossSectionArea());
}

bool IfcGeneralProfileProperties::init() {
    bool status = IfcProfileProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_physicalWeight = Step::getUnset(m_physicalWeight);
    }
    else {
        m_physicalWeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_perimeter = Step::getUnset(m_perimeter);
    }
    else {
        m_perimeter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minimumPlateThickness = Step::getUnset(m_minimumPlateThickness);
    }
    else {
        m_minimumPlateThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maximumPlateThickness = Step::getUnset(m_maximumPlateThickness);
    }
    else {
        m_maximumPlateThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    }
    else {
        m_crossSectionArea = Step::spfToReal(arg);
    }
    return true;
}

void IfcGeneralProfileProperties::copy(const IfcGeneralProfileProperties &obj, const CopyOp &copyop) {
    IfcProfileProperties::copy(obj, copyop);
    setPhysicalWeight(obj.m_physicalWeight);
    setPerimeter(obj.m_perimeter);
    setMinimumPlateThickness(obj.m_minimumPlateThickness);
    setMaximumPlateThickness(obj.m_maximumPlateThickness);
    setCrossSectionArea(obj.m_crossSectionArea);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGeneralProfileProperties::s_type("IfcGeneralProfileProperties");
