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

#include "ifc2x3/IfcFastener.h"

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

IfcFastener::IfcFastener(Step::Id id, Step::SPFData *args) : IfcElementComponent(id, args) {
}

IfcFastener::~IfcFastener() {
}

bool IfcFastener::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFastener(this);
}

const std::string &IfcFastener::type() {
    return IfcFastener::s_type.getName();
}

Step::ClassType IfcFastener::getClassType() {
    return IfcFastener::s_type;
}

Step::ClassType IfcFastener::getType() const {
    return IfcFastener::s_type;
}

bool IfcFastener::isOfType(Step::ClassType t) {
    return IfcFastener::s_type == t ? true : IfcElementComponent::isOfType(t);
}

void IfcFastener::release() {
    IfcElementComponent::release();
}

bool IfcFastener::init() {
    bool status = IfcElementComponent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFastener::copy(const IfcFastener &obj, const CopyOp &copyop) {
    IfcElementComponent::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFastener::s_type("IfcFastener");
