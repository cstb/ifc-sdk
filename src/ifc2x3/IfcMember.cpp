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

#include "ifc2x3/IfcMember.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMember::IfcMember(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcMember::~IfcMember() {
}

bool IfcMember::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMember(this);
}

const std::string &IfcMember::type() {
    return IfcMember::s_type.getName();
}

Step::ClassType IfcMember::getClassType() {
    return IfcMember::s_type;
}

Step::ClassType IfcMember::getType() const {
    return IfcMember::s_type;
}

bool IfcMember::isOfType(Step::ClassType t) {
    return IfcMember::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcMember::release() {
    IfcBuildingElement::release();
}

bool IfcMember::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcMember::copy(const IfcMember &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMember::s_type("IfcMember");
