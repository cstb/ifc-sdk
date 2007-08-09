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
#include <ifc2x3/IfcTimeSeriesSchedule.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTimeSeriesSchedule::IfcTimeSeriesSchedule(Step::SPFData *args) : IfcControl(args) {
  m_applicableDates.setUnset(true);
  m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
  m_timeSeries = NULL;
}


IfcTimeSeriesSchedule::~IfcTimeSeriesSchedule() {
}

bool IfcTimeSeriesSchedule::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTimeSeriesSchedule(this);
}

const char *IfcTimeSeriesSchedule::type() {
  return "IfcTimeSeriesSchedule";
}

Step::ClassType IfcTimeSeriesSchedule::getClassType() {
  return IfcTimeSeriesSchedule::s_type;
}

Step::ClassType IfcTimeSeriesSchedule::getType() const {
  return IfcTimeSeriesSchedule::s_type;
}

bool IfcTimeSeriesSchedule::isOfType(Step::ClassType t) {
  return IfcTimeSeriesSchedule::s_type == t ? true : IfcControl::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcDateTimeSelect > > &IfcTimeSeriesSchedule::getApplicableDates() {
  if (Step::BaseObject::inited()) {
    return m_applicableDates;
  }
  else {
    m_applicableDates.setUnset(true);
    return m_applicableDates;
  }
}

void IfcTimeSeriesSchedule::setApplicableDates(const Step::StepList< Step::RefPtr< IfcDateTimeSelect > > &value) {
  m_applicableDates = value;
}

IfcTimeSeriesScheduleTypeEnum IfcTimeSeriesSchedule::getTimeSeriesScheduleType() {
  if (Step::BaseObject::inited()) {
    return m_timeSeriesScheduleType;
  }
  else {
    return IfcTimeSeriesScheduleTypeEnum_UNSET;
  }
}

void IfcTimeSeriesSchedule::setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value) {
  m_timeSeriesScheduleType = value;
}

IfcTimeSeries *IfcTimeSeriesSchedule::getTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_timeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcTimeSeriesSchedule::setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_timeSeries = value;
}

void IfcTimeSeriesSchedule::release() {
  IfcControl::release();
  m_applicableDates.clear();
  m_timeSeries.release();
}

bool IfcTimeSeriesSchedule::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicableDates.setUnset(true);
  }
  else {
    m_applicableDates.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcDateTimeSelect > attr2;
        attr2 = new IfcDateTimeSelect;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
          }
        }
        m_applicableDates.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
  }
  else {
    if (arg == ".ANNUAL.") {
      m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_ANNUAL;
    }
    else if (arg == ".MONTHLY.") {
      m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_MONTHLY;
    }
    else if (arg == ".WEEKLY.") {
      m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_WEEKLY;
    }
    else if (arg == ".DAILY.") {
      m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_DAILY;
    }
    else if (arg == ".USERDEFINED.") {
      m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeSeries = NULL;
  }
  else {
    m_timeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTimeSeriesSchedule::s_type = new Step::ClassType_class("IfcTimeSeriesSchedule");
IfcTimeSeriesSchedule_Factory::IfcTimeSeriesSchedule_Factory() {
}

IfcTimeSeriesSchedule_Factory::~IfcTimeSeriesSchedule_Factory() {
  clear(true);
}

void IfcTimeSeriesSchedule_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTimeSeriesSchedule_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTimeSeriesSchedule_Factory::end() {
  return m_idMap.end();
}

IfcTimeSeriesSchedule *IfcTimeSeriesSchedule_Factory::get(Step::StepId id) {
  IfcTimeSeriesSchedule *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTimeSeriesSchedule * > (it->second);
  }
  else {
    LOG_ERROR("IfcTimeSeriesSchedule_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTimeSeriesSchedule * > (create(id));
  }
}

Step::BaseObject *IfcTimeSeriesSchedule_Factory::create(Step::StepId id) {
  IfcTimeSeriesSchedule *ret = new IfcTimeSeriesSchedule(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTimeSeriesSchedule_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTimeSeriesSchedule *ret = new IfcTimeSeriesSchedule(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTimeSeriesSchedule_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTimeSeriesSchedule *ret = new IfcTimeSeriesSchedule(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTimeSeriesSchedule *IfcTimeSeriesSchedule_Factory::generate() {
  return static_cast< IfcTimeSeriesSchedule * > (create(m_model->getNewId()));
}

IfcTimeSeriesSchedule *IfcTimeSeriesSchedule_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTimeSeriesSchedule * > (it->second);
  }
  else {
    return NULL;
  }
}

