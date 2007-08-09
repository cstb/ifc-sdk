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
#include <ifc2x3/IfcTask.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTask::IfcTask(Step::SPFData *args) : IfcProcess(args) {
  m_taskId = getUnset(m_taskId);
  m_status = getUnset(m_status);
  m_workMethod = getUnset(m_workMethod);
  m_isMilestone = getUnset(m_isMilestone);
  m_priority = getUnset(m_priority);
}


IfcTask::~IfcTask() {
}

bool IfcTask::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTask(this);
}

const char *IfcTask::type() {
  return "IfcTask";
}

Step::ClassType IfcTask::getClassType() {
  return IfcTask::s_type;
}

Step::ClassType IfcTask::getType() const {
  return IfcTask::s_type;
}

bool IfcTask::isOfType(Step::ClassType t) {
  return IfcTask::s_type == t ? true : IfcProcess::isOfType(t);
}

IfcIdentifier IfcTask::getTaskId() {
  if (Step::BaseObject::inited()) {
    return m_taskId;
  }
  else {
    return getUnset(m_taskId);
  }
}

void IfcTask::setTaskId(const IfcIdentifier &value) {
  m_taskId = value;
}

IfcLabel IfcTask::getStatus() {
  if (Step::BaseObject::inited()) {
    return m_status;
  }
  else {
    return getUnset(m_status);
  }
}

void IfcTask::setStatus(const IfcLabel &value) {
  m_status = value;
}

IfcLabel IfcTask::getWorkMethod() {
  if (Step::BaseObject::inited()) {
    return m_workMethod;
  }
  else {
    return getUnset(m_workMethod);
  }
}

void IfcTask::setWorkMethod(const IfcLabel &value) {
  m_workMethod = value;
}

Bool IfcTask::getIsMilestone() {
  if (Step::BaseObject::inited()) {
    return m_isMilestone;
  }
  else {
    return getUnset(m_isMilestone);
  }
}

void IfcTask::setIsMilestone(Bool value) {
  m_isMilestone = value;
}

Integer IfcTask::getPriority() {
  if (Step::BaseObject::inited()) {
    return m_priority;
  }
  else {
    return getUnset(m_priority);
  }
}

void IfcTask::setPriority(Integer value) {
  m_priority = value;
}

void IfcTask::release() {
  IfcProcess::release();
}

bool IfcTask::init() {
  bool status = IfcProcess::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_taskId = getUnset(m_taskId);
  }
  else {
    m_taskId = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_status = getUnset(m_status);
  }
  else {
    m_status = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_workMethod = getUnset(m_workMethod);
  }
  else {
    m_workMethod = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isMilestone = getUnset(m_isMilestone);
  }
  else {
    m_isMilestone = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_priority = getUnset(m_priority);
  }
  else {
    m_priority = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTask::s_type = new Step::ClassType_class("IfcTask");
IfcTask_Factory::IfcTask_Factory() {
}

IfcTask_Factory::~IfcTask_Factory() {
  clear(true);
}

void IfcTask_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTask_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTask_Factory::end() {
  return m_idMap.end();
}

IfcTask *IfcTask_Factory::get(Step::StepId id) {
  IfcTask *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTask * > (it->second);
  }
  else {
    LOG_ERROR("IfcTask_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTask * > (create(id));
  }
}

Step::BaseObject *IfcTask_Factory::create(Step::StepId id) {
  IfcTask *ret = new IfcTask(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTask_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTask *ret = new IfcTask(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTask_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTask *ret = new IfcTask(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTask *IfcTask_Factory::generate() {
  return static_cast< IfcTask * > (create(m_model->getNewId()));
}

IfcTask *IfcTask_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTask * > (it->second);
  }
  else {
    return NULL;
  }
}

