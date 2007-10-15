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

#include "ifc2x3/IfcMechanicalFastenerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFastenerType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMechanicalFastenerType::IfcMechanicalFastenerType(Step::Id id, Step::SPFData *args) : IfcFastenerType(id, args) {
}

IfcMechanicalFastenerType::~IfcMechanicalFastenerType() {
}

bool IfcMechanicalFastenerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMechanicalFastenerType(this);
}

const std::string &IfcMechanicalFastenerType::type() {
    return IfcMechanicalFastenerType::s_type.getName();
}

Step::ClassType IfcMechanicalFastenerType::getClassType() {
    return IfcMechanicalFastenerType::s_type;
}

Step::ClassType IfcMechanicalFastenerType::getType() const {
    return IfcMechanicalFastenerType::s_type;
}

bool IfcMechanicalFastenerType::isOfType(Step::ClassType t) {
    return IfcMechanicalFastenerType::s_type == t ? true : IfcFastenerType::isOfType(t);
}

void IfcMechanicalFastenerType::release() {
    IfcFastenerType::release();
}

bool IfcMechanicalFastenerType::init() {
    bool status = IfcFastenerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcMechanicalFastenerType::copy(const IfcMechanicalFastenerType &obj, const CopyOp &copyop) {
    IfcFastenerType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalFastenerType::s_type("IfcMechanicalFastenerType");
