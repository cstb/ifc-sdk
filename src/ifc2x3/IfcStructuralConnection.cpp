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
#include <ifc2x3/IfcStructuralConnection.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralConnection::IfcStructuralConnection(Step::SPFData *args) : IfcStructuralItem(args) {
  m_appliedCondition = NULL;
  m_connectsStructuralMembers.setUnset(true);
}


IfcStructuralConnection::~IfcStructuralConnection() {
}

bool IfcStructuralConnection::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralConnection(this);
}

const char *IfcStructuralConnection::type() {
  return "IfcStructuralConnection";
}

Step::ClassType IfcStructuralConnection::getClassType() {
  return IfcStructuralConnection::s_type;
}

Step::ClassType IfcStructuralConnection::getType() const {
  return IfcStructuralConnection::s_type;
}

bool IfcStructuralConnection::isOfType(Step::ClassType t) {
  return IfcStructuralConnection::s_type == t ? true : IfcStructuralItem::isOfType(t);
}

IfcBoundaryCondition *IfcStructuralConnection::getAppliedCondition() {
  if (Step::BaseObject::inited()) {
    return m_appliedCondition.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralConnection::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value) {
  m_appliedCondition = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > &IfcStructuralConnection::getConnectsStructuralMembers() {
  if (Step::BaseObject::inited()) {
    return m_connectsStructuralMembers;
  }
  else {
    m_connectsStructuralMembers.setUnset(true);
    return m_connectsStructuralMembers;
  }
}

void IfcStructuralConnection::setConnectsStructuralMembers(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > &value) {
  m_connectsStructuralMembers = value;
}

void IfcStructuralConnection::release() {
  IfcStructuralItem::release();
  m_appliedCondition.release();
}

bool IfcStructuralConnection::init() {
  bool status = IfcStructuralItem::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_appliedCondition = NULL;
  }
  else {
    m_appliedCondition = static_cast< IfcBoundaryCondition * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_connectsStructuralMembers.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_connectsStructuralMembers.insert(static_cast< IfcRelConnectsStructuralMember * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralConnection::s_type = new Step::ClassType_class("IfcStructuralConnection");
