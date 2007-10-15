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

#include "ifc2x3/IfcElementPart.h"

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

IfcElementPart::IfcElementPart(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcElementPart::~IfcElementPart() {
}

bool IfcElementPart::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElementPart(this);
}

const std::string &IfcElementPart::type() {
    return IfcElementPart::s_type.getName();
}

Step::ClassType IfcElementPart::getClassType() {
    return IfcElementPart::s_type;
}

Step::ClassType IfcElementPart::getType() const {
    return IfcElementPart::s_type;
}

bool IfcElementPart::isOfType(Step::ClassType t) {
    return IfcElementPart::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcElementPart::release() {
    IfcElement::release();
}

bool IfcElementPart::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElementPart::copy(const IfcElementPart &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementPart::s_type("IfcElementPart");
