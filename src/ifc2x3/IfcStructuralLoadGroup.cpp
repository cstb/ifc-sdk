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
#include <ifc2x3/IfcStructuralLoadGroup.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadGroup::IfcStructuralLoadGroup(Step::SPFData *args) : IfcGroup(args) {
  m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
  m_actionType = IfcActionTypeEnum_UNSET;
  m_actionSource = IfcActionSourceTypeEnum_UNSET;
  m_coefficient = getUnset(m_coefficient);
  m_purpose = getUnset(m_purpose);
  m_sourceOfResultGroup.setUnset(true);
  m_loadGroupFor.setUnset(true);
}


IfcStructuralLoadGroup::~IfcStructuralLoadGroup() {
}

bool IfcStructuralLoadGroup::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadGroup(this);
}

const char *IfcStructuralLoadGroup::type() {
  return "IfcStructuralLoadGroup";
}

Step::ClassType IfcStructuralLoadGroup::getClassType() {
  return IfcStructuralLoadGroup::s_type;
}

Step::ClassType IfcStructuralLoadGroup::getType() const {
  return IfcStructuralLoadGroup::s_type;
}

bool IfcStructuralLoadGroup::isOfType(Step::ClassType t) {
  return IfcStructuralLoadGroup::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcLoadGroupTypeEnum IfcStructuralLoadGroup::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcLoadGroupTypeEnum_UNSET;
  }
}

void IfcStructuralLoadGroup::setPredefinedType(IfcLoadGroupTypeEnum value) {
  m_predefinedType = value;
}

IfcActionTypeEnum IfcStructuralLoadGroup::getActionType() {
  if (Step::BaseObject::inited()) {
    return m_actionType;
  }
  else {
    return IfcActionTypeEnum_UNSET;
  }
}

void IfcStructuralLoadGroup::setActionType(IfcActionTypeEnum value) {
  m_actionType = value;
}

IfcActionSourceTypeEnum IfcStructuralLoadGroup::getActionSource() {
  if (Step::BaseObject::inited()) {
    return m_actionSource;
  }
  else {
    return IfcActionSourceTypeEnum_UNSET;
  }
}

void IfcStructuralLoadGroup::setActionSource(IfcActionSourceTypeEnum value) {
  m_actionSource = value;
}

IfcPositiveRatioMeasure IfcStructuralLoadGroup::getCoefficient() {
  if (Step::BaseObject::inited()) {
    return m_coefficient;
  }
  else {
    return getUnset(m_coefficient);
  }
}

void IfcStructuralLoadGroup::setCoefficient(IfcPositiveRatioMeasure value) {
  m_coefficient = value;
}

IfcLabel IfcStructuralLoadGroup::getPurpose() {
  if (Step::BaseObject::inited()) {
    return m_purpose;
  }
  else {
    return getUnset(m_purpose);
  }
}

void IfcStructuralLoadGroup::setPurpose(const IfcLabel &value) {
  m_purpose = value;
}

Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &IfcStructuralLoadGroup::getSourceOfResultGroup() {
  if (Step::BaseObject::inited()) {
    return m_sourceOfResultGroup;
  }
  else {
    m_sourceOfResultGroup.setUnset(true);
    return m_sourceOfResultGroup;
  }
}

void IfcStructuralLoadGroup::setSourceOfResultGroup(const Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &value) {
  m_sourceOfResultGroup = value;
}

Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > &IfcStructuralLoadGroup::getLoadGroupFor() {
  if (Step::BaseObject::inited()) {
    return m_loadGroupFor;
  }
  else {
    m_loadGroupFor.setUnset(true);
    return m_loadGroupFor;
  }
}

void IfcStructuralLoadGroup::setLoadGroupFor(const Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > &value) {
  m_loadGroupFor = value;
}

void IfcStructuralLoadGroup::release() {
  IfcGroup::release();
}

