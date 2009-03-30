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

#include "ifc2x3/IfcProjectionElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElementAddition.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcProjectionElement::IfcProjectionElement(Step::Id id, Step::SPFData *args) : IfcFeatureElementAddition(id, args) {
}

IfcProjectionElement::~IfcProjectionElement() {
}

bool IfcProjectionElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProjectionElement(this);
}

const std::string &IfcProjectionElement::type() const {
    return IfcProjectionElement::s_type.getName();
}

const Step::ClassType &IfcProjectionElement::getClassType() {
    return IfcProjectionElement::s_type;
}

const Step::ClassType &IfcProjectionElement::getType() const {
    return IfcProjectionElement::s_type;
}

bool IfcProjectionElement::isOfType(const Step::ClassType &t) const {
    return IfcProjectionElement::s_type == t ? true : IfcFeatureElementAddition::isOfType(t);
}

bool IfcProjectionElement::init() {
    bool status = IfcFeatureElementAddition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcProjectionElement::copy(const IfcProjectionElement &obj, const CopyOp &copyop) {
    IfcFeatureElementAddition::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectionElement::s_type("IfcProjectionElement");
