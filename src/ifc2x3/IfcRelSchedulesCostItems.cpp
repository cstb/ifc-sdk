/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRelSchedulesCostItems.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelSchedulesCostItems::IfcRelSchedulesCostItems(Step::Id id, Step::SPFData *args) : IfcRelAssignsToControl(id, args) {
}

IfcRelSchedulesCostItems::~IfcRelSchedulesCostItems() {
}

bool IfcRelSchedulesCostItems::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelSchedulesCostItems(this);
}

const std::string &IfcRelSchedulesCostItems::type() const {
    return IfcRelSchedulesCostItems::s_type.getName();
}

const Step::ClassType &IfcRelSchedulesCostItems::getClassType() {
    return IfcRelSchedulesCostItems::s_type;
}

const Step::ClassType &IfcRelSchedulesCostItems::getType() const {
    return IfcRelSchedulesCostItems::s_type;
}

bool IfcRelSchedulesCostItems::isOfType(const Step::ClassType &t) const {
    return IfcRelSchedulesCostItems::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

bool IfcRelSchedulesCostItems::init() {
    bool status = IfcRelAssignsToControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelSchedulesCostItems::copy(const IfcRelSchedulesCostItems &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelSchedulesCostItems::s_type("IfcRelSchedulesCostItems");
