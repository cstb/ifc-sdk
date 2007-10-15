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

#include "ifc2x3/IfcCostItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCostItem::IfcCostItem(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
}

IfcCostItem::~IfcCostItem() {
}

bool IfcCostItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCostItem(this);
}

const std::string &IfcCostItem::type() {
    return IfcCostItem::s_type.getName();
}

Step::ClassType IfcCostItem::getClassType() {
    return IfcCostItem::s_type;
}

Step::ClassType IfcCostItem::getType() const {
    return IfcCostItem::s_type;
}

bool IfcCostItem::isOfType(Step::ClassType t) {
    return IfcCostItem::s_type == t ? true : IfcControl::isOfType(t);
}

void IfcCostItem::release() {
    IfcControl::release();
}

bool IfcCostItem::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCostItem::copy(const IfcCostItem &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCostItem::s_type("IfcCostItem");
