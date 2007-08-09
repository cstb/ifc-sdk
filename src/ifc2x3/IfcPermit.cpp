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
#include <ifc2x3/IfcPermit.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPermit::IfcPermit(Step::SPFData *args) : IfcControl(args) {
  m_permitID = getUnset(m_permitID);
}


IfcPermit::~IfcPermit() {
}

bool IfcPermit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPermit(this);
}

const char *IfcPermit::type() {
  return "IfcPermit";
}

Step::ClassType IfcPermit::getClassType() {
  return IfcPermit::s_type;
}

Step::ClassType IfcPermit::getType() const {
  return IfcPermit::s_type;
}

bool IfcPermit::isOfType(Step::ClassType t) {
  return IfcPermit::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcPermit::getPermitID() {
  if (Step::BaseObject::inited()) {
    return m_permitID;
  }
  else {
    return getUnset(m_permitID);
  }
}

void IfcPermit::setPermitID(const IfcIdentifier &value) {
  m_permitID = value;
}

void IfcPermit::release() {
  IfcControl::release();
}

bool IfcPermit::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_permitID = getUnset(m_permitID);
  }
  else {
    m_permitID = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPermit::s_type = new Step::ClassType_class("IfcPermit");
IfcPermit_Factory::IfcPermit_Factory() {
}

IfcPermit_Factory::~IfcPermit_Factory() {
  clear(true);
}

void IfcPermit_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPermit_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPermit_Factory::end() {
  return m_idMap.end();
}

IfcPermit *IfcPermit_Factory::get(Step::StepId id) {
  IfcPermit *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPermit * > (it->second);
  }
  else {
    LOG_ERROR("IfcPermit_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPermit * > (create(id));
  }
}

Step::BaseObject *IfcPermit_Factory::create(Step::StepId id) {
  IfcPermit *ret = new IfcPermit(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPermit_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPermit *ret = new IfcPermit(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPermit_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPermit *ret = new IfcPermit(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPermit *IfcPermit_Factory::generate() {
  return static_cast< IfcPermit * > (create(m_model->getNewId()));
}

IfcPermit *IfcPermit_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPermit * > (it->second);
  }
  else {
    return NULL;
  }
}

