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
#include <ifc2x3/IfcPresentationLayerAssignment.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcLayeredItem.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPresentationLayerAssignment::IfcPresentationLayerAssignment(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_assignedItems.setUnset(true);
  m_identifier = getUnset(m_identifier);
}


IfcPresentationLayerAssignment::~IfcPresentationLayerAssignment() {
}

bool IfcPresentationLayerAssignment::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPresentationLayerAssignment(this);
}

const char *IfcPresentationLayerAssignment::type() {
  return "IfcPresentationLayerAssignment";
}

Step::ClassType IfcPresentationLayerAssignment::getClassType() {
  return IfcPresentationLayerAssignment::s_type;
}

Step::ClassType IfcPresentationLayerAssignment::getType() const {
  return IfcPresentationLayerAssignment::s_type;
}

bool IfcPresentationLayerAssignment::isOfType(Step::ClassType t) {
  return IfcPresentationLayerAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPresentationLayerAssignment::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcPresentationLayerAssignment::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcPresentationLayerAssignment::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcPresentationLayerAssignment::setDescription(const IfcText &value) {
  m_description = value;
}

Step::StepSet< Step::RefPtr< IfcLayeredItem > > &IfcPresentationLayerAssignment::getAssignedItems() {
  if (Step::BaseObject::inited()) {
    return m_assignedItems;
  }
  else {
    m_assignedItems.setUnset(true);
    return m_assignedItems;
  }
}

void IfcPresentationLayerAssignment::setAssignedItems(const Step::StepSet< Step::RefPtr< IfcLayeredItem > > &value) {
  m_assignedItems = value;
}

IfcIdentifier IfcPresentationLayerAssignment::getIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_identifier;
  }
  else {
    return getUnset(m_identifier);
  }
}

void IfcPresentationLayerAssignment::setIdentifier(const IfcIdentifier &value) {
  m_identifier = value;
}

void IfcPresentationLayerAssignment::release() {
  m_assignedItems.clear();
}

bool IfcPresentationLayerAssignment::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_assignedItems.setUnset(true);
  }
  else {
    m_assignedItems.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcLayeredItem > attr2;
        attr2 = new IfcLayeredItem;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
          }
        }
        m_assignedItems.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_identifier = getUnset(m_identifier);
  }
  else {
    m_identifier = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationLayerAssignment::s_type = new Step::ClassType_class("IfcPresentationLayerAssignment");
IfcPresentationLayerAssignment_Factory::IfcPresentationLayerAssignment_Factory() {
}

IfcPresentationLayerAssignment_Factory::~IfcPresentationLayerAssignment_Factory() {
  clear(true);
}

void IfcPresentationLayerAssignment_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPresentationLayerAssignment_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPresentationLayerAssignment_Factory::end() {
  return m_idMap.end();
}

IfcPresentationLayerAssignment *IfcPresentationLayerAssignment_Factory::get(Step::StepId id) {
  IfcPresentationLayerAssignment *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPresentationLayerAssignment * > (it->second);
  }
  else {
    LOG_ERROR("IfcPresentationLayerAssignment_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPresentationLayerAssignment * > (create(id));
  }
}

Step::BaseObject *IfcPresentationLayerAssignment_Factory::create(Step::StepId id) {
  IfcPresentationLayerAssignment *ret = new IfcPresentationLayerAssignment(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPresentationLayerAssignment_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPresentationLayerAssignment *ret = new IfcPresentationLayerAssignment(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPresentationLayerAssignment_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPresentationLayerAssignment *ret = new IfcPresentationLayerAssignment(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPresentationLayerAssignment *IfcPresentationLayerAssignment_Factory::generate() {
  return static_cast< IfcPresentationLayerAssignment * > (create(m_model->getNewId()));
}

IfcPresentationLayerAssignment *IfcPresentationLayerAssignment_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPresentationLayerAssignment * > (it->second);
  }
  else {
    return NULL;
  }
}

