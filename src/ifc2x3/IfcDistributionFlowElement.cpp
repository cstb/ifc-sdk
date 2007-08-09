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
#include <ifc2x3/IfcDistributionFlowElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelFlowControlElements.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDistributionFlowElement::IfcDistributionFlowElement(Step::SPFData *args) : IfcDistributionElement(args) {
  m_hasControlElements.setUnset(true);
}


IfcDistributionFlowElement::~IfcDistributionFlowElement() {
}

bool IfcDistributionFlowElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDistributionFlowElement(this);
}

const char *IfcDistributionFlowElement::type() {
  return "IfcDistributionFlowElement";
}

Step::ClassType IfcDistributionFlowElement::getClassType() {
  return IfcDistributionFlowElement::s_type;
}

Step::ClassType IfcDistributionFlowElement::getType() const {
  return IfcDistributionFlowElement::s_type;
}

bool IfcDistributionFlowElement::isOfType(Step::ClassType t) {
  return IfcDistributionFlowElement::s_type == t ? true : IfcDistributionElement::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > &IfcDistributionFlowElement::getHasControlElements() {
  if (Step::BaseObject::inited()) {
    return m_hasControlElements;
  }
  else {
    m_hasControlElements.setUnset(true);
    return m_hasControlElements;
  }
}

void IfcDistributionFlowElement::setHasControlElements(const Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > &value) {
  m_hasControlElements = value;
}

void IfcDistributionFlowElement::release() {
  IfcDistributionElement::release();
}

bool IfcDistributionFlowElement::init() {
  bool status = IfcDistributionElement::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_hasControlElements.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasControlElements.insert(static_cast< IfcRelFlowControlElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionFlowElement::s_type = new Step::ClassType_class("IfcDistributionFlowElement");
IfcDistributionFlowElement_Factory::IfcDistributionFlowElement_Factory() {
}

IfcDistributionFlowElement_Factory::~IfcDistributionFlowElement_Factory() {
  clear(true);
}

void IfcDistributionFlowElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionFlowElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionFlowElement_Factory::end() {
  return m_idMap.end();
}

IfcDistributionFlowElement *IfcDistributionFlowElement_Factory::get(Step::StepId id) {
  IfcDistributionFlowElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDistributionFlowElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcDistributionFlowElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDistributionFlowElement * > (create(id));
  }
}

Step::BaseObject *IfcDistributionFlowElement_Factory::create(Step::StepId id) {
  IfcDistributionFlowElement *ret = new IfcDistributionFlowElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionFlowElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDistributionFlowElement *ret = new IfcDistributionFlowElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionFlowElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDistributionFlowElement *ret = new IfcDistributionFlowElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDistributionFlowElement *IfcDistributionFlowElement_Factory::generate() {
  return static_cast< IfcDistributionFlowElement * > (create(m_model->getNewId()));
}

IfcDistributionFlowElement *IfcDistributionFlowElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDistributionFlowElement * > (it->second);
  }
  else {
    return NULL;
  }
}

