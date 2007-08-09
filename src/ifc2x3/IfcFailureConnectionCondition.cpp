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
#include <ifc2x3/IfcFailureConnectionCondition.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFailureConnectionCondition::IfcFailureConnectionCondition(Step::SPFData *args) : IfcStructuralConnectionCondition(args) {
  m_tensionFailureX = getUnset(m_tensionFailureX);
  m_tensionFailureY = getUnset(m_tensionFailureY);
  m_tensionFailureZ = getUnset(m_tensionFailureZ);
  m_compressionFailureX = getUnset(m_compressionFailureX);
  m_compressionFailureY = getUnset(m_compressionFailureY);
  m_compressionFailureZ = getUnset(m_compressionFailureZ);
}


IfcFailureConnectionCondition::~IfcFailureConnectionCondition() {
}

bool IfcFailureConnectionCondition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFailureConnectionCondition(this);
}

const char *IfcFailureConnectionCondition::type() {
  return "IfcFailureConnectionCondition";
}

Step::ClassType IfcFailureConnectionCondition::getClassType() {
  return IfcFailureConnectionCondition::s_type;
}

Step::ClassType IfcFailureConnectionCondition::getType() const {
  return IfcFailureConnectionCondition::s_type;
}

bool IfcFailureConnectionCondition::isOfType(Step::ClassType t) {
  return IfcFailureConnectionCondition::s_type == t ? true : IfcStructuralConnectionCondition::isOfType(t);
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureX() {
  if (Step::BaseObject::inited()) {
    return m_tensionFailureX;
  }
  else {
    return getUnset(m_tensionFailureX);
  }
}

void IfcFailureConnectionCondition::setTensionFailureX(IfcForceMeasure value) {
  m_tensionFailureX = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureY() {
  if (Step::BaseObject::inited()) {
    return m_tensionFailureY;
  }
  else {
    return getUnset(m_tensionFailureY);
  }
}

void IfcFailureConnectionCondition::setTensionFailureY(IfcForceMeasure value) {
  m_tensionFailureY = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureZ() {
  if (Step::BaseObject::inited()) {
    return m_tensionFailureZ;
  }
  else {
    return getUnset(m_tensionFailureZ);
  }
}

void IfcFailureConnectionCondition::setTensionFailureZ(IfcForceMeasure value) {
  m_tensionFailureZ = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureX() {
  if (Step::BaseObject::inited()) {
    return m_compressionFailureX;
  }
  else {
    return getUnset(m_compressionFailureX);
  }
}

void IfcFailureConnectionCondition::setCompressionFailureX(IfcForceMeasure value) {
  m_compressionFailureX = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureY() {
  if (Step::BaseObject::inited()) {
    return m_compressionFailureY;
  }
  else {
    return getUnset(m_compressionFailureY);
  }
}

void IfcFailureConnectionCondition::setCompressionFailureY(IfcForceMeasure value) {
  m_compressionFailureY = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureZ() {
  if (Step::BaseObject::inited()) {
    return m_compressionFailureZ;
  }
  else {
    return getUnset(m_compressionFailureZ);
  }
}

void IfcFailureConnectionCondition::setCompressionFailureZ(IfcForceMeasure value) {
  m_compressionFailureZ = value;
}

void IfcFailureConnectionCondition::release() {
  IfcStructuralConnectionCondition::release();
}

bool IfcFailureConnectionCondition::init() {
  bool status = IfcStructuralConnectionCondition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tensionFailureX = getUnset(m_tensionFailureX);
  }
  else {
    m_tensionFailureX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tensionFailureY = getUnset(m_tensionFailureY);
  }
  else {
    m_tensionFailureY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tensionFailureZ = getUnset(m_tensionFailureZ);
  }
  else {
    m_tensionFailureZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_compressionFailureX = getUnset(m_compressionFailureX);
  }
  else {
    m_compressionFailureX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_compressionFailureY = getUnset(m_compressionFailureY);
  }
  else {
    m_compressionFailureY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_compressionFailureZ = getUnset(m_compressionFailureZ);
  }
  else {
    m_compressionFailureZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFailureConnectionCondition::s_type = new Step::ClassType_class("IfcFailureConnectionCondition");
IfcFailureConnectionCondition_Factory::IfcFailureConnectionCondition_Factory() {
}

IfcFailureConnectionCondition_Factory::~IfcFailureConnectionCondition_Factory() {
  clear(true);
}

void IfcFailureConnectionCondition_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFailureConnectionCondition_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFailureConnectionCondition_Factory::end() {
  return m_idMap.end();
}

IfcFailureConnectionCondition *IfcFailureConnectionCondition_Factory::get(Step::StepId id) {
  IfcFailureConnectionCondition *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFailureConnectionCondition * > (it->second);
  }
  else {
    LOG_ERROR("IfcFailureConnectionCondition_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFailureConnectionCondition * > (create(id));
  }
}

Step::BaseObject *IfcFailureConnectionCondition_Factory::create(Step::StepId id) {
  IfcFailureConnectionCondition *ret = new IfcFailureConnectionCondition(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFailureConnectionCondition_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFailureConnectionCondition *ret = new IfcFailureConnectionCondition(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFailureConnectionCondition_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFailureConnectionCondition *ret = new IfcFailureConnectionCondition(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFailureConnectionCondition *IfcFailureConnectionCondition_Factory::generate() {
  return static_cast< IfcFailureConnectionCondition * > (create(m_model->getNewId()));
}

IfcFailureConnectionCondition *IfcFailureConnectionCondition_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFailureConnectionCondition * > (it->second);
  }
  else {
    return NULL;
  }
}

