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

#include "ifc2x3/IfcEquipmentStandard.h"

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

IfcEquipmentStandard::IfcEquipmentStandard(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
}

IfcEquipmentStandard::~IfcEquipmentStandard() {
}

bool IfcEquipmentStandard::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEquipmentStandard(this);
}

const std::string &IfcEquipmentStandard::type() {
    return IfcEquipmentStandard::s_type.getName();
}

Step::ClassType IfcEquipmentStandard::getClassType() {
    return IfcEquipmentStandard::s_type;
}

Step::ClassType IfcEquipmentStandard::getType() const {
    return IfcEquipmentStandard::s_type;
}

bool IfcEquipmentStandard::isOfType(Step::ClassType t) {
    return IfcEquipmentStandard::s_type == t ? true : IfcControl::isOfType(t);
}

void IfcEquipmentStandard::release() {
    IfcControl::release();
}

bool IfcEquipmentStandard::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEquipmentStandard::copy(const IfcEquipmentStandard &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEquipmentStandard::s_type("IfcEquipmentStandard");
