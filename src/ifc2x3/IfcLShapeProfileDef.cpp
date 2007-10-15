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

#include "ifc2x3/IfcLShapeProfileDef.h"

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

bool IfcLShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLShapeProfileDef(this);
}

const std::string &IfcLShapeProfileDef::type() {
    return IfcLShapeProfileDef::s_type.getName();
}

Step::ClassType IfcLShapeProfileDef::getClassType() {
    return IfcLShapeProfileDef::s_type;
}

Step::ClassType IfcLShapeProfileDef::getType() const {
    return IfcLShapeProfileDef::s_type;
}

bool IfcLShapeProfileDef::isOfType(Step::ClassType t) {
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

void IfcLShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

void IfcLShapeProfileDef::setWidth(IfcPositiveLengthMeasure value) {
    m_width = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getThickness() {
    if (Step::BaseObject::inited()) {
        return m_thickness;
    }
    else {
        return Step::getUnset(m_thickness);
    }
}

void IfcLShapeProfileDef::setThickness(IfcPositiveLengthMeasure value) {
    m_thickness = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

void IfcLShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_edgeRadius;
    }
    else {
        return Step::getUnset(m_edgeRadius);
    }
}

void IfcLShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
    m_edgeRadius = value;
}

IfcPlaneAngleMeasure IfcLShapeProfileDef::getLegSlope() {
    if (Step::BaseObject::inited()) {
        return m_legSlope;
    }
    else {
        return Step::getUnset(m_legSlope);
    }
}

void IfcLShapeProfileDef::setLegSlope(IfcPlaneAngleMeasure value) {
    m_legSlope = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

void IfcLShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInX = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

void IfcLShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcLShapeProfileDef::release() {
    IfcParameterizedProfileDef::release();
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

IFC2X3_DLL_DEF Step::ClassType IfcLShapeProfileDef::s_type("IfcLShapeProfileDef");
