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
#include <ifc2x3/IfcLaborResource.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLaborResource::IfcLaborResource(Step::SPFData *args) : IfcConstructionResource(args) {
  m_skillSet = getUnset(m_skillSet);
}


IfcLaborResource::~IfcLaborResource() {
}

bool IfcLaborResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLaborResource(this);
}

const char *IfcLaborResource::type() {
  return "IfcLaborResource";
}

Step::ClassType IfcLaborResource::getClassType() {
  return IfcLaborResource::s_type;
}

Step::ClassType IfcLaborResource::getType() const {
  return IfcLaborResource::s_type;
}

bool IfcLaborResource::isOfType(Step::ClassType t) {
  return IfcLaborResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

IfcText IfcLaborResource::getSkillSet() {
  if (Step::BaseObject::inited()) {
    return m_skillSet;
  }
  else {
    return getUnset(m_skillSet);
  }
}

void IfcLaborResource::setSkillSet(const IfcText &value) {
  m_skillSet = value;
}

void IfcLaborResource::release() {
  IfcConstructionResource::release();
}

bool IfcLaborResource::init() {
  bool status = IfcConstructionResource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_skillSet = getUnset(m_skillSet);
  }
  else {
    m_skillSet = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLaborResource::s_type = new Step::ClassType_class("IfcLaborResource");
IfcLaborResource_Factory::IfcLaborResource_Factory() {
}

IfcLaborResource_Factory::~IfcLaborResource_Factory() {
  clear(true);
}

void IfcLaborResource_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLaborResource_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLaborResource_Factory::end() {
  return m_idMap.end();
}

IfcLaborResource *IfcLaborResource_Factory::get(Step::StepId id) {
  IfcLaborResource *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLaborResource * > (it->second);
  }
  else {
    LOG_ERROR("IfcLaborResource_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLaborResource * > (create(id));
  }
}

Step::BaseObject *IfcLaborResource_Factory::create(Step::StepId id) {
  IfcLaborResource *ret = new IfcLaborResource(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLaborResource_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLaborResource *ret = new IfcLaborResource(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLaborResource_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLaborResource *ret = new IfcLaborResource(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLaborResource *IfcLaborResource_Factory::generate() {
  return static_cast< IfcLaborResource * > (create(m_model->getNewId()));
}

IfcLaborResource *IfcLaborResource_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLaborResource * > (it->second);
  }
  else {
    return NULL;
  }
}

