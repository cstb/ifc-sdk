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
#include <ifc2x3/IfcLightSourceSpot.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLightSourceSpot::IfcLightSourceSpot(Step::SPFData *args) : IfcLightSourcePositional(args) {
  m_orientation = NULL;
  m_concentrationExponent = getUnset(m_concentrationExponent);
  m_spreadAngle = getUnset(m_spreadAngle);
  m_beamWidthAngle = getUnset(m_beamWidthAngle);
}


IfcLightSourceSpot::~IfcLightSourceSpot() {
}

bool IfcLightSourceSpot::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightSourceSpot(this);
}

const char *IfcLightSourceSpot::type() {
  return "IfcLightSourceSpot";
}

Step::ClassType IfcLightSourceSpot::getClassType() {
  return IfcLightSourceSpot::s_type;
}

Step::ClassType IfcLightSourceSpot::getType() const {
  return IfcLightSourceSpot::s_type;
}

bool IfcLightSourceSpot::isOfType(Step::ClassType t) {
  return IfcLightSourceSpot::s_type == t ? true : IfcLightSourcePositional::isOfType(t);
}

IfcDirection *IfcLightSourceSpot::getOrientation() {
  if (Step::BaseObject::inited()) {
    return m_orientation.get();
  }
  else {
    return NULL;
  }
}

void IfcLightSourceSpot::setOrientation(const Step::RefPtr< IfcDirection > &value) {
  m_orientation = value;
}

IfcReal IfcLightSourceSpot::getConcentrationExponent() {
  if (Step::BaseObject::inited()) {
    return m_concentrationExponent;
  }
  else {
    return getUnset(m_concentrationExponent);
  }
}

void IfcLightSourceSpot::setConcentrationExponent(IfcReal value) {
  m_concentrationExponent = value;
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getSpreadAngle() {
  if (Step::BaseObject::inited()) {
    return m_spreadAngle;
  }
  else {
    return getUnset(m_spreadAngle);
  }
}

void IfcLightSourceSpot::setSpreadAngle(IfcPositivePlaneAngleMeasure value) {
  m_spreadAngle = value;
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getBeamWidthAngle() {
  if (Step::BaseObject::inited()) {
    return m_beamWidthAngle;
  }
  else {
    return getUnset(m_beamWidthAngle);
  }
}

void IfcLightSourceSpot::setBeamWidthAngle(IfcPositivePlaneAngleMeasure value) {
  m_beamWidthAngle = value;
}

void IfcLightSourceSpot::release() {
  IfcLightSourcePositional::release();
  m_orientation.release();
}

bool IfcLightSourceSpot::init() {
  bool status = IfcLightSourcePositional::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_orientation = NULL;
  }
  else {
    m_orientation = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_concentrationExponent = getUnset(m_concentrationExponent);
  }
  else {
    m_concentrationExponent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_spreadAngle = getUnset(m_spreadAngle);
  }
  else {
    m_spreadAngle = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_beamWidthAngle = getUnset(m_beamWidthAngle);
  }
  else {
    m_beamWidthAngle = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceSpot::s_type = new Step::ClassType_class("IfcLightSourceSpot");
IfcLightSourceSpot_Factory::IfcLightSourceSpot_Factory() {
}

IfcLightSourceSpot_Factory::~IfcLightSourceSpot_Factory() {
  clear(true);
}

void IfcLightSourceSpot_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightSourceSpot_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightSourceSpot_Factory::end() {
  return m_idMap.end();
}

IfcLightSourceSpot *IfcLightSourceSpot_Factory::get(Step::StepId id) {
  IfcLightSourceSpot *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLightSourceSpot * > (it->second);
  }
  else {
    LOG_ERROR("IfcLightSourceSpot_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLightSourceSpot * > (create(id));
  }
}

Step::BaseObject *IfcLightSourceSpot_Factory::create(Step::StepId id) {
  IfcLightSourceSpot *ret = new IfcLightSourceSpot(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLightSourceSpot_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLightSourceSpot *ret = new IfcLightSourceSpot(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLightSourceSpot_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLightSourceSpot *ret = new IfcLightSourceSpot(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLightSourceSpot *IfcLightSourceSpot_Factory::generate() {
  return static_cast< IfcLightSourceSpot * > (create(m_model->getNewId()));
}

IfcLightSourceSpot *IfcLightSourceSpot_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLightSourceSpot * > (it->second);
  }
  else {
    return NULL;
  }
}

