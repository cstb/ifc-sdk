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



#include <ifc2x3/IfcAsymmetricIShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcIShapeProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcAsymmetricIShapeProfileDef::IfcAsymmetricIShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcIShapeProfileDef(id, args) {
    m_topFlangeWidth = Step::getUnset(m_topFlangeWidth);
    m_topFlangeThickness = Step::getUnset(m_topFlangeThickness);
    m_topFlangeFilletRadius = Step::getUnset(m_topFlangeFilletRadius);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcAsymmetricIShapeProfileDef::~IfcAsymmetricIShapeProfileDef() {
}

bool IfcAsymmetricIShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAsymmetricIShapeProfileDef(this);
}

const std::string &IfcAsymmetricIShapeProfileDef::type() const {
    return IfcAsymmetricIShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcAsymmetricIShapeProfileDef::getClassType() {
    return IfcAsymmetricIShapeProfileDef::s_type;
}

const Step::ClassType &IfcAsymmetricIShapeProfileDef::getType() const {
    return IfcAsymmetricIShapeProfileDef::s_type;
}

bool IfcAsymmetricIShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcAsymmetricIShapeProfileDef::s_type == t ? true : IfcIShapeProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_topFlangeWidth;
    }
    else {
        return Step::getUnset(m_topFlangeWidth);
    }
}

const IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeWidth() const {
    IfcAsymmetricIShapeProfileDef * deConstObject = const_cast< IfcAsymmetricIShapeProfileDef * > (this);
    return deConstObject->getTopFlangeWidth();
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeWidth(IfcPositiveLengthMeasure value) {
    m_topFlangeWidth = value;
}

void IfcAsymmetricIShapeProfileDef::unsetTopFlangeWidth() {
    m_topFlangeWidth = Step::getUnset(getTopFlangeWidth());
}

bool IfcAsymmetricIShapeProfileDef::testTopFlangeWidth() const {
    return !Step::isUnset(getTopFlangeWidth());
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_topFlangeThickness;
    }
    else {
        return Step::getUnset(m_topFlangeThickness);
    }
}

const IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeThickness() const {
    IfcAsymmetricIShapeProfileDef * deConstObject = const_cast< IfcAsymmetricIShapeProfileDef * > (this);
    return deConstObject->getTopFlangeThickness();
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeThickness(IfcPositiveLengthMeasure value) {
    m_topFlangeThickness = value;
}

void IfcAsymmetricIShapeProfileDef::unsetTopFlangeThickness() {
    m_topFlangeThickness = Step::getUnset(getTopFlangeThickness());
}

bool IfcAsymmetricIShapeProfileDef::testTopFlangeThickness() const {
    return !Step::isUnset(getTopFlangeThickness());
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_topFlangeFilletRadius;
    }
    else {
        return Step::getUnset(m_topFlangeFilletRadius);
    }
}

const IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeFilletRadius() const {
    IfcAsymmetricIShapeProfileDef * deConstObject = const_cast< IfcAsymmetricIShapeProfileDef * > (this);
    return deConstObject->getTopFlangeFilletRadius();
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeFilletRadius(IfcPositiveLengthMeasure value) {
    m_topFlangeFilletRadius = value;
}

void IfcAsymmetricIShapeProfileDef::unsetTopFlangeFilletRadius() {
    m_topFlangeFilletRadius = Step::getUnset(getTopFlangeFilletRadius());
}

bool IfcAsymmetricIShapeProfileDef::testTopFlangeFilletRadius() const {
    return !Step::isUnset(getTopFlangeFilletRadius());
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

const IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getCentreOfGravityInY() const {
    IfcAsymmetricIShapeProfileDef * deConstObject = const_cast< IfcAsymmetricIShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInY();
}

void IfcAsymmetricIShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcAsymmetricIShapeProfileDef::unsetCentreOfGravityInY() {
    m_centreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcAsymmetricIShapeProfileDef::testCentreOfGravityInY() const {
    return !Step::isUnset(getCentreOfGravityInY());
}

bool IfcAsymmetricIShapeProfileDef::init() {
    bool status = IfcIShapeProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topFlangeWidth = Step::getUnset(m_topFlangeWidth);
    }
    else {
        m_topFlangeWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topFlangeThickness = Step::getUnset(m_topFlangeThickness);
    }
    else {
        m_topFlangeThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topFlangeFilletRadius = Step::getUnset(m_topFlangeFilletRadius);
    }
    else {
        m_topFlangeFilletRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
    }
    else {
        m_centreOfGravityInY = Step::spfToReal(arg);
    }
    return true;
}

void IfcAsymmetricIShapeProfileDef::copy(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop) {
    IfcIShapeProfileDef::copy(obj, copyop);
    setTopFlangeWidth(obj.m_topFlangeWidth);
    setTopFlangeThickness(obj.m_topFlangeThickness);
    setTopFlangeFilletRadius(obj.m_topFlangeFilletRadius);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAsymmetricIShapeProfileDef::s_type("IfcAsymmetricIShapeProfileDef");
