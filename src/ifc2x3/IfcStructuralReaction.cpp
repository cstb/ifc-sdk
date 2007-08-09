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
#include <ifc2x3/IfcStructuralReaction.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcStructuralAction.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralReaction::IfcStructuralReaction(Step::SPFData *args) : IfcStructuralActivity(args) {
  m_causes.setUnset(true);
}


IfcStructuralReaction::~IfcStructuralReaction() {
}

bool IfcStructuralReaction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralReaction(this);
}

const char *IfcStructuralReaction::type() {
  return "IfcStructuralReaction";
}

Step::ClassType IfcStructuralReaction::getClassType() {
  return IfcStructuralReaction::s_type;
}

Step::ClassType IfcStructuralReaction::getType() const {
  return IfcStructuralReaction::s_type;
}

bool IfcStructuralReaction::isOfType(Step::ClassType t) {
  return IfcStructuralReaction::s_type == t ? true : IfcStructuralActivity::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcStructuralAction > > &IfcStructuralReaction::getCauses() {
  if (Step::BaseObject::inited()) {
    return m_causes;
  }
  else {
    m_causes.setUnset(true);
    return m_causes;
  }
}

void IfcStructuralReaction::setCauses(const Step::StepSet< Step::RefPtr< IfcStructuralAction > > &value) {
  m_causes = value;
}

void IfcStructuralReaction::release() {
  IfcStructuralActivity::release();
}

bool IfcStructuralReaction::init() {
  bool status = IfcStructuralActivity::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcStructuralAction::getClassType(), 10);
  if (inverses) {
    unsigned int i;
    m_causes.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_causes.insert(static_cast< IfcStructuralAction * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralReaction::s_type = new Step::ClassType_class("IfcStructuralReaction");
