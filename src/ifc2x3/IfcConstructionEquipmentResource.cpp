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
#include <ifc2x3/IfcConstructionEquipmentResource.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConstructionEquipmentResource::IfcConstructionEquipmentResource(Step::SPFData *args) : IfcConstructionResource(args) {
}


IfcConstructionEquipmentResource::~IfcConstructionEquipmentResource() {
}

bool IfcConstructionEquipmentResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstructionEquipmentResource(this);
}

const char *IfcConstructionEquipmentResource::type() {
  return "IfcConstructionEquipmentResource";
}

Step::ClassType IfcConstructionEquipmentResource::getClassType() {
  return IfcConstructionEquipmentResource::s_type;
}

Step::ClassType IfcConstructionEquipmentResource::getType() const {
  return IfcConstructionEquipmentResource::s_type;
}

bool IfcConstructionEquipmentResource::isOfType(Step::ClassType t) {
  return IfcConstructionEquipmentResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

void IfcConstructionEquipmentResource::release() {
  IfcConstructionResource::release();
}

bool IfcConstructionEquipmentResource::init() {
  bool status = IfcConstructionResource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionEquipmentResource::s_type = new Step::ClassType_class("IfcConstructionEquipmentResource");
IfcConstructionEquipmentResource_Factory::IfcConstructionEquipmentResource_Factory() {
}

IfcConstructionEquipmentResource_Factory::~IfcConstructionEquipmentResource_Factory() {
  clear(true);
}

void IfcConstructionEquipmentResource_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstructionEquipmentResource_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstructionEquipmentResource_Factory::end() {
  return m_idMap.end();
}

IfcConstructionEquipmentResource *IfcConstructionEquipmentResource_Factory::get(Step::StepId id) {
  IfcConstructionEquipmentResource *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConstructionEquipmentResource * > (it->second);
  }
  else {
    LOG_ERROR("IfcConstructionEquipmentResource_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConstructionEquipmentResource * > (create(id));
  }
}

Step::BaseObject *IfcConstructionEquipmentResource_Factory::create(Step::StepId id) {
  IfcConstructionEquipmentResource *ret = new IfcConstructionEquipmentResource(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConstructionEquipmentResource_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConstructionEquipmentResource *ret = new IfcConstructionEquipmentResource(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConstructionEquipmentResource_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConstructionEquipmentResource *ret = new IfcConstructionEquipmentResource(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConstructionEquipmentResource *IfcConstructionEquipmentResource_Factory::generate() {
  return static_cast< IfcConstructionEquipmentResource * > (create(m_model->getNewId()));
}

IfcConstructionEquipmentResource *IfcConstructionEquipmentResource_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConstructionEquipmentResource * > (it->second);
  }
  else {
    return NULL;
  }
}

