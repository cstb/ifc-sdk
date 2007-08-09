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
#include <ifc2x3/IfcRelConnectsPorts.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcPort.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsPorts::IfcRelConnectsPorts(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingPort = NULL;
  m_relatedPort = NULL;
  m_realizingElement = NULL;
}


IfcRelConnectsPorts::~IfcRelConnectsPorts() {
}

bool IfcRelConnectsPorts::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsPorts(this);
}

const char *IfcRelConnectsPorts::type() {
  return "IfcRelConnectsPorts";
}

Step::ClassType IfcRelConnectsPorts::getClassType() {
  return IfcRelConnectsPorts::s_type;
}

Step::ClassType IfcRelConnectsPorts::getType() const {
  return IfcRelConnectsPorts::s_type;
}

bool IfcRelConnectsPorts::isOfType(Step::ClassType t) {
  return IfcRelConnectsPorts::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcPort *IfcRelConnectsPorts::getRelatingPort() {
  if (Step::BaseObject::inited()) {
    return m_relatingPort.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsPorts::setRelatingPort(const Step::RefPtr< IfcPort > &value) {
  m_relatingPort = value;
}

IfcPort *IfcRelConnectsPorts::getRelatedPort() {
  if (Step::BaseObject::inited()) {
    return m_relatedPort.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsPorts::setRelatedPort(const Step::RefPtr< IfcPort > &value) {
  m_relatedPort = value;
}

IfcElement *IfcRelConnectsPorts::getRealizingElement() {
  if (Step::BaseObject::inited()) {
    return m_realizingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsPorts::setRealizingElement(const Step::RefPtr< IfcElement > &value) {
  m_realizingElement = value;
}

void IfcRelConnectsPorts::release() {
  IfcRelConnects::release();
  m_relatingPort.release();
  m_relatedPort.release();
  m_realizingElement.release();
}

bool IfcRelConnectsPorts::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingPort = NULL;
  }
  else {
    m_relatingPort = static_cast< IfcPort * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedPort = NULL;
  }
  else {
    m_relatedPort = static_cast< IfcPort * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_realizingElement = NULL;
  }
  else {
    m_realizingElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsPorts::s_type = new Step::ClassType_class("IfcRelConnectsPorts");
IfcRelConnectsPorts_Factory::IfcRelConnectsPorts_Factory() {
}

IfcRelConnectsPorts_Factory::~IfcRelConnectsPorts_Factory() {
  clear(true);
}

void IfcRelConnectsPorts_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsPorts_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsPorts_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsPorts *IfcRelConnectsPorts_Factory::get(Step::StepId id) {
  IfcRelConnectsPorts *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsPorts * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsPorts_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsPorts * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsPorts_Factory::create(Step::StepId id) {
  IfcRelConnectsPorts *ret = new IfcRelConnectsPorts(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsPorts_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsPorts *ret = new IfcRelConnectsPorts(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsPorts_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsPorts *ret = new IfcRelConnectsPorts(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsPorts *IfcRelConnectsPorts_Factory::generate() {
  return static_cast< IfcRelConnectsPorts * > (create(m_model->getNewId()));
}

IfcRelConnectsPorts *IfcRelConnectsPorts_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsPorts * > (it->second);
  }
  else {
    return NULL;
  }
}

