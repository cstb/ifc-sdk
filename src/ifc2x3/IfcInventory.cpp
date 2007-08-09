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
#include <ifc2x3/IfcInventory.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcInventory::IfcInventory(Step::SPFData *args) : IfcGroup(args) {
  m_inventoryType = IfcInventoryTypeEnum_UNSET;
  m_jurisdiction = NULL;
  m_responsiblePersons.setUnset(true);
  m_lastUpdateDate = NULL;
  m_currentValue = NULL;
  m_originalValue = NULL;
}


IfcInventory::~IfcInventory() {
}

bool IfcInventory::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcInventory(this);
}

const char *IfcInventory::type() {
  return "IfcInventory";
}

Step::ClassType IfcInventory::getClassType() {
  return IfcInventory::s_type;
}

Step::ClassType IfcInventory::getType() const {
  return IfcInventory::s_type;
}

bool IfcInventory::isOfType(Step::ClassType t) {
  return IfcInventory::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcInventoryTypeEnum IfcInventory::getInventoryType() {
  if (Step::BaseObject::inited()) {
    return m_inventoryType;
  }
  else {
    return IfcInventoryTypeEnum_UNSET;
  }
}

void IfcInventory::setInventoryType(IfcInventoryTypeEnum value) {
  m_inventoryType = value;
}

IfcActorSelect *IfcInventory::getJurisdiction() {
  if (Step::BaseObject::inited()) {
    return m_jurisdiction.get();
  }
  else {
    return NULL;
  }
}

void IfcInventory::setJurisdiction(const Step::RefPtr< IfcActorSelect > &value) {
  m_jurisdiction = value;
}

Step::StepSet< Step::RefPtr< IfcPerson > > &IfcInventory::getResponsiblePersons() {
  if (Step::BaseObject::inited()) {
    return m_responsiblePersons;
  }
  else {
    m_responsiblePersons.setUnset(true);
    return m_responsiblePersons;
  }
}

void IfcInventory::setResponsiblePersons(const Step::StepSet< Step::RefPtr< IfcPerson > > &value) {
  m_responsiblePersons = value;
}

IfcCalendarDate *IfcInventory::getLastUpdateDate() {
  if (Step::BaseObject::inited()) {
    return m_lastUpdateDate.get();
  }
  else {
    return NULL;
  }
}

void IfcInventory::setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value) {
  m_lastUpdateDate = value;
}

IfcCostValue *IfcInventory::getCurrentValue() {
  if (Step::BaseObject::inited()) {
    return m_currentValue.get();
  }
  else {
    return NULL;
  }
}

void IfcInventory::setCurrentValue(const Step::RefPtr< IfcCostValue > &value) {
  m_currentValue = value;
}

IfcCostValue *IfcInventory::getOriginalValue() {
  if (Step::BaseObject::inited()) {
    return m_originalValue.get();
  }
  else {
    return NULL;
  }
}

void IfcInventory::setOriginalValue(const Step::RefPtr< IfcCostValue > &value) {
  m_originalValue = value;
}

void IfcInventory::release() {
  IfcGroup::release();
  m_responsiblePersons.clear();
  m_lastUpdateDate.release();
  m_currentValue.release();
  m_originalValue.release();
}

bool IfcInventory::init() {
  bool status = IfcGroup::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_inventoryType = IfcInventoryTypeEnum_UNSET;
  }
  else {
    if (arg == ".ASSETINVENTORY.") {
      m_inventoryType = IfcInventoryTypeEnum_ASSETINVENTORY;
    }
    else if (arg == ".SPACEINVENTORY.") {
      m_inventoryType = IfcInventoryTypeEnum_SPACEINVENTORY;
    }
    else if (arg == ".FURNITUREINVENTORY.") {
      m_inventoryType = IfcInventoryTypeEnum_FURNITUREINVENTORY;
    }
    else if (arg == ".USERDEFINED.") {
      m_inventoryType = IfcInventoryTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_inventoryType = IfcInventoryTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_jurisdiction = NULL;
  }
  else {
    m_jurisdiction = new IfcActorSelect;
    if (arg[0] == '#') {
      m_jurisdiction->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_responsiblePersons.setUnset(true);
  }
  else {
    m_responsiblePersons.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcPerson > attr2;
        attr2 = static_cast< IfcPerson * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_responsiblePersons.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lastUpdateDate = NULL;
  }
  else {
    m_lastUpdateDate = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_currentValue = NULL;
  }
  else {
    m_currentValue = static_cast< IfcCostValue * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_originalValue = NULL;
  }
  else {
    m_originalValue = static_cast< IfcCostValue * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcInventory::s_type = new Step::ClassType_class("IfcInventory");
IfcInventory_Factory::IfcInventory_Factory() {
}

IfcInventory_Factory::~IfcInventory_Factory() {
  clear(true);
}

void IfcInventory_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcInventory_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcInventory_Factory::end() {
  return m_idMap.end();
}

IfcInventory *IfcInventory_Factory::get(Step::StepId id) {
  IfcInventory *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcInventory * > (it->second);
  }
  else {
    LOG_ERROR("IfcInventory_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcInventory * > (create(id));
  }
}

Step::BaseObject *IfcInventory_Factory::create(Step::StepId id) {
  IfcInventory *ret = new IfcInventory(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcInventory_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcInventory *ret = new IfcInventory(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcInventory_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcInventory *ret = new IfcInventory(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcInventory *IfcInventory_Factory::generate() {
  return static_cast< IfcInventory * > (create(m_model->getNewId()));
}

IfcInventory *IfcInventory_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcInventory * > (it->second);
  }
  else {
    return NULL;
  }
}

