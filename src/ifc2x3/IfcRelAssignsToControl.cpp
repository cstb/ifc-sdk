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
#include <ifc2x3/IfcRelAssignsToControl.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToControl::IfcRelAssignsToControl(Step::SPFData *args) : IfcRelAssigns(args) {
  m_relatingControl = NULL;
}


IfcRelAssignsToControl::~IfcRelAssignsToControl() {
}

bool IfcRelAssignsToControl::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToControl(this);
}

const char *IfcRelAssignsToControl::type() {
  return "IfcRelAssignsToControl";
}

Step::ClassType IfcRelAssignsToControl::getClassType() {
  return IfcRelAssignsToControl::s_type;
}

Step::ClassType IfcRelAssignsToControl::getType() const {
  return IfcRelAssignsToControl::s_type;
}

bool IfcRelAssignsToControl::isOfType(Step::ClassType t) {
  return IfcRelAssignsToControl::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcControl *IfcRelAssignsToControl::getRelatingControl() {
  if (Step::BaseObject::inited()) {
    return m_relatingControl.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToControl::setRelatingControl(const Step::RefPtr< IfcControl > &value) {
  m_relatingControl = value;
}

void IfcRelAssignsToControl::release() {
  IfcRelAssigns::release();
  m_relatingControl.release();
}

bool IfcRelAssignsToControl::init() {
  bool status = IfcRelAssigns::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingControl = NULL;
  }
  else {
    m_relatingControl = static_cast< IfcControl * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToControl::s_type = new Step::ClassType_class("IfcRelAssignsToControl");
IfcRelAssignsToControl_Factory::IfcRelAssignsToControl_Factory() {
}

IfcRelAssignsToControl_Factory::~IfcRelAssignsToControl_Factory() {
  clear(true);
}

void IfcRelAssignsToControl_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToControl_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToControl_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToControl *IfcRelAssignsToControl_Factory::get(Step::StepId id) {
  IfcRelAssignsToControl *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToControl * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToControl_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToControl * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToControl_Factory::create(Step::StepId id) {
  IfcRelAssignsToControl *ret = new IfcRelAssignsToControl(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToControl_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToControl *ret = new IfcRelAssignsToControl(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToControl_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToControl *ret = new IfcRelAssignsToControl(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToControl *IfcRelAssignsToControl_Factory::generate() {
  return static_cast< IfcRelAssignsToControl * > (create(m_model->getNewId()));
}

IfcRelAssignsToControl *IfcRelAssignsToControl_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToControl * > (it->second);
  }
  else {
    return NULL;
  }
}

