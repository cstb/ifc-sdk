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

#include "ifc2x3/IfcRelAssignsToProjectOrder.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAssignsToProjectOrder::IfcRelAssignsToProjectOrder(Step::Id id, Step::SPFData *args) : IfcRelAssignsToControl(id, args) {
}

IfcRelAssignsToProjectOrder::~IfcRelAssignsToProjectOrder() {
}

bool IfcRelAssignsToProjectOrder::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToProjectOrder(this);
}

const std::string &IfcRelAssignsToProjectOrder::type() {
    return IfcRelAssignsToProjectOrder::s_type.getName();
}

Step::ClassType IfcRelAssignsToProjectOrder::getClassType() {
    return IfcRelAssignsToProjectOrder::s_type;
}

Step::ClassType IfcRelAssignsToProjectOrder::getType() const {
    return IfcRelAssignsToProjectOrder::s_type;
}

bool IfcRelAssignsToProjectOrder::isOfType(Step::ClassType t) {
    return IfcRelAssignsToProjectOrder::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

void IfcRelAssignsToProjectOrder::release() {
    IfcRelAssignsToControl::release();
}

bool IfcRelAssignsToProjectOrder::init() {
    bool status = IfcRelAssignsToControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelAssignsToProjectOrder::copy(const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProjectOrder::s_type("IfcRelAssignsToProjectOrder");
