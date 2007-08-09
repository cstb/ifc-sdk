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
#include <ifc2x3/IfcRelAssignsToGroup.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToGroup::IfcRelAssignsToGroup(Step::SPFData *args) : IfcRelAssigns(args) {
  m_relatingGroup = NULL;
}


IfcRelAssignsToGroup::~IfcRelAssignsToGroup() {
}

bool IfcRelAssignsToGroup::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToGroup(this);
}

const char *IfcRelAssignsToGroup::type() {
  return "IfcRelAssignsToGroup";
}

Step::ClassType IfcRelAssignsToGroup::getClassType() {
  return IfcRelAssignsToGroup::s_type;
}

Step::ClassType IfcRelAssignsToGroup::getType() const {
  return IfcRelAssignsToGroup::s_type;
}

bool IfcRelAssignsToGroup::isOfType(Step::ClassType t) {
  return IfcRelAssignsToGroup::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcGroup *IfcRelAssignsToGroup::getRelatingGroup() {
  if (Step::BaseObject::inited()) {
    return m_relatingGroup.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToGroup::setRelatingGroup(const Step::RefPtr< IfcGroup > &value) {
  m_relatingGroup = value;
}

void IfcRelAssignsToGroup::release() {
  IfcRelAssigns::release();
  m_relatingGroup.release();
}

bool IfcRelAssignsToGroup::init() {
  bool status = IfcRelAssigns::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingGroup = NULL;
  }
  else {
    m_relatingGroup = static_cast< IfcGroup * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToGroup::s_type = new Step::ClassType_class("IfcRelAssignsToGroup");
IfcRelAssignsToGroup_Factory::IfcRelAssignsToGroup_Factory() {
}

IfcRelAssignsToGroup_Factory::~IfcRelAssignsToGroup_Factory() {
  clear(true);
}

void IfcRelAssignsToGroup_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToGroup_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToGroup_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToGroup *IfcRelAssignsToGroup_Factory::get(Step::StepId id) {
  IfcRelAssignsToGroup *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToGroup * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToGroup_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToGroup * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToGroup_Factory::create(Step::StepId id) {
  IfcRelAssignsToGroup *ret = new IfcRelAssignsToGroup(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToGroup_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToGroup *ret = new IfcRelAssignsToGroup(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToGroup_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToGroup *ret = new IfcRelAssignsToGroup(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToGroup *IfcRelAssignsToGroup_Factory::generate() {
  return static_cast< IfcRelAssignsToGroup * > (create(m_model->getNewId()));
}

IfcRelAssignsToGroup *IfcRelAssignsToGroup_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToGroup * > (it->second);
  }
  else {
    return NULL;
  }
}