bool IfcStructuralLoadGroup::init() {
  bool status = IfcGroup::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
  }
  else {
    if (arg == ".LOAD_GROUP.") {
      m_predefinedType = IfcLoadGroupTypeEnum_LOAD_GROUP;
    }
    else if (arg == ".LOAD_CASE.") {
      m_predefinedType = IfcLoadGroupTypeEnum_LOAD_CASE;
    }
    else if (arg == ".LOAD_COMBINATION_GROUP.") {
      m_predefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION_GROUP;
    }
    else if (arg == ".LOAD_COMBINATION.") {
      m_predefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcLoadGroupTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcLoadGroupTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actionType = IfcActionTypeEnum_UNSET;
  }
  else {
    if (arg == ".PERMANENT_G.") {
      m_actionType = IfcActionTypeEnum_PERMANENT_G;
    }
    else if (arg == ".VARIABLE_Q.") {
      m_actionType = IfcActionTypeEnum_VARIABLE_Q;
    }
    else if (arg == ".EXTRAORDINARY_A.") {
      m_actionType = IfcActionTypeEnum_EXTRAORDINARY_A;
    }
    else if (arg == ".USERDEFINED.") {
      m_actionType = IfcActionTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_actionType = IfcActionTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actionSource = IfcActionSourceTypeEnum_UNSET;
  }
  else {
    if (arg == ".DEAD_LOAD_G.") {
      m_actionSource = IfcActionSourceTypeEnum_DEAD_LOAD_G;
    }
    else if (arg == ".COMPLETION_G1.") {
      m_actionSource = IfcActionSourceTypeEnum_COMPLETION_G1;
    }
    else if (arg == ".LIVE_LOAD_Q.") {
      m_actionSource = IfcActionSourceTypeEnum_LIVE_LOAD_Q;
    }
    else if (arg == ".SNOW_S.") {
      m_actionSource = IfcActionSourceTypeEnum_SNOW_S;
    }
    else if (arg == ".WIND_W.") {
      m_actionSource = IfcActionSourceTypeEnum_WIND_W;
    }
    else if (arg == ".PRESTRESSING_P.") {
      m_actionSource = IfcActionSourceTypeEnum_PRESTRESSING_P;
    }
    else if (arg == ".SETTLEMENT_U.") {
      m_actionSource = IfcActionSourceTypeEnum_SETTLEMENT_U;
    }
    else if (arg == ".TEMPERATURE_T.") {
      m_actionSource = IfcActionSourceTypeEnum_TEMPERATURE_T;
    }
    else if (arg == ".EARTHQUAKE_E.") {
      m_actionSource = IfcActionSourceTypeEnum_EARTHQUAKE_E;
    }
    else if (arg == ".FIRE.") {
      m_actionSource = IfcActionSourceTypeEnum_FIRE;
    }
    else if (arg == ".IMPULSE.") {
      m_actionSource = IfcActionSourceTypeEnum_IMPULSE;
    }
    else if (arg == ".IMPACT.") {
      m_actionSource = IfcActionSourceTypeEnum_IMPACT;
    }
    else if (arg == ".TRANSPORT.") {
      m_actionSource = IfcActionSourceTypeEnum_TRANSPORT;
    }
    else if (arg == ".ERECTION.") {
      m_actionSource = IfcActionSourceTypeEnum_ERECTION;
    }
    else if (arg == ".PROPPING.") {
      m_actionSource = IfcActionSourceTypeEnum_PROPPING;
    }
    else if (arg == ".SYSTEM_IMPERFECTION.") {
      m_actionSource = IfcActionSourceTypeEnum_SYSTEM_IMPERFECTION;
    }
    else if (arg == ".SHRINKAGE.") {
      m_actionSource = IfcActionSourceTypeEnum_SHRINKAGE;
    }
    else if (arg == ".CREEP.") {
      m_actionSource = IfcActionSourceTypeEnum_CREEP;
    }
    else if (arg == ".LACK_OF_FIT.") {
      m_actionSource = IfcActionSourceTypeEnum_LACK_OF_FIT;
    }
    else if (arg == ".BUOYANCY.") {
      m_actionSource = IfcActionSourceTypeEnum_BUOYANCY;
    }
    else if (arg == ".ICE.") {
      m_actionSource = IfcActionSourceTypeEnum_ICE;
    }
    else if (arg == ".CURRENT.") {
      m_actionSource = IfcActionSourceTypeEnum_CURRENT;
    }
    else if (arg == ".WAVE.") {
      m_actionSource = IfcActionSourceTypeEnum_WAVE;
    }
    else if (arg == ".RAIN.") {
      m_actionSource = IfcActionSourceTypeEnum_RAIN;
    }
    else if (arg == ".BRAKES.") {
      m_actionSource = IfcActionSourceTypeEnum_BRAKES;
    }
    else if (arg == ".USERDEFINED.") {
      m_actionSource = IfcActionSourceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_actionSource = IfcActionSourceTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_coefficient = getUnset(m_coefficient);
  }
  else {
    m_coefficient = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_purpose = getUnset(m_purpose);
  }
  else {
    m_purpose = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcStructuralResultGroup::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_sourceOfResultGroup.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_sourceOfResultGroup.insert(static_cast< IfcStructuralResultGroup * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 7);
  if (inverses) {
    unsigned int i;
    m_loadGroupFor.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_loadGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadGroup::s_type = new Step::ClassType_class("IfcStructuralLoadGroup");
IfcStructuralLoadGroup_Factory::IfcStructuralLoadGroup_Factory() {
}

IfcStructuralLoadGroup_Factory::~IfcStructuralLoadGroup_Factory() {
  clear(true);
}

void IfcStructuralLoadGroup_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadGroup_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadGroup_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadGroup *IfcStructuralLoadGroup_Factory::get(Step::StepId id) {
  IfcStructuralLoadGroup *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadGroup * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadGroup_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadGroup * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadGroup_Factory::create(Step::StepId id) {
  IfcStructuralLoadGroup *ret = new IfcStructuralLoadGroup(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadGroup_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadGroup *ret = new IfcStructuralLoadGroup(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadGroup_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadGroup *ret = new IfcStructuralLoadGroup(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadGroup *IfcStructuralLoadGroup_Factory::generate() {
  return static_cast< IfcStructuralLoadGroup * > (create(m_model->getNewId()));
}

IfcStructuralLoadGroup *IfcStructuralLoadGroup_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadGroup * > (it->second);
  }
  else {
    return NULL;
  }
}

