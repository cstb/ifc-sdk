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

#include "ifc2x3/IfcDiscreteAccessory.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementComponent.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDiscreteAccessory::IfcDiscreteAccessory(Step::Id id, Step::SPFData *args) : IfcElementComponent(id, args) {
}

IfcDiscreteAccessory::~IfcDiscreteAccessory() {
}

bool IfcDiscreteAccessory::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDiscreteAccessory(this);
}

const std::string &IfcDiscreteAccessory::type() {
    return IfcDiscreteAccessory::s_type.getName();
}

Step::ClassType IfcDiscreteAccessory::getClassType() {
    return IfcDiscreteAccessory::s_type;
}

Step::ClassType IfcDiscreteAccessory::getType() const {
    return IfcDiscreteAccessory::s_type;
}

bool IfcDiscreteAccessory::isOfType(Step::ClassType t) {
    return IfcDiscreteAccessory::s_type == t ? true : IfcElementComponent::isOfType(t);
}

void IfcDiscreteAccessory::release() {
    IfcElementComponent::release();
}

bool IfcDiscreteAccessory::init() {
    bool status = IfcElementComponent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDiscreteAccessory::copy(const IfcDiscreteAccessory &obj, const CopyOp &copyop) {
    IfcElementComponent::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDiscreteAccessory::s_type("IfcDiscreteAccessory");
