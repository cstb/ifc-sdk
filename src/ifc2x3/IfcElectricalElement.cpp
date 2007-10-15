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

#include "ifc2x3/IfcElectricalElement.h"

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

IfcElectricalElement::IfcElectricalElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcElectricalElement::~IfcElectricalElement() {
}

bool IfcElectricalElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricalElement(this);
}

const std::string &IfcElectricalElement::type() {
    return IfcElectricalElement::s_type.getName();
}

Step::ClassType IfcElectricalElement::getClassType() {
    return IfcElectricalElement::s_type;
}

Step::ClassType IfcElectricalElement::getType() const {
    return IfcElectricalElement::s_type;
}

bool IfcElectricalElement::isOfType(Step::ClassType t) {
    return IfcElectricalElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcElectricalElement::release() {
    IfcElement::release();
}

bool IfcElectricalElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElectricalElement::copy(const IfcElectricalElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricalElement::s_type("IfcElectricalElement");
