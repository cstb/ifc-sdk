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
#include <ifc2x3/IfcRelServicesBuildings.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcSystem.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelServicesBuildings::IfcRelServicesBuildings(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingSystem = NULL;
  m_relatedBuildings.setUnset(true);
}


IfcRelServicesBuildings::~IfcRelServicesBuildings() {
}

bool IfcRelServicesBuildings::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelServicesBuildings(this);
}

const char *IfcRelServicesBuildings::type() {
  return "IfcRelServicesBuildings";
}

Step::ClassType IfcRelServicesBuildings::getClassType() {
  return IfcRelServicesBuildings::s_type;
}

Step::ClassType IfcRelServicesBuildings::getType() const {
  return IfcRelServicesBuildings::s_type;
}

bool IfcRelServicesBuildings::isOfType(Step::ClassType t) {
  return IfcRelServicesBuildings::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSystem *IfcRelServicesBuildings::getRelatingSystem() {
  if (Step::BaseObject::inited()) {
    return m_relatingSystem.get();
  }
  else {
    return NULL;
  }
}

void IfcRelServicesBuildings::setRelatingSystem(const Step::RefPtr< IfcSystem > &value) {
  m_relatingSystem = value;
}

Step::StepSet< Step::RefPtr< IfcSpatialStructureElement > > &IfcRelServicesBuildings::getRelatedBuildings() {
  if (Step::BaseObject::inited()) {
    return m_relatedBuildings;
  }
  else {
    m_relatedBuildings.setUnset(true);
    return m_relatedBuildings;
  }
}

void IfcRelServicesBuildings::setRelatedBuildings(const Step::StepSet< Step::RefPtr< IfcSpatialStructureElement > > &value) {
  m_relatedBuildings = value;
}

void IfcRelServicesBuildings::release() {
  IfcRelConnects::release();
  m_relatingSystem.release();
  m_relatedBuildings.clear();
}

bool IfcRelServicesBuildings::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingSystem = NULL;
  }
  else {
    m_relatingSystem = static_cast< IfcSystem * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedBuildings.setUnset(true);
  }
  else {
    m_relatedBuildings.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcSpatialStructureElement > attr2;
        attr2 = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedBuildings.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelServicesBuildings::s_type = new Step::ClassType_class("IfcRelServicesBuildings");
IfcRelServicesBuildings_Factory::IfcRelServicesBuildings_Factory() {
}

IfcRelServicesBuildings_Factory::~IfcRelServicesBuildings_Factory() {
  clear(true);
}

void IfcRelServicesBuildings_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelServicesBuildings_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelServicesBuildings_Factory::end() {
  return m_idMap.end();
}

IfcRelServicesBuildings *IfcRelServicesBuildings_Factory::get(Step::StepId id) {
  IfcRelServicesBuildings *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelServicesBuildings * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelServicesBuildings_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelServicesBuildings * > (create(id));
  }
}

Step::BaseObject *IfcRelServicesBuildings_Factory::create(Step::StepId id) {
  IfcRelServicesBuildings *ret = new IfcRelServicesBuildings(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelServicesBuildings_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelServicesBuildings *ret = new IfcRelServicesBuildings(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelServicesBuildings_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelServicesBuildings *ret = new IfcRelServicesBuildings(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelServicesBuildings *IfcRelServicesBuildings_Factory::generate() {
  return static_cast< IfcRelServicesBuildings * > (create(m_model->getNewId()));
}

IfcRelServicesBuildings *IfcRelServicesBuildings_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelServicesBuildings * > (it->second);
  }
  else {
    return NULL;
  }
}

