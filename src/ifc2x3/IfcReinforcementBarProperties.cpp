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



#include <ifc2x3/IfcReinforcementBarProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcReinforcementBarProperties::IfcReinforcementBarProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_totalCrossSectionArea = Step::getUnset(m_totalCrossSectionArea);
    m_steelGrade = Step::getUnset(m_steelGrade);
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
    m_effectiveDepth = Step::getUnset(m_effectiveDepth);
    m_nominalBarDiameter = Step::getUnset(m_nominalBarDiameter);
    m_barCount = Step::getUnset(m_barCount);
}

IfcReinforcementBarProperties::~IfcReinforcementBarProperties() {
}

bool IfcReinforcementBarProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReinforcementBarProperties(this);
}

const std::string &IfcReinforcementBarProperties::type() const {
    return IfcReinforcementBarProperties::s_type.getName();
}

const Step::ClassType &IfcReinforcementBarProperties::getClassType() {
    return IfcReinforcementBarProperties::s_type;
}

const Step::ClassType &IfcReinforcementBarProperties::getType() const {
    return IfcReinforcementBarProperties::s_type;
}

bool IfcReinforcementBarProperties::isOfType(const Step::ClassType &t) const {
    return IfcReinforcementBarProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAreaMeasure IfcReinforcementBarProperties::getTotalCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_totalCrossSectionArea;
    }
    else {
        return Step::getUnset(m_totalCrossSectionArea);
    }
}

const IfcAreaMeasure IfcReinforcementBarProperties::getTotalCrossSectionArea() const {
    IfcReinforcementBarProperties * deConstObject = const_cast< IfcReinforcementBarProperties * > (this);
    return deConstObject->getTotalCrossSectionArea();
}

void IfcReinforcementBarProperties::setTotalCrossSectionArea(IfcAreaMeasure value) {
    m_totalCrossSectionArea = value;
}

void IfcReinforcementBarProperties::unsetTotalCrossSectionArea() {
    m_totalCrossSectionArea = Step::getUnset(getTotalCrossSectionArea());
}

bool IfcReinforcementBarProperties::testTotalCrossSectionArea() const {
    return !Step::isUnset(getTotalCrossSectionArea());
}

IfcLabel IfcReinforcementBarProperties::getSteelGrade() {
    if (Step::BaseObject::inited()) {
        return m_steelGrade;
    }
    else {
        return Step::getUnset(m_steelGrade);
    }
}

const IfcLabel IfcReinforcementBarProperties::getSteelGrade() const {
    IfcReinforcementBarProperties * deConstObject = const_cast< IfcReinforcementBarProperties * > (this);
    return deConstObject->getSteelGrade();
}

void IfcReinforcementBarProperties::setSteelGrade(const IfcLabel &value) {
    m_steelGrade = value;
}

void IfcReinforcementBarProperties::unsetSteelGrade() {
    m_steelGrade = Step::getUnset(getSteelGrade());
}

bool IfcReinforcementBarProperties::testSteelGrade() const {
    return !Step::isUnset(getSteelGrade());
}

IfcReinforcingBarSurfaceEnum IfcReinforcementBarProperties::getBarSurface() {
    if (Step::BaseObject::inited()) {
        return m_barSurface;
    }
    else {
        return IfcReinforcingBarSurfaceEnum_UNSET;
    }
}

const IfcReinforcingBarSurfaceEnum IfcReinforcementBarProperties::getBarSurface() const {
    IfcReinforcementBarProperties * deConstObject = const_cast< IfcReinforcementBarProperties * > (this);
    return deConstObject->getBarSurface();
}

void IfcReinforcementBarProperties::setBarSurface(IfcReinforcingBarSurfaceEnum value) {
    m_barSurface = value;
}

