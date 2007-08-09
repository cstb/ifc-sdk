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
#include <ifc2x3/IfcStructuralLoadLinearForce.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadLinearForce::IfcStructuralLoadLinearForce(Step::SPFData *args) : IfcStructuralLoadStatic(args) {
  m_linearForceX = getUnset(m_linearForceX);
  m_linearForceY = getUnset(m_linearForceY);
  m_linearForceZ = getUnset(m_linearForceZ);
  m_linearMomentX = getUnset(m_linearMomentX);
  m_linearMomentY = getUnset(m_linearMomentY);
  m_linearMomentZ = getUnset(m_linearMomentZ);
}


IfcStructuralLoadLinearForce::~IfcStructuralLoadLinearForce() {
}

bool IfcStructuralLoadLinearForce::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadLinearForce(this);
}

const char *IfcStructuralLoadLinearForce::type() {
  return "IfcStructuralLoadLinearForce";
}

Step::ClassType IfcStructuralLoadLinearForce::getClassType() {
  return IfcStructuralLoadLinearForce::s_type;
}

Step::ClassType IfcStructuralLoadLinearForce::getType() const {
  return IfcStructuralLoadLinearForce::s_type;
}

bool IfcStructuralLoadLinearForce::isOfType(Step::ClassType t) {
  return IfcStructuralLoadLinearForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceX() {
  if (Step::BaseObject::inited()) {
    return m_linearForceX;
  }
  else {
    return getUnset(m_linearForceX);
  }
}

void IfcStructuralLoadLinearForce::setLinearForceX(IfcLinearForceMeasure value) {
  m_linearForceX = value;
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceY() {
  if (Step::BaseObject::inited()) {
    return m_linearForceY;
  }
  else {
    return getUnset(m_linearForceY);
  }
}

void IfcStructuralLoadLinearForce::setLinearForceY(IfcLinearForceMeasure value) {
  m_linearForceY = value;
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceZ() {
  if (Step::BaseObject::inited()) {
    return m_linearForceZ;
  }
  else {
    return getUnset(m_linearForceZ);
  }
}

void IfcStructuralLoadLinearForce::setLinearForceZ(IfcLinearForceMeasure value) {
  m_linearForceZ = value;
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentX() {
  if (Step::BaseObject::inited()) {
    return m_linearMomentX;
  }
  else {
    return getUnset(m_linearMomentX);
  }
}

void IfcStructuralLoadLinearForce::setLinearMomentX(IfcLinearMomentMeasure value) {
  m_linearMomentX = value;
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentY() {
  if (Step::BaseObject::inited()) {
    return m_linearMomentY;
  }
  else {
    return getUnset(m_linearMomentY);
  }
}

void IfcStructuralLoadLinearForce::setLinearMomentY(IfcLinearMomentMeasure value) {
  m_linearMomentY = value;
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentZ() {
  if (Step::BaseObject::inited()) {
    return m_linearMomentZ;
  }
  else {
    return getUnset(m_linearMomentZ);
  }
}

void IfcStructuralLoadLinearForce::setLinearMomentZ(IfcLinearMomentMeasure value) {
  m_linearMomentZ = value;
}

void IfcStructuralLoadLinearForce::release() {
  IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadLinearForce::init() {
  bool status = IfcStructuralLoadStatic::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearForceX = getUnset(m_linearForceX);
  }
  else {
    m_linearForceX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearForceY = getUnset(m_linearForceY);
  }
  else {
    m_linearForceY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearForceZ = getUnset(m_linearForceZ);
  }
  else {
    m_linearForceZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearMomentX = getUnset(m_linearMomentX);
  }
  else {
    m_linearMomentX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearMomentY = getUnset(m_linearMomentY);
  }
  else {
    m_linearMomentY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearMomentZ = getUnset(m_linearMomentZ);
  }
  else {
    m_linearMomentZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadLinearForce::s_type = new Step::ClassType_class("IfcStructuralLoadLinearForce");
IfcStructuralLoadLinearForce_Factory::IfcStructuralLoadLinearForce_Factory() {
}

IfcStructuralLoadLinearForce_Factory::~IfcStructuralLoadLinearForce_Factory() {
  clear(true);
}

void IfcStructuralLoadLinearForce_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadLinearForce_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadLinearForce_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadLinearForce *IfcStructuralLoadLinearForce_Factory::get(Step::StepId id) {
  IfcStructuralLoadLinearForce *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadLinearForce * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadLinearForce_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadLinearForce * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadLinearForce_Factory::create(Step::StepId id) {
  IfcStructuralLoadLinearForce *ret = new IfcStructuralLoadLinearForce(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadLinearForce_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadLinearForce *ret = new IfcStructuralLoadLinearForce(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadLinearForce_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadLinearForce *ret = new IfcStructuralLoadLinearForce(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadLinearForce *IfcStructuralLoadLinearForce_Factory::generate() {
  return static_cast< IfcStructuralLoadLinearForce * > (create(m_model->getNewId()));
}

IfcStructuralLoadLinearForce *IfcStructuralLoadLinearForce_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadLinearForce * > (it->second);
  }
  else {
    return NULL;
  }
}

