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
#include <ifc2x3/IfcPropertyDefinition.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcPropertyDefinition::IfcPropertyDefinition(Step::SPFData *args) : IfcRoot(args) {
  m_hasAssociations.setUnset(true);
}


IfcPropertyDefinition::~IfcPropertyDefinition() {
}

bool IfcPropertyDefinition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertyDefinition(this);
}

const char *IfcPropertyDefinition::type() {
  return "IfcPropertyDefinition";
}

Step::ClassType IfcPropertyDefinition::getClassType() {
  return IfcPropertyDefinition::s_type;
}

Step::ClassType IfcPropertyDefinition::getType() const {
  return IfcPropertyDefinition::s_type;
}

bool IfcPropertyDefinition::isOfType(Step::ClassType t) {
  return IfcPropertyDefinition::s_type == t ? true : IfcRoot::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelAssociates > > &IfcPropertyDefinition::getHasAssociations() {
  if (Step::BaseObject::inited()) {
    return m_hasAssociations;
  }
  else {
    m_hasAssociations.setUnset(true);
    return m_hasAssociations;
  }
}

void IfcPropertyDefinition::setHasAssociations(const Step::StepSet< Step::RefPtr< IfcRelAssociates > > &value) {
  m_hasAssociations = value;
}

void IfcPropertyDefinition::release() {
  IfcRoot::release();
}

bool IfcPropertyDefinition::init() {
  bool status = IfcRoot::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasAssociations.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasAssociations.insert(static_cast< IfcRelAssociates * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyDefinition::s_type = new Step::ClassType_class("IfcPropertyDefinition");
