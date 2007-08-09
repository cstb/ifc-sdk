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
#include <ifc2x3/IfcStructuralLoadSingleForce.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadSingleForce::IfcStructuralLoadSingleForce(Step::SPFData *args) : IfcStructuralLoadStatic(args) {
  m_forceX = getUnset(m_forceX);
  m_forceY = getUnset(m_forceY);
  m_forceZ = getUnset(m_forceZ);
  m_momentX = getUnset(m_momentX);
  m_momentY = getUnset(m_momentY);
  m_momentZ = getUnset(m_momentZ);
}


IfcStructuralLoadSingleForce::~IfcStructuralLoadSingleForce() {
}

bool IfcStructuralLoadSingleForce::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleForce(this);
}

const char *IfcStructuralLoadSingleForce::type() {
  return "IfcStructuralLoadSingleForce";
}

Step::ClassType IfcStructuralLoadSingleForce::getClassType() {
  return IfcStructuralLoadSingleForce::s_type;
}

Step::ClassType IfcStructuralLoadSingleForce::getType() const {
  return IfcStructuralLoadSingleForce::s_type;
}

bool IfcStructuralLoadSingleForce::isOfType(Step::ClassType t) {
  return IfcStructuralLoadSingleForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceX() {
  if (Step::BaseObject::inited()) {
    return m_forceX;
  }
  else {
    return getUnset(m_forceX);
  }
}

void IfcStructuralLoadSingleForce::setForceX(IfcForceMeasure value) {
  m_forceX = value;
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceY() {
  if (Step::BaseObject::inited()) {
    return m_forceY;
  }
  else {
    return getUnset(m_forceY);
  }
}

void IfcStructuralLoadSingleForce::setForceY(IfcForceMeasure value) {
  m_forceY = value;
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceZ() {
  if (Step::BaseObject::inited()) {
    return m_forceZ;
  }
  else {
    return getUnset(m_forceZ);
  }
}

void IfcStructuralLoadSingleForce::setForceZ(IfcForceMeasure value) {
  m_forceZ = value;
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentX() {
  if (Step::BaseObject::inited()) {
    return m_momentX;
  }
  else {
    return getUnset(m_momentX);
  }
}

void IfcStructuralLoadSingleForce::setMomentX(IfcTorqueMeasure value) {
  m_momentX = value;
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentY() {
  if (Step::BaseObject::inited()) {
    return m_momentY;
  }
  else {
    return getUnset(m_momentY);
  }
}

void IfcStructuralLoadSingleForce::setMomentY(IfcTorqueMeasure value) {
  m_momentY = value;
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentZ() {
  if (Step::BaseObject::inited()) {
    return m_momentZ;
  }
  else {
    return getUnset(m_momentZ);
  }
}

void IfcStructuralLoadSingleForce::setMomentZ(IfcTorqueMeasure value) {
  m_momentZ = value;
}

void IfcStructuralLoadSingleForce::release() {
  IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadSingleForce::init() {
  bool status = IfcStructuralLoadStatic::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_forceX = getUnset(m_forceX);
  }
  else {
    m_forceX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_forceY = getUnset(m_forceY);
  }
  else {
    m_forceY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_forceZ = getUnset(m_forceZ);
  }
  else {
    m_forceZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_momentX = getUnset(m_momentX);
  }
  else {
    m_momentX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_momentY = getUnset(m_momentY);
  }
  else {
    m_momentY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_momentZ = getUnset(m_momentZ);
  }
  else {
    m_momentZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleForce::s_type = new Step::ClassType_class("IfcStructuralLoadSingleForce");
IfcStructuralLoadSingleForce_Factory::IfcStructuralLoadSingleForce_Factory() {
}

IfcStructuralLoadSingleForce_Factory::~IfcStructuralLoadSingleForce_Factory() {
  clear(true);
}

void IfcStructuralLoadSingleForce_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleForce_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleForce_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadSingleForce *IfcStructuralLoadSingleForce_Factory::get(Step::StepId id) {
  IfcStructuralLoadSingleForce *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadSingleForce * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadSingleForce_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadSingleForce * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadSingleForce_Factory::create(Step::StepId id) {
  IfcStructuralLoadSingleForce *ret = new IfcStructuralLoadSingleForce(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleForce_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadSingleForce *ret = new IfcStructuralLoadSingleForce(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleForce_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadSingleForce *ret = new IfcStructuralLoadSingleForce(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadSingleForce *IfcStructuralLoadSingleForce_Factory::generate() {
  return static_cast< IfcStructuralLoadSingleForce * > (create(m_model->getNewId()));
}

IfcStructuralLoadSingleForce *IfcStructuralLoadSingleForce_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadSingleForce * > (it->second);
  }
  else {
    return NULL;
  }
}

