/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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

using namespace ifc2x3;

IfcOpenShell::IfcOpenShell(Step::Id id, Step::SPFData *args) : IfcConnectedFaceSet(id, args) {
}

IfcOpenShell::~IfcOpenShell() {
}

bool IfcOpenShell::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOpenShell(this);
}

const std::string &IfcOpenShell::type() const {
    return IfcOpenShell::s_type.getName();
}

const Step::ClassType &IfcOpenShell::getClassType() {
    return IfcOpenShell::s_type;
}

const Step::ClassType &IfcOpenShell::getType() const {
    return IfcOpenShell::s_type;
}

bool IfcOpenShell::isOfType(const Step::ClassType &t) const {
    return IfcOpenShell::s_type == t ? true : IfcConnectedFaceSet::isOfType(t);
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
