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
#include <ifc2x3/IfcStructuralPointConnection.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralPointConnection::IfcStructuralPointConnection(Step::SPFData *args) : IfcStructuralConnection(args) {
}


IfcStructuralPointConnection::~IfcStructuralPointConnection() {
}

bool IfcStructuralPointConnection::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralPointConnection(this);
}

const char *IfcStructuralPointConnection::type() {
  return "IfcStructuralPointConnection";
}

Step::ClassType IfcStructuralPointConnection::getClassType() {
  return IfcStructuralPointConnection::s_type;
}

Step::ClassType IfcStructuralPointConnection::getType() const {
  return IfcStructuralPointConnection::s_type;
}

bool IfcStructuralPointConnection::isOfType(Step::ClassType t) {
  return IfcStructuralPointConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

void IfcStructuralPointConnection::release() {
  IfcStructuralConnection::release();
}

bool IfcStructuralPointConnection::init() {
  bool status = IfcStructuralConnection::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPointConnection::s_type = new Step::ClassType_class("IfcStructuralPointConnection");
IfcStructuralPointConnection_Factory::IfcStructuralPointConnection_Factory() {
}

IfcStructuralPointConnection_Factory::~IfcStructuralPointConnection_Factory() {
  clear(true);
}

void IfcStructuralPointConnection_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPointConnection_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPointConnection_Factory::end() {
  return m_idMap.end();
}

IfcStructuralPointConnection *IfcStructuralPointConnection_Factory::get(Step::StepId id) {
  IfcStructuralPointConnection *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralPointConnection * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralPointConnection_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralPointConnection * > (create(id));
  }
}

Step::BaseObject *IfcStructuralPointConnection_Factory::create(Step::StepId id) {
  IfcStructuralPointConnection *ret = new IfcStructuralPointConnection(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPointConnection_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralPointConnection *ret = new IfcStructuralPointConnection(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPointConnection_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralPointConnection *ret = new IfcStructuralPointConnection(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralPointConnection *IfcStructuralPointConnection_Factory::generate() {
  return static_cast< IfcStructuralPointConnection * > (create(m_model->getNewId()));
}

IfcStructuralPointConnection *IfcStructuralPointConnection_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralPointConnection * > (it->second);
  }
  else {
    return NULL;
  }
}

