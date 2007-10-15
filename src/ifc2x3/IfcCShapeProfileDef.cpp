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

#include "ifc2x3/IfcCShapeProfileDef.h"

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

bool IfcCShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCShapeProfileDef(this);
}

const std::string &IfcCShapeProfileDef::type() {
    return IfcCShapeProfileDef::s_type.getName();
}

Step::ClassType IfcCShapeProfileDef::getClassType() {
    return IfcCShapeProfileDef::s_type;
}

Step::ClassType IfcCShapeProfileDef::getType() const {
    return IfcCShapeProfileDef::s_type;
}

bool IfcCShapeProfileDef::isOfType(Step::ClassType t) {
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

void IfcCShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

void IfcCShapeProfileDef::setWidth(IfcPositiveLengthMeasure value) {
    m_width = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWallThickness() {
    if (Step::BaseObject::inited()) {
        return m_wallThickness;
    }
    else {
        return Step::getUnset(m_wallThickness);
    }
}

void IfcCShapeProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
    m_wallThickness = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getGirth() {
    if (Step::BaseObject::inited()) {
        return m_girth;
    }
    else {
        return Step::getUnset(m_girth);
    }
}

void IfcCShapeProfileDef::setGirth(IfcPositiveLengthMeasure value) {
    m_girth = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getInternalFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_internalFilletRadius;
    }
    else {
        return Step::getUnset(m_internalFilletRadius);
    }
}

void IfcCShapeProfileDef::setInternalFilletRadius(IfcPositiveLengthMeasure value) {
    m_internalFilletRadius = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

void IfcCShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInX = value;
}

void IfcCShapeProfileDef::release() {
    IfcParameterizedProfileDef::release();
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

IFC2X3_DLL_DEF Step::ClassType IfcCShapeProfileDef::s_type("IfcCShapeProfileDef");
