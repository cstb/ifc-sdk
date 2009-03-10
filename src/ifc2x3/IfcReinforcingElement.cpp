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

#include "ifc2x3/IfcReinforcingElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementComponent.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReinforcingElement::IfcReinforcingElement(Step::Id id, Step::SPFData *args) : IfcBuildingElementComponent(id, args) {
    m_steelGrade = Step::getUnset(m_steelGrade);
}

IfcReinforcingElement::~IfcReinforcingElement() {
}

bool IfcReinforcingElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReinforcingElement(this);
}

const std::string &IfcReinforcingElement::type() const {
    return IfcReinforcingElement::s_type.getName();
}

const Step::ClassType &IfcReinforcingElement::getClassType() {
    return IfcReinforcingElement::s_type;
}

const Step::ClassType &IfcReinforcingElement::getType() const {
    return IfcReinforcingElement::s_type;
}

bool IfcReinforcingElement::isOfType(const Step::ClassType &t) const {
    return IfcReinforcingElement::s_type == t ? true : IfcBuildingElementComponent::isOfType(t);
}

IfcLabel IfcReinforcingElement::getSteelGrade() {
    if (Step::BaseObject::inited()) {
        return m_steelGrade;
    }
    else {
        return Step::getUnset(m_steelGrade);
    }
}

const IfcLabel IfcReinforcingElement::getSteelGrade() const {
    IfcReinforcingElement * deConstObject = const_cast< IfcReinforcingElement * > (this);
    return deConstObject->getSteelGrade();
}

void IfcReinforcingElement::setSteelGrade(const IfcLabel &value) {
    m_steelGrade = value;
}

bool IfcReinforcingElement::init() {
    bool status = IfcBuildingElementComponent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_steelGrade = Step::getUnset(m_steelGrade);
    }
    else {
        m_steelGrade = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcReinforcingElement::copy(const IfcReinforcingElement &obj, const CopyOp &copyop) {
    IfcBuildingElementComponent::copy(obj, copyop);
    setSteelGrade(obj.m_steelGrade);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcingElement::s_type("IfcReinforcingElement");
