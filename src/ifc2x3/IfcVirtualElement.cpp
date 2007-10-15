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

#include "ifc2x3/IfcVirtualElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcVirtualElement::IfcVirtualElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcVirtualElement::~IfcVirtualElement() {
}

bool IfcVirtualElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVirtualElement(this);
}

const std::string &IfcVirtualElement::type() {
    return IfcVirtualElement::s_type.getName();
}

Step::ClassType IfcVirtualElement::getClassType() {
    return IfcVirtualElement::s_type;
}

Step::ClassType IfcVirtualElement::getType() const {
    return IfcVirtualElement::s_type;
}

bool IfcVirtualElement::isOfType(Step::ClassType t) {
    return IfcVirtualElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcVirtualElement::release() {
    IfcElement::release();
}

bool IfcVirtualElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcVirtualElement::copy(const IfcVirtualElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVirtualElement::s_type("IfcVirtualElement");
