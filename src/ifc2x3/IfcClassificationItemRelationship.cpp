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
#include <ifc2x3/IfcClassificationItemRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcClassificationItemRelationship::IfcClassificationItemRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_relatingItem = NULL;
  m_relatedItems.setUnset(true);
}


IfcClassificationItemRelationship::~IfcClassificationItemRelationship() {
}

bool IfcClassificationItemRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassificationItemRelationship(this);
}

const char *IfcClassificationItemRelationship::type() {
  return "IfcClassificationItemRelationship";
}

Step::ClassType IfcClassificationItemRelationship::getClassType() {
  return IfcClassificationItemRelationship::s_type;
}

Step::ClassType IfcClassificationItemRelationship::getType() const {
  return IfcClassificationItemRelationship::s_type;
}

bool IfcClassificationItemRelationship::isOfType(Step::ClassType t) {
  return IfcClassificationItemRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcClassificationItem *IfcClassificationItemRelationship::getRelatingItem() {
  if (Step::BaseObject::inited()) {
    return m_relatingItem.get();
  }
  else {
    return NULL;
  }
}

void IfcClassificationItemRelationship::setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value) {
  m_relatingItem = value;
}

Step::StepSet< Step::RefPtr< IfcClassificationItem > > &IfcClassificationItemRelationship::getRelatedItems() {
  if (Step::BaseObject::inited()) {
    return m_relatedItems;
  }
  else {
    m_relatedItems.setUnset(true);
    return m_relatedItems;
  }
}

void IfcClassificationItemRelationship::setRelatedItems(const Step::StepSet< Step::RefPtr< IfcClassificationItem > > &value) {
  m_relatedItems = value;
}

void IfcClassificationItemRelationship::release() {
  m_relatingItem.release();
  m_relatedItems.clear();
}

bool IfcClassificationItemRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingItem = NULL;
  }
  else {
    m_relatingItem = static_cast< IfcClassificationItem * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedItems.setUnset(true);
  }
  else {
    m_relatedItems.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcClassificationItem > attr2;
        attr2 = static_cast< IfcClassificationItem * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedItems.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationItemRelationship::s_type = new Step::ClassType_class("IfcClassificationItemRelationship");
IfcClassificationItemRelationship_Factory::IfcClassificationItemRelationship_Factory() {
}

IfcClassificationItemRelationship_Factory::~IfcClassificationItemRelationship_Factory() {
  clear(true);
}

void IfcClassificationItemRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationItemRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationItemRelationship_Factory::end() {
  return m_idMap.end();
}

IfcClassificationItemRelationship *IfcClassificationItemRelationship_Factory::get(Step::StepId id) {
  IfcClassificationItemRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcClassificationItemRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcClassificationItemRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcClassificationItemRelationship * > (create(id));
  }
}

Step::BaseObject *IfcClassificationItemRelationship_Factory::create(Step::StepId id) {
  IfcClassificationItemRelationship *ret = new IfcClassificationItemRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationItemRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcClassificationItemRelationship *ret = new IfcClassificationItemRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationItemRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcClassificationItemRelationship *ret = new IfcClassificationItemRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcClassificationItemRelationship *IfcClassificationItemRelationship_Factory::generate() {
  return static_cast< IfcClassificationItemRelationship * > (create(m_model->getNewId()));
}

IfcClassificationItemRelationship *IfcClassificationItemRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcClassificationItemRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

