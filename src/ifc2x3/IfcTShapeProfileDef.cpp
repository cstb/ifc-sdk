/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include "ifc2x3/IfcTShapeProfileDef.h"

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

bool IfcTShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTShapeProfileDef(this);
}

const std::string &IfcTShapeProfileDef::type() {
    return IfcTShapeProfileDef::s_type.getName();
}

Step::ClassType IfcTShapeProfileDef::getClassType() {
    return IfcTShapeProfileDef::s_type;
}

Step::ClassType IfcTShapeProfileDef::getType() const {
    return IfcTShapeProfileDef::s_type;
}

bool IfcTShapeProfileDef::isOfType(Step::ClassType t) {
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

void IfcTShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_flangeWidth;
    }
    else {
        return Step::getUnset(m_flangeWidth);
    }
}

void IfcTShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
    m_flangeWidth = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

void IfcTShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_flangeThickness;
    }
    else {
        return Step::getUnset(m_flangeThickness);
    }
}

void IfcTShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
    m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

void IfcTShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_flangeEdgeRadius;
    }
    else {
        return Step::getUnset(m_flangeEdgeRadius);
    }
}

void IfcTShapeProfileDef::setFlangeEdgeRadius(IfcPositiveLengthMeasure value) {
    m_flangeEdgeRadius = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_webEdgeRadius;
    }
    else {
        return Step::getUnset(m_webEdgeRadius);
    }
}

void IfcTShapeProfileDef::setWebEdgeRadius(IfcPositiveLengthMeasure value) {
    m_webEdgeRadius = value;
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getWebSlope() {
    if (Step::BaseObject::inited()) {
        return m_webSlope;
    }
    else {
        return Step::getUnset(m_webSlope);
    }
}

void IfcTShapeProfileDef::setWebSlope(IfcPlaneAngleMeasure value) {
    m_webSlope = value;
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getFlangeSlope() {
    if (Step::BaseObject::inited()) {
        return m_flangeSlope;
    }
    else {
        return Step::getUnset(m_flangeSlope);
    }
}

void IfcTShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value) {
    m_flangeSlope = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

void IfcTShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcTShapeProfileDef::release() {
    IfcParameterizedProfileDef::release();
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

IFC2X3_DLL_DEF Step::ClassType IfcTShapeProfileDef::s_type("IfcTShapeProfileDef");
