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
#include <ifc2x3/IfcProxy.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProxy::IfcProxy(Step::SPFData *args) : IfcProduct(args) {
  m_proxyType = IfcObjectTypeEnum_UNSET;
  m_tag = getUnset(m_tag);
}


IfcProxy::~IfcProxy() {
}

bool IfcProxy::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProxy(this);
}

const char *IfcProxy::type() {
  return "IfcProxy";
}

Step::ClassType IfcProxy::getClassType() {
  return IfcProxy::s_type;
}

Step::ClassType IfcProxy::getType() const {
  return IfcProxy::s_type;
}

bool IfcProxy::isOfType(Step::ClassType t) {
  return IfcProxy::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcObjectTypeEnum IfcProxy::getProxyType() {
  if (Step::BaseObject::inited()) {
    return m_proxyType;
  }
  else {
    return IfcObjectTypeEnum_UNSET;
  }
}

void IfcProxy::setProxyType(IfcObjectTypeEnum value) {
  m_proxyType = value;
}

IfcLabel IfcProxy::getTag() {
  if (Step::BaseObject::inited()) {
    return m_tag;
  }
  else {
    return getUnset(m_tag);
  }
}

void IfcProxy::setTag(const IfcLabel &value) {
  m_tag = value;
}

void IfcProxy::release() {
  IfcProduct::release();
}

bool IfcProxy::init() {
  bool status = IfcProduct::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_proxyType = IfcObjectTypeEnum_UNSET;
  }
  else {
    if (arg == ".PRODUCT.") {
      m_proxyType = IfcObjectTypeEnum_PRODUCT;
    }
    else if (arg == ".PROCESS.") {
      m_proxyType = IfcObjectTypeEnum_PROCESS;
    }
    else if (arg == ".CONTROL.") {
      m_proxyType = IfcObjectTypeEnum_CONTROL;
    }
    else if (arg == ".RESOURCE.") {
      m_proxyType = IfcObjectTypeEnum_RESOURCE;
    }
    else if (arg == ".ACTOR.") {
      m_proxyType = IfcObjectTypeEnum_ACTOR;
    }
    else if (arg == ".GROUP.") {
      m_proxyType = IfcObjectTypeEnum_GROUP;
    }
    else if (arg == ".PROJECT.") {
      m_proxyType = IfcObjectTypeEnum_PROJECT;
    }
    else if (arg == ".NOTDEFINED.") {
      m_proxyType = IfcObjectTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tag = getUnset(m_tag);
  }
  else {
    m_tag = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProxy::s_type = new Step::ClassType_class("IfcProxy");
IfcProxy_Factory::IfcProxy_Factory() {
}

IfcProxy_Factory::~IfcProxy_Factory() {
  clear(true);
}

void IfcProxy_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProxy_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProxy_Factory::end() {
  return m_idMap.end();
}

IfcProxy *IfcProxy_Factory::get(Step::StepId id) {
  IfcProxy *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProxy * > (it->second);
  }
  else {
    LOG_ERROR("IfcProxy_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProxy * > (create(id));
  }
}

Step::BaseObject *IfcProxy_Factory::create(Step::StepId id) {
  IfcProxy *ret = new IfcProxy(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProxy_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProxy *ret = new IfcProxy(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProxy_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProxy *ret = new IfcProxy(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProxy *IfcProxy_Factory::generate() {
  return static_cast< IfcProxy * > (create(m_model->getNewId()));
}

IfcProxy *IfcProxy_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProxy * > (it->second);
  }
  else {
    return NULL;
  }
}

