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
#include <ifc2x3/IfcStructuralResultGroup.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralResultGroup::IfcStructuralResultGroup(Step::SPFData *args) : IfcGroup(args) {
  m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
  m_resultForLoadGroup = NULL;
  m_isLinear = getUnset(m_isLinear);
  m_resultGroupFor.setUnset(true);
}


IfcStructuralResultGroup::~IfcStructuralResultGroup() {
}

bool IfcStructuralResultGroup::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralResultGroup(this);
}

const char *IfcStructuralResultGroup::type() {
  return "IfcStructuralResultGroup";
}

Step::ClassType IfcStructuralResultGroup::getClassType() {
  return IfcStructuralResultGroup::s_type;
}

Step::ClassType IfcStructuralResultGroup::getType() const {
  return IfcStructuralResultGroup::s_type;
}

bool IfcStructuralResultGroup::isOfType(Step::ClassType t) {
  return IfcStructuralResultGroup::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcAnalysisTheoryTypeEnum IfcStructuralResultGroup::getTheoryType() {
  if (Step::BaseObject::inited()) {
    return m_theoryType;
  }
  else {
    return IfcAnalysisTheoryTypeEnum_UNSET;
  }
}

void IfcStructuralResultGroup::setTheoryType(IfcAnalysisTheoryTypeEnum value) {
  m_theoryType = value;
}

IfcStructuralLoadGroup *IfcStructuralResultGroup::getResultForLoadGroup() {
  if (Step::BaseObject::inited()) {
    return m_resultForLoadGroup.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralResultGroup::setResultForLoadGroup(const Step::RefPtr< IfcStructuralLoadGroup > &value) {
  m_resultForLoadGroup = value;
}

Bool IfcStructuralResultGroup::getIsLinear() {
  if (Step::BaseObject::inited()) {
    return m_isLinear;
  }
  else {
    return getUnset(m_isLinear);
  }
}

void IfcStructuralResultGroup::setIsLinear(Bool value) {
  m_isLinear = value;
}

Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > &IfcStructuralResultGroup::getResultGroupFor() {
  if (Step::BaseObject::inited()) {
    return m_resultGroupFor;
  }
  else {
    m_resultGroupFor.setUnset(true);
    return m_resultGroupFor;
  }
}

void IfcStructuralResultGroup::setResultGroupFor(const Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > &value) {
  m_resultGroupFor = value;
}

void IfcStructuralResultGroup::release() {
  IfcGroup::release();
  m_resultForLoadGroup.release();
}

bool IfcStructuralResultGroup::init() {
  bool status = IfcGroup::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
  }
  else {
    if (arg == ".FIRST_ORDER_THEORY.") {
      m_theoryType = IfcAnalysisTheoryTypeEnum_FIRST_ORDER_THEORY;
    }
    else if (arg == ".SECOND_ORDER_THEORY.") {
      m_theoryType = IfcAnalysisTheoryTypeEnum_SECOND_ORDER_THEORY;
    }
    else if (arg == ".THIRD_ORDER_THEORY.") {
      m_theoryType = IfcAnalysisTheoryTypeEnum_THIRD_ORDER_THEORY;
    }
    else if (arg == ".FULL_NONLINEAR_THEORY.") {
      m_theoryType = IfcAnalysisTheoryTypeEnum_FULL_NONLINEAR_THEORY;
    }
    else if (arg == ".USERDEFINED.") {
      m_theoryType = IfcAnalysisTheoryTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_theoryType = IfcAnalysisTheoryTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_resultForLoadGroup = NULL;
  }
  else {
    m_resultForLoadGroup = static_cast< IfcStructuralLoadGroup * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isLinear = getUnset(m_isLinear);
  }
  else {
    m_isLinear = Step::spfToBool(arg);
  }
  inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 8);
  if (inverses) {
    unsigned int i;
    m_resultGroupFor.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_resultGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralResultGroup::s_type = new Step::ClassType_class("IfcStructuralResultGroup");
IfcStructuralResultGroup_Factory::IfcStructuralResultGroup_Factory() {
}

IfcStructuralResultGroup_Factory::~IfcStructuralResultGroup_Factory() {
  clear(true);
}

void IfcStructuralResultGroup_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralResultGroup_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralResultGroup_Factory::end() {
  return m_idMap.end();
}

IfcStructuralResultGroup *IfcStructuralResultGroup_Factory::get(Step::StepId id) {
  IfcStructuralResultGroup *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralResultGroup * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralResultGroup_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralResultGroup * > (create(id));
  }
}

Step::BaseObject *IfcStructuralResultGroup_Factory::create(Step::StepId id) {
  IfcStructuralResultGroup *ret = new IfcStructuralResultGroup(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralResultGroup_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralResultGroup *ret = new IfcStructuralResultGroup(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralResultGroup_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralResultGroup *ret = new IfcStructuralResultGroup(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralResultGroup *IfcStructuralResultGroup_Factory::generate() {
  return static_cast< IfcStructuralResultGroup * > (create(m_model->getNewId()));
}

IfcStructuralResultGroup *IfcStructuralResultGroup_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralResultGroup * > (it->second);
  }
  else {
    return NULL;
  }
}

