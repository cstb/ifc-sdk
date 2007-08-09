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
#include <ifc2x3/IfcProperty.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcComplexProperty.h>
#include <ifc2x3/IfcPropertyDependencyRelationship.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcProperty::IfcProperty(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_propertyForDependance.setUnset(true);
  m_propertyDependsOn.setUnset(true);
  m_partOfComplex.setUnset(true);
}


IfcProperty::~IfcProperty() {
}

bool IfcProperty::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProperty(this);
}

const char *IfcProperty::type() {
  return "IfcProperty";
}

Step::ClassType IfcProperty::getClassType() {
  return IfcProperty::s_type;
}

Step::ClassType IfcProperty::getType() const {
  return IfcProperty::s_type;
}

bool IfcProperty::isOfType(Step::ClassType t) {
  return IfcProperty::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcProperty::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcProperty::setName(const IfcIdentifier &value) {
  m_name = value;
}

IfcText IfcProperty::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcProperty::setDescription(const IfcText &value) {
  m_description = value;
}

Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &IfcProperty::getPropertyForDependance() {
  if (Step::BaseObject::inited()) {
    return m_propertyForDependance;
  }
  else {
    m_propertyForDependance.setUnset(true);
    return m_propertyForDependance;
  }
}

void IfcProperty::setPropertyForDependance(const Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &value) {
  m_propertyForDependance = value;
}

Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &IfcProperty::getPropertyDependsOn() {
  if (Step::BaseObject::inited()) {
    return m_propertyDependsOn;
  }
  else {
    m_propertyDependsOn.setUnset(true);
    return m_propertyDependsOn;
  }
}

void IfcProperty::setPropertyDependsOn(const Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &value) {
  m_propertyDependsOn = value;
}

Step::StepSet< Step::RefPtr< IfcComplexProperty > > &IfcProperty::getPartOfComplex() {
  if (Step::BaseObject::inited()) {
    return m_partOfComplex;
  }
  else {
    m_partOfComplex.setUnset(true);
    return m_partOfComplex;
  }
}

void IfcProperty::setPartOfComplex(const Step::StepSet< Step::RefPtr< IfcComplexProperty > > &value) {
  m_partOfComplex = value;
}

void IfcProperty::release() {
}

bool IfcProperty::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_propertyForDependance.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_propertyForDependance.insert(static_cast< IfcPropertyDependencyRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_propertyDependsOn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_propertyDependsOn.insert(static_cast< IfcPropertyDependencyRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcComplexProperty::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_partOfComplex.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_partOfComplex.insert(static_cast< IfcComplexProperty * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProperty::s_type = new Step::ClassType_class("IfcProperty");
