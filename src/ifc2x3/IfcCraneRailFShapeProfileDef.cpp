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



#include <ifc2x3/IfcCraneRailFShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCraneRailFShapeProfileDef::IfcCraneRailFShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_overallHeight = Step::getUnset(m_overallHeight);
    m_headWidth = Step::getUnset(m_headWidth);
    m_radius = Step::getUnset(m_radius);
    m_headDepth2 = Step::getUnset(m_headDepth2);
    m_headDepth3 = Step::getUnset(m_headDepth3);
    m_webThickness = Step::getUnset(m_webThickness);
    m_baseDepth1 = Step::getUnset(m_baseDepth1);
    m_baseDepth2 = Step::getUnset(m_baseDepth2);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcCraneRailFShapeProfileDef::~IfcCraneRailFShapeProfileDef() {
}

bool IfcCraneRailFShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCraneRailFShapeProfileDef(this);
}

const std::string &IfcCraneRailFShapeProfileDef::type() const {
    return IfcCraneRailFShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcCraneRailFShapeProfileDef::getClassType() {
    return IfcCraneRailFShapeProfileDef::s_type;
}

const Step::ClassType &IfcCraneRailFShapeProfileDef::getType() const {
    return IfcCraneRailFShapeProfileDef::s_type;
}

bool IfcCraneRailFShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCraneRailFShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getOverallHeight() {
    if (Step::BaseObject::inited()) {
        return m_overallHeight;
    }
    else {
        return Step::getUnset(m_overallHeight);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getOverallHeight() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getOverallHeight();
}

void IfcCraneRailFShapeProfileDef::setOverallHeight(IfcPositiveLengthMeasure value) {
    m_overallHeight = value;
}

void IfcCraneRailFShapeProfileDef::unsetOverallHeight() {
    m_overallHeight = Step::getUnset(getOverallHeight());
}

bool IfcCraneRailFShapeProfileDef::testOverallHeight() const {
    return !Step::isUnset(getOverallHeight());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadWidth() {
    if (Step::BaseObject::inited()) {
        return m_headWidth;
    }
    else {
        return Step::getUnset(m_headWidth);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadWidth() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getHeadWidth();
}

void IfcCraneRailFShapeProfileDef::setHeadWidth(IfcPositiveLengthMeasure value) {
    m_headWidth = value;
}

void IfcCraneRailFShapeProfileDef::unsetHeadWidth() {
    m_headWidth = Step::getUnset(getHeadWidth());
}

bool IfcCraneRailFShapeProfileDef::testHeadWidth() const {
    return !Step::isUnset(getHeadWidth());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getRadius() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getRadius();
}

void IfcCraneRailFShapeProfileDef::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcCraneRailFShapeProfileDef::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcCraneRailFShapeProfileDef::testRadius() const {
    return !Step::isUnset(getRadius());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth2() {
    if (Step::BaseObject::inited()) {
        return m_headDepth2;
    }
    else {
        return Step::getUnset(m_headDepth2);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth2() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getHeadDepth2();
}

void IfcCraneRailFShapeProfileDef::setHeadDepth2(IfcPositiveLengthMeasure value) {
    m_headDepth2 = value;
}

void IfcCraneRailFShapeProfileDef::unsetHeadDepth2() {
    m_headDepth2 = Step::getUnset(getHeadDepth2());
}

bool IfcCraneRailFShapeProfileDef::testHeadDepth2() const {
    return !Step::isUnset(getHeadDepth2());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth3() {
    if (Step::BaseObject::inited()) {
        return m_headDepth3;
    }
    else {
        return Step::getUnset(m_headDepth3);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth3() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getHeadDepth3();
}

void IfcCraneRailFShapeProfileDef::setHeadDepth3(IfcPositiveLengthMeasure value) {
    m_headDepth3 = value;
}

void IfcCraneRailFShapeProfileDef::unsetHeadDepth3() {
    m_headDepth3 = Step::getUnset(getHeadDepth3());
}

bool IfcCraneRailFShapeProfileDef::testHeadDepth3() const {
    return !Step::isUnset(getHeadDepth3());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getWebThickness() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getWebThickness();
}

void IfcCraneRailFShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

void IfcCraneRailFShapeProfileDef::unsetWebThickness() {
    m_webThickness = Step::getUnset(getWebThickness());
}

bool IfcCraneRailFShapeProfileDef::testWebThickness() const {
    return !Step::isUnset(getWebThickness());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth1() {
    if (Step::BaseObject::inited()) {
        return m_baseDepth1;
    }
    else {
        return Step::getUnset(m_baseDepth1);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth1() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getBaseDepth1();
}

void IfcCraneRailFShapeProfileDef::setBaseDepth1(IfcPositiveLengthMeasure value) {
    m_baseDepth1 = value;
}

void IfcCraneRailFShapeProfileDef::unsetBaseDepth1() {
    m_baseDepth1 = Step::getUnset(getBaseDepth1());
}

bool IfcCraneRailFShapeProfileDef::testBaseDepth1() const {
    return !Step::isUnset(getBaseDepth1());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth2() {
    if (Step::BaseObject::inited()) {
        return m_baseDepth2;
    }
    else {
        return Step::getUnset(m_baseDepth2);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth2() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getBaseDepth2();
}

void IfcCraneRailFShapeProfileDef::setBaseDepth2(IfcPositiveLengthMeasure value) {
    m_baseDepth2 = value;
}

void IfcCraneRailFShapeProfileDef::unsetBaseDepth2() {
    m_baseDepth2 = Step::getUnset(getBaseDepth2());
}

bool IfcCraneRailFShapeProfileDef::testBaseDepth2() const {
    return !Step::isUnset(getBaseDepth2());
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getCentreOfGravityInY() const {
    IfcCraneRailFShapeProfileDef * deConstObject = const_cast< IfcCraneRailFShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInY();
}

void IfcCraneRailFShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcCraneRailFShapeProfileDef::unsetCentreOfGravityInY() {
    m_centreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcCraneRailFShapeProfileDef::testCentreOfGravityInY() const {
    return !Step::isUnset(getCentreOfGravityInY());
}

bool IfcCraneRailFShapeProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallHeight = Step::getUnset(m_overallHeight);
    }
    else {
        m_overallHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_headWidth = Step::getUnset(m_headWidth);
    }
    else {
        m_headWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_headDepth2 = Step::getUnset(m_headDepth2);
    }
    else {
        m_headDepth2 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_headDepth3 = Step::getUnset(m_headDepth3);
    }
    else {
        m_headDepth3 = Step::spfToReal(arg);
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
        m_baseDepth1 = Step::getUnset(m_baseDepth1);
    }
    else {
        m_baseDepth1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_baseDepth2 = Step::getUnset(m_baseDepth2);
    }
    else {
        m_baseDepth2 = Step::spfToReal(arg);
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

void IfcCraneRailFShapeProfileDef::copy(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setOverallHeight(obj.m_overallHeight);
    setHeadWidth(obj.m_headWidth);
    setRadius(obj.m_radius);
    setHeadDepth2(obj.m_headDepth2);
    setHeadDepth3(obj.m_headDepth3);
    setWebThickness(obj.m_webThickness);
    setBaseDepth1(obj.m_baseDepth1);
    setBaseDepth2(obj.m_baseDepth2);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCraneRailFShapeProfileDef::s_type("IfcCraneRailFShapeProfileDef");
