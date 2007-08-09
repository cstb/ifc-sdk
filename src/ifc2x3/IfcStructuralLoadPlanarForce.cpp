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
#include <ifc2x3/IfcStructuralLoadPlanarForce.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadPlanarForce::IfcStructuralLoadPlanarForce(Step::SPFData *args) : IfcStructuralLoadStatic(args) {
  m_planarForceX = getUnset(m_planarForceX);
  m_planarForceY = getUnset(m_planarForceY);
  m_planarForceZ = getUnset(m_planarForceZ);
}


IfcStructuralLoadPlanarForce::~IfcStructuralLoadPlanarForce() {
}

bool IfcStructuralLoadPlanarForce::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadPlanarForce(this);
}

const char *IfcStructuralLoadPlanarForce::type() {
  return "IfcStructuralLoadPlanarForce";
}

Step::ClassType IfcStructuralLoadPlanarForce::getClassType() {
  return IfcStructuralLoadPlanarForce::s_type;
}

Step::ClassType IfcStructuralLoadPlanarForce::getType() const {
  return IfcStructuralLoadPlanarForce::s_type;
}

bool IfcStructuralLoadPlanarForce::isOfType(Step::ClassType t) {
  return IfcStructuralLoadPlanarForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceX() {
  if (Step::BaseObject::inited()) {
    return m_planarForceX;
  }
  else {
    return getUnset(m_planarForceX);
  }
}

void IfcStructuralLoadPlanarForce::setPlanarForceX(IfcPlanarForceMeasure value) {
  m_planarForceX = value;
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceY() {
  if (Step::BaseObject::inited()) {
    return m_planarForceY;
  }
  else {
    return getUnset(m_planarForceY);
  }
}

void IfcStructuralLoadPlanarForce::setPlanarForceY(IfcPlanarForceMeasure value) {
  m_planarForceY = value;
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceZ() {
  if (Step::BaseObject::inited()) {
    return m_planarForceZ;
  }
  else {
    return getUnset(m_planarForceZ);
  }
}

void IfcStructuralLoadPlanarForce::setPlanarForceZ(IfcPlanarForceMeasure value) {
  m_planarForceZ = value;
}

void IfcStructuralLoadPlanarForce::release() {
  IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadPlanarForce::init() {
  bool status = IfcStructuralLoadStatic::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_planarForceX = getUnset(m_planarForceX);
  }
  else {
    m_planarForceX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_planarForceY = getUnset(m_planarForceY);
  }
  else {
    m_planarForceY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_planarForceZ = getUnset(m_planarForceZ);
  }
  else {
    m_planarForceZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadPlanarForce::s_type = new Step::ClassType_class("IfcStructuralLoadPlanarForce");
IfcStructuralLoadPlanarForce_Factory::IfcStructuralLoadPlanarForce_Factory() {
}

IfcStructuralLoadPlanarForce_Factory::~IfcStructuralLoadPlanarForce_Factory() {
  clear(true);
}

void IfcStructuralLoadPlanarForce_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadPlanarForce_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadPlanarForce_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadPlanarForce *IfcStructuralLoadPlanarForce_Factory::get(Step::StepId id) {
  IfcStructuralLoadPlanarForce *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadPlanarForce * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadPlanarForce_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadPlanarForce * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadPlanarForce_Factory::create(Step::StepId id) {
  IfcStructuralLoadPlanarForce *ret = new IfcStructuralLoadPlanarForce(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadPlanarForce_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadPlanarForce *ret = new IfcStructuralLoadPlanarForce(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadPlanarForce_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadPlanarForce *ret = new IfcStructuralLoadPlanarForce(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadPlanarForce *IfcStructuralLoadPlanarForce_Factory::generate() {
  return static_cast< IfcStructuralLoadPlanarForce * > (create(m_model->getNewId()));
}

IfcStructuralLoadPlanarForce *IfcStructuralLoadPlanarForce_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadPlanarForce * > (it->second);
  }
  else {
    return NULL;
  }
}

