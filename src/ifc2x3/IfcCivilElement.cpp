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

#include "ifc2x3/IfcCivilElement.h"

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

IfcCivilElement::IfcCivilElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcCivilElement::~IfcCivilElement() {
}

bool IfcCivilElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCivilElement(this);
}

const std::string &IfcCivilElement::type() {
    return IfcCivilElement::s_type.getName();
}

Step::ClassType IfcCivilElement::getClassType() {
    return IfcCivilElement::s_type;
}

Step::ClassType IfcCivilElement::getType() const {
    return IfcCivilElement::s_type;
}

bool IfcCivilElement::isOfType(Step::ClassType t) {
    return IfcCivilElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcCivilElement::release() {
    IfcElement::release();
}

bool IfcCivilElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCivilElement::copy(const IfcCivilElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCivilElement::s_type("IfcCivilElement");
