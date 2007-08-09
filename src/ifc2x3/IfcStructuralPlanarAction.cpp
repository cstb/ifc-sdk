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
#include <ifc2x3/IfcStructuralPlanarAction.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralPlanarAction::IfcStructuralPlanarAction(Step::SPFData *args) : IfcStructuralAction(args) {
  m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}


IfcStructuralPlanarAction::~IfcStructuralPlanarAction() {
}

bool IfcStructuralPlanarAction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralPlanarAction(this);
}

const char *IfcStructuralPlanarAction::type() {
  return "IfcStructuralPlanarAction";
}

Step::ClassType IfcStructuralPlanarAction::getClassType() {
  return IfcStructuralPlanarAction::s_type;
}

Step::ClassType IfcStructuralPlanarAction::getType() const {
  return IfcStructuralPlanarAction::s_type;
}

bool IfcStructuralPlanarAction::isOfType(Step::ClassType t) {
  return IfcStructuralPlanarAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

IfcProjectedOrTrueLengthEnum IfcStructuralPlanarAction::getProjectedOrTrue() {
  if (Step::BaseObject::inited()) {
    return m_projectedOrTrue;
  }
  else {
    return IfcProjectedOrTrueLengthEnum_UNSET;
  }
}

void IfcStructuralPlanarAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value) {
  m_projectedOrTrue = value;
}

void IfcStructuralPlanarAction::release() {
  IfcStructuralAction::release();
}

bool IfcStructuralPlanarAction::init() {
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

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPlanarAction::s_type = new Step::ClassType_class("IfcStructuralPlanarAction");
IfcStructuralPlanarAction_Factory::IfcStructuralPlanarAction_Factory() {
}

IfcStructuralPlanarAction_Factory::~IfcStructuralPlanarAction_Factory() {
  clear(true);
}

void IfcStructuralPlanarAction_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPlanarAction_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPlanarAction_Factory::end() {
  return m_idMap.end();
}

IfcStructuralPlanarAction *IfcStructuralPlanarAction_Factory::get(Step::StepId id) {
  IfcStructuralPlanarAction *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralPlanarAction * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralPlanarAction_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralPlanarAction * > (create(id));
  }
}

Step::BaseObject *IfcStructuralPlanarAction_Factory::create(Step::StepId id) {
  IfcStructuralPlanarAction *ret = new IfcStructuralPlanarAction(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPlanarAction_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralPlanarAction *ret = new IfcStructuralPlanarAction(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPlanarAction_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralPlanarAction *ret = new IfcStructuralPlanarAction(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralPlanarAction *IfcStructuralPlanarAction_Factory::generate() {
  return static_cast< IfcStructuralPlanarAction * > (create(m_model->getNewId()));
}

IfcStructuralPlanarAction *IfcStructuralPlanarAction_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralPlanarAction * > (it->second);
  }
  else {
    return NULL;
  }
}

