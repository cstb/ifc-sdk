/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcCraneRailFShapeProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

IFC2X3_DLL_DEF Step::ClassType IfcCraneRailFShapeProfileDef::s_type("IfcCraneRailFShapeProfileDef");
