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
#include <ifc2x3/IfcLightSourcePositional.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLightSourcePositional::IfcLightSourcePositional(Step::SPFData *args) : IfcLightSource(args) {
  m_position = NULL;
  m_radius = getUnset(m_radius);
  m_constantAttenuation = getUnset(m_constantAttenuation);
  m_distanceAttenuation = getUnset(m_distanceAttenuation);
  m_quadricAttenuation = getUnset(m_quadricAttenuation);
}


IfcLightSourcePositional::~IfcLightSourcePositional() {
}

bool IfcLightSourcePositional::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightSourcePositional(this);
}

const char *IfcLightSourcePositional::type() {
  return "IfcLightSourcePositional";
}

Step::ClassType IfcLightSourcePositional::getClassType() {
  return IfcLightSourcePositional::s_type;
}

Step::ClassType IfcLightSourcePositional::getType() const {
  return IfcLightSourcePositional::s_type;
}

bool IfcLightSourcePositional::isOfType(Step::ClassType t) {
  return IfcLightSourcePositional::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcCartesianPoint *IfcLightSourcePositional::getPosition() {
  if (Step::BaseObject::inited()) {
    return m_position.get();
  }
  else {
    return NULL;
  }
}

void IfcLightSourcePositional::setPosition(const Step::RefPtr< IfcCartesianPoint > &value) {
  m_position = value;
}

IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius() {
  if (Step::BaseObject::inited()) {
    return m_radius;
  }
  else {
    return getUnset(m_radius);
  }
}

void IfcLightSourcePositional::setRadius(IfcPositiveLengthMeasure value) {
  m_radius = value;
}

IfcReal IfcLightSourcePositional::getConstantAttenuation() {
  if (Step::BaseObject::inited()) {
    return m_constantAttenuation;
  }
  else {
    return getUnset(m_constantAttenuation);
  }
}

void IfcLightSourcePositional::setConstantAttenuation(IfcReal value) {
  m_constantAttenuation = value;
}

IfcReal IfcLightSourcePositional::getDistanceAttenuation() {
  if (Step::BaseObject::inited()) {
    return m_distanceAttenuation;
  }
  else {
    return getUnset(m_distanceAttenuation);
  }
}

void IfcLightSourcePositional::setDistanceAttenuation(IfcReal value) {
  m_distanceAttenuation = value;
}

IfcReal IfcLightSourcePositional::getQuadricAttenuation() {
  if (Step::BaseObject::inited()) {
    return m_quadricAttenuation;
  }
  else {
    return getUnset(m_quadricAttenuation);
  }
}

void IfcLightSourcePositional::setQuadricAttenuation(IfcReal value) {
  m_quadricAttenuation = value;
}

void IfcLightSourcePositional::release() {
  IfcLightSource::release();
  m_position.release();
}

bool IfcLightSourcePositional::init() {
  bool status = IfcLightSource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_position = NULL;
  }
  else {
    m_position = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_radius = getUnset(m_radius);
  }
  else {
    m_radius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_constantAttenuation = getUnset(m_constantAttenuation);
  }
  else {
    m_constantAttenuation = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_distanceAttenuation = getUnset(m_distanceAttenuation);
  }
  else {
    m_distanceAttenuation = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_quadricAttenuation = getUnset(m_quadricAttenuation);
  }
  else {
    m_quadricAttenuation = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourcePositional::s_type = new Step::ClassType_class("IfcLightSourcePositional");
IfcLightSourcePositional_Factory::IfcLightSourcePositional_Factory() {
}

IfcLightSourcePositional_Factory::~IfcLightSourcePositional_Factory() {
  clear(true);
}

void IfcLightSourcePositional_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightSourcePositional_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightSourcePositional_Factory::end() {
  return m_idMap.end();
}

IfcLightSourcePositional *IfcLightSourcePositional_Factory::get(Step::StepId id) {
  IfcLightSourcePositional *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLightSourcePositional * > (it->second);
  }
  else {
    LOG_ERROR("IfcLightSourcePositional_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLightSourcePositional * > (create(id));
  }
}

Step::BaseObject *IfcLightSourcePositional_Factory::create(Step::StepId id) {
  IfcLightSourcePositional *ret = new IfcLightSourcePositional(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLightSourcePositional_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLightSourcePositional *ret = new IfcLightSourcePositional(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLightSourcePositional_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLightSourcePositional *ret = new IfcLightSourcePositional(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLightSourcePositional *IfcLightSourcePositional_Factory::generate() {
  return static_cast< IfcLightSourcePositional * > (create(m_model->getNewId()));
}

IfcLightSourcePositional *IfcLightSourcePositional_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLightSourcePositional * > (it->second);
  }
  else {
    return NULL;
  }
}

