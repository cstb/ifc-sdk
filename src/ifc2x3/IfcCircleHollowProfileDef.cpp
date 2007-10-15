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

#include "ifc2x3/IfcCircleHollowProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCircleProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCircleHollowProfileDef::IfcCircleHollowProfileDef(Step::Id id, Step::SPFData *args) : IfcCircleProfileDef(id, args) {
    m_wallThickness = Step::getUnset(m_wallThickness);
}

IfcCircleHollowProfileDef::~IfcCircleHollowProfileDef() {
}

bool IfcCircleHollowProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCircleHollowProfileDef(this);
}

const std::string &IfcCircleHollowProfileDef::type() {
    return IfcCircleHollowProfileDef::s_type.getName();
}

Step::ClassType IfcCircleHollowProfileDef::getClassType() {
    return IfcCircleHollowProfileDef::s_type;
}

Step::ClassType IfcCircleHollowProfileDef::getType() const {
    return IfcCircleHollowProfileDef::s_type;
}

bool IfcCircleHollowProfileDef::isOfType(Step::ClassType t) {
    return IfcCircleHollowProfileDef::s_type == t ? true : IfcCircleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircleHollowProfileDef::getWallThickness() {
    if (Step::BaseObject::inited()) {
        return m_wallThickness;
    }
    else {
        return Step::getUnset(m_wallThickness);
    }
}

void IfcCircleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
    m_wallThickness = value;
}

void IfcCircleHollowProfileDef::release() {
    IfcCircleProfileDef::release();
}

bool IfcCircleHollowProfileDef::init() {
    bool status = IfcCircleProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wallThickness = Step::getUnset(m_wallThickness);
    }
    else {
        m_wallThickness = Step::spfToReal(arg);
    }
    return true;
}

void IfcCircleHollowProfileDef::copy(const IfcCircleHollowProfileDef &obj, const CopyOp &copyop) {
    IfcCircleProfileDef::copy(obj, copyop);
    setWallThickness(obj.m_wallThickness);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircleHollowProfileDef::s_type("IfcCircleHollowProfileDef");
