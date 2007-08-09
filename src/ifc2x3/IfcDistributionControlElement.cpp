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
#include <ifc2x3/IfcDistributionControlElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelFlowControlElements.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDistributionControlElement::IfcDistributionControlElement(Step::SPFData *args) : IfcDistributionElement(args) {
  m_controlElementId = getUnset(m_controlElementId);
  m_assignedToFlowElement.setUnset(true);
}


IfcDistributionControlElement::~IfcDistributionControlElement() {
}

bool IfcDistributionControlElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDistributionControlElement(this);
}

const char *IfcDistributionControlElement::type() {
  return "IfcDistributionControlElement";
}

Step::ClassType IfcDistributionControlElement::getClassType() {
  return IfcDistributionControlElement::s_type;
}

Step::ClassType IfcDistributionControlElement::getType() const {
  return IfcDistributionControlElement::s_type;
}

bool IfcDistributionControlElement::isOfType(Step::ClassType t) {
  return IfcDistributionControlElement::s_type == t ? true : IfcDistributionElement::isOfType(t);
}

IfcIdentifier IfcDistributionControlElement::getControlElementId() {
  if (Step::BaseObject::inited()) {
    return m_controlElementId;
  }
  else {
    return getUnset(m_controlElementId);
  }
}

void IfcDistributionControlElement::setControlElementId(const IfcIdentifier &value) {
  m_controlElementId = value;
}

Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > &IfcDistributionControlElement::getAssignedToFlowElement() {
  if (Step::BaseObject::inited()) {
    return m_assignedToFlowElement;
  }
  else {
    m_assignedToFlowElement.setUnset(true);
    return m_assignedToFlowElement;
  }
}

void IfcDistributionControlElement::setAssignedToFlowElement(const Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > &value) {
  m_assignedToFlowElement = value;
}

void IfcDistributionControlElement::release() {
  IfcDistributionElement::release();
}

bool IfcDistributionControlElement::init() {
  bool status = IfcDistributionElement::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_controlElementId = getUnset(m_controlElementId);
  }
  else {
    m_controlElementId = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_assignedToFlowElement.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_assignedToFlowElement.insert(static_cast< IfcRelFlowControlElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionControlElement::s_type = new Step::ClassType_class("IfcDistributionControlElement");
IfcDistributionControlElement_Factory::IfcDistributionControlElement_Factory() {
}

IfcDistributionControlElement_Factory::~IfcDistributionControlElement_Factory() {
  clear(true);
}

void IfcDistributionControlElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionControlElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionControlElement_Factory::end() {
  return m_idMap.end();
}

IfcDistributionControlElement *IfcDistributionControlElement_Factory::get(Step::StepId id) {
  IfcDistributionControlElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDistributionControlElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcDistributionControlElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDistributionControlElement * > (create(id));
  }
}

Step::BaseObject *IfcDistributionControlElement_Factory::create(Step::StepId id) {
  IfcDistributionControlElement *ret = new IfcDistributionControlElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionControlElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDistributionControlElement *ret = new IfcDistributionControlElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionControlElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDistributionControlElement *ret = new IfcDistributionControlElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDistributionControlElement *IfcDistributionControlElement_Factory::generate() {
  return static_cast< IfcDistributionControlElement * > (create(m_model->getNewId()));
}

IfcDistributionControlElement *IfcDistributionControlElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDistributionControlElement * > (it->second);
  }
  else {
    return NULL;
  }
}

