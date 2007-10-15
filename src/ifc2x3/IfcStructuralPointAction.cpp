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

#include "ifc2x3/IfcStructuralPointAction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralAction.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralPointAction::IfcStructuralPointAction(Step::Id id, Step::SPFData *args) : IfcStructuralAction(id, args) {
}

IfcStructuralPointAction::~IfcStructuralPointAction() {
}

bool IfcStructuralPointAction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralPointAction(this);
}

const std::string &IfcStructuralPointAction::type() {
    return IfcStructuralPointAction::s_type.getName();
}

Step::ClassType IfcStructuralPointAction::getClassType() {
    return IfcStructuralPointAction::s_type;
}

Step::ClassType IfcStructuralPointAction::getType() const {
    return IfcStructuralPointAction::s_type;
}

bool IfcStructuralPointAction::isOfType(Step::ClassType t) {
    return IfcStructuralPointAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

void IfcStructuralPointAction::release() {
    IfcStructuralAction::release();
}

bool IfcStructuralPointAction::init() {
    bool status = IfcStructuralAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralPointAction::copy(const IfcStructuralPointAction &obj, const CopyOp &copyop) {
    IfcStructuralAction::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPointAction::s_type("IfcStructuralPointAction");
