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
#include <ifc2x3/IfcBoundaryNodeConditionWarping.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoundaryNodeConditionWarping::IfcBoundaryNodeConditionWarping(Step::SPFData *args) : IfcBoundaryNodeCondition(args) {
  m_warpingStiffness = getUnset(m_warpingStiffness);
}


IfcBoundaryNodeConditionWarping::~IfcBoundaryNodeConditionWarping() {
}

bool IfcBoundaryNodeConditionWarping::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoundaryNodeConditionWarping(this);
}

const char *IfcBoundaryNodeConditionWarping::type() {
  return "IfcBoundaryNodeConditionWarping";
}

Step::ClassType IfcBoundaryNodeConditionWarping::getClassType() {
  return IfcBoundaryNodeConditionWarping::s_type;
}

Step::ClassType IfcBoundaryNodeConditionWarping::getType() const {
  return IfcBoundaryNodeConditionWarping::s_type;
}

bool IfcBoundaryNodeConditionWarping::isOfType(Step::ClassType t) {
  return IfcBoundaryNodeConditionWarping::s_type == t ? true : IfcBoundaryNodeCondition::isOfType(t);
}

IfcWarpingMomentMeasure IfcBoundaryNodeConditionWarping::getWarpingStiffness() {
  if (Step::BaseObject::inited()) {
    return m_warpingStiffness;
  }
  else {
    return getUnset(m_warpingStiffness);
  }
}

void IfcBoundaryNodeConditionWarping::setWarpingStiffness(IfcWarpingMomentMeasure value) {
  m_warpingStiffness = value;
}

void IfcBoundaryNodeConditionWarping::release() {
  IfcBoundaryNodeCondition::release();
}

bool IfcBoundaryNodeConditionWarping::init() {
  bool status = IfcBoundaryNodeCondition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_warpingStiffness = getUnset(m_warpingStiffness);
  }
  else {
    m_warpingStiffness = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryNodeConditionWarping::s_type = new Step::ClassType_class("IfcBoundaryNodeConditionWarping");
IfcBoundaryNodeConditionWarping_Factory::IfcBoundaryNodeConditionWarping_Factory() {
}

IfcBoundaryNodeConditionWarping_Factory::~IfcBoundaryNodeConditionWarping_Factory() {
  clear(true);
}

void IfcBoundaryNodeConditionWarping_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryNodeConditionWarping_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryNodeConditionWarping_Factory::end() {
  return m_idMap.end();
}

IfcBoundaryNodeConditionWarping *IfcBoundaryNodeConditionWarping_Factory::get(Step::StepId id) {
  IfcBoundaryNodeConditionWarping *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoundaryNodeConditionWarping * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoundaryNodeConditionWarping_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoundaryNodeConditionWarping * > (create(id));
  }
}

Step::BaseObject *IfcBoundaryNodeConditionWarping_Factory::create(Step::StepId id) {
  IfcBoundaryNodeConditionWarping *ret = new IfcBoundaryNodeConditionWarping(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryNodeConditionWarping_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoundaryNodeConditionWarping *ret = new IfcBoundaryNodeConditionWarping(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryNodeConditionWarping_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoundaryNodeConditionWarping *ret = new IfcBoundaryNodeConditionWarping(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoundaryNodeConditionWarping *IfcBoundaryNodeConditionWarping_Factory::generate() {
  return static_cast< IfcBoundaryNodeConditionWarping * > (create(m_model->getNewId()));
}

IfcBoundaryNodeConditionWarping *IfcBoundaryNodeConditionWarping_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoundaryNodeConditionWarping * > (it->second);
  }
  else {
    return NULL;
  }
}

