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



#include <ifc2x3/IfcCraneRailAShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCraneRailAShapeProfileDef::IfcCraneRailAShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_overallHeight = Step::getUnset(m_overallHeight);
    m_baseWidth2 = Step::getUnset(m_baseWidth2);
    m_radius = Step::getUnset(m_radius);
    m_headWidth = Step::getUnset(m_headWidth);
    m_headDepth2 = Step::getUnset(m_headDepth2);
    m_headDepth3 = Step::getUnset(m_headDepth3);
    m_webThickness = Step::getUnset(m_webThickness);
    m_baseWidth4 = Step::getUnset(m_baseWidth4);
    m_baseDepth1 = Step::getUnset(m_baseDepth1);
    m_baseDepth2 = Step::getUnset(m_baseDepth2);
    m_baseDepth3 = Step::getUnset(m_baseDepth3);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcCraneRailAShapeProfileDef::~IfcCraneRailAShapeProfileDef() {
}

bool IfcCraneRailAShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCraneRailAShapeProfileDef(this);
}

const std::string &IfcCraneRailAShapeProfileDef::type() const {
    return IfcCraneRailAShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcCraneRailAShapeProfileDef::getClassType() {
    return IfcCraneRailAShapeProfileDef::s_type;
}

const Step::ClassType &IfcCraneRailAShapeProfileDef::getType() const {
    return IfcCraneRailAShapeProfileDef::s_type;
}

bool IfcCraneRailAShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCraneRailAShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getOverallHeight() {
    if (Step::BaseObject::inited()) {
        return m_overallHeight;
    }
    else {
        return Step::getUnset(m_overallHeight);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getOverallHeight() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getOverallHeight();
}

void IfcCraneRailAShapeProfileDef::setOverallHeight(IfcPositiveLengthMeasure value) {
    m_overallHeight = value;
}

void IfcCraneRailAShapeProfileDef::unsetOverallHeight() {
    m_overallHeight = Step::getUnset(getOverallHeight());
}

bool IfcCraneRailAShapeProfileDef::testOverallHeight() const {
    return !Step::isUnset(getOverallHeight());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth2() {
    if (Step::BaseObject::inited()) {
        return m_baseWidth2;
    }
    else {
        return Step::getUnset(m_baseWidth2);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth2() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getBaseWidth2();
}

void IfcCraneRailAShapeProfileDef::setBaseWidth2(IfcPositiveLengthMeasure value) {
    m_baseWidth2 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseWidth2() {
    m_baseWidth2 = Step::getUnset(getBaseWidth2());
}

bool IfcCraneRailAShapeProfileDef::testBaseWidth2() const {
    return !Step::isUnset(getBaseWidth2());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getRadius() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getRadius();
}

void IfcCraneRailAShapeProfileDef::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcCraneRailAShapeProfileDef::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcCraneRailAShapeProfileDef::testRadius() const {
    return !Step::isUnset(getRadius());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadWidth() {
    if (Step::BaseObject::inited()) {
        return m_headWidth;
    }
    else {
        return Step::getUnset(m_headWidth);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadWidth() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getHeadWidth();
}

void IfcCraneRailAShapeProfileDef::setHeadWidth(IfcPositiveLengthMeasure value) {
    m_headWidth = value;
}

void IfcCraneRailAShapeProfileDef::unsetHeadWidth() {
    m_headWidth = Step::getUnset(getHeadWidth());
}

bool IfcCraneRailAShapeProfileDef::testHeadWidth() const {
    return !Step::isUnset(getHeadWidth());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth2() {
    if (Step::BaseObject::inited()) {
        return m_headDepth2;
    }
    else {
        return Step::getUnset(m_headDepth2);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth2() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getHeadDepth2();
}

void IfcCraneRailAShapeProfileDef::setHeadDepth2(IfcPositiveLengthMeasure value) {
    m_headDepth2 = value;
}

void IfcCraneRailAShapeProfileDef::unsetHeadDepth2() {
    m_headDepth2 = Step::getUnset(getHeadDepth2());
}

bool IfcCraneRailAShapeProfileDef::testHeadDepth2() const {
    return !Step::isUnset(getHeadDepth2());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth3() {
    if (Step::BaseObject::inited()) {
        return m_headDepth3;
    }
    else {
        return Step::getUnset(m_headDepth3);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth3() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getHeadDepth3();
}

void IfcCraneRailAShapeProfileDef::setHeadDepth3(IfcPositiveLengthMeasure value) {
    m_headDepth3 = value;
}

void IfcCraneRailAShapeProfileDef::unsetHeadDepth3() {
    m_headDepth3 = Step::getUnset(getHeadDepth3());
}

bool IfcCraneRailAShapeProfileDef::testHeadDepth3() const {
    return !Step::isUnset(getHeadDepth3());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getWebThickness() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getWebThickness();
}

void IfcCraneRailAShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

void IfcCraneRailAShapeProfileDef::unsetWebThickness() {
    m_webThickness = Step::getUnset(getWebThickness());
}

bool IfcCraneRailAShapeProfileDef::testWebThickness() const {
    return !Step::isUnset(getWebThickness());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth4() {
    if (Step::BaseObject::inited()) {
        return m_baseWidth4;
    }
    else {
        return Step::getUnset(m_baseWidth4);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth4() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getBaseWidth4();
}

void IfcCraneRailAShapeProfileDef::setBaseWidth4(IfcPositiveLengthMeasure value) {
    m_baseWidth4 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseWidth4() {
    m_baseWidth4 = Step::getUnset(getBaseWidth4());
}

bool IfcCraneRailAShapeProfileDef::testBaseWidth4() const {
    return !Step::isUnset(getBaseWidth4());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth1() {
    if (Step::BaseObject::inited()) {
        return m_baseDepth1;
    }
    else {
        return Step::getUnset(m_baseDepth1);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth1() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getBaseDepth1();
}

void IfcCraneRailAShapeProfileDef::setBaseDepth1(IfcPositiveLengthMeasure value) {
    m_baseDepth1 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseDepth1() {
    m_baseDepth1 = Step::getUnset(getBaseDepth1());
}

bool IfcCraneRailAShapeProfileDef::testBaseDepth1() const {
    return !Step::isUnset(getBaseDepth1());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth2() {
    if (Step::BaseObject::inited()) {
        return m_baseDepth2;
    }
    else {
        return Step::getUnset(m_baseDepth2);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth2() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getBaseDepth2();
}

void IfcCraneRailAShapeProfileDef::setBaseDepth2(IfcPositiveLengthMeasure value) {
    m_baseDepth2 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseDepth2() {
    m_baseDepth2 = Step::getUnset(getBaseDepth2());
}

bool IfcCraneRailAShapeProfileDef::testBaseDepth2() const {
    return !Step::isUnset(getBaseDepth2());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth3() {
    if (Step::BaseObject::inited()) {
        return m_baseDepth3;
    }
    else {
        return Step::getUnset(m_baseDepth3);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth3() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getBaseDepth3();
}

void IfcCraneRailAShapeProfileDef::setBaseDepth3(IfcPositiveLengthMeasure value) {
    m_baseDepth3 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseDepth3() {
    m_baseDepth3 = Step::getUnset(getBaseDepth3());
}

bool IfcCraneRailAShapeProfileDef::testBaseDepth3() const {
    return !Step::isUnset(getBaseDepth3());
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

const IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getCentreOfGravityInY() const {
    IfcCraneRailAShapeProfileDef * deConstObject = const_cast< IfcCraneRailAShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInY();
}

void IfcCraneRailAShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcCraneRailAShapeProfileDef::unsetCentreOfGravityInY() {
    m_centreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcCraneRailAShapeProfileDef::testCentreOfGravityInY() const {
    return !Step::isUnset(getCentreOfGravityInY());
}

bool IfcCraneRailAShapeProfileDef::init() {
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
        m_baseWidth2 = Step::getUnset(m_baseWidth2);
    }
    else {
        m_baseWidth2 = Step::spfToReal(arg);
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
        m_headWidth = Step::getUnset(m_headWidth);
    }
    else {
        m_headWidth = Step::spfToReal(arg);
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
        m_baseWidth4 = Step::getUnset(m_baseWidth4);
    }
    else {
        m_baseWidth4 = Step::spfToReal(arg);
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
        m_baseDepth3 = Step::getUnset(m_baseDepth3);
    }
    else {
        m_baseDepth3 = Step::spfToReal(arg);
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

void IfcCraneRailAShapeProfileDef::copy(const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setOverallHeight(obj.m_overallHeight);
    setBaseWidth2(obj.m_baseWidth2);
    setRadius(obj.m_radius);
    setHeadWidth(obj.m_headWidth);
    setHeadDepth2(obj.m_headDepth2);
    setHeadDepth3(obj.m_headDepth3);
    setWebThickness(obj.m_webThickness);
    setBaseWidth4(obj.m_baseWidth4);
    setBaseDepth1(obj.m_baseDepth1);
    setBaseDepth2(obj.m_baseDepth2);
    setBaseDepth3(obj.m_baseDepth3);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCraneRailAShapeProfileDef::s_type("IfcCraneRailAShapeProfileDef");
