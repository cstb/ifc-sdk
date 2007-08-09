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
#include <ifc2x3/IfcRelaxation.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelaxation::IfcRelaxation(Step::SPFData *args) : Step::BaseObject(args) {
  m_relaxationValue = getUnset(m_relaxationValue);
  m_initialStress = getUnset(m_initialStress);
}


IfcRelaxation::~IfcRelaxation() {
}

bool IfcRelaxation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelaxation(this);
}

const char *IfcRelaxation::type() {
  return "IfcRelaxation";
}

Step::ClassType IfcRelaxation::getClassType() {
  return IfcRelaxation::s_type;
}

Step::ClassType IfcRelaxation::getType() const {
  return IfcRelaxation::s_type;
}

bool IfcRelaxation::isOfType(Step::ClassType t) {
  return IfcRelaxation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcNormalisedRatioMeasure IfcRelaxation::getRelaxationValue() {
  if (Step::BaseObject::inited()) {
    return m_relaxationValue;
  }
  else {
    return getUnset(m_relaxationValue);
  }
}

void IfcRelaxation::setRelaxationValue(IfcNormalisedRatioMeasure value) {
  m_relaxationValue = value;
}

IfcNormalisedRatioMeasure IfcRelaxation::getInitialStress() {
  if (Step::BaseObject::inited()) {
    return m_initialStress;
  }
  else {
    return getUnset(m_initialStress);
  }
}

void IfcRelaxation::setInitialStress(IfcNormalisedRatioMeasure value) {
  m_initialStress = value;
}

void IfcRelaxation::release() {
}

bool IfcRelaxation::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relaxationValue = getUnset(m_relaxationValue);
  }
  else {
    m_relaxationValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_initialStress = getUnset(m_initialStress);
  }
  else {
    m_initialStress = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelaxation::s_type = new Step::ClassType_class("IfcRelaxation");
IfcRelaxation_Factory::IfcRelaxation_Factory() {
}

IfcRelaxation_Factory::~IfcRelaxation_Factory() {
  clear(true);
}

void IfcRelaxation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelaxation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelaxation_Factory::end() {
  return m_idMap.end();
}

IfcRelaxation *IfcRelaxation_Factory::get(Step::StepId id) {
  IfcRelaxation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelaxation * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelaxation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelaxation * > (create(id));
  }
}

Step::BaseObject *IfcRelaxation_Factory::create(Step::StepId id) {
  IfcRelaxation *ret = new IfcRelaxation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelaxation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelaxation *ret = new IfcRelaxation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelaxation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelaxation *ret = new IfcRelaxation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelaxation *IfcRelaxation_Factory::generate() {
  return static_cast< IfcRelaxation * > (create(m_model->getNewId()));
}

IfcRelaxation *IfcRelaxation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelaxation * > (it->second);
  }
  else {
    return NULL;
  }
}

