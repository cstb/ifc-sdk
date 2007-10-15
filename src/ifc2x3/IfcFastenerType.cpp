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

#include "ifc2x3/IfcFastenerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementComponentType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFastenerType::IfcFastenerType(Step::Id id, Step::SPFData *args) : IfcElementComponentType(id, args) {
}

IfcFastenerType::~IfcFastenerType() {
}

bool IfcFastenerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFastenerType(this);
}

const std::string &IfcFastenerType::type() {
    return IfcFastenerType::s_type.getName();
}

Step::ClassType IfcFastenerType::getClassType() {
    return IfcFastenerType::s_type;
}

Step::ClassType IfcFastenerType::getType() const {
    return IfcFastenerType::s_type;
}

bool IfcFastenerType::isOfType(Step::ClassType t) {
    return IfcFastenerType::s_type == t ? true : IfcElementComponentType::isOfType(t);
}

void IfcFastenerType::release() {
    IfcElementComponentType::release();
}

bool IfcFastenerType::init() {
    bool status = IfcElementComponentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFastenerType::copy(const IfcFastenerType &obj, const CopyOp &copyop) {
    IfcElementComponentType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFastenerType::s_type("IfcFastenerType");
