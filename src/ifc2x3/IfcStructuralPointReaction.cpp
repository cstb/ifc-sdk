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
#include <ifc2x3/IfcStructuralPointReaction.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralPointReaction::IfcStructuralPointReaction(Step::SPFData *args) : IfcStructuralReaction(args) {
}


IfcStructuralPointReaction::~IfcStructuralPointReaction() {
}

bool IfcStructuralPointReaction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralPointReaction(this);
}

const char *IfcStructuralPointReaction::type() {
  return "IfcStructuralPointReaction";
}

Step::ClassType IfcStructuralPointReaction::getClassType() {
  return IfcStructuralPointReaction::s_type;
}

Step::ClassType IfcStructuralPointReaction::getType() const {
  return IfcStructuralPointReaction::s_type;
}

bool IfcStructuralPointReaction::isOfType(Step::ClassType t) {
  return IfcStructuralPointReaction::s_type == t ? true : IfcStructuralReaction::isOfType(t);
}

void IfcStructuralPointReaction::release() {
  IfcStructuralReaction::release();
}

bool IfcStructuralPointReaction::init() {
  bool status = IfcStructuralReaction::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPointReaction::s_type = new Step::ClassType_class("IfcStructuralPointReaction");
IfcStructuralPointReaction_Factory::IfcStructuralPointReaction_Factory() {
}

IfcStructuralPointReaction_Factory::~IfcStructuralPointReaction_Factory() {
  clear(true);
}

void IfcStructuralPointReaction_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPointReaction_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPointReaction_Factory::end() {
  return m_idMap.end();
}

IfcStructuralPointReaction *IfcStructuralPointReaction_Factory::get(Step::StepId id) {
  IfcStructuralPointReaction *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralPointReaction * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralPointReaction_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralPointReaction * > (create(id));
  }
}

Step::BaseObject *IfcStructuralPointReaction_Factory::create(Step::StepId id) {
  IfcStructuralPointReaction *ret = new IfcStructuralPointReaction(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPointReaction_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralPointReaction *ret = new IfcStructuralPointReaction(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPointReaction_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralPointReaction *ret = new IfcStructuralPointReaction(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralPointReaction *IfcStructuralPointReaction_Factory::generate() {
  return static_cast< IfcStructuralPointReaction * > (create(m_model->getNewId()));
}

IfcStructuralPointReaction *IfcStructuralPointReaction_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralPointReaction * > (it->second);
  }
  else {
    return NULL;
  }
}

