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
#include <ifc2x3/IfcSystem.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSystem::IfcSystem(Step::SPFData *args) : IfcGroup(args) {
  m_servicesBuildings.setUnset(true);
}


IfcSystem::~IfcSystem() {
}

bool IfcSystem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSystem(this);
}

const char *IfcSystem::type() {
  return "IfcSystem";
}

Step::ClassType IfcSystem::getClassType() {
  return IfcSystem::s_type;
}

Step::ClassType IfcSystem::getType() const {
  return IfcSystem::s_type;
}

bool IfcSystem::isOfType(Step::ClassType t) {
  return IfcSystem::s_type == t ? true : IfcGroup::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > &IfcSystem::getServicesBuildings() {
  if (Step::BaseObject::inited()) {
    return m_servicesBuildings;
  }
  else {
    m_servicesBuildings.setUnset(true);
    return m_servicesBuildings;
  }
}

void IfcSystem::setServicesBuildings(const Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > &value) {
  m_servicesBuildings = value;
}

void IfcSystem::release() {
  IfcGroup::release();
}

bool IfcSystem::init() {
  bool status = IfcGroup::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_servicesBuildings.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_servicesBuildings.insert(static_cast< IfcRelServicesBuildings * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSystem::s_type = new Step::ClassType_class("IfcSystem");
IfcSystem_Factory::IfcSystem_Factory() {
}

IfcSystem_Factory::~IfcSystem_Factory() {
  clear(true);
}

void IfcSystem_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSystem_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSystem_Factory::end() {
  return m_idMap.end();
}

IfcSystem *IfcSystem_Factory::get(Step::StepId id) {
  IfcSystem *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSystem * > (it->second);
  }
  else {
    LOG_ERROR("IfcSystem_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSystem * > (create(id));
  }
}

Step::BaseObject *IfcSystem_Factory::create(Step::StepId id) {
  IfcSystem *ret = new IfcSystem(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSystem_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSystem *ret = new IfcSystem(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSystem_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSystem *ret = new IfcSystem(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSystem *IfcSystem_Factory::generate() {
  return static_cast< IfcSystem * > (create(m_model->getNewId()));
}

IfcSystem *IfcSystem_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSystem * > (it->second);
  }
  else {
    return NULL;
  }
}

