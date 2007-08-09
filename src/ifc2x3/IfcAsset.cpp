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
#include <ifc2x3/IfcAsset.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAsset::IfcAsset(Step::SPFData *args) : IfcGroup(args) {
  m_assetID = getUnset(m_assetID);
  m_originalValue = NULL;
  m_currentValue = NULL;
  m_totalReplacementCost = NULL;
  m_owner = NULL;
  m_user = NULL;
  m_responsiblePerson = NULL;
  m_incorporationDate = NULL;
  m_depreciatedValue = NULL;
}


IfcAsset::~IfcAsset() {
}

bool IfcAsset::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAsset(this);
}

const char *IfcAsset::type() {
  return "IfcAsset";
}

Step::ClassType IfcAsset::getClassType() {
  return IfcAsset::s_type;
}

Step::ClassType IfcAsset::getType() const {
  return IfcAsset::s_type;
}

bool IfcAsset::isOfType(Step::ClassType t) {
  return IfcAsset::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcIdentifier IfcAsset::getAssetID() {
  if (Step::BaseObject::inited()) {
    return m_assetID;
  }
  else {
    return getUnset(m_assetID);
  }
}

void IfcAsset::setAssetID(const IfcIdentifier &value) {
  m_assetID = value;
}

IfcCostValue *IfcAsset::getOriginalValue() {
  if (Step::BaseObject::inited()) {
    return m_originalValue.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setOriginalValue(const Step::RefPtr< IfcCostValue > &value) {
  m_originalValue = value;
}

IfcCostValue *IfcAsset::getCurrentValue() {
  if (Step::BaseObject::inited()) {
    return m_currentValue.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setCurrentValue(const Step::RefPtr< IfcCostValue > &value) {
  m_currentValue = value;
}

IfcCostValue *IfcAsset::getTotalReplacementCost() {
  if (Step::BaseObject::inited()) {
    return m_totalReplacementCost.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value) {
  m_totalReplacementCost = value;
}

IfcActorSelect *IfcAsset::getOwner() {
  if (Step::BaseObject::inited()) {
    return m_owner.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setOwner(const Step::RefPtr< IfcActorSelect > &value) {
  m_owner = value;
}

IfcActorSelect *IfcAsset::getUser() {
  if (Step::BaseObject::inited()) {
    return m_user.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setUser(const Step::RefPtr< IfcActorSelect > &value) {
  m_user = value;
}

IfcPerson *IfcAsset::getResponsiblePerson() {
  if (Step::BaseObject::inited()) {
    return m_responsiblePerson.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setResponsiblePerson(const Step::RefPtr< IfcPerson > &value) {
  m_responsiblePerson = value;
}

IfcCalendarDate *IfcAsset::getIncorporationDate() {
  if (Step::BaseObject::inited()) {
    return m_incorporationDate.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value) {
  m_incorporationDate = value;
}

IfcCostValue *IfcAsset::getDepreciatedValue() {
  if (Step::BaseObject::inited()) {
    return m_depreciatedValue.get();
  }
  else {
    return NULL;
  }
}

void IfcAsset::setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value) {
  m_depreciatedValue = value;
}

void IfcAsset::release() {
  IfcGroup::release();
  m_originalValue.release();
  m_currentValue.release();
  m_totalReplacementCost.release();
  m_responsiblePerson.release();
  m_incorporationDate.release();
  m_depreciatedValue.release();
}

bool IfcAsset::init() {
  bool status = IfcGroup::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_assetID = getUnset(m_assetID);
  }
  else {
    m_assetID = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_originalValue = NULL;
  }
  else {
    m_originalValue = static_cast< IfcCostValue * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_totalReplacementCost = NULL;
  }
  else {
    m_totalReplacementCost = static_cast< IfcCostValue * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_owner = NULL;
  }
  else {
    m_owner = new IfcActorSelect;
    if (arg[0] == '#') {
      m_owner->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_user = NULL;
  }
  else {
    m_user = new IfcActorSelect;
    if (arg[0] == '#') {
      m_user->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_responsiblePerson = NULL;
  }
  else {
    m_responsiblePerson = static_cast< IfcPerson * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_incorporationDate = NULL;
  }
  else {
    m_incorporationDate = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_depreciatedValue = NULL;
  }
  else {
    m_depreciatedValue = static_cast< IfcCostValue * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAsset::s_type = new Step::ClassType_class("IfcAsset");
IfcAsset_Factory::IfcAsset_Factory() {
}

IfcAsset_Factory::~IfcAsset_Factory() {
  clear(true);
}

void IfcAsset_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAsset_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAsset_Factory::end() {
  return m_idMap.end();
}

IfcAsset *IfcAsset_Factory::get(Step::StepId id) {
  IfcAsset *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAsset * > (it->second);
  }
  else {
    LOG_ERROR("IfcAsset_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAsset * > (create(id));
  }
}

Step::BaseObject *IfcAsset_Factory::create(Step::StepId id) {
  IfcAsset *ret = new IfcAsset(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAsset_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAsset *ret = new IfcAsset(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAsset_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAsset *ret = new IfcAsset(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAsset *IfcAsset_Factory::generate() {
  return static_cast< IfcAsset * > (create(m_model->getNewId()));
}

IfcAsset *IfcAsset_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAsset * > (it->second);
  }
  else {
    return NULL;
  }
}

