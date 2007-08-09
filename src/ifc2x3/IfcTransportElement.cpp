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
#include <ifc2x3/IfcTransportElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTransportElement::IfcTransportElement(Step::SPFData *args) : IfcElement(args) {
  m_operationType = IfcTransportElementTypeEnum_UNSET;
  m_capacityByWeight = getUnset(m_capacityByWeight);
  m_capacityByNumber = getUnset(m_capacityByNumber);
}


IfcTransportElement::~IfcTransportElement() {
}

bool IfcTransportElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTransportElement(this);
}

const char *IfcTransportElement::type() {
  return "IfcTransportElement";
}

Step::ClassType IfcTransportElement::getClassType() {
  return IfcTransportElement::s_type;
}

Step::ClassType IfcTransportElement::getType() const {
  return IfcTransportElement::s_type;
}

bool IfcTransportElement::isOfType(Step::ClassType t) {
  return IfcTransportElement::s_type == t ? true : IfcElement::isOfType(t);
}

IfcTransportElementTypeEnum IfcTransportElement::getOperationType() {
  if (Step::BaseObject::inited()) {
    return m_operationType;
  }
  else {
    return IfcTransportElementTypeEnum_UNSET;
  }
}

void IfcTransportElement::setOperationType(IfcTransportElementTypeEnum value) {
  m_operationType = value;
}

IfcMassMeasure IfcTransportElement::getCapacityByWeight() {
  if (Step::BaseObject::inited()) {
    return m_capacityByWeight;
  }
  else {
    return getUnset(m_capacityByWeight);
  }
}

void IfcTransportElement::setCapacityByWeight(IfcMassMeasure value) {
  m_capacityByWeight = value;
}

IfcCountMeasure IfcTransportElement::getCapacityByNumber() {
  if (Step::BaseObject::inited()) {
    return m_capacityByNumber;
  }
  else {
    return getUnset(m_capacityByNumber);
  }
}

void IfcTransportElement::setCapacityByNumber(IfcCountMeasure value) {
  m_capacityByNumber = value;
}

void IfcTransportElement::release() {
  IfcElement::release();
}

bool IfcTransportElement::init() {
  bool status = IfcElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_operationType = IfcTransportElementTypeEnum_UNSET;
  }
  else {
    if (arg == ".ELEVATOR.") {
      m_operationType = IfcTransportElementTypeEnum_ELEVATOR;
    }
    else if (arg == ".ESCALATOR.") {
      m_operationType = IfcTransportElementTypeEnum_ESCALATOR;
    }
    else if (arg == ".MOVINGWALKWAY.") {
      m_operationType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
    }
    else if (arg == ".USERDEFINED.") {
      m_operationType = IfcTransportElementTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_operationType = IfcTransportElementTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_capacityByWeight = getUnset(m_capacityByWeight);
  }
  else {
    m_capacityByWeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_capacityByNumber = getUnset(m_capacityByNumber);
  }
  else {
    m_capacityByNumber = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTransportElement::s_type = new Step::ClassType_class("IfcTransportElement");
IfcTransportElement_Factory::IfcTransportElement_Factory() {
}

IfcTransportElement_Factory::~IfcTransportElement_Factory() {
  clear(true);
}

void IfcTransportElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTransportElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTransportElement_Factory::end() {
  return m_idMap.end();
}

IfcTransportElement *IfcTransportElement_Factory::get(Step::StepId id) {
  IfcTransportElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTransportElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcTransportElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTransportElement * > (create(id));
  }
}

Step::BaseObject *IfcTransportElement_Factory::create(Step::StepId id) {
  IfcTransportElement *ret = new IfcTransportElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTransportElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTransportElement *ret = new IfcTransportElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTransportElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTransportElement *ret = new IfcTransportElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTransportElement *IfcTransportElement_Factory::generate() {
  return static_cast< IfcTransportElement * > (create(m_model->getNewId()));
}

IfcTransportElement *IfcTransportElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTransportElement * > (it->second);
  }
  else {
    return NULL;
  }
}