void IfcReinforcementBarProperties::unsetBarSurface() {
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

bool IfcReinforcementBarProperties::testBarSurface() const {
    return getBarSurface() != IfcReinforcingBarSurfaceEnum_UNSET;
}

IfcLengthMeasure IfcReinforcementBarProperties::getEffectiveDepth() {
    if (Step::BaseObject::inited()) {
        return m_effectiveDepth;
    }
    else {
        return Step::getUnset(m_effectiveDepth);
    }
}

const IfcLengthMeasure IfcReinforcementBarProperties::getEffectiveDepth() const {
    IfcReinforcementBarProperties * deConstObject = const_cast< IfcReinforcementBarProperties * > (this);
    return deConstObject->getEffectiveDepth();
}

void IfcReinforcementBarProperties::setEffectiveDepth(IfcLengthMeasure value) {
    m_effectiveDepth = value;
}

void IfcReinforcementBarProperties::unsetEffectiveDepth() {
    m_effectiveDepth = Step::getUnset(getEffectiveDepth());
}

bool IfcReinforcementBarProperties::testEffectiveDepth() const {
    return !Step::isUnset(getEffectiveDepth());
}

IfcPositiveLengthMeasure IfcReinforcementBarProperties::getNominalBarDiameter() {
    if (Step::BaseObject::inited()) {
        return m_nominalBarDiameter;
    }
    else {
        return Step::getUnset(m_nominalBarDiameter);
    }
}

const IfcPositiveLengthMeasure IfcReinforcementBarProperties::getNominalBarDiameter() const {
    IfcReinforcementBarProperties * deConstObject = const_cast< IfcReinforcementBarProperties * > (this);
    return deConstObject->getNominalBarDiameter();
}

void IfcReinforcementBarProperties::setNominalBarDiameter(IfcPositiveLengthMeasure value) {
    m_nominalBarDiameter = value;
}

void IfcReinforcementBarProperties::unsetNominalBarDiameter() {
    m_nominalBarDiameter = Step::getUnset(getNominalBarDiameter());
}

bool IfcReinforcementBarProperties::testNominalBarDiameter() const {
    return !Step::isUnset(getNominalBarDiameter());
}

IfcCountMeasure IfcReinforcementBarProperties::getBarCount() {
    if (Step::BaseObject::inited()) {
        return m_barCount;
    }
    else {
        return Step::getUnset(m_barCount);
    }
}

const IfcCountMeasure IfcReinforcementBarProperties::getBarCount() const {
    IfcReinforcementBarProperties * deConstObject = const_cast< IfcReinforcementBarProperties * > (this);
    return deConstObject->getBarCount();
}

void IfcReinforcementBarProperties::setBarCount(IfcCountMeasure value) {
    m_barCount = value;
}

void IfcReinforcementBarProperties::unsetBarCount() {
    m_barCount = Step::getUnset(getBarCount());
}

bool IfcReinforcementBarProperties::testBarCount() const {
    return !Step::isUnset(getBarCount());
}

bool IfcReinforcementBarProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_totalCrossSectionArea = Step::getUnset(m_totalCrossSectionArea);
    }
    else {
        m_totalCrossSectionArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_steelGrade = Step::getUnset(m_steelGrade);
    }
    else {
        m_steelGrade = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
    }
    else {
        if (arg == ".PLAIN.") {
            m_barSurface = IfcReinforcingBarSurfaceEnum_PLAIN;
        }
        else if (arg == ".TEXTURED.") {
            m_barSurface = IfcReinforcingBarSurfaceEnum_TEXTURED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_effectiveDepth = Step::getUnset(m_effectiveDepth);
    }
    else {
        m_effectiveDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalBarDiameter = Step::getUnset(m_nominalBarDiameter);
    }
    else {
        m_nominalBarDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barCount = Step::getUnset(m_barCount);
    }
    else {
        m_barCount = Step::spfToInteger(arg);
    }
    return true;
}

void IfcReinforcementBarProperties::copy(const IfcReinforcementBarProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setTotalCrossSectionArea(obj.m_totalCrossSectionArea);
    setSteelGrade(obj.m_steelGrade);
    setBarSurface(obj.m_barSurface);
    setEffectiveDepth(obj.m_effectiveDepth);
    setNominalBarDiameter(obj.m_nominalBarDiameter);
    setBarCount(obj.m_barCount);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcReinforcementBarProperties::s_type("IfcReinforcementBarProperties");
