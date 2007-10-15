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

#include "ifc2x3/IfcWorkSchedule.h"

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

IfcWorkSchedule::IfcWorkSchedule(Step::Id id, Step::SPFData *args) : IfcWorkControl(id, args) {
}

IfcWorkSchedule::~IfcWorkSchedule() {
}

bool IfcWorkSchedule::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWorkSchedule(this);
}

const std::string &IfcWorkSchedule::type() {
    return IfcWorkSchedule::s_type.getName();
}

Step::ClassType IfcWorkSchedule::getClassType() {
    return IfcWorkSchedule::s_type;
}

Step::ClassType IfcWorkSchedule::getType() const {
    return IfcWorkSchedule::s_type;
}

bool IfcWorkSchedule::isOfType(Step::ClassType t) {
    return IfcWorkSchedule::s_type == t ? true : IfcWorkControl::isOfType(t);
}

void IfcWorkSchedule::release() {
    IfcWorkControl::release();
}

bool IfcWorkSchedule::init() {
    bool status = IfcWorkControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWorkSchedule::copy(const IfcWorkSchedule &obj, const CopyOp &copyop) {
    IfcWorkControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWorkSchedule::s_type("IfcWorkSchedule");
