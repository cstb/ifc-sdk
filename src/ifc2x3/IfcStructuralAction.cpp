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
#include <ifc2x3/IfcStructuralAction.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/IfcStructuralReaction.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcStructuralAction::IfcStructuralAction(Step::SPFData *args) : IfcStructuralActivity(args) {
  m_destabilizingLoad = getUnset(m_destabilizingLoad);
  m_causedBy = NULL;
}


IfcStructuralAction::~IfcStructuralAction() {
}

bool IfcStructuralAction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralAction(this);
}

const char *IfcStructuralAction::type() {
  return "IfcStructuralAction";
}

Step::ClassType IfcStructuralAction::getClassType() {
  return IfcStructuralAction::s_type;
}

Step::ClassType IfcStructuralAction::getType() const {
  return IfcStructuralAction::s_type;
}

bool IfcStructuralAction::isOfType(Step::ClassType t) {
  return IfcStructuralAction::s_type == t ? true : IfcStructuralActivity::isOfType(t);
}

Bool IfcStructuralAction::getDestabilizingLoad() {
  if (Step::BaseObject::inited()) {
    return m_destabilizingLoad;
  }
  else {
    return getUnset(m_destabilizingLoad);
  }
}

void IfcStructuralAction::setDestabilizingLoad(Bool value) {
  m_destabilizingLoad = value;
}

IfcStructuralReaction *IfcStructuralAction::getCausedBy() {
  if (Step::BaseObject::inited()) {
    return m_causedBy.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralAction::setCausedBy(const Step::RefPtr< IfcStructuralReaction > &value) {
  m_causedBy = value;
}

void IfcStructuralAction::release() {
  IfcStructuralActivity::release();
  m_causedBy.release();
}

bool IfcStructuralAction::init() {
  bool status = IfcStructuralActivity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_destabilizingLoad = getUnset(m_destabilizingLoad);
  }
  else {
    m_destabilizingLoad = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_causedBy = NULL;
  }
  else {
    m_causedBy = static_cast< IfcStructuralReaction * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralAction::s_type = new Step::ClassType_class("IfcStructuralAction");
