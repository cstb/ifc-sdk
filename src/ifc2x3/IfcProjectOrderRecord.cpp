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
#include <ifc2x3/IfcProjectOrderRecord.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelAssignsToProjectOrder.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProjectOrderRecord::IfcProjectOrderRecord(Step::SPFData *args) : IfcControl(args) {
  m_records.setUnset(true);
  m_predefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
}


IfcProjectOrderRecord::~IfcProjectOrderRecord() {
}

bool IfcProjectOrderRecord::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProjectOrderRecord(this);
}

const char *IfcProjectOrderRecord::type() {
  return "IfcProjectOrderRecord";
}

Step::ClassType IfcProjectOrderRecord::getClassType() {
  return IfcProjectOrderRecord::s_type;
}

Step::ClassType IfcProjectOrderRecord::getType() const {
  return IfcProjectOrderRecord::s_type;
}

bool IfcProjectOrderRecord::isOfType(Step::ClassType t) {
  return IfcProjectOrderRecord::s_type == t ? true : IfcControl::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcRelAssignsToProjectOrder > > &IfcProjectOrderRecord::getRecords() {
  if (Step::BaseObject::inited()) {
    return m_records;
  }
  else {
    m_records.setUnset(true);
    return m_records;
  }
}

void IfcProjectOrderRecord::setRecords(const Step::StepList< Step::RefPtr< IfcRelAssignsToProjectOrder > > &value) {
  m_records = value;
}

IfcProjectOrderRecordTypeEnum IfcProjectOrderRecord::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcProjectOrderRecordTypeEnum_UNSET;
  }
}

void IfcProjectOrderRecord::setPredefinedType(IfcProjectOrderRecordTypeEnum value) {
  m_predefinedType = value;
}

void IfcProjectOrderRecord::release() {
  IfcControl::release();
  m_records.clear();
}

bool IfcProjectOrderRecord::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_records.setUnset(true);
  }
  else {
    m_records.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRelAssignsToProjectOrder > attr2;
        attr2 = static_cast< IfcRelAssignsToProjectOrder * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_records.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
  }
  else {
    if (arg == ".CHANGE.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_CHANGE;
    }
    else if (arg == ".MAINTENANCE.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_MAINTENANCE;
    }
    else if (arg == ".MOVE.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_MOVE;
    }
    else if (arg == ".PURCHASE.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_PURCHASE;
    }
    else if (arg == ".WORK.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_WORK;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcProjectOrderRecordTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectOrderRecord::s_type = new Step::ClassType_class("IfcProjectOrderRecord");
IfcProjectOrderRecord_Factory::IfcProjectOrderRecord_Factory() {
}

IfcProjectOrderRecord_Factory::~IfcProjectOrderRecord_Factory() {
  clear(true);
}

void IfcProjectOrderRecord_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProjectOrderRecord_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProjectOrderRecord_Factory::end() {
  return m_idMap.end();
}

IfcProjectOrderRecord *IfcProjectOrderRecord_Factory::get(Step::StepId id) {
  IfcProjectOrderRecord *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProjectOrderRecord * > (it->second);
  }
  else {
    LOG_ERROR("IfcProjectOrderRecord_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProjectOrderRecord * > (create(id));
  }
}

Step::BaseObject *IfcProjectOrderRecord_Factory::create(Step::StepId id) {
  IfcProjectOrderRecord *ret = new IfcProjectOrderRecord(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProjectOrderRecord_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProjectOrderRecord *ret = new IfcProjectOrderRecord(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProjectOrderRecord_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProjectOrderRecord *ret = new IfcProjectOrderRecord(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProjectOrderRecord *IfcProjectOrderRecord_Factory::generate() {
  return static_cast< IfcProjectOrderRecord * > (create(m_model->getNewId()));
}

IfcProjectOrderRecord *IfcProjectOrderRecord_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProjectOrderRecord * > (it->second);
  }
  else {
    return NULL;
  }
}

