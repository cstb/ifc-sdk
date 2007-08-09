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
#include <ifc2x3/IfcCurrencyRelationship.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurrencyRelationship::IfcCurrencyRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_relatingMonetaryUnit = NULL;
  m_relatedMonetaryUnit = NULL;
  m_exchangeRate = getUnset(m_exchangeRate);
  m_rateDateTime = NULL;
  m_rateSource = NULL;
}


IfcCurrencyRelationship::~IfcCurrencyRelationship() {
}

bool IfcCurrencyRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurrencyRelationship(this);
}

const char *IfcCurrencyRelationship::type() {
  return "IfcCurrencyRelationship";
}

Step::ClassType IfcCurrencyRelationship::getClassType() {
  return IfcCurrencyRelationship::s_type;
}

Step::ClassType IfcCurrencyRelationship::getType() const {
  return IfcCurrencyRelationship::s_type;
}

bool IfcCurrencyRelationship::isOfType(Step::ClassType t) {
  return IfcCurrencyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMonetaryUnit *IfcCurrencyRelationship::getRelatingMonetaryUnit() {
  if (Step::BaseObject::inited()) {
    return m_relatingMonetaryUnit.get();
  }
  else {
    return NULL;
  }
}

void IfcCurrencyRelationship::setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value) {
  m_relatingMonetaryUnit = value;
}

IfcMonetaryUnit *IfcCurrencyRelationship::getRelatedMonetaryUnit() {
  if (Step::BaseObject::inited()) {
    return m_relatedMonetaryUnit.get();
  }
  else {
    return NULL;
  }
}

void IfcCurrencyRelationship::setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value) {
  m_relatedMonetaryUnit = value;
}

IfcPositiveRatioMeasure IfcCurrencyRelationship::getExchangeRate() {
  if (Step::BaseObject::inited()) {
    return m_exchangeRate;
  }
  else {
    return getUnset(m_exchangeRate);
  }
}

void IfcCurrencyRelationship::setExchangeRate(IfcPositiveRatioMeasure value) {
  m_exchangeRate = value;
}

IfcDateAndTime *IfcCurrencyRelationship::getRateDateTime() {
  if (Step::BaseObject::inited()) {
    return m_rateDateTime.get();
  }
  else {
    return NULL;
  }
}

void IfcCurrencyRelationship::setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value) {
  m_rateDateTime = value;
}

IfcLibraryInformation *IfcCurrencyRelationship::getRateSource() {
  if (Step::BaseObject::inited()) {
    return m_rateSource.get();
  }
  else {
    return NULL;
  }
}

void IfcCurrencyRelationship::setRateSource(const Step::RefPtr< IfcLibraryInformation > &value) {
  m_rateSource = value;
}

void IfcCurrencyRelationship::release() {
  m_relatingMonetaryUnit.release();
  m_relatedMonetaryUnit.release();
  m_rateDateTime.release();
  m_rateSource.release();
}

bool IfcCurrencyRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingMonetaryUnit = NULL;
  }
  else {
    m_relatingMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedMonetaryUnit = NULL;
  }
  else {
    m_relatedMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_exchangeRate = getUnset(m_exchangeRate);
  }
  else {
    m_exchangeRate = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rateDateTime = NULL;
  }
  else {
    m_rateDateTime = static_cast< IfcDateAndTime * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rateSource = NULL;
  }
  else {
    m_rateSource = static_cast< IfcLibraryInformation * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurrencyRelationship::s_type = new Step::ClassType_class("IfcCurrencyRelationship");
IfcCurrencyRelationship_Factory::IfcCurrencyRelationship_Factory() {
}

IfcCurrencyRelationship_Factory::~IfcCurrencyRelationship_Factory() {
  clear(true);
}

void IfcCurrencyRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurrencyRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurrencyRelationship_Factory::end() {
  return m_idMap.end();
}

IfcCurrencyRelationship *IfcCurrencyRelationship_Factory::get(Step::StepId id) {
  IfcCurrencyRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurrencyRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurrencyRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurrencyRelationship * > (create(id));
  }
}

Step::BaseObject *IfcCurrencyRelationship_Factory::create(Step::StepId id) {
  IfcCurrencyRelationship *ret = new IfcCurrencyRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurrencyRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurrencyRelationship *ret = new IfcCurrencyRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurrencyRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurrencyRelationship *ret = new IfcCurrencyRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurrencyRelationship *IfcCurrencyRelationship_Factory::generate() {
  return static_cast< IfcCurrencyRelationship * > (create(m_model->getNewId()));
}

IfcCurrencyRelationship *IfcCurrencyRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurrencyRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

