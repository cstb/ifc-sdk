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
#include <ifc2x3/IfcStructuralMember.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralMember::IfcStructuralMember(Step::SPFData *args) : IfcStructuralItem(args) {
  m_referencesElement.setUnset(true);
  m_connectedBy.setUnset(true);
}


IfcStructuralMember::~IfcStructuralMember() {
}

bool IfcStructuralMember::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralMember(this);
}

const char *IfcStructuralMember::type() {
  return "IfcStructuralMember";
}

Step::ClassType IfcStructuralMember::getClassType() {
  return IfcStructuralMember::s_type;
}

Step::ClassType IfcStructuralMember::getType() const {
  return IfcStructuralMember::s_type;
}

bool IfcStructuralMember::isOfType(Step::ClassType t) {
  return IfcStructuralMember::s_type == t ? true : IfcStructuralItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &IfcStructuralMember::getReferencesElement() {
  if (Step::BaseObject::inited()) {
    return m_referencesElement;
  }
  else {
    m_referencesElement.setUnset(true);
    return m_referencesElement;
  }
}

void IfcStructuralMember::setReferencesElement(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &value) {
  m_referencesElement = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > &IfcStructuralMember::getConnectedBy() {
  if (Step::BaseObject::inited()) {
    return m_connectedBy;
  }
  else {
    m_connectedBy.setUnset(true);
    return m_connectedBy;
  }
}

void IfcStructuralMember::setConnectedBy(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > &value) {
  m_connectedBy = value;
}

void IfcStructuralMember::release() {
  IfcStructuralItem::release();
}

bool IfcStructuralMember::init() {
  bool status = IfcStructuralItem::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_referencesElement.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referencesElement.insert(static_cast< IfcRelConnectsStructuralElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_connectedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_connectedBy.insert(static_cast< IfcRelConnectsStructuralMember * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralMember::s_type = new Step::ClassType_class("IfcStructuralMember");
