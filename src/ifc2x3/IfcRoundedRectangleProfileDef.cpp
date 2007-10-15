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

#include "ifc2x3/IfcRoundedRectangleProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRectangleProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRoundedRectangleProfileDef::IfcRoundedRectangleProfileDef(Step::Id id, Step::SPFData *args) : IfcRectangleProfileDef(id, args) {
    m_roundingRadius = Step::getUnset(m_roundingRadius);
}

IfcRoundedRectangleProfileDef::~IfcRoundedRectangleProfileDef() {
}

bool IfcRoundedRectangleProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRoundedRectangleProfileDef(this);
}

const std::string &IfcRoundedRectangleProfileDef::type() {
    return IfcRoundedRectangleProfileDef::s_type.getName();
}

Step::ClassType IfcRoundedRectangleProfileDef::getClassType() {
    return IfcRoundedRectangleProfileDef::s_type;
}

Step::ClassType IfcRoundedRectangleProfileDef::getType() const {
    return IfcRoundedRectangleProfileDef::s_type;
}

bool IfcRoundedRectangleProfileDef::isOfType(Step::ClassType t) {
    return IfcRoundedRectangleProfileDef::s_type == t ? true : IfcRectangleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRoundedRectangleProfileDef::getRoundingRadius() {
    if (Step::BaseObject::inited()) {
        return m_roundingRadius;
    }
    else {
        return Step::getUnset(m_roundingRadius);
    }
}

void IfcRoundedRectangleProfileDef::setRoundingRadius(IfcPositiveLengthMeasure value) {
    m_roundingRadius = value;
}

void IfcRoundedRectangleProfileDef::release() {
    IfcRectangleProfileDef::release();
}

bool IfcRoundedRectangleProfileDef::init() {
    bool status = IfcRectangleProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_roundingRadius = Step::getUnset(m_roundingRadius);
    }
    else {
        m_roundingRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcRoundedRectangleProfileDef::copy(const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop) {
    IfcRectangleProfileDef::copy(obj, copyop);
    setRoundingRadius(obj.m_roundingRadius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoundedRectangleProfileDef::s_type("IfcRoundedRectangleProfileDef");
