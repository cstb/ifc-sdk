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
#include <ifc2x3/IfcProjectOrder.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProjectOrder::IfcProjectOrder(Step::SPFData *args) : IfcControl(args) {
  m_iD = getUnset(m_iD);
  m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
  m_status = getUnset(m_status);
}


IfcProjectOrder::~IfcProjectOrder() {
}

bool IfcProjectOrder::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProjectOrder(this);
}

const char *IfcProjectOrder::type() {
  return "IfcProjectOrder";
}

Step::ClassType IfcProjectOrder::getClassType() {
  return IfcProjectOrder::s_type;
}

Step::ClassType IfcProjectOrder::getType() const {
  return IfcProjectOrder::s_type;
}

bool IfcProjectOrder::isOfType(Step::ClassType t) {
  return IfcProjectOrder::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcProjectOrder::getID() {
  if (Step::BaseObject::inited()) {
    return m_iD;
  }
  else {
    return getUnset(m_iD);
  }
}

void IfcProjectOrder::setID(const IfcIdentifier &value) {
  m_iD = value;
}

IfcProjectOrderTypeEnum IfcProjectOrder::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcProjectOrderTypeEnum_UNSET;
  }
}

void IfcProjectOrder::setPredefinedType(IfcProjectOrderTypeEnum value) {
  m_predefinedType = value;
}

IfcLabel IfcProjectOrder::getStatus() {
  if (Step::BaseObject::inited()) {
    return m_status;
  }
  else {
    return getUnset(m_status);
  }
}

void IfcProjectOrder::setStatus(const IfcLabel &value) {
  m_status = value;
}

void IfcProjectOrder::release() {
  IfcControl::release();
}

bool IfcProjectOrder::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
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
    m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
  }
  else {
    if (arg == ".CHANGEORDER.") {
      m_predefinedType = IfcProjectOrderTypeEnum_CHANGEORDER;
    }
    else if (arg == ".MAINTENANCEWORKORDER.") {
      m_predefinedType = IfcProjectOrderTypeEnum_MAINTENANCEWORKORDER;
    }
    else if (arg == ".MOVEORDER.") {
      m_predefinedType = IfcProjectOrderTypeEnum_MOVEORDER;
    }
    else if (arg == ".PURCHASEORDER.") {
      m_predefinedType = IfcProjectOrderTypeEnum_PURCHASEORDER;
    }
    else if (arg == ".WORKORDER.") {
      m_predefinedType = IfcProjectOrderTypeEnum_WORKORDER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcProjectOrderTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcProjectOrderTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_status = getUnset(m_status);
  }
  else {
    m_status = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectOrder::s_type = new Step::ClassType_class("IfcProjectOrder");
IfcProjectOrder_Factory::IfcProjectOrder_Factory() {
}

IfcProjectOrder_Factory::~IfcProjectOrder_Factory() {
  clear(true);
}

void IfcProjectOrder_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProjectOrder_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProjectOrder_Factory::end() {
  return m_idMap.end();
}

IfcProjectOrder *IfcProjectOrder_Factory::get(Step::StepId id) {
  IfcProjectOrder *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProjectOrder * > (it->second);
  }
  else {
    LOG_ERROR("IfcProjectOrder_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProjectOrder * > (create(id));
  }
}

Step::BaseObject *IfcProjectOrder_Factory::create(Step::StepId id) {
  IfcProjectOrder *ret = new IfcProjectOrder(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProjectOrder_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProjectOrder *ret = new IfcProjectOrder(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProjectOrder_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProjectOrder *ret = new IfcProjectOrder(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProjectOrder *IfcProjectOrder_Factory::generate() {
  return static_cast< IfcProjectOrder * > (create(m_model->getNewId()));
}

IfcProjectOrder *IfcProjectOrder_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProjectOrder * > (it->second);
  }
  else {
    return NULL;
  }
}

