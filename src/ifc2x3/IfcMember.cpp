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

#include "ifc2x3/IfcMember.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcMember::IfcMember(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcMember::~IfcMember() {
}

bool IfcMember::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMember(this);
}

const std::string &IfcMember::type() const {
    return IfcMember::s_type.getName();
}

const Step::ClassType &IfcMember::getClassType() {
    return IfcMember::s_type;
}

const Step::ClassType &IfcMember::getType() const {
    return IfcMember::s_type;
}

bool IfcMember::isOfType(const Step::ClassType &t) const {
    return IfcMember::s_type == t ? true : IfcBuildingElement::isOfType(t);
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
