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
#include <ifc2x3/IfcStructuralItem.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralItem::IfcStructuralItem(Step::SPFData *args) : IfcProduct(args) {
  m_assignedStructuralActivity.setUnset(true);
}


IfcStructuralItem::~IfcStructuralItem() {
}

bool IfcStructuralItem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralItem(this);
}

const char *IfcStructuralItem::type() {
  return "IfcStructuralItem";
}

Step::ClassType IfcStructuralItem::getClassType() {
  return IfcStructuralItem::s_type;
}

Step::ClassType IfcStructuralItem::getType() const {
  return IfcStructuralItem::s_type;
}

bool IfcStructuralItem::isOfType(Step::ClassType t) {
  return IfcStructuralItem::s_type == t ? true : IfcProduct::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralActivity > > &IfcStructuralItem::getAssignedStructuralActivity() {
  if (Step::BaseObject::inited()) {
    return m_assignedStructuralActivity;
  }
  else {
    m_assignedStructuralActivity.setUnset(true);
    return m_assignedStructuralActivity;
  }
}

void IfcStructuralItem::setAssignedStructuralActivity(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralActivity > > &value) {
  m_assignedStructuralActivity = value;
}

void IfcStructuralItem::release() {
  IfcProduct::release();
}

bool IfcStructuralItem::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_assignedStructuralActivity.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_assignedStructuralActivity.insert(static_cast< IfcRelConnectsStructuralActivity * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralItem::s_type = new Step::ClassType_class("IfcStructuralItem");
