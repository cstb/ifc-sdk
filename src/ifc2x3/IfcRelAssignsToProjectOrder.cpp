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
#include <ifc2x3/IfcRelAssignsToProjectOrder.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToProjectOrder::IfcRelAssignsToProjectOrder(Step::SPFData *args) : IfcRelAssignsToControl(args) {
}


IfcRelAssignsToProjectOrder::~IfcRelAssignsToProjectOrder() {
}

bool IfcRelAssignsToProjectOrder::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToProjectOrder(this);
}

const char *IfcRelAssignsToProjectOrder::type() {
  return "IfcRelAssignsToProjectOrder";
}

Step::ClassType IfcRelAssignsToProjectOrder::getClassType() {
  return IfcRelAssignsToProjectOrder::s_type;
}

Step::ClassType IfcRelAssignsToProjectOrder::getType() const {
  return IfcRelAssignsToProjectOrder::s_type;
}

bool IfcRelAssignsToProjectOrder::isOfType(Step::ClassType t) {
  return IfcRelAssignsToProjectOrder::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

void IfcRelAssignsToProjectOrder::release() {
  IfcRelAssignsToControl::release();
}

bool IfcRelAssignsToProjectOrder::init() {
  bool status = IfcRelAssignsToControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProjectOrder::s_type = new Step::ClassType_class("IfcRelAssignsToProjectOrder");
IfcRelAssignsToProjectOrder_Factory::IfcRelAssignsToProjectOrder_Factory() {
}

IfcRelAssignsToProjectOrder_Factory::~IfcRelAssignsToProjectOrder_Factory() {
  clear(true);
}

void IfcRelAssignsToProjectOrder_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToProjectOrder_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToProjectOrder_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToProjectOrder *IfcRelAssignsToProjectOrder_Factory::get(Step::StepId id) {
  IfcRelAssignsToProjectOrder *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToProjectOrder * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToProjectOrder_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToProjectOrder * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToProjectOrder_Factory::create(Step::StepId id) {
  IfcRelAssignsToProjectOrder *ret = new IfcRelAssignsToProjectOrder(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToProjectOrder_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToProjectOrder *ret = new IfcRelAssignsToProjectOrder(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToProjectOrder_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToProjectOrder *ret = new IfcRelAssignsToProjectOrder(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToProjectOrder *IfcRelAssignsToProjectOrder_Factory::generate() {
  return static_cast< IfcRelAssignsToProjectOrder * > (create(m_model->getNewId()));
}

IfcRelAssignsToProjectOrder *IfcRelAssignsToProjectOrder_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToProjectOrder * > (it->second);
  }
  else {
    return NULL;
  }
}

