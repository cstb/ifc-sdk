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

#include "ifc2x3/IfcElementComponentType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElementComponentType::IfcElementComponentType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcElementComponentType::~IfcElementComponentType() {
}

bool IfcElementComponentType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElementComponentType(this);
}

const std::string &IfcElementComponentType::type() {
    return IfcElementComponentType::s_type.getName();
}

Step::ClassType IfcElementComponentType::getClassType() {
    return IfcElementComponentType::s_type;
}

Step::ClassType IfcElementComponentType::getType() const {
    return IfcElementComponentType::s_type;
}

bool IfcElementComponentType::isOfType(Step::ClassType t) {
    return IfcElementComponentType::s_type == t ? true : IfcElementType::isOfType(t);
}

void IfcElementComponentType::release() {
    IfcElementType::release();
}

bool IfcElementComponentType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElementComponentType::copy(const IfcElementComponentType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementComponentType::s_type("IfcElementComponentType");
