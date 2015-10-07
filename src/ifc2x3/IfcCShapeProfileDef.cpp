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



#include <ifc2x3/IfcCShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCShapeProfileDef::IfcCShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_depth = Step::getUnset(m_depth);
    m_width = Step::getUnset(m_width);
    m_wallThickness = Step::getUnset(m_wallThickness);
    m_girth = Step::getUnset(m_girth);
    m_internalFilletRadius = Step::getUnset(m_internalFilletRadius);
    m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
}

IfcCShapeProfileDef::~IfcCShapeProfileDef() {
}

bool IfcCShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCShapeProfileDef(this);
}

const std::string &IfcCShapeProfileDef::type() const {
    return IfcCShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcCShapeProfileDef::getClassType() {
    return IfcCShapeProfileDef::s_type;
}

const Step::ClassType &IfcCShapeProfileDef::getType() const {
    return IfcCShapeProfileDef::s_type;
}

bool IfcCShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcPositiveLengthMeasure IfcCShapeProfileDef::getDepth() const {
    IfcCShapeProfileDef * deConstObject = const_cast< IfcCShapeProfileDef * > (this);
    return deConstObject->getDepth();
}

void IfcCShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

void IfcCShapeProfileDef::unsetDepth() {
    m_depth = Step::getUnset(getDepth());
}

bool IfcCShapeProfileDef::testDepth() const {
    return !Step::isUnset(getDepth());
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

const IfcPositiveLengthMeasure IfcCShapeProfileDef::getWidth() const {
    IfcCShapeProfileDef * deConstObject = const_cast< IfcCShapeProfileDef * > (this);
    return deConstObject->getWidth();
}

void IfcCShapeProfileDef::setWidth(IfcPositiveLengthMeasure value) {
    m_width = value;
}

void IfcCShapeProfileDef::unsetWidth() {
    m_width = Step::getUnset(getWidth());
}

bool IfcCShapeProfileDef::testWidth() const {
    return !Step::isUnset(getWidth());
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWallThickness() {
    if (Step::BaseObject::inited()) {
        return m_wallThickness;
    }
    else {
        return Step::getUnset(m_wallThickness);
    }
}

const IfcPositiveLengthMeasure IfcCShapeProfileDef::getWallThickness() const {
    IfcCShapeProfileDef * deConstObject = const_cast< IfcCShapeProfileDef * > (this);
    return deConstObject->getWallThickness();
}

void IfcCShapeProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
    m_wallThickness = value;
}

void IfcCShapeProfileDef::unsetWallThickness() {
    m_wallThickness = Step::getUnset(getWallThickness());
}

bool IfcCShapeProfileDef::testWallThickness() const {
    return !Step::isUnset(getWallThickness());
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getGirth() {
    if (Step::BaseObject::inited()) {
        return m_girth;
    }
    else {
        return Step::getUnset(m_girth);
    }
}

const IfcPositiveLengthMeasure IfcCShapeProfileDef::getGirth() const {
    IfcCShapeProfileDef * deConstObject = const_cast< IfcCShapeProfileDef * > (this);
    return deConstObject->getGirth();
}

void IfcCShapeProfileDef::setGirth(IfcPositiveLengthMeasure value) {
    m_girth = value;
}

void IfcCShapeProfileDef::unsetGirth() {
    m_girth = Step::getUnset(getGirth());
}

bool IfcCShapeProfileDef::testGirth() const {
    return !Step::isUnset(getGirth());
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getInternalFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_internalFilletRadius;
    }
    else {
        return Step::getUnset(m_internalFilletRadius);
    }
}

const IfcPositiveLengthMeasure IfcCShapeProfileDef::getInternalFilletRadius() const {
    IfcCShapeProfileDef * deConstObject = const_cast< IfcCShapeProfileDef * > (this);
    return deConstObject->getInternalFilletRadius();
}

void IfcCShapeProfileDef::setInternalFilletRadius(IfcPositiveLengthMeasure value) {
    m_internalFilletRadius = value;
}

void IfcCShapeProfileDef::unsetInternalFilletRadius() {
    m_internalFilletRadius = Step::getUnset(getInternalFilletRadius());
}

bool IfcCShapeProfileDef::testInternalFilletRadius() const {
    return !Step::isUnset(getInternalFilletRadius());
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

const IfcPositiveLengthMeasure IfcCShapeProfileDef::getCentreOfGravityInX() const {
    IfcCShapeProfileDef * deConstObject = const_cast< IfcCShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInX();
}

void IfcCShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInX = value;
}

void IfcCShapeProfileDef::unsetCentreOfGravityInX() {
    m_centreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcCShapeProfileDef::testCentreOfGravityInX() const {
    return !Step::isUnset(getCentreOfGravityInX());
}

bool IfcCShapeProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_width = Step::getUnset(m_width);
    }
    else {
        m_width = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wallThickness = Step::getUnset(m_wallThickness);
    }
    else {
        m_wallThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_girth = Step::getUnset(m_girth);
    }
    else {
        m_girth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_internalFilletRadius = Step::getUnset(m_internalFilletRadius);
    }
    else {
        m_internalFilletRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
    }
    else {
        m_centreOfGravityInX = Step::spfToReal(arg);
    }
    return true;
}

void IfcCShapeProfileDef::copy(const IfcCShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_depth);
    setWidth(obj.m_width);
    setWallThickness(obj.m_wallThickness);
    setGirth(obj.m_girth);
    setInternalFilletRadius(obj.m_internalFilletRadius);
    setCentreOfGravityInX(obj.m_centreOfGravityInX);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCShapeProfileDef::s_type("IfcCShapeProfileDef");
