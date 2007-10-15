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

#include "ifc2x3/IfcWorkPlan.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcWorkControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcWorkPlan::IfcWorkPlan(Step::Id id, Step::SPFData *args) : IfcWorkControl(id, args) {
}

IfcWorkPlan::~IfcWorkPlan() {
}

bool IfcWorkPlan::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWorkPlan(this);
}

const std::string &IfcWorkPlan::type() {
    return IfcWorkPlan::s_type.getName();
}

Step::ClassType IfcWorkPlan::getClassType() {
    return IfcWorkPlan::s_type;
}

Step::ClassType IfcWorkPlan::getType() const {
    return IfcWorkPlan::s_type;
}

bool IfcWorkPlan::isOfType(Step::ClassType t) {
    return IfcWorkPlan::s_type == t ? true : IfcWorkControl::isOfType(t);
}

void IfcWorkPlan::release() {
    IfcWorkControl::release();
}

bool IfcWorkPlan::init() {
    bool status = IfcWorkControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWorkPlan::copy(const IfcWorkPlan &obj, const CopyOp &copyop) {
    IfcWorkControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWorkPlan::s_type("IfcWorkPlan");
