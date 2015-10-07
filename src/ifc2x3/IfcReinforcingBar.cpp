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



#include <ifc2x3/IfcReinforcingBar.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcReinforcingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcReinforcingBar::IfcReinforcingBar(Step::Id id, Step::SPFData *args) : IfcReinforcingElement(id, args) {
    m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    m_barLength = Step::getUnset(m_barLength);
    m_barRole = IfcReinforcingBarRoleEnum_UNSET;
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

IfcReinforcingBar::~IfcReinforcingBar() {
}

bool IfcReinforcingBar::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReinforcingBar(this);
}

const std::string &IfcReinforcingBar::type() const {
    return IfcReinforcingBar::s_type.getName();
}

const Step::ClassType &IfcReinforcingBar::getClassType() {
    return IfcReinforcingBar::s_type;
}

const Step::ClassType &IfcReinforcingBar::getType() const {
    return IfcReinforcingBar::s_type;
}

bool IfcReinforcingBar::isOfType(const Step::ClassType &t) const {
    return IfcReinforcingBar::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcReinforcingBar::getNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_nominalDiameter;
    }
    else {
        return Step::getUnset(m_nominalDiameter);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingBar::getNominalDiameter() const {
    IfcReinforcingBar * deConstObject = const_cast< IfcReinforcingBar * > (this);
    return deConstObject->getNominalDiameter();
}

void IfcReinforcingBar::setNominalDiameter(IfcPositiveLengthMeasure value) {
    m_nominalDiameter = value;
}

void IfcReinforcingBar::unsetNominalDiameter() {
    m_nominalDiameter = Step::getUnset(getNominalDiameter());
}

bool IfcReinforcingBar::testNominalDiameter() const {
    return !Step::isUnset(getNominalDiameter());
}

IfcAreaMeasure IfcReinforcingBar::getCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionArea;
    }
    else {
        return Step::getUnset(m_crossSectionArea);
    }
}

const IfcAreaMeasure IfcReinforcingBar::getCrossSectionArea() const {
    IfcReinforcingBar * deConstObject = const_cast< IfcReinforcingBar * > (this);
    return deConstObject->getCrossSectionArea();
}

void IfcReinforcingBar::setCrossSectionArea(IfcAreaMeasure value) {
    m_crossSectionArea = value;
}

void IfcReinforcingBar::unsetCrossSectionArea() {
    m_crossSectionArea = Step::getUnset(getCrossSectionArea());
}

bool IfcReinforcingBar::testCrossSectionArea() const {
    return !Step::isUnset(getCrossSectionArea());
}

IfcPositiveLengthMeasure IfcReinforcingBar::getBarLength() {
    if (Step::BaseObject::inited()) {
        return m_barLength;
    }
    else {
        return Step::getUnset(m_barLength);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingBar::getBarLength() const {
    IfcReinforcingBar * deConstObject = const_cast< IfcReinforcingBar * > (this);
    return deConstObject->getBarLength();
}

void IfcReinforcingBar::setBarLength(IfcPositiveLengthMeasure value) {
    m_barLength = value;
}

void IfcReinforcingBar::unsetBarLength() {
    m_barLength = Step::getUnset(getBarLength());
}

bool IfcReinforcingBar::testBarLength() const {
    return !Step::isUnset(getBarLength());
}

IfcReinforcingBarRoleEnum IfcReinforcingBar::getBarRole() {
    if (Step::BaseObject::inited()) {
        return m_barRole;
    }
    else {
        return IfcReinforcingBarRoleEnum_UNSET;
    }
}

const IfcReinforcingBarRoleEnum IfcReinforcingBar::getBarRole() const {
    IfcReinforcingBar * deConstObject = const_cast< IfcReinforcingBar * > (this);
    return deConstObject->getBarRole();
}

void IfcReinforcingBar::setBarRole(IfcReinforcingBarRoleEnum value) {
    m_barRole = value;
}

void IfcReinforcingBar::unsetBarRole() {
    m_barRole = IfcReinforcingBarRoleEnum_UNSET;
}

bool IfcReinforcingBar::testBarRole() const {
    return getBarRole() != IfcReinforcingBarRoleEnum_UNSET;
}

IfcReinforcingBarSurfaceEnum IfcReinforcingBar::getBarSurface() {
    if (Step::BaseObject::inited()) {
        return m_barSurface;
    }
    else {
        return IfcReinforcingBarSurfaceEnum_UNSET;
    }
}

const IfcReinforcingBarSurfaceEnum IfcReinforcingBar::getBarSurface() const {
    IfcReinforcingBar * deConstObject = const_cast< IfcReinforcingBar * > (this);
    return deConstObject->getBarSurface();
}

void IfcReinforcingBar::setBarSurface(IfcReinforcingBarSurfaceEnum value) {
    m_barSurface = value;
}

void IfcReinforcingBar::unsetBarSurface() {
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

bool IfcReinforcingBar::testBarSurface() const {
    return getBarSurface() != IfcReinforcingBarSurfaceEnum_UNSET;
}

bool IfcReinforcingBar::init() {
    bool status = IfcReinforcingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    }
    else {
        m_nominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    }
    else {
        m_crossSectionArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barLength = Step::getUnset(m_barLength);
    }
    else {
        m_barLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barRole = IfcReinforcingBarRoleEnum_UNSET;
    }
    else {
        if (arg == ".MAIN.") {
            m_barRole = IfcReinforcingBarRoleEnum_MAIN;
        }
        else if (arg == ".SHEAR.") {
            m_barRole = IfcReinforcingBarRoleEnum_SHEAR;
        }
        else if (arg == ".LIGATURE.") {
            m_barRole = IfcReinforcingBarRoleEnum_LIGATURE;
        }
        else if (arg == ".STUD.") {
            m_barRole = IfcReinforcingBarRoleEnum_STUD;
        }
        else if (arg == ".PUNCHING.") {
            m_barRole = IfcReinforcingBarRoleEnum_PUNCHING;
        }
        else if (arg == ".EDGE.") {
            m_barRole = IfcReinforcingBarRoleEnum_EDGE;
        }
        else if (arg == ".RING.") {
            m_barRole = IfcReinforcingBarRoleEnum_RING;
        }
        else if (arg == ".USERDEFINED.") {
            m_barRole = IfcReinforcingBarRoleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_barRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
        }
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
    return true;
}

void IfcReinforcingBar::copy(const IfcReinforcingBar &obj, const CopyOp &copyop) {
    IfcReinforcingElement::copy(obj, copyop);
    setNominalDiameter(obj.m_nominalDiameter);
    setCrossSectionArea(obj.m_crossSectionArea);
    setBarLength(obj.m_barLength);
    setBarRole(obj.m_barRole);
    setBarSurface(obj.m_barSurface);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcReinforcingBar::s_type("IfcReinforcingBar");
