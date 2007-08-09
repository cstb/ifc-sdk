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
#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsWithRealizingElements::IfcRelConnectsWithRealizingElements(Step::SPFData *args) : IfcRelConnectsElements(args) {
  m_realizingElements.setUnset(true);
  m_connectionType = getUnset(m_connectionType);
}


IfcRelConnectsWithRealizingElements::~IfcRelConnectsWithRealizingElements() {
}

bool IfcRelConnectsWithRealizingElements::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsWithRealizingElements(this);
}

const char *IfcRelConnectsWithRealizingElements::type() {
  return "IfcRelConnectsWithRealizingElements";
}

Step::ClassType IfcRelConnectsWithRealizingElements::getClassType() {
  return IfcRelConnectsWithRealizingElements::s_type;
}

Step::ClassType IfcRelConnectsWithRealizingElements::getType() const {
  return IfcRelConnectsWithRealizingElements::s_type;
}

bool IfcRelConnectsWithRealizingElements::isOfType(Step::ClassType t) {
  return IfcRelConnectsWithRealizingElements::s_type == t ? true : IfcRelConnectsElements::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcElement > > &IfcRelConnectsWithRealizingElements::getRealizingElements() {
  if (Step::BaseObject::inited()) {
    return m_realizingElements;
  }
  else {
    m_realizingElements.setUnset(true);
    return m_realizingElements;
  }
}

void IfcRelConnectsWithRealizingElements::setRealizingElements(const Step::StepSet< Step::RefPtr< IfcElement > > &value) {
  m_realizingElements = value;
}

IfcLabel IfcRelConnectsWithRealizingElements::getConnectionType() {
  if (Step::BaseObject::inited()) {
    return m_connectionType;
  }
  else {
    return getUnset(m_connectionType);
  }
}

void IfcRelConnectsWithRealizingElements::setConnectionType(const IfcLabel &value) {
  m_connectionType = value;
}

void IfcRelConnectsWithRealizingElements::release() {
  IfcRelConnectsElements::release();
  m_realizingElements.clear();
}

bool IfcRelConnectsWithRealizingElements::init() {
  bool status = IfcRelConnectsElements::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_realizingElements.setUnset(true);
  }
  else {
    m_realizingElements.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcElement > attr2;
        attr2 = static_cast< IfcElement * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_realizingElements.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_connectionType = getUnset(m_connectionType);
  }
  else {
    m_connectionType = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsWithRealizingElements::s_type = new Step::ClassType_class("IfcRelConnectsWithRealizingElements");
IfcRelConnectsWithRealizingElements_Factory::IfcRelConnectsWithRealizingElements_Factory() {
}

IfcRelConnectsWithRealizingElements_Factory::~IfcRelConnectsWithRealizingElements_Factory() {
  clear(true);
}

void IfcRelConnectsWithRealizingElements_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsWithRealizingElements_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsWithRealizingElements_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsWithRealizingElements *IfcRelConnectsWithRealizingElements_Factory::get(Step::StepId id) {
  IfcRelConnectsWithRealizingElements *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsWithRealizingElements * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsWithRealizingElements_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsWithRealizingElements * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsWithRealizingElements_Factory::create(Step::StepId id) {
  IfcRelConnectsWithRealizingElements *ret = new IfcRelConnectsWithRealizingElements(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsWithRealizingElements_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsWithRealizingElements *ret = new IfcRelConnectsWithRealizingElements(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsWithRealizingElements_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsWithRealizingElements *ret = new IfcRelConnectsWithRealizingElements(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsWithRealizingElements *IfcRelConnectsWithRealizingElements_Factory::generate() {
  return static_cast< IfcRelConnectsWithRealizingElements * > (create(m_model->getNewId()));
}

IfcRelConnectsWithRealizingElements *IfcRelConnectsWithRealizingElements_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsWithRealizingElements * > (it->second);
  }
  else {
    return NULL;
  }
}

