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



#include <ifc2x3/IfcTShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTShapeProfileDef::IfcTShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_depth = Step::getUnset(m_depth);
    m_flangeWidth = Step::getUnset(m_flangeWidth);
    m_webThickness = Step::getUnset(m_webThickness);
    m_flangeThickness = Step::getUnset(m_flangeThickness);
    m_filletRadius = Step::getUnset(m_filletRadius);
    m_flangeEdgeRadius = Step::getUnset(m_flangeEdgeRadius);
    m_webEdgeRadius = Step::getUnset(m_webEdgeRadius);
    m_webSlope = Step::getUnset(m_webSlope);
    m_flangeSlope = Step::getUnset(m_flangeSlope);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcTShapeProfileDef::~IfcTShapeProfileDef() {
}

bool IfcTShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTShapeProfileDef(this);
}

const std::string &IfcTShapeProfileDef::type() const {
    return IfcTShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcTShapeProfileDef::getClassType() {
    return IfcTShapeProfileDef::s_type;
}

const Step::ClassType &IfcTShapeProfileDef::getType() const {
    return IfcTShapeProfileDef::s_type;
}

bool IfcTShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcTShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getDepth() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getDepth();
}

void IfcTShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

void IfcTShapeProfileDef::unsetDepth() {
    m_depth = Step::getUnset(getDepth());
}

bool IfcTShapeProfileDef::testDepth() const {
    return !Step::isUnset(getDepth());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_flangeWidth;
    }
    else {
        return Step::getUnset(m_flangeWidth);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeWidth() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getFlangeWidth();
}

void IfcTShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
    m_flangeWidth = value;
}

void IfcTShapeProfileDef::unsetFlangeWidth() {
    m_flangeWidth = Step::getUnset(getFlangeWidth());
}

bool IfcTShapeProfileDef::testFlangeWidth() const {
    return !Step::isUnset(getFlangeWidth());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebThickness() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getWebThickness();
}

void IfcTShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

void IfcTShapeProfileDef::unsetWebThickness() {
    m_webThickness = Step::getUnset(getWebThickness());
}

bool IfcTShapeProfileDef::testWebThickness() const {
    return !Step::isUnset(getWebThickness());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_flangeThickness;
    }
    else {
        return Step::getUnset(m_flangeThickness);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeThickness() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getFlangeThickness();
}

void IfcTShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
    m_flangeThickness = value;
}

void IfcTShapeProfileDef::unsetFlangeThickness() {
    m_flangeThickness = Step::getUnset(getFlangeThickness());
}

bool IfcTShapeProfileDef::testFlangeThickness() const {
    return !Step::isUnset(getFlangeThickness());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getFilletRadius() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getFilletRadius();
}

void IfcTShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

void IfcTShapeProfileDef::unsetFilletRadius() {
    m_filletRadius = Step::getUnset(getFilletRadius());
}

bool IfcTShapeProfileDef::testFilletRadius() const {
    return !Step::isUnset(getFilletRadius());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_flangeEdgeRadius;
    }
    else {
        return Step::getUnset(m_flangeEdgeRadius);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeEdgeRadius() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getFlangeEdgeRadius();
}

void IfcTShapeProfileDef::setFlangeEdgeRadius(IfcPositiveLengthMeasure value) {
    m_flangeEdgeRadius = value;
}

void IfcTShapeProfileDef::unsetFlangeEdgeRadius() {
    m_flangeEdgeRadius = Step::getUnset(getFlangeEdgeRadius());
}

bool IfcTShapeProfileDef::testFlangeEdgeRadius() const {
    return !Step::isUnset(getFlangeEdgeRadius());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_webEdgeRadius;
    }
    else {
        return Step::getUnset(m_webEdgeRadius);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebEdgeRadius() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getWebEdgeRadius();
}

void IfcTShapeProfileDef::setWebEdgeRadius(IfcPositiveLengthMeasure value) {
    m_webEdgeRadius = value;
}

void IfcTShapeProfileDef::unsetWebEdgeRadius() {
    m_webEdgeRadius = Step::getUnset(getWebEdgeRadius());
}

bool IfcTShapeProfileDef::testWebEdgeRadius() const {
    return !Step::isUnset(getWebEdgeRadius());
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getWebSlope() {
    if (Step::BaseObject::inited()) {
        return m_webSlope;
    }
    else {
        return Step::getUnset(m_webSlope);
    }
}

const IfcPlaneAngleMeasure IfcTShapeProfileDef::getWebSlope() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getWebSlope();
}

void IfcTShapeProfileDef::setWebSlope(IfcPlaneAngleMeasure value) {
    m_webSlope = value;
}

void IfcTShapeProfileDef::unsetWebSlope() {
    m_webSlope = Step::getUnset(getWebSlope());
}

bool IfcTShapeProfileDef::testWebSlope() const {
    return !Step::isUnset(getWebSlope());
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getFlangeSlope() {
    if (Step::BaseObject::inited()) {
        return m_flangeSlope;
    }
    else {
        return Step::getUnset(m_flangeSlope);
    }
}

const IfcPlaneAngleMeasure IfcTShapeProfileDef::getFlangeSlope() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getFlangeSlope();
}

void IfcTShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value) {
    m_flangeSlope = value;
}

void IfcTShapeProfileDef::unsetFlangeSlope() {
    m_flangeSlope = Step::getUnset(getFlangeSlope());
}

bool IfcTShapeProfileDef::testFlangeSlope() const {
    return !Step::isUnset(getFlangeSlope());
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

const IfcPositiveLengthMeasure IfcTShapeProfileDef::getCentreOfGravityInY() const {
    IfcTShapeProfileDef * deConstObject = const_cast< IfcTShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInY();
}

void IfcTShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcTShapeProfileDef::unsetCentreOfGravityInY() {
    m_centreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcTShapeProfileDef::testCentreOfGravityInY() const {
    return !Step::isUnset(getCentreOfGravityInY());
}

bool IfcTShapeProfileDef::init() {
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
        m_flangeWidth = Step::getUnset(m_flangeWidth);
    }
    else {
        m_flangeWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_webThickness = Step::getUnset(m_webThickness);
    }
    else {
        m_webThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeThickness = Step::getUnset(m_flangeThickness);
    }
    else {
        m_flangeThickness = Step::spfToReal(arg);
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
        m_flangeEdgeRadius = Step::getUnset(m_flangeEdgeRadius);
    }
    else {
        m_flangeEdgeRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_webEdgeRadius = Step::getUnset(m_webEdgeRadius);
    }
    else {
        m_webEdgeRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_webSlope = Step::getUnset(m_webSlope);
    }
    else {
        m_webSlope = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeSlope = Step::getUnset(m_flangeSlope);
    }
    else {
        m_flangeSlope = Step::spfToReal(arg);
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

void IfcTShapeProfileDef::copy(const IfcTShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_depth);
    setFlangeWidth(obj.m_flangeWidth);
    setWebThickness(obj.m_webThickness);
    setFlangeThickness(obj.m_flangeThickness);
    setFilletRadius(obj.m_filletRadius);
    setFlangeEdgeRadius(obj.m_flangeEdgeRadius);
    setWebEdgeRadius(obj.m_webEdgeRadius);
    setWebSlope(obj.m_webSlope);
    setFlangeSlope(obj.m_flangeSlope);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTShapeProfileDef::s_type("IfcTShapeProfileDef");
