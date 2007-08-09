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
#include <ifc2x3/IfcWorkControl.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcWorkControl::IfcWorkControl(Step::SPFData *args) : IfcControl(args) {
  m_identifier = getUnset(m_identifier);
  m_creationDate = NULL;
  m_creators.setUnset(true);
  m_purpose = getUnset(m_purpose);
  m_duration = getUnset(m_duration);
  m_totalFloat = getUnset(m_totalFloat);
  m_startTime = NULL;
  m_finishTime = NULL;
  m_workControlType = IfcWorkControlTypeEnum_UNSET;
  m_userDefinedControlType = getUnset(m_userDefinedControlType);
}


IfcWorkControl::~IfcWorkControl() {
}

bool IfcWorkControl::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWorkControl(this);
}

const char *IfcWorkControl::type() {
  return "IfcWorkControl";
}

Step::ClassType IfcWorkControl::getClassType() {
  return IfcWorkControl::s_type;
}

Step::ClassType IfcWorkControl::getType() const {
  return IfcWorkControl::s_type;
}

bool IfcWorkControl::isOfType(Step::ClassType t) {
  return IfcWorkControl::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcWorkControl::getIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_identifier;
  }
  else {
    return getUnset(m_identifier);
  }
}

void IfcWorkControl::setIdentifier(const IfcIdentifier &value) {
  m_identifier = value;
}

IfcDateTimeSelect *IfcWorkControl::getCreationDate() {
  if (Step::BaseObject::inited()) {
    return m_creationDate.get();
  }
  else {
    return NULL;
  }
}

void IfcWorkControl::setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_creationDate = value;
}

Step::StepSet< Step::RefPtr< IfcPerson > > &IfcWorkControl::getCreators() {
  if (Step::BaseObject::inited()) {
    return m_creators;
  }
  else {
    m_creators.setUnset(true);
    return m_creators;
  }
}

void IfcWorkControl::setCreators(const Step::StepSet< Step::RefPtr< IfcPerson > > &value) {
  m_creators = value;
}

IfcLabel IfcWorkControl::getPurpose() {
  if (Step::BaseObject::inited()) {
    return m_purpose;
  }
  else {
    return getUnset(m_purpose);
  }
}

void IfcWorkControl::setPurpose(const IfcLabel &value) {
  m_purpose = value;
}

IfcTimeMeasure IfcWorkControl::getDuration() {
  if (Step::BaseObject::inited()) {
    return m_duration;
  }
  else {
    return getUnset(m_duration);
  }
}

void IfcWorkControl::setDuration(IfcTimeMeasure value) {
  m_duration = value;
}

IfcTimeMeasure IfcWorkControl::getTotalFloat() {
  if (Step::BaseObject::inited()) {
    return m_totalFloat;
  }
  else {
    return getUnset(m_totalFloat);
  }
}

void IfcWorkControl::setTotalFloat(IfcTimeMeasure value) {
  m_totalFloat = value;
}

IfcDateTimeSelect *IfcWorkControl::getStartTime() {
  if (Step::BaseObject::inited()) {
    return m_startTime.get();
  }
  else {
    return NULL;
  }
}

void IfcWorkControl::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_startTime = value;
}

IfcDateTimeSelect *IfcWorkControl::getFinishTime() {
  if (Step::BaseObject::inited()) {
    return m_finishTime.get();
  }
  else {
    return NULL;
  }
}

void IfcWorkControl::setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_finishTime = value;
}

IfcWorkControlTypeEnum IfcWorkControl::getWorkControlType() {
  if (Step::BaseObject::inited()) {
    return m_workControlType;
  }
  else {
    return IfcWorkControlTypeEnum_UNSET;
  }
}

void IfcWorkControl::setWorkControlType(IfcWorkControlTypeEnum value) {
  m_workControlType = value;
}

IfcLabel IfcWorkControl::getUserDefinedControlType() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedControlType;
  }
  else {
    return getUnset(m_userDefinedControlType);
  }
}

void IfcWorkControl::setUserDefinedControlType(const IfcLabel &value) {
  m_userDefinedControlType = value;
}

void IfcWorkControl::release() {
  IfcControl::release();
  m_creators.clear();
}

bool IfcWorkControl::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_identifier = getUnset(m_identifier);
  }
  else {
    m_identifier = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_creationDate = NULL;
  }
  else {
    m_creationDate = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_creationDate->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_creators.setUnset(true);
  }
  else {
    m_creators.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcPerson > attr2;
        attr2 = static_cast< IfcPerson * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_creators.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_purpose = getUnset(m_purpose);
  }
  else {
    m_purpose = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_duration = getUnset(m_duration);
  }
  else {
    m_duration = Step::spfToReal(arg);
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
    m_startTime = NULL;
  }
  else {
    m_startTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_startTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_finishTime = NULL;
  }
  else {
    m_finishTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_finishTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_workControlType = IfcWorkControlTypeEnum_UNSET;
  }
  else {
    if (arg == ".ACTUAL.") {
      m_workControlType = IfcWorkControlTypeEnum_ACTUAL;
    }
    else if (arg == ".BASELINE.") {
      m_workControlType = IfcWorkControlTypeEnum_BASELINE;
    }
    else if (arg == ".PLANNED.") {
      m_workControlType = IfcWorkControlTypeEnum_PLANNED;
    }
    else if (arg == ".USERDEFINED.") {
      m_workControlType = IfcWorkControlTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_workControlType = IfcWorkControlTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedControlType = getUnset(m_userDefinedControlType);
  }
  else {
    m_userDefinedControlType = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcWorkControl::s_type = new Step::ClassType_class("IfcWorkControl");
