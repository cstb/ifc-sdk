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
#include <ifc2x3/IfcStairFlight.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStairFlight::IfcStairFlight(Step::SPFData *args) : IfcBuildingElement(args) {
  m_numberOfRiser = getUnset(m_numberOfRiser);
  m_numberOfTreads = getUnset(m_numberOfTreads);
  m_riserHeight = getUnset(m_riserHeight);
  m_treadLength = getUnset(m_treadLength);
}


IfcStairFlight::~IfcStairFlight() {
}

bool IfcStairFlight::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStairFlight(this);
}

const char *IfcStairFlight::type() {
  return "IfcStairFlight";
}

Step::ClassType IfcStairFlight::getClassType() {
  return IfcStairFlight::s_type;
}

Step::ClassType IfcStairFlight::getType() const {
  return IfcStairFlight::s_type;
}

bool IfcStairFlight::isOfType(Step::ClassType t) {
  return IfcStairFlight::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

Integer IfcStairFlight::getNumberOfRiser() {
  if (Step::BaseObject::inited()) {
    return m_numberOfRiser;
  }
  else {
    return getUnset(m_numberOfRiser);
  }
}

void IfcStairFlight::setNumberOfRiser(Integer value) {
  m_numberOfRiser = value;
}

Integer IfcStairFlight::getNumberOfTreads() {
  if (Step::BaseObject::inited()) {
    return m_numberOfTreads;
  }
  else {
    return getUnset(m_numberOfTreads);
  }
}

void IfcStairFlight::setNumberOfTreads(Integer value) {
  m_numberOfTreads = value;
}

IfcPositiveLengthMeasure IfcStairFlight::getRiserHeight() {
  if (Step::BaseObject::inited()) {
    return m_riserHeight;
  }
  else {
    return getUnset(m_riserHeight);
  }
}

void IfcStairFlight::setRiserHeight(IfcPositiveLengthMeasure value) {
  m_riserHeight = value;
}

IfcPositiveLengthMeasure IfcStairFlight::getTreadLength() {
  if (Step::BaseObject::inited()) {
    return m_treadLength;
  }
  else {
    return getUnset(m_treadLength);
  }
}

void IfcStairFlight::setTreadLength(IfcPositiveLengthMeasure value) {
  m_treadLength = value;
}

void IfcStairFlight::release() {
  IfcBuildingElement::release();
}

bool IfcStairFlight::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_numberOfRiser = getUnset(m_numberOfRiser);
  }
  else {
    m_numberOfRiser = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_numberOfTreads = getUnset(m_numberOfTreads);
  }
  else {
    m_numberOfTreads = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_riserHeight = getUnset(m_riserHeight);
  }
  else {
    m_riserHeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_treadLength = getUnset(m_treadLength);
  }
  else {
    m_treadLength = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStairFlight::s_type = new Step::ClassType_class("IfcStairFlight");
IfcStairFlight_Factory::IfcStairFlight_Factory() {
}

IfcStairFlight_Factory::~IfcStairFlight_Factory() {
  clear(true);
}

void IfcStairFlight_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStairFlight_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStairFlight_Factory::end() {
  return m_idMap.end();
}

IfcStairFlight *IfcStairFlight_Factory::get(Step::StepId id) {
  IfcStairFlight *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStairFlight * > (it->second);
  }
  else {
    LOG_ERROR("IfcStairFlight_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStairFlight * > (create(id));
  }
}

Step::BaseObject *IfcStairFlight_Factory::create(Step::StepId id) {
  IfcStairFlight *ret = new IfcStairFlight(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStairFlight_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStairFlight *ret = new IfcStairFlight(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStairFlight_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStairFlight *ret = new IfcStairFlight(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStairFlight *IfcStairFlight_Factory::generate() {
  return static_cast< IfcStairFlight * > (create(m_model->getNewId()));
}

IfcStairFlight *IfcStairFlight_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStairFlight * > (it->second);
  }
  else {
    return NULL;
  }
}

