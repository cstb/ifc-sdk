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
#include <ifc2x3/IfcConstructionProductResource.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConstructionProductResource::IfcConstructionProductResource(Step::SPFData *args) : IfcConstructionResource(args) {
}


IfcConstructionProductResource::~IfcConstructionProductResource() {
}

bool IfcConstructionProductResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstructionProductResource(this);
}

const char *IfcConstructionProductResource::type() {
  return "IfcConstructionProductResource";
}

Step::ClassType IfcConstructionProductResource::getClassType() {
  return IfcConstructionProductResource::s_type;
}

Step::ClassType IfcConstructionProductResource::getType() const {
  return IfcConstructionProductResource::s_type;
}

bool IfcConstructionProductResource::isOfType(Step::ClassType t) {
  return IfcConstructionProductResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

void IfcConstructionProductResource::release() {
  IfcConstructionResource::release();
}

bool IfcConstructionProductResource::init() {
  bool status = IfcConstructionResource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionProductResource::s_type = new Step::ClassType_class("IfcConstructionProductResource");
IfcConstructionProductResource_Factory::IfcConstructionProductResource_Factory() {
}

IfcConstructionProductResource_Factory::~IfcConstructionProductResource_Factory() {
  clear(true);
}

void IfcConstructionProductResource_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstructionProductResource_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstructionProductResource_Factory::end() {
  return m_idMap.end();
}

IfcConstructionProductResource *IfcConstructionProductResource_Factory::get(Step::StepId id) {
  IfcConstructionProductResource *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConstructionProductResource * > (it->second);
  }
  else {
    LOG_ERROR("IfcConstructionProductResource_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConstructionProductResource * > (create(id));
  }
}

Step::BaseObject *IfcConstructionProductResource_Factory::create(Step::StepId id) {
  IfcConstructionProductResource *ret = new IfcConstructionProductResource(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConstructionProductResource_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConstructionProductResource *ret = new IfcConstructionProductResource(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConstructionProductResource_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConstructionProductResource *ret = new IfcConstructionProductResource(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConstructionProductResource *IfcConstructionProductResource_Factory::generate() {
  return static_cast< IfcConstructionProductResource * > (create(m_model->getNewId()));
}

IfcConstructionProductResource *IfcConstructionProductResource_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConstructionProductResource * > (it->second);
  }
  else {
    return NULL;
  }
}

