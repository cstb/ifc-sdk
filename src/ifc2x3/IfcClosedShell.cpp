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

#include "ifc2x3/IfcClosedShell.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectedFaceSet.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcClosedShell::IfcClosedShell(Step::Id id, Step::SPFData *args) : IfcConnectedFaceSet(id, args) {
}

IfcClosedShell::~IfcClosedShell() {
}

bool IfcClosedShell::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClosedShell(this);
}

const std::string &IfcClosedShell::type() {
    return IfcClosedShell::s_type.getName();
}

Step::ClassType IfcClosedShell::getClassType() {
    return IfcClosedShell::s_type;
}

Step::ClassType IfcClosedShell::getType() const {
    return IfcClosedShell::s_type;
}

bool IfcClosedShell::isOfType(Step::ClassType t) {
    return IfcClosedShell::s_type == t ? true : IfcConnectedFaceSet::isOfType(t);
}

void IfcClosedShell::release() {
    IfcConnectedFaceSet::release();
}

bool IfcClosedShell::init() {
    bool status = IfcConnectedFaceSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcClosedShell::copy(const IfcClosedShell &obj, const CopyOp &copyop) {
    IfcConnectedFaceSet::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClosedShell::s_type("IfcClosedShell");
