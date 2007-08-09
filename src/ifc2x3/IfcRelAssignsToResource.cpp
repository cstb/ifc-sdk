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
#include <ifc2x3/IfcRelAssignsToResource.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcResource.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToResource::IfcRelAssignsToResource(Step::SPFData *args) : IfcRelAssigns(args) {
  m_relatingResource = NULL;
}


IfcRelAssignsToResource::~IfcRelAssignsToResource() {
}

bool IfcRelAssignsToResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToResource(this);
}

const char *IfcRelAssignsToResource::type() {
  return "IfcRelAssignsToResource";
}

Step::ClassType IfcRelAssignsToResource::getClassType() {
  return IfcRelAssignsToResource::s_type;
}

Step::ClassType IfcRelAssignsToResource::getType() const {
  return IfcRelAssignsToResource::s_type;
}

bool IfcRelAssignsToResource::isOfType(Step::ClassType t) {
  return IfcRelAssignsToResource::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcResource *IfcRelAssignsToResource::getRelatingResource() {
  if (Step::BaseObject::inited()) {
    return m_relatingResource.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToResource::setRelatingResource(const Step::RefPtr< IfcResource > &value) {
  m_relatingResource = value;
}

void IfcRelAssignsToResource::release() {
  IfcRelAssigns::release();
  m_relatingResource.release();
}

bool IfcRelAssignsToResource::init() {
  bool status = IfcRelAssigns::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingResource = NULL;
  }
  else {
    m_relatingResource = static_cast< IfcResource * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToResource::s_type = new Step::ClassType_class("IfcRelAssignsToResource");
IfcRelAssignsToResource_Factory::IfcRelAssignsToResource_Factory() {
}

IfcRelAssignsToResource_Factory::~IfcRelAssignsToResource_Factory() {
  clear(true);
}

void IfcRelAssignsToResource_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToResource_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToResource_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToResource *IfcRelAssignsToResource_Factory::get(Step::StepId id) {
  IfcRelAssignsToResource *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToResource * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToResource_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToResource * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToResource_Factory::create(Step::StepId id) {
  IfcRelAssignsToResource *ret = new IfcRelAssignsToResource(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToResource_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToResource *ret = new IfcRelAssignsToResource(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToResource_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToResource *ret = new IfcRelAssignsToResource(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToResource *IfcRelAssignsToResource_Factory::generate() {
  return static_cast< IfcRelAssignsToResource * > (create(m_model->getNewId()));
}

IfcRelAssignsToResource *IfcRelAssignsToResource_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToResource * > (it->second);
  }
  else {
    return NULL;
  }
}

