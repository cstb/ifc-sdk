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

#include "ifc2x3/IfcBridgeElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCivilElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridgeElement::IfcBridgeElement(Step::Id id, Step::SPFData *args) : IfcCivilElement(id, args) {
}

IfcBridgeElement::~IfcBridgeElement() {
}

bool IfcBridgeElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgeElement(this);
}

const std::string &IfcBridgeElement::type() {
    return IfcBridgeElement::s_type.getName();
}

Step::ClassType IfcBridgeElement::getClassType() {
    return IfcBridgeElement::s_type;
}

Step::ClassType IfcBridgeElement::getType() const {
    return IfcBridgeElement::s_type;
}

bool IfcBridgeElement::isOfType(Step::ClassType t) {
    return IfcBridgeElement::s_type == t ? true : IfcCivilElement::isOfType(t);
}

void IfcBridgeElement::release() {
    IfcCivilElement::release();
}

bool IfcBridgeElement::init() {
    bool status = IfcCivilElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBridgeElement::copy(const IfcBridgeElement &obj, const CopyOp &copyop) {
    IfcCivilElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgeElement::s_type("IfcBridgeElement");
