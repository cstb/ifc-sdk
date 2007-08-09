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
#include <ifc2x3/IfcActorSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcActorSelect::IfcActorSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcActorSelect::IfcActorSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcActorSelect::~IfcActorSelect() {
  deleteUnion();
}

bool IfcActorSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcActorSelect(this);
}

bool IfcActorSelect::init() {
  return false;
}

const char *IfcActorSelect::type() {
  return "IfcActorSelect";
}

Step::ClassType IfcActorSelect::getClassType() {
  return IfcActorSelect::s_type;
}

Step::ClassType IfcActorSelect::getType() const {
  return IfcActorSelect::s_type;
}

bool IfcActorSelect::isOfType(Step::ClassType t) {
  return IfcActorSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcActorSelect::currentTypeName() {
  switch(m_type) {
  case IFCORGANIZATION:
    return "IfcOrganization";
    break;
  case IFCPERSON:
    return "IfcPerson";
    break;
  case IFCPERSONANDORGANIZATION:
    return "IfcPersonAndOrganization";
    break;
  default:
    return "UNSET";
  }
}

IfcActorSelect::IfcActorSelect_select IfcActorSelect::currentType() {
  return m_type;
}

void IfcActorSelect::deleteUnion() {
  switch(m_type) {
  case IFCORGANIZATION:
    m_IfcActorSelect_union.m_IfcOrganization->unref();
    break;
  case IFCPERSON:
    m_IfcActorSelect_union.m_IfcPerson->unref();
    break;
  case IFCPERSONANDORGANIZATION:
    m_IfcActorSelect_union.m_IfcPersonAndOrganization->unref();
    break;
    }
  m_type = UNSET;
}

IfcOrganization *IfcActorSelect::getIfcOrganization() {
  return m_IfcActorSelect_union.m_IfcOrganization;
}

void IfcActorSelect::setIfcOrganization(IfcOrganization *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcActorSelect_union.m_IfcOrganization = value;
  if (value) {
    value->ref();
    m_type = IFCORGANIZATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCORGANIZATION;
}

IfcPerson *IfcActorSelect::getIfcPerson() {
  return m_IfcActorSelect_union.m_IfcPerson;
}

void IfcActorSelect::setIfcPerson(IfcPerson *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcActorSelect_union.m_IfcPerson = value;
  if (value) {
    value->ref();
    m_type = IFCPERSON;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPERSON;
}

IfcPersonAndOrganization *IfcActorSelect::getIfcPersonAndOrganization() {
  return m_IfcActorSelect_union.m_IfcPersonAndOrganization;
}

void IfcActorSelect::setIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcActorSelect_union.m_IfcPersonAndOrganization = value;
  if (value) {
    value->ref();
    m_type = IFCPERSONANDORGANIZATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPERSONANDORGANIZATION;
}

void IfcActorSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcOrganization::getClassType())) {
    setIfcOrganization(static_cast< IfcOrganization* > (v));
  }
  else if (v->isOfType(IfcPerson::getClassType())) {
    setIfcPerson(static_cast< IfcPerson* > (v));
  }
  else if (v->isOfType(IfcPersonAndOrganization::getClassType())) {
    setIfcPersonAndOrganization(static_cast< IfcPersonAndOrganization* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcActorSelect::s_type = new Step::ClassType_class("IfcActorSelect");
