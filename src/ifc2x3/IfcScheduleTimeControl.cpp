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
#include <ifc2x3/IfcScheduleTimeControl.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcRelAssignsTasks.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcScheduleTimeControl::IfcScheduleTimeControl(Step::SPFData *args) : IfcControl(args) {
  m_actualStart = NULL;
  m_earlyStart = NULL;
  m_lateStart = NULL;
  m_scheduleStart = NULL;
  m_actualFinish = NULL;
  m_earlyFinish = NULL;
  m_lateFinish = NULL;
  m_scheduleFinish = NULL;
  m_scheduleDuration = getUnset(m_scheduleDuration);
  m_actualDuration = getUnset(m_actualDuration);
  m_remainingTime = getUnset(m_remainingTime);
  m_freeFloat = getUnset(m_freeFloat);
  m_totalFloat = getUnset(m_totalFloat);
  m_isCritical = getUnset(m_isCritical);
  m_statusTime = NULL;
  m_startFloat = getUnset(m_startFloat);
  m_finishFloat = getUnset(m_finishFloat);
  m_completion = getUnset(m_completion);
  m_scheduleTimeControlAssigned = NULL;
}


IfcScheduleTimeControl::~IfcScheduleTimeControl() {
}

bool IfcScheduleTimeControl::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcScheduleTimeControl(this);
}

const char *IfcScheduleTimeControl::type() {
  return "IfcScheduleTimeControl";
}

Step::ClassType IfcScheduleTimeControl::getClassType() {
  return IfcScheduleTimeControl::s_type;
}

Step::ClassType IfcScheduleTimeControl::getType() const {
  return IfcScheduleTimeControl::s_type;
}

bool IfcScheduleTimeControl::isOfType(Step::ClassType t) {
  return IfcScheduleTimeControl::s_type == t ? true : IfcControl::isOfType(t);
}

