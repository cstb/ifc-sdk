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

#include "ifc2x3/IfcUShapeProfileDef.h"

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

IfcUShapeProfileDef::IfcUShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_depth = Step::getUnset(m_depth);
    m_flangeWidth = Step::getUnset(m_flangeWidth);
    m_webThickness = Step::getUnset(m_webThickness);
    m_flangeThickness = Step::getUnset(m_flangeThickness);
    m_filletRadius = Step::getUnset(m_filletRadius);
    m_edgeRadius = Step::getUnset(m_edgeRadius);
    m_flangeSlope = Step::getUnset(m_flangeSlope);
    m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
}

IfcUShapeProfileDef::~IfcUShapeProfileDef() {
}

bool IfcUShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcUShapeProfileDef(this);
}

const std::string &IfcUShapeProfileDef::type() const {
    return IfcUShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcUShapeProfileDef::getClassType() {
    return IfcUShapeProfileDef::s_type;
}

const Step::ClassType &IfcUShapeProfileDef::getType() const {
    return IfcUShapeProfileDef::s_type;
}

bool IfcUShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcUShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getDepth() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getDepth();
}

void IfcUShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_flangeWidth;
    }
    else {
        return Step::getUnset(m_flangeWidth);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeWidth() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getFlangeWidth();
}

void IfcUShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
    m_flangeWidth = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getWebThickness() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getWebThickness();
}

void IfcUShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_flangeThickness;
    }
    else {
        return Step::getUnset(m_flangeThickness);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeThickness() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getFlangeThickness();
}

void IfcUShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
    m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getFilletRadius() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getFilletRadius();
}

void IfcUShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_edgeRadius;
    }
    else {
        return Step::getUnset(m_edgeRadius);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getEdgeRadius() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getEdgeRadius();
}

void IfcUShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
    m_edgeRadius = value;
}

IfcPlaneAngleMeasure IfcUShapeProfileDef::getFlangeSlope() {
    if (Step::BaseObject::inited()) {
        return m_flangeSlope;
    }
    else {
        return Step::getUnset(m_flangeSlope);
    }
}

const IfcPlaneAngleMeasure IfcUShapeProfileDef::getFlangeSlope() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getFlangeSlope();
}

void IfcUShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value) {
    m_flangeSlope = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

const IfcPositiveLengthMeasure IfcUShapeProfileDef::getCentreOfGravityInX() const {
    IfcUShapeProfileDef * deConstObject = const_cast< IfcUShapeProfileDef * > (this);
    return deConstObject->getCentreOfGravityInX();
}

void IfcUShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInX = value;
}

bool IfcUShapeProfileDef::init() {
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
        m_edgeRadius = Step::getUnset(m_edgeRadius);
    }
    else {
        m_edgeRadius = Step::spfToReal(arg);
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
        m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
    }
    else {
        m_centreOfGravityInX = Step::spfToReal(arg);
    }
    return true;
}

void IfcUShapeProfileDef::copy(const IfcUShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_depth);
    setFlangeWidth(obj.m_flangeWidth);
    setWebThickness(obj.m_webThickness);
    setFlangeThickness(obj.m_flangeThickness);
    setFilletRadius(obj.m_filletRadius);
    setEdgeRadius(obj.m_edgeRadius);
    setFlangeSlope(obj.m_flangeSlope);
    setCentreOfGravityInX(obj.m_centreOfGravityInX);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcUShapeProfileDef::s_type("IfcUShapeProfileDef");
