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
#include <ifc2x3/IfcStructuralLinearAction.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLinearAction::IfcStructuralLinearAction(Step::SPFData *args) : IfcStructuralAction(args) {
  m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}


IfcStructuralLinearAction::~IfcStructuralLinearAction() {
}

bool IfcStructuralLinearAction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLinearAction(this);
}

const char *IfcStructuralLinearAction::type() {
  return "IfcStructuralLinearAction";
}

Step::ClassType IfcStructuralLinearAction::getClassType() {
  return IfcStructuralLinearAction::s_type;
}

Step::ClassType IfcStructuralLinearAction::getType() const {
  return IfcStructuralLinearAction::s_type;
}

bool IfcStructuralLinearAction::isOfType(Step::ClassType t) {
  return IfcStructuralLinearAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

IfcProjectedOrTrueLengthEnum IfcStructuralLinearAction::getProjectedOrTrue() {
  if (Step::BaseObject::inited()) {
    return m_projectedOrTrue;
  }
  else {
    return IfcProjectedOrTrueLengthEnum_UNSET;
  }
}

void IfcStructuralLinearAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value) {
  m_projectedOrTrue = value;
}

void IfcStructuralLinearAction::release() {
  IfcStructuralAction::release();
}

bool IfcStructuralLinearAction::init() {
  bool status = IfcStructuralAction::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
  }
  else {
    if (arg == ".PROJECTED_LENGTH.") {
      m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_PROJECTED_LENGTH;
    }
    else if (arg == ".TRUE_LENGTH.") {
      m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_TRUE_LENGTH;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLinearAction::s_type = new Step::ClassType_class("IfcStructuralLinearAction");
IfcStructuralLinearAction_Factory::IfcStructuralLinearAction_Factory() {
}

IfcStructuralLinearAction_Factory::~IfcStructuralLinearAction_Factory() {
  clear(true);
}

void IfcStructuralLinearAction_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLinearAction_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLinearAction_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLinearAction *IfcStructuralLinearAction_Factory::get(Step::StepId id) {
  IfcStructuralLinearAction *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLinearAction * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLinearAction_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLinearAction * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLinearAction_Factory::create(Step::StepId id) {
  IfcStructuralLinearAction *ret = new IfcStructuralLinearAction(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLinearAction_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLinearAction *ret = new IfcStructuralLinearAction(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLinearAction_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLinearAction *ret = new IfcStructuralLinearAction(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLinearAction *IfcStructuralLinearAction_Factory::generate() {
  return static_cast< IfcStructuralLinearAction * > (create(m_model->getNewId()));
}

IfcStructuralLinearAction *IfcStructuralLinearAction_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLinearAction * > (it->second);
  }
  else {
    return NULL;
  }
}

