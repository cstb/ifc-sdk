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
#include <ifc2x3/IfcProductsOfCombustionProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProductsOfCombustionProperties::IfcProductsOfCombustionProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_specificHeatCapacity = getUnset(m_specificHeatCapacity);
  m_n20Content = getUnset(m_n20Content);
  m_cOContent = getUnset(m_cOContent);
  m_cO2Content = getUnset(m_cO2Content);
}


IfcProductsOfCombustionProperties::~IfcProductsOfCombustionProperties() {
}

bool IfcProductsOfCombustionProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProductsOfCombustionProperties(this);
}

const char *IfcProductsOfCombustionProperties::type() {
  return "IfcProductsOfCombustionProperties";
}

Step::ClassType IfcProductsOfCombustionProperties::getClassType() {
  return IfcProductsOfCombustionProperties::s_type;
}

Step::ClassType IfcProductsOfCombustionProperties::getType() const {
  return IfcProductsOfCombustionProperties::s_type;
}

bool IfcProductsOfCombustionProperties::isOfType(Step::ClassType t) {
  return IfcProductsOfCombustionProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcSpecificHeatCapacityMeasure IfcProductsOfCombustionProperties::getSpecificHeatCapacity() {
  if (Step::BaseObject::inited()) {
    return m_specificHeatCapacity;
  }
  else {
    return getUnset(m_specificHeatCapacity);
  }
}

void IfcProductsOfCombustionProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value) {
  m_specificHeatCapacity = value;
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getN20Content() {
  if (Step::BaseObject::inited()) {
    return m_n20Content;
  }
  else {
    return getUnset(m_n20Content);
  }
}

void IfcProductsOfCombustionProperties::setN20Content(IfcPositiveRatioMeasure value) {
  m_n20Content = value;
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCOContent() {
  if (Step::BaseObject::inited()) {
    return m_cOContent;
  }
  else {
    return getUnset(m_cOContent);
  }
}

void IfcProductsOfCombustionProperties::setCOContent(IfcPositiveRatioMeasure value) {
  m_cOContent = value;
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCO2Content() {
  if (Step::BaseObject::inited()) {
    return m_cO2Content;
  }
  else {
    return getUnset(m_cO2Content);
  }
}

void IfcProductsOfCombustionProperties::setCO2Content(IfcPositiveRatioMeasure value) {
  m_cO2Content = value;
}

void IfcProductsOfCombustionProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcProductsOfCombustionProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_specificHeatCapacity = getUnset(m_specificHeatCapacity);
  }
  else {
    m_specificHeatCapacity = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_n20Content = getUnset(m_n20Content);
  }
  else {
    m_n20Content = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_cOContent = getUnset(m_cOContent);
  }
  else {
    m_cOContent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_cO2Content = getUnset(m_cO2Content);
  }
  else {
    m_cO2Content = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProductsOfCombustionProperties::s_type = new Step::ClassType_class("IfcProductsOfCombustionProperties");
IfcProductsOfCombustionProperties_Factory::IfcProductsOfCombustionProperties_Factory() {
}

IfcProductsOfCombustionProperties_Factory::~IfcProductsOfCombustionProperties_Factory() {
  clear(true);
}

void IfcProductsOfCombustionProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProductsOfCombustionProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProductsOfCombustionProperties_Factory::end() {
  return m_idMap.end();
}

IfcProductsOfCombustionProperties *IfcProductsOfCombustionProperties_Factory::get(Step::StepId id) {
  IfcProductsOfCombustionProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProductsOfCombustionProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcProductsOfCombustionProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProductsOfCombustionProperties * > (create(id));
  }
}

Step::BaseObject *IfcProductsOfCombustionProperties_Factory::create(Step::StepId id) {
  IfcProductsOfCombustionProperties *ret = new IfcProductsOfCombustionProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProductsOfCombustionProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProductsOfCombustionProperties *ret = new IfcProductsOfCombustionProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProductsOfCombustionProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProductsOfCombustionProperties *ret = new IfcProductsOfCombustionProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProductsOfCombustionProperties *IfcProductsOfCombustionProperties_Factory::generate() {
  return static_cast< IfcProductsOfCombustionProperties * > (create(m_model->getNewId()));
}

IfcProductsOfCombustionProperties *IfcProductsOfCombustionProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProductsOfCombustionProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

