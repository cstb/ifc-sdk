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

#include "ifc2x3/IfcOpenShell.h"

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

IfcOpenShell::IfcOpenShell(Step::Id id, Step::SPFData *args) : IfcConnectedFaceSet(id, args) {
}

IfcOpenShell::~IfcOpenShell() {
}

bool IfcOpenShell::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOpenShell(this);
}

const std::string &IfcOpenShell::type() {
    return IfcOpenShell::s_type.getName();
}

Step::ClassType IfcOpenShell::getClassType() {
    return IfcOpenShell::s_type;
}

Step::ClassType IfcOpenShell::getType() const {
    return IfcOpenShell::s_type;
}

bool IfcOpenShell::isOfType(Step::ClassType t) {
    return IfcOpenShell::s_type == t ? true : IfcConnectedFaceSet::isOfType(t);
}

void IfcOpenShell::release() {
    IfcConnectedFaceSet::release();
}

bool IfcOpenShell::init() {
    bool status = IfcConnectedFaceSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcOpenShell::copy(const IfcOpenShell &obj, const CopyOp &copyop) {
    IfcConnectedFaceSet::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpenShell::s_type("IfcOpenShell");
