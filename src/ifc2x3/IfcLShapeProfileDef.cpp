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



#include <ifc2x3/IfcLShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLShapeProfileDef::IfcLShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_depth = Step::getUnset(m_depth);
    m_width = Step::getUnset(m_width);
    m_thickness = Step::getUnset(m_thickness);
    m_filletRadius = Step::getUnset(m_filletRadius);
    m_edgeRadius = Step::getUnset(m_edgeRadius);
    m_legSlope = Step::getUnset(m_legSlope);
    m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcLShapeProfileDef::~IfcLShapeProfileDef() {
}

bool IfcLShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLShapeProfileDef(this);
}

const std::string &IfcLShapeProfileDef::type() const {
    return IfcLShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcLShapeProfileDef::getClassType() {
    return IfcLShapeProfileDef::s_type;
}

const Step::ClassType &IfcLShapeProfileDef::getType() const {
    return IfcLShapeProfileDef::s_type;
}

bool IfcLShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcLShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getDepth() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getDepth();
}

void IfcLShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

void IfcLShapeProfileDef::unsetDepth() {
    m_depth = Step::getUnset(getDepth());
}

bool IfcLShapeProfileDef::testDepth() const {
    return !Step::isUnset(getDepth());
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getWidth() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getWidth();
}

void IfcLShapeProfileDef::setWidth(IfcPositiveLengthMeasure value) {
    m_width = value;
}

void IfcLShapeProfileDef::unsetWidth() {
    m_width = Step::getUnset(getWidth());
}

bool IfcLShapeProfileDef::testWidth() const {
    return !Step::isUnset(getWidth());
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getThickness() {
    if (Step::BaseObject::inited()) {
        return m_thickness;
    }
    else {
        return Step::getUnset(m_thickness);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getThickness() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getThickness();
}

void IfcLShapeProfileDef::setThickness(IfcPositiveLengthMeasure value) {
    m_thickness = value;
}

void IfcLShapeProfileDef::unsetThickness() {
    m_thickness = Step::getUnset(getThickness());
}

bool IfcLShapeProfileDef::testThickness() const {
    return !Step::isUnset(getThickness());
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getFilletRadius() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getFilletRadius();
}

void IfcLShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

void IfcLShapeProfileDef::unsetFilletRadius() {
    m_filletRadius = Step::getUnset(getFilletRadius());
}

bool IfcLShapeProfileDef::testFilletRadius() const {
    return !Step::isUnset(getFilletRadius());
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_edgeRadius;
    }
    else {
        return Step::getUnset(m_edgeRadius);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getEdgeRadius() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getEdgeRadius();
}

void IfcLShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
    m_edgeRadius = value;
}

void IfcLShapeProfileDef::unsetEdgeRadius() {
    m_edgeRadius = Step::getUnset(getEdgeRadius());
}

bool IfcLShapeProfileDef::testEdgeRadius() const {
    return !Step::isUnset(getEdgeRadius());
}

IfcPlaneAngleMeasure IfcLShapeProfileDef::getLegSlope() {
    if (Step::BaseObject::inited()) {
        return m_legSlope;
    }
    else {
        return Step::getUnset(m_legSlope);
    }
}

const IfcPlaneAngleMeasure IfcLShapeProfileDef::getLegSlope() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getLegSlope();
}

void IfcLShapeProfileDef::setLegSlope(IfcPlaneAngleMeasure value) {
    m_legSlope = value;
}

void IfcLShapeProfileDef::unsetLegSlope() {
    m_legSlope = Step::getUnset(getLegSlope());
}

bool IfcLShapeProfileDef::testLegSlope() const {
    return !Step::isUnset(getLegSlope());
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInX() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInX();
}

void IfcLShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInX = value;
}

void IfcLShapeProfileDef::unsetCentreOfGravityInX() {
    m_centreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcLShapeProfileDef::testCentreOfGravityInX() const {
    return !Step::isUnset(getCentreOfGravityInX());
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

const IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInY() const {
    IfcLShapeProfileDef * deConstObject = const_cast< IfcLShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInY();
}

void IfcLShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcLShapeProfileDef::unsetCentreOfGravityInY() {
    m_centreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcLShapeProfileDef::testCentreOfGravityInY() const {
    return !Step::isUnset(getCentreOfGravityInY());
}

bool IfcLShapeProfileDef::init() {
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
        m_thickness = Step::getUnset(m_thickness);
    }
    else {
        m_thickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_filletRadius = Step::getUnset(m_filletRadius);
    }
    else {
        m_filletRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeRadius = Step::getUnset(m_edgeRadius);
    }
    else {
        m_edgeRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_legSlope = Step::getUnset(m_legSlope);
    }
    else {
        m_legSlope = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
    }
    else {
        m_centreOfGravityInX = Step::spfToReal(arg);
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

void IfcLShapeProfileDef::copy(const IfcLShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_depth);
    setWidth(obj.m_width);
    setThickness(obj.m_thickness);
    setFilletRadius(obj.m_filletRadius);
    setEdgeRadius(obj.m_edgeRadius);
    setLegSlope(obj.m_legSlope);
    setCentreOfGravityInX(obj.m_centreOfGravityInX);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLShapeProfileDef::s_type("IfcLShapeProfileDef");
