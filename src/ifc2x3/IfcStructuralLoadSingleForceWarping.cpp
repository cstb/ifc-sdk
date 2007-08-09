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
#include <ifc2x3/IfcStructuralLoadSingleForceWarping.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadSingleForceWarping::IfcStructuralLoadSingleForceWarping(Step::SPFData *args) : IfcStructuralLoadSingleForce(args) {
  m_warpingMoment = getUnset(m_warpingMoment);
}


IfcStructuralLoadSingleForceWarping::~IfcStructuralLoadSingleForceWarping() {
}

bool IfcStructuralLoadSingleForceWarping::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleForceWarping(this);
}

const char *IfcStructuralLoadSingleForceWarping::type() {
  return "IfcStructuralLoadSingleForceWarping";
}

Step::ClassType IfcStructuralLoadSingleForceWarping::getClassType() {
  return IfcStructuralLoadSingleForceWarping::s_type;
}

Step::ClassType IfcStructuralLoadSingleForceWarping::getType() const {
  return IfcStructuralLoadSingleForceWarping::s_type;
}

bool IfcStructuralLoadSingleForceWarping::isOfType(Step::ClassType t) {
  return IfcStructuralLoadSingleForceWarping::s_type == t ? true : IfcStructuralLoadSingleForce::isOfType(t);
}

IfcWarpingMomentMeasure IfcStructuralLoadSingleForceWarping::getWarpingMoment() {
  if (Step::BaseObject::inited()) {
    return m_warpingMoment;
  }
  else {
    return getUnset(m_warpingMoment);
  }
}

void IfcStructuralLoadSingleForceWarping::setWarpingMoment(IfcWarpingMomentMeasure value) {
  m_warpingMoment = value;
}

void IfcStructuralLoadSingleForceWarping::release() {
  IfcStructuralLoadSingleForce::release();
}

bool IfcStructuralLoadSingleForceWarping::init() {
  bool status = IfcStructuralLoadSingleForce::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_warpingMoment = getUnset(m_warpingMoment);
  }
  else {
    m_warpingMoment = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleForceWarping::s_type = new Step::ClassType_class("IfcStructuralLoadSingleForceWarping");
IfcStructuralLoadSingleForceWarping_Factory::IfcStructuralLoadSingleForceWarping_Factory() {
}

IfcStructuralLoadSingleForceWarping_Factory::~IfcStructuralLoadSingleForceWarping_Factory() {
  clear(true);
}

void IfcStructuralLoadSingleForceWarping_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleForceWarping_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleForceWarping_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadSingleForceWarping *IfcStructuralLoadSingleForceWarping_Factory::get(Step::StepId id) {
  IfcStructuralLoadSingleForceWarping *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadSingleForceWarping * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadSingleForceWarping_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadSingleForceWarping * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadSingleForceWarping_Factory::create(Step::StepId id) {
  IfcStructuralLoadSingleForceWarping *ret = new IfcStructuralLoadSingleForceWarping(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleForceWarping_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadSingleForceWarping *ret = new IfcStructuralLoadSingleForceWarping(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleForceWarping_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadSingleForceWarping *ret = new IfcStructuralLoadSingleForceWarping(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadSingleForceWarping *IfcStructuralLoadSingleForceWarping_Factory::generate() {
  return static_cast< IfcStructuralLoadSingleForceWarping * > (create(m_model->getNewId()));
}

IfcStructuralLoadSingleForceWarping *IfcStructuralLoadSingleForceWarping_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadSingleForceWarping * > (it->second);
  }
  else {
    return NULL;
  }
}

