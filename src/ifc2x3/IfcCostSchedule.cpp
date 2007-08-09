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
#include <ifc2x3/IfcCostSchedule.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCostSchedule::IfcCostSchedule(Step::SPFData *args) : IfcControl(args) {
  m_submittedBy = NULL;
  m_preparedBy = NULL;
  m_submittedOn = NULL;
  m_status = getUnset(m_status);
  m_targetUsers.setUnset(true);
  m_updateDate = NULL;
  m_iD = getUnset(m_iD);
  m_predefinedType = IfcCostScheduleTypeEnum_UNSET;
}


IfcCostSchedule::~IfcCostSchedule() {
}

bool IfcCostSchedule::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCostSchedule(this);
}

const char *IfcCostSchedule::type() {
  return "IfcCostSchedule";
}

Step::ClassType IfcCostSchedule::getClassType() {
  return IfcCostSchedule::s_type;
}

Step::ClassType IfcCostSchedule::getType() const {
  return IfcCostSchedule::s_type;
}

bool IfcCostSchedule::isOfType(Step::ClassType t) {
  return IfcCostSchedule::s_type == t ? true : IfcControl::isOfType(t);
}

IfcActorSelect *IfcCostSchedule::getSubmittedBy() {
  if (Step::BaseObject::inited()) {
    return m_submittedBy.get();
  }
  else {
    return NULL;
  }
}

void IfcCostSchedule::setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value) {
  m_submittedBy = value;
}

IfcActorSelect *IfcCostSchedule::getPreparedBy() {
  if (Step::BaseObject::inited()) {
    return m_preparedBy.get();
  }
  else {
    return NULL;
  }
}

void IfcCostSchedule::setPreparedBy(const Step::RefPtr< IfcActorSelect > &value) {
  m_preparedBy = value;
}

IfcDateTimeSelect *IfcCostSchedule::getSubmittedOn() {
  if (Step::BaseObject::inited()) {
    return m_submittedOn.get();
  }
  else {
    return NULL;
  }
}

void IfcCostSchedule::setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_submittedOn = value;
}

IfcLabel IfcCostSchedule::getStatus() {
  if (Step::BaseObject::inited()) {
    return m_status;
  }
  else {
    return getUnset(m_status);
  }
}

void IfcCostSchedule::setStatus(const IfcLabel &value) {
  m_status = value;
}

Step::StepSet< Step::RefPtr< IfcActorSelect > > &IfcCostSchedule::getTargetUsers() {
  if (Step::BaseObject::inited()) {
    return m_targetUsers;
  }
  else {
    m_targetUsers.setUnset(true);
    return m_targetUsers;
  }
}

void IfcCostSchedule::setTargetUsers(const Step::StepSet< Step::RefPtr< IfcActorSelect > > &value) {
  m_targetUsers = value;
}

IfcDateTimeSelect *IfcCostSchedule::getUpdateDate() {
  if (Step::BaseObject::inited()) {
    return m_updateDate.get();
  }
  else {
    return NULL;
  }
}

void IfcCostSchedule::setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_updateDate = value;
}

IfcIdentifier IfcCostSchedule::getID() {
  if (Step::BaseObject::inited()) {
    return m_iD;
  }
  else {
    return getUnset(m_iD);
  }
}

void IfcCostSchedule::setID(const IfcIdentifier &value) {
  m_iD = value;
}

IfcCostScheduleTypeEnum IfcCostSchedule::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCostScheduleTypeEnum_UNSET;
  }
}

void IfcCostSchedule::setPredefinedType(IfcCostScheduleTypeEnum value) {
  m_predefinedType = value;
}

void IfcCostSchedule::release() {
  IfcControl::release();
  m_targetUsers.clear();
}

bool IfcCostSchedule::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_submittedBy = NULL;
  }
  else {
    m_submittedBy = new IfcActorSelect;
    if (arg[0] == '#') {
      m_submittedBy->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_preparedBy = NULL;
  }
  else {
    m_preparedBy = new IfcActorSelect;
    if (arg[0] == '#') {
      m_preparedBy->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_submittedOn = NULL;
  }
  else {
    m_submittedOn = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_submittedOn->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_status = getUnset(m_status);
  }
  else {
    m_status = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_targetUsers.setUnset(true);
  }
  else {
    m_targetUsers.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcActorSelect > attr2;
        attr2 = new IfcActorSelect;
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
        m_targetUsers.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_updateDate = NULL;
  }
  else {
    m_updateDate = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_updateDate->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_iD = getUnset(m_iD);
  }
  else {
    m_iD = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCostScheduleTypeEnum_UNSET;
  }
  else {
    if (arg == ".BUDGET.") {
      m_predefinedType = IfcCostScheduleTypeEnum_BUDGET;
    }
    else if (arg == ".COSTPLAN.") {
      m_predefinedType = IfcCostScheduleTypeEnum_COSTPLAN;
    }
    else if (arg == ".ESTIMATE.") {
      m_predefinedType = IfcCostScheduleTypeEnum_ESTIMATE;
    }
    else if (arg == ".TENDER.") {
      m_predefinedType = IfcCostScheduleTypeEnum_TENDER;
    }
    else if (arg == ".PRICEDBILLOFQUANTITIES.") {
      m_predefinedType = IfcCostScheduleTypeEnum_PRICEDBILLOFQUANTITIES;
    }
    else if (arg == ".UNPRICEDBILLOFQUANTITIES.") {
      m_predefinedType = IfcCostScheduleTypeEnum_UNPRICEDBILLOFQUANTITIES;
    }
    else if (arg == ".SCHEDULEOFRATES.") {
      m_predefinedType = IfcCostScheduleTypeEnum_SCHEDULEOFRATES;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCostScheduleTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCostScheduleTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCostSchedule::s_type = new Step::ClassType_class("IfcCostSchedule");
IfcCostSchedule_Factory::IfcCostSchedule_Factory() {
}

IfcCostSchedule_Factory::~IfcCostSchedule_Factory() {
  clear(true);
}

void IfcCostSchedule_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCostSchedule_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCostSchedule_Factory::end() {
  return m_idMap.end();
}

IfcCostSchedule *IfcCostSchedule_Factory::get(Step::StepId id) {
  IfcCostSchedule *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCostSchedule * > (it->second);
  }
  else {
    LOG_ERROR("IfcCostSchedule_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCostSchedule * > (create(id));
  }
}

Step::BaseObject *IfcCostSchedule_Factory::create(Step::StepId id) {
  IfcCostSchedule *ret = new IfcCostSchedule(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCostSchedule_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCostSchedule *ret = new IfcCostSchedule(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCostSchedule_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCostSchedule *ret = new IfcCostSchedule(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCostSchedule *IfcCostSchedule_Factory::generate() {
  return static_cast< IfcCostSchedule * > (create(m_model->getNewId()));
}

IfcCostSchedule *IfcCostSchedule_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCostSchedule * > (it->second);
  }
  else {
    return NULL;
  }
}

