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

#include "ifc2x3/IfcDiscreteAccessoryType.h"

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

IfcDiscreteAccessoryType::IfcDiscreteAccessoryType(Step::Id id, Step::SPFData *args) : IfcElementComponentType(id, args) {
}

IfcDiscreteAccessoryType::~IfcDiscreteAccessoryType() {
}

bool IfcDiscreteAccessoryType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDiscreteAccessoryType(this);
}

const std::string &IfcDiscreteAccessoryType::type() {
    return IfcDiscreteAccessoryType::s_type.getName();
}

Step::ClassType IfcDiscreteAccessoryType::getClassType() {
    return IfcDiscreteAccessoryType::s_type;
}

Step::ClassType IfcDiscreteAccessoryType::getType() const {
    return IfcDiscreteAccessoryType::s_type;
}

bool IfcDiscreteAccessoryType::isOfType(Step::ClassType t) {
    return IfcDiscreteAccessoryType::s_type == t ? true : IfcElementComponentType::isOfType(t);
}

void IfcDiscreteAccessoryType::release() {
    IfcElementComponentType::release();
}

bool IfcDiscreteAccessoryType::init() {
    bool status = IfcElementComponentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDiscreteAccessoryType::copy(const IfcDiscreteAccessoryType &obj, const CopyOp &copyop) {
    IfcElementComponentType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDiscreteAccessoryType::s_type("IfcDiscreteAccessoryType");
