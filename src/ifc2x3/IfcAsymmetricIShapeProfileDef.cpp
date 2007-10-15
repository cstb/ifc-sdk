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

#include "ifc2x3/IfcAsymmetricIShapeProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcIShapeProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAsymmetricIShapeProfileDef::IfcAsymmetricIShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcIShapeProfileDef(id, args) {
    m_topFlangeWidth = Step::getUnset(m_topFlangeWidth);
    m_topFlangeThickness = Step::getUnset(m_topFlangeThickness);
    m_topFlangeFilletRadius = Step::getUnset(m_topFlangeFilletRadius);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcAsymmetricIShapeProfileDef::~IfcAsymmetricIShapeProfileDef() {
}

bool IfcAsymmetricIShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAsymmetricIShapeProfileDef(this);
}

const std::string &IfcAsymmetricIShapeProfileDef::type() {
    return IfcAsymmetricIShapeProfileDef::s_type.getName();
}

Step::ClassType IfcAsymmetricIShapeProfileDef::getClassType() {
    return IfcAsymmetricIShapeProfileDef::s_type;
}

Step::ClassType IfcAsymmetricIShapeProfileDef::getType() const {
    return IfcAsymmetricIShapeProfileDef::s_type;
}

bool IfcAsymmetricIShapeProfileDef::isOfType(Step::ClassType t) {
    return IfcAsymmetricIShapeProfileDef::s_type == t ? true : IfcIShapeProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_topFlangeWidth;
    }
    else {
        return Step::getUnset(m_topFlangeWidth);
    }
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeWidth(IfcPositiveLengthMeasure value) {
    m_topFlangeWidth = value;
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_topFlangeThickness;
    }
    else {
        return Step::getUnset(m_topFlangeThickness);
    }
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeThickness(IfcPositiveLengthMeasure value) {
    m_topFlangeThickness = value;
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_topFlangeFilletRadius;
    }
    else {
        return Step::getUnset(m_topFlangeFilletRadius);
    }
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeFilletRadius(IfcPositiveLengthMeasure value) {
    m_topFlangeFilletRadius = value;
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

void IfcAsymmetricIShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcAsymmetricIShapeProfileDef::release() {
    IfcIShapeProfileDef::release();
}

bool IfcAsymmetricIShapeProfileDef::init() {
    bool status = IfcIShapeProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topFlangeWidth = Step::getUnset(m_topFlangeWidth);
    }
    else {
        m_topFlangeWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topFlangeThickness = Step::getUnset(m_topFlangeThickness);
    }
    else {
        m_topFlangeThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topFlangeFilletRadius = Step::getUnset(m_topFlangeFilletRadius);
    }
    else {
        m_topFlangeFilletRadius = Step::spfToReal(arg);
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

void IfcAsymmetricIShapeProfileDef::copy(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop) {
    IfcIShapeProfileDef::copy(obj, copyop);
    setTopFlangeWidth(obj.m_topFlangeWidth);
    setTopFlangeThickness(obj.m_topFlangeThickness);
    setTopFlangeFilletRadius(obj.m_topFlangeFilletRadius);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAsymmetricIShapeProfileDef::s_type("IfcAsymmetricIShapeProfileDef");
