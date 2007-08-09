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
#include <ifc2x3/IfcPropertySetDefinition.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPropertyDefinition.h>
#include <ifc2x3/IfcRelDefinesByProperties.h>
#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcPropertySetDefinition::IfcPropertySetDefinition(Step::SPFData *args) : IfcPropertyDefinition(args) {
  m_propertyDefinitionOf.setUnset(true);
  m_definesType.setUnset(true);
}


IfcPropertySetDefinition::~IfcPropertySetDefinition() {
}

bool IfcPropertySetDefinition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertySetDefinition(this);
}

const char *IfcPropertySetDefinition::type() {
  return "IfcPropertySetDefinition";
}

Step::ClassType IfcPropertySetDefinition::getClassType() {
  return IfcPropertySetDefinition::s_type;
}

Step::ClassType IfcPropertySetDefinition::getType() const {
  return IfcPropertySetDefinition::s_type;
}

bool IfcPropertySetDefinition::isOfType(Step::ClassType t) {
  return IfcPropertySetDefinition::s_type == t ? true : IfcPropertyDefinition::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelDefinesByProperties > > &IfcPropertySetDefinition::getPropertyDefinitionOf() {
  if (Step::BaseObject::inited()) {
    return m_propertyDefinitionOf;
  }
  else {
    m_propertyDefinitionOf.setUnset(true);
    return m_propertyDefinitionOf;
  }
}

void IfcPropertySetDefinition::setPropertyDefinitionOf(const Step::StepSet< Step::RefPtr< IfcRelDefinesByProperties > > &value) {
  m_propertyDefinitionOf = value;
}

Step::StepSet< Step::RefPtr< IfcTypeObject > > &IfcPropertySetDefinition::getDefinesType() {
  if (Step::BaseObject::inited()) {
    return m_definesType;
  }
  else {
    m_definesType.setUnset(true);
    return m_definesType;
  }
}

void IfcPropertySetDefinition::setDefinesType(const Step::StepSet< Step::RefPtr< IfcTypeObject > > &value) {
  m_definesType = value;
}

void IfcPropertySetDefinition::release() {
  IfcPropertyDefinition::release();
}

bool IfcPropertySetDefinition::init() {
  bool status = IfcPropertyDefinition::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelDefinesByProperties::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_propertyDefinitionOf.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_propertyDefinitionOf.insert(static_cast< IfcRelDefinesByProperties * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcTypeObject::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_definesType.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_definesType.insert(static_cast< IfcTypeObject * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertySetDefinition::s_type = new Step::ClassType_class("IfcPropertySetDefinition");
