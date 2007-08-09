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
#include <ifc2x3/IfcActionRequest.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcActionRequest::IfcActionRequest(Step::SPFData *args) : IfcControl(args) {
  m_requestID = getUnset(m_requestID);
}


IfcActionRequest::~IfcActionRequest() {
}

bool IfcActionRequest::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcActionRequest(this);
}

const char *IfcActionRequest::type() {
  return "IfcActionRequest";
}

Step::ClassType IfcActionRequest::getClassType() {
  return IfcActionRequest::s_type;
}

Step::ClassType IfcActionRequest::getType() const {
  return IfcActionRequest::s_type;
}

bool IfcActionRequest::isOfType(Step::ClassType t) {
  return IfcActionRequest::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcActionRequest::getRequestID() {
  if (Step::BaseObject::inited()) {
    return m_requestID;
  }
  else {
    return getUnset(m_requestID);
  }
}

void IfcActionRequest::setRequestID(const IfcIdentifier &value) {
  m_requestID = value;
}

void IfcActionRequest::release() {
  IfcControl::release();
}

bool IfcActionRequest::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_requestID = getUnset(m_requestID);
  }
  else {
    m_requestID = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcActionRequest::s_type = new Step::ClassType_class("IfcActionRequest");
IfcActionRequest_Factory::IfcActionRequest_Factory() {
}

IfcActionRequest_Factory::~IfcActionRequest_Factory() {
  clear(true);
}

void IfcActionRequest_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActionRequest_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActionRequest_Factory::end() {
  return m_idMap.end();
}

IfcActionRequest *IfcActionRequest_Factory::get(Step::StepId id) {
  IfcActionRequest *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcActionRequest * > (it->second);
  }
  else {
    LOG_ERROR("IfcActionRequest_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcActionRequest * > (create(id));
  }
}

Step::BaseObject *IfcActionRequest_Factory::create(Step::StepId id) {
  IfcActionRequest *ret = new IfcActionRequest(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcActionRequest_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcActionRequest *ret = new IfcActionRequest(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcActionRequest_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcActionRequest *ret = new IfcActionRequest(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcActionRequest *IfcActionRequest_Factory::generate() {
  return static_cast< IfcActionRequest * > (create(m_model->getNewId()));
}

IfcActionRequest *IfcActionRequest_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcActionRequest * > (it->second);
  }
  else {
    return NULL;
  }
}

