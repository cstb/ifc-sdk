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
#include <ifc2x3/IfcPerformanceHistory.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPerformanceHistory::IfcPerformanceHistory(Step::SPFData *args) : IfcControl(args) {
  m_lifeCyclePhase = getUnset(m_lifeCyclePhase);
}


IfcPerformanceHistory::~IfcPerformanceHistory() {
}

bool IfcPerformanceHistory::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPerformanceHistory(this);
}

const char *IfcPerformanceHistory::type() {
  return "IfcPerformanceHistory";
}

Step::ClassType IfcPerformanceHistory::getClassType() {
  return IfcPerformanceHistory::s_type;
}

Step::ClassType IfcPerformanceHistory::getType() const {
  return IfcPerformanceHistory::s_type;
}

bool IfcPerformanceHistory::isOfType(Step::ClassType t) {
  return IfcPerformanceHistory::s_type == t ? true : IfcControl::isOfType(t);
}

IfcLabel IfcPerformanceHistory::getLifeCyclePhase() {
  if (Step::BaseObject::inited()) {
    return m_lifeCyclePhase;
  }
  else {
    return getUnset(m_lifeCyclePhase);
  }
}

void IfcPerformanceHistory::setLifeCyclePhase(const IfcLabel &value) {
  m_lifeCyclePhase = value;
}

void IfcPerformanceHistory::release() {
  IfcControl::release();
}

bool IfcPerformanceHistory::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lifeCyclePhase = getUnset(m_lifeCyclePhase);
  }
  else {
    m_lifeCyclePhase = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPerformanceHistory::s_type = new Step::ClassType_class("IfcPerformanceHistory");
IfcPerformanceHistory_Factory::IfcPerformanceHistory_Factory() {
}

IfcPerformanceHistory_Factory::~IfcPerformanceHistory_Factory() {
  clear(true);
}

void IfcPerformanceHistory_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPerformanceHistory_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPerformanceHistory_Factory::end() {
  return m_idMap.end();
}

IfcPerformanceHistory *IfcPerformanceHistory_Factory::get(Step::StepId id) {
  IfcPerformanceHistory *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPerformanceHistory * > (it->second);
  }
  else {
    LOG_ERROR("IfcPerformanceHistory_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPerformanceHistory * > (create(id));
  }
}

Step::BaseObject *IfcPerformanceHistory_Factory::create(Step::StepId id) {
  IfcPerformanceHistory *ret = new IfcPerformanceHistory(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPerformanceHistory_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPerformanceHistory *ret = new IfcPerformanceHistory(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPerformanceHistory_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPerformanceHistory *ret = new IfcPerformanceHistory(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPerformanceHistory *IfcPerformanceHistory_Factory::generate() {
  return static_cast< IfcPerformanceHistory * > (create(m_model->getNewId()));
}

IfcPerformanceHistory *IfcPerformanceHistory_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPerformanceHistory * > (it->second);
  }
  else {
    return NULL;
  }
}

