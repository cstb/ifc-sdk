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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcElementComponent.h"

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

IfcElementComponent::IfcElementComponent(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcElementComponent::~IfcElementComponent() {
}

bool IfcElementComponent::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementComponent(this);
}

const std::string &IfcElementComponent::type() const {
    return IfcElementComponent::s_type.getName();
}

const Step::ClassType &IfcElementComponent::getClassType() {
    return IfcElementComponent::s_type;
}

const Step::ClassType &IfcElementComponent::getType() const {
    return IfcElementComponent::s_type;
}

bool IfcElementComponent::isOfType(const Step::ClassType &t) const {
    return IfcElementComponent::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcElementComponent::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElementComponent::copy(const IfcElementComponent &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementComponent::s_type("IfcElementComponent");
