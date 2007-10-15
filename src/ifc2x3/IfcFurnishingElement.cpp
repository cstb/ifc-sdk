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

#include "ifc2x3/IfcFurnishingElement.h"

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

IfcFurnishingElement::IfcFurnishingElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcFurnishingElement::~IfcFurnishingElement() {
}

bool IfcFurnishingElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFurnishingElement(this);
}

const std::string &IfcFurnishingElement::type() {
    return IfcFurnishingElement::s_type.getName();
}

Step::ClassType IfcFurnishingElement::getClassType() {
    return IfcFurnishingElement::s_type;
}

Step::ClassType IfcFurnishingElement::getType() const {
    return IfcFurnishingElement::s_type;
}

bool IfcFurnishingElement::isOfType(Step::ClassType t) {
    return IfcFurnishingElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcFurnishingElement::release() {
    IfcElement::release();
}

bool IfcFurnishingElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFurnishingElement::copy(const IfcFurnishingElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnishingElement::s_type("IfcFurnishingElement");
