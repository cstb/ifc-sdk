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
#include <ifc2x3/IfcRelFlowControlElements.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDistributionControlElement.h>
#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelFlowControlElements::IfcRelFlowControlElements(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatedControlElements.setUnset(true);
  m_relatingFlowElement = NULL;
}


IfcRelFlowControlElements::~IfcRelFlowControlElements() {
}

bool IfcRelFlowControlElements::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelFlowControlElements(this);
}

const char *IfcRelFlowControlElements::type() {
  return "IfcRelFlowControlElements";
}

Step::ClassType IfcRelFlowControlElements::getClassType() {
  return IfcRelFlowControlElements::s_type;
}

Step::ClassType IfcRelFlowControlElements::getType() const {
  return IfcRelFlowControlElements::s_type;
}

bool IfcRelFlowControlElements::isOfType(Step::ClassType t) {
  return IfcRelFlowControlElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcDistributionControlElement > > &IfcRelFlowControlElements::getRelatedControlElements() {
  if (Step::BaseObject::inited()) {
    return m_relatedControlElements;
  }
  else {
    m_relatedControlElements.setUnset(true);
    return m_relatedControlElements;
  }
}

void IfcRelFlowControlElements::setRelatedControlElements(const Step::StepSet< Step::RefPtr< IfcDistributionControlElement > > &value) {
  m_relatedControlElements = value;
}

IfcDistributionFlowElement *IfcRelFlowControlElements::getRelatingFlowElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingFlowElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelFlowControlElements::setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value) {
  m_relatingFlowElement = value;
}

void IfcRelFlowControlElements::release() {
  IfcRelConnects::release();
  m_relatedControlElements.clear();
  m_relatingFlowElement.release();
}

bool IfcRelFlowControlElements::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedControlElements.setUnset(true);
  }
  else {
    m_relatedControlElements.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcDistributionControlElement > attr2;
        attr2 = static_cast< IfcDistributionControlElement * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedControlElements.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingFlowElement = NULL;
  }
  else {
    m_relatingFlowElement = static_cast< IfcDistributionFlowElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelFlowControlElements::s_type = new Step::ClassType_class("IfcRelFlowControlElements");
IfcRelFlowControlElements_Factory::IfcRelFlowControlElements_Factory() {
}

IfcRelFlowControlElements_Factory::~IfcRelFlowControlElements_Factory() {
  clear(true);
}

void IfcRelFlowControlElements_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelFlowControlElements_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelFlowControlElements_Factory::end() {
  return m_idMap.end();
}

IfcRelFlowControlElements *IfcRelFlowControlElements_Factory::get(Step::StepId id) {
  IfcRelFlowControlElements *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelFlowControlElements * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelFlowControlElements_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelFlowControlElements * > (create(id));
  }
}

Step::BaseObject *IfcRelFlowControlElements_Factory::create(Step::StepId id) {
  IfcRelFlowControlElements *ret = new IfcRelFlowControlElements(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelFlowControlElements_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelFlowControlElements *ret = new IfcRelFlowControlElements(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelFlowControlElements_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelFlowControlElements *ret = new IfcRelFlowControlElements(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelFlowControlElements *IfcRelFlowControlElements_Factory::generate() {
  return static_cast< IfcRelFlowControlElements * > (create(m_model->getNewId()));
}

IfcRelFlowControlElements *IfcRelFlowControlElements_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelFlowControlElements * > (it->second);
  }
  else {
    return NULL;
  }
}

