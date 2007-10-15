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

#include "ifc2x3/IfcEquipmentElement.h"

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

IfcEquipmentElement::IfcEquipmentElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcEquipmentElement::~IfcEquipmentElement() {
}

bool IfcEquipmentElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEquipmentElement(this);
}

const std::string &IfcEquipmentElement::type() {
    return IfcEquipmentElement::s_type.getName();
}

Step::ClassType IfcEquipmentElement::getClassType() {
    return IfcEquipmentElement::s_type;
}

Step::ClassType IfcEquipmentElement::getType() const {
    return IfcEquipmentElement::s_type;
}

bool IfcEquipmentElement::isOfType(Step::ClassType t) {
    return IfcEquipmentElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcEquipmentElement::release() {
    IfcElement::release();
}

bool IfcEquipmentElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEquipmentElement::copy(const IfcEquipmentElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEquipmentElement::s_type("IfcEquipmentElement");
