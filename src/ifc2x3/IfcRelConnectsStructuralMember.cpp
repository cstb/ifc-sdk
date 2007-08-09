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
#include <ifc2x3/IfcRelConnectsStructuralMember.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/IfcStructuralConnection.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsStructuralMember::IfcRelConnectsStructuralMember(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingStructuralMember = NULL;
  m_relatedStructuralConnection = NULL;
  m_appliedCondition = NULL;
  m_additionalConditions = NULL;
  m_supportedLength = getUnset(m_supportedLength);
  m_conditionCoordinateSystem = NULL;
}


IfcRelConnectsStructuralMember::~IfcRelConnectsStructuralMember() {
}

bool IfcRelConnectsStructuralMember::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsStructuralMember(this);
}

const char *IfcRelConnectsStructuralMember::type() {
  return "IfcRelConnectsStructuralMember";
}

Step::ClassType IfcRelConnectsStructuralMember::getClassType() {
  return IfcRelConnectsStructuralMember::s_type;
}

Step::ClassType IfcRelConnectsStructuralMember::getType() const {
  return IfcRelConnectsStructuralMember::s_type;
}

bool IfcRelConnectsStructuralMember::isOfType(Step::ClassType t) {
  return IfcRelConnectsStructuralMember::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcStructuralMember *IfcRelConnectsStructuralMember::getRelatingStructuralMember() {
  if (Step::BaseObject::inited()) {
    return m_relatingStructuralMember.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralMember::setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value) {
  m_relatingStructuralMember = value;
}

IfcStructuralConnection *IfcRelConnectsStructuralMember::getRelatedStructuralConnection() {
  if (Step::BaseObject::inited()) {
    return m_relatedStructuralConnection.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralMember::setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value) {
  m_relatedStructuralConnection = value;
}

IfcBoundaryCondition *IfcRelConnectsStructuralMember::getAppliedCondition() {
  if (Step::BaseObject::inited()) {
    return m_appliedCondition.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralMember::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value) {
  m_appliedCondition = value;
}

IfcStructuralConnectionCondition *IfcRelConnectsStructuralMember::getAdditionalConditions() {
  if (Step::BaseObject::inited()) {
    return m_additionalConditions.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralMember::setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value) {
  m_additionalConditions = value;
}

IfcLengthMeasure IfcRelConnectsStructuralMember::getSupportedLength() {
  if (Step::BaseObject::inited()) {
    return m_supportedLength;
  }
  else {
    return getUnset(m_supportedLength);
  }
}

void IfcRelConnectsStructuralMember::setSupportedLength(IfcLengthMeasure value) {
  m_supportedLength = value;
}

IfcAxis2Placement3D *IfcRelConnectsStructuralMember::getConditionCoordinateSystem() {
  if (Step::BaseObject::inited()) {
    return m_conditionCoordinateSystem.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralMember::setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value) {
  m_conditionCoordinateSystem = value;
}

void IfcRelConnectsStructuralMember::release() {
  IfcRelConnects::release();
  m_relatingStructuralMember.release();
  m_relatedStructuralConnection.release();
  m_appliedCondition.release();
  m_additionalConditions.release();
  m_conditionCoordinateSystem.release();
}

bool IfcRelConnectsStructuralMember::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingStructuralMember = NULL;
  }
  else {
    m_relatingStructuralMember = static_cast< IfcStructuralMember * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedStructuralConnection = NULL;
  }
  else {
    m_relatedStructuralConnection = static_cast< IfcStructuralConnection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_appliedCondition = NULL;
  }
  else {
    m_appliedCondition = static_cast< IfcBoundaryCondition * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_additionalConditions = NULL;
  }
  else {
    m_additionalConditions = static_cast< IfcStructuralConnectionCondition * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_supportedLength = getUnset(m_supportedLength);
  }
  else {
    m_supportedLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_conditionCoordinateSystem = NULL;
  }
  else {
    m_conditionCoordinateSystem = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralMember::s_type = new Step::ClassType_class("IfcRelConnectsStructuralMember");
IfcRelConnectsStructuralMember_Factory::IfcRelConnectsStructuralMember_Factory() {
}

IfcRelConnectsStructuralMember_Factory::~IfcRelConnectsStructuralMember_Factory() {
  clear(true);
}

void IfcRelConnectsStructuralMember_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsStructuralMember_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsStructuralMember_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsStructuralMember *IfcRelConnectsStructuralMember_Factory::get(Step::StepId id) {
  IfcRelConnectsStructuralMember *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsStructuralMember * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsStructuralMember_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsStructuralMember * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsStructuralMember_Factory::create(Step::StepId id) {
  IfcRelConnectsStructuralMember *ret = new IfcRelConnectsStructuralMember(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsStructuralMember_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsStructuralMember *ret = new IfcRelConnectsStructuralMember(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsStructuralMember_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsStructuralMember *ret = new IfcRelConnectsStructuralMember(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsStructuralMember *IfcRelConnectsStructuralMember_Factory::generate() {
  return static_cast< IfcRelConnectsStructuralMember * > (create(m_model->getNewId()));
}

IfcRelConnectsStructuralMember *IfcRelConnectsStructuralMember_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsStructuralMember * > (it->second);
  }
  else {
    return NULL;
  }
}

