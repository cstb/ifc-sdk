/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcReinforcingElement.h>

#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBuildingElementComponent.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcReinforcingElement::IfcReinforcingElement(Step::SPFData *args) : IfcBuildingElementComponent(args) {
  m_steelGrade = getUnset(m_steelGrade);
}


IfcReinforcingElement::~IfcReinforcingElement() {
}

bool IfcReinforcingElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcReinforcingElement(this);
}

const char *IfcReinforcingElement::type() {
  return "IfcReinforcingElement";
}

Step::ClassType IfcReinforcingElement::getClassType() {
  return IfcReinforcingElement::s_type;
}

Step::ClassType IfcReinforcingElement::getType() const {
  return IfcReinforcingElement::s_type;
}

bool IfcReinforcingElement::isOfType(Step::ClassType t) {
  return IfcReinforcingElement::s_type == t ? true : IfcBuildingElementComponent::isOfType(t);
}

IfcLabel IfcReinforcingElement::getSteelGrade() {
  if (Step::BaseObject::inited()) {
    return m_steelGrade;
  }
  else {
    return getUnset(m_steelGrade);
  }
}

void IfcReinforcingElement::setSteelGrade(const IfcLabel &value) {
  m_steelGrade = value;
}

void IfcReinforcingElement::release() {
  IfcBuildingElementComponent::release();
}

bool IfcReinforcingElement::init() {
  bool status = IfcBuildingElementComponent::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_steelGrade = getUnset(m_steelGrade);
  }
  else {
    m_steelGrade = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcingElement::s_type = new Step::ClassType_class("IfcReinforcingElement");
