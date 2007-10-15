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

#include "ifc2x3/IfcZone.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcZone::IfcZone(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
}

IfcZone::~IfcZone() {
}

bool IfcZone::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcZone(this);
}

const std::string &IfcZone::type() {
    return IfcZone::s_type.getName();
}

Step::ClassType IfcZone::getClassType() {
    return IfcZone::s_type;
}

Step::ClassType IfcZone::getType() const {
    return IfcZone::s_type;
}

bool IfcZone::isOfType(Step::ClassType t) {
    return IfcZone::s_type == t ? true : IfcGroup::isOfType(t);
}

void IfcZone::release() {
    IfcGroup::release();
}

bool IfcZone::init() {
    bool status = IfcGroup::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcZone::copy(const IfcZone &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcZone::s_type("IfcZone");
