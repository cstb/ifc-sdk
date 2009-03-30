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

#include "ifc2x3/IfcStructuralPointAction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralAction.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStructuralPointAction::IfcStructuralPointAction(Step::Id id, Step::SPFData *args) : IfcStructuralAction(id, args) {
}

IfcStructuralPointAction::~IfcStructuralPointAction() {
}

bool IfcStructuralPointAction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralPointAction(this);
}

const std::string &IfcStructuralPointAction::type() const {
    return IfcStructuralPointAction::s_type.getName();
}

const Step::ClassType &IfcStructuralPointAction::getClassType() {
    return IfcStructuralPointAction::s_type;
}

const Step::ClassType &IfcStructuralPointAction::getType() const {
    return IfcStructuralPointAction::s_type;
}

bool IfcStructuralPointAction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralPointAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
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