IfcDateTimeSelect *IfcScheduleTimeControl::getActualStart() {
  if (Step::BaseObject::inited()) {
    return m_actualStart.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_actualStart = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyStart() {
  if (Step::BaseObject::inited()) {
    return m_earlyStart.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_earlyStart = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getLateStart() {
  if (Step::BaseObject::inited()) {
    return m_lateStart.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_lateStart = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleStart() {
  if (Step::BaseObject::inited()) {
    return m_scheduleStart.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_scheduleStart = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getActualFinish() {
  if (Step::BaseObject::inited()) {
    return m_actualFinish.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_actualFinish = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyFinish() {
  if (Step::BaseObject::inited()) {
    return m_earlyFinish.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_earlyFinish = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getLateFinish() {
  if (Step::BaseObject::inited()) {
    return m_lateFinish.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_lateFinish = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleFinish() {
  if (Step::BaseObject::inited()) {
    return m_scheduleFinish.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_scheduleFinish = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getScheduleDuration() {
  if (Step::BaseObject::inited()) {
    return m_scheduleDuration;
  }
  else {
    return getUnset(m_scheduleDuration);
  }
}

void IfcScheduleTimeControl::setScheduleDuration(IfcTimeMeasure value) {
  m_scheduleDuration = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getActualDuration() {
  if (Step::BaseObject::inited()) {
    return m_actualDuration;
  }
  else {
    return getUnset(m_actualDuration);
  }
}

void IfcScheduleTimeControl::setActualDuration(IfcTimeMeasure value) {
  m_actualDuration = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getRemainingTime() {
  if (Step::BaseObject::inited()) {
    return m_remainingTime;
  }
  else {
    return getUnset(m_remainingTime);
  }
}

void IfcScheduleTimeControl::setRemainingTime(IfcTimeMeasure value) {
  m_remainingTime = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getFreeFloat() {
  if (Step::BaseObject::inited()) {
    return m_freeFloat;
  }
  else {
    return getUnset(m_freeFloat);
  }
}

void IfcScheduleTimeControl::setFreeFloat(IfcTimeMeasure value) {
  m_freeFloat = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getTotalFloat() {
  if (Step::BaseObject::inited()) {
    return m_totalFloat;
  }
  else {
    return getUnset(m_totalFloat);
  }
}

void IfcScheduleTimeControl::setTotalFloat(IfcTimeMeasure value) {
  m_totalFloat = value;
}

Bool IfcScheduleTimeControl::getIsCritical() {
  if (Step::BaseObject::inited()) {
    return m_isCritical;
  }
  else {
    return getUnset(m_isCritical);
  }
}

void IfcScheduleTimeControl::setIsCritical(Bool value) {
  m_isCritical = value;
}

IfcDateTimeSelect *IfcScheduleTimeControl::getStatusTime() {
  if (Step::BaseObject::inited()) {
    return m_statusTime.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_statusTime = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getStartFloat() {
  if (Step::BaseObject::inited()) {
    return m_startFloat;
  }
  else {
    return getUnset(m_startFloat);
  }
}

void IfcScheduleTimeControl::setStartFloat(IfcTimeMeasure value) {
  m_startFloat = value;
}

IfcTimeMeasure IfcScheduleTimeControl::getFinishFloat() {
  if (Step::BaseObject::inited()) {
    return m_finishFloat;
  }
  else {
    return getUnset(m_finishFloat);
  }
}

void IfcScheduleTimeControl::setFinishFloat(IfcTimeMeasure value) {
  m_finishFloat = value;
}

IfcPositiveRatioMeasure IfcScheduleTimeControl::getCompletion() {
  if (Step::BaseObject::inited()) {
    return m_completion;
  }
  else {
    return getUnset(m_completion);
  }
}

void IfcScheduleTimeControl::setCompletion(IfcPositiveRatioMeasure value) {
  m_completion = value;
}

IfcRelAssignsTasks *IfcScheduleTimeControl::getScheduleTimeControlAssigned() {
  if (Step::BaseObject::inited()) {
    return m_scheduleTimeControlAssigned.get();
  }
  else {
    return NULL;
  }
}

void IfcScheduleTimeControl::setScheduleTimeControlAssigned(const Step::RefPtr< IfcRelAssignsTasks > &value) {
  m_scheduleTimeControlAssigned = value;
}

void IfcScheduleTimeControl::release() {
  IfcControl::release();
}

bool IfcScheduleTimeControl::init() {
  bool status = IfcControl::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actualStart = NULL;
  }
  else {
    m_actualStart = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_actualStart->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_earlyStart = NULL;
  }
  else {
    m_earlyStart = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_earlyStart->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lateStart = NULL;
  }
  else {
    m_lateStart = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_lateStart->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_scheduleStart = NULL;
  }
  else {
    m_scheduleStart = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_scheduleStart->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actualFinish = NULL;
  }
  else {
    m_actualFinish = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_actualFinish->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_earlyFinish = NULL;
  }
  else {
    m_earlyFinish = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_earlyFinish->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lateFinish = NULL;
  }
  else {
    m_lateFinish = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_lateFinish->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_scheduleFinish = NULL;
  }
  else {
    m_scheduleFinish = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_scheduleFinish->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_scheduleDuration = getUnset(m_scheduleDuration);
  }
  else {
    m_scheduleDuration = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actualDuration = getUnset(m_actualDuration);
  }
  else {
    m_actualDuration = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_remainingTime = getUnset(m_remainingTime);
  }
  else {
    m_remainingTime = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_freeFloat = getUnset(m_freeFloat);
  }
  else {
    m_freeFloat = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_totalFloat = getUnset(m_totalFloat);
  }
  else {
    m_totalFloat = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isCritical = getUnset(m_isCritical);
  }
  else {
    m_isCritical = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_statusTime = NULL;
  }
  else {
    m_statusTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_statusTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_startFloat = getUnset(m_startFloat);
  }
  else {
    m_startFloat = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_finishFloat = getUnset(m_finishFloat);
  }
  else {
    m_finishFloat = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_completion = getUnset(m_completion);
  }
  else {
    m_completion = Step::spfToReal(arg);
  }
  inverses = m_args->getInverses(IfcRelAssignsTasks::getClassType(), 7);
  if (inverses) {
    m_scheduleTimeControlAssigned = static_cast< IfcRelAssignsTasks * > (m_model->getObjectById((*inverses)[0]));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcScheduleTimeControl::s_type = new Step::ClassType_class("IfcScheduleTimeControl");
IfcScheduleTimeControl_Factory::IfcScheduleTimeControl_Factory() {
}

IfcScheduleTimeControl_Factory::~IfcScheduleTimeControl_Factory() {
  clear(true);
}

void IfcScheduleTimeControl_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcScheduleTimeControl_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcScheduleTimeControl_Factory::end() {
  return m_idMap.end();
}

IfcScheduleTimeControl *IfcScheduleTimeControl_Factory::get(Step::StepId id) {
  IfcScheduleTimeControl *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcScheduleTimeControl * > (it->second);
  }
  else {
    LOG_ERROR("IfcScheduleTimeControl_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcScheduleTimeControl * > (create(id));
  }
}

Step::BaseObject *IfcScheduleTimeControl_Factory::create(Step::StepId id) {
  IfcScheduleTimeControl *ret = new IfcScheduleTimeControl(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcScheduleTimeControl_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcScheduleTimeControl *ret = new IfcScheduleTimeControl(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcScheduleTimeControl_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcScheduleTimeControl *ret = new IfcScheduleTimeControl(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcScheduleTimeControl *IfcScheduleTimeControl_Factory::generate() {
  return static_cast< IfcScheduleTimeControl * > (create(m_model->getNewId()));
}

IfcScheduleTimeControl *IfcScheduleTimeControl_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcScheduleTimeControl * > (it->second);
  }
  else {
    return NULL;
  }
}

