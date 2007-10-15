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

#include "ifc2x3/IfcParameterizedProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement2D.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcParameterizedProfileDef::IfcParameterizedProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_position = NULL;
}

IfcParameterizedProfileDef::~IfcParameterizedProfileDef() {
}

bool IfcParameterizedProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcParameterizedProfileDef(this);
}

const std::string &IfcParameterizedProfileDef::type() {
    return IfcParameterizedProfileDef::s_type.getName();
}

Step::ClassType IfcParameterizedProfileDef::getClassType() {
    return IfcParameterizedProfileDef::s_type;
}

Step::ClassType IfcParameterizedProfileDef::getType() const {
    return IfcParameterizedProfileDef::s_type;
}

bool IfcParameterizedProfileDef::isOfType(Step::ClassType t) {
    return IfcParameterizedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcAxis2Placement2D *IfcParameterizedProfileDef::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcParameterizedProfileDef::setPosition(const Step::RefPtr< IfcAxis2Placement2D > &value) {
    m_position = value;
}

void IfcParameterizedProfileDef::release() {
    IfcProfileDef::release();
    m_position.release();
}

bool IfcParameterizedProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement2D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcParameterizedProfileDef::copy(const IfcParameterizedProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setPosition(copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcParameterizedProfileDef::s_type("IfcParameterizedProfileDef");
