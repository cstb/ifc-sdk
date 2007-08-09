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
#include <ifc2x3/IfcGroup.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelAssignsToGroup.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGroup::IfcGroup(Step::SPFData *args) : IfcObject(args) {
  m_isGroupedBy = NULL;
}


IfcGroup::~IfcGroup() {
}

bool IfcGroup::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGroup(this);
}

const char *IfcGroup::type() {
  return "IfcGroup";
}

Step::ClassType IfcGroup::getClassType() {
  return IfcGroup::s_type;
}

Step::ClassType IfcGroup::getType() const {
  return IfcGroup::s_type;
}

bool IfcGroup::isOfType(Step::ClassType t) {
  return IfcGroup::s_type == t ? true : IfcObject::isOfType(t);
}

IfcRelAssignsToGroup *IfcGroup::getIsGroupedBy() {
  if (Step::BaseObject::inited()) {
    return m_isGroupedBy.get();
  }
  else {
    return NULL;
  }
}

void IfcGroup::setIsGroupedBy(const Step::RefPtr< IfcRelAssignsToGroup > &value) {
  m_isGroupedBy = value;
}

void IfcGroup::release() {
  IfcObject::release();
}

bool IfcGroup::init() {
  bool status = IfcObject::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelAssignsToGroup::getClassType(), 6);
  if (inverses) {
    m_isGroupedBy = static_cast< IfcRelAssignsToGroup * > (m_model->getObjectById((*inverses)[0]));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGroup::s_type = new Step::ClassType_class("IfcGroup");
IfcGroup_Factory::IfcGroup_Factory() {
}

IfcGroup_Factory::~IfcGroup_Factory() {
  clear(true);
}

void IfcGroup_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGroup_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGroup_Factory::end() {
  return m_idMap.end();
}

IfcGroup *IfcGroup_Factory::get(Step::StepId id) {
  IfcGroup *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGroup * > (it->second);
  }
  else {
    LOG_ERROR("IfcGroup_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGroup * > (create(id));
  }
}

Step::BaseObject *IfcGroup_Factory::create(Step::StepId id) {
  IfcGroup *ret = new IfcGroup(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGroup_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGroup *ret = new IfcGroup(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGroup_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGroup *ret = new IfcGroup(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGroup *IfcGroup_Factory::generate() {
  return static_cast< IfcGroup * > (create(m_model->getNewId()));
}

IfcGroup *IfcGroup_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGroup * > (it->second);
  }
  else {
    return NULL;
  }
}

