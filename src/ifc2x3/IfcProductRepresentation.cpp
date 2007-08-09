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
#include <ifc2x3/IfcProductRepresentation.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProductRepresentation::IfcProductRepresentation(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_representations.setUnset(true);
}


IfcProductRepresentation::~IfcProductRepresentation() {
}

bool IfcProductRepresentation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProductRepresentation(this);
}

const char *IfcProductRepresentation::type() {
  return "IfcProductRepresentation";
}

Step::ClassType IfcProductRepresentation::getClassType() {
  return IfcProductRepresentation::s_type;
}

Step::ClassType IfcProductRepresentation::getType() const {
  return IfcProductRepresentation::s_type;
}

bool IfcProductRepresentation::isOfType(Step::ClassType t) {
  return IfcProductRepresentation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcProductRepresentation::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcProductRepresentation::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcProductRepresentation::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcProductRepresentation::setDescription(const IfcText &value) {
  m_description = value;
}

Step::StepList< Step::RefPtr< IfcRepresentation > > &IfcProductRepresentation::getRepresentations() {
  if (Step::BaseObject::inited()) {
    return m_representations;
  }
  else {
    m_representations.setUnset(true);
    return m_representations;
  }
}

void IfcProductRepresentation::setRepresentations(const Step::StepList< Step::RefPtr< IfcRepresentation > > &value) {
  m_representations = value;
}

void IfcProductRepresentation::release() {
  m_representations.clear();
}

bool IfcProductRepresentation::init() {
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
    m_representations.setUnset(true);
  }
  else {
    m_representations.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRepresentation > attr2;
        attr2 = static_cast< IfcRepresentation * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_representations.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProductRepresentation::s_type = new Step::ClassType_class("IfcProductRepresentation");
IfcProductRepresentation_Factory::IfcProductRepresentation_Factory() {
}

IfcProductRepresentation_Factory::~IfcProductRepresentation_Factory() {
  clear(true);
}

void IfcProductRepresentation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProductRepresentation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProductRepresentation_Factory::end() {
  return m_idMap.end();
}

IfcProductRepresentation *IfcProductRepresentation_Factory::get(Step::StepId id) {
  IfcProductRepresentation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProductRepresentation * > (it->second);
  }
  else {
    LOG_ERROR("IfcProductRepresentation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProductRepresentation * > (create(id));
  }
}

Step::BaseObject *IfcProductRepresentation_Factory::create(Step::StepId id) {
  IfcProductRepresentation *ret = new IfcProductRepresentation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProductRepresentation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProductRepresentation *ret = new IfcProductRepresentation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProductRepresentation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProductRepresentation *ret = new IfcProductRepresentation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProductRepresentation *IfcProductRepresentation_Factory::generate() {
  return static_cast< IfcProductRepresentation * > (create(m_model->getNewId()));
}

IfcProductRepresentation *IfcProductRepresentation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProductRepresentation * > (it->second);
  }
  else {
    return NULL;
  }
}

