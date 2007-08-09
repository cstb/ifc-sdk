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
#include <ifc2x3/IfcStructuralLoadTemperature.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadTemperature::IfcStructuralLoadTemperature(Step::SPFData *args) : IfcStructuralLoadStatic(args) {
  m_deltaT_Constant = getUnset(m_deltaT_Constant);
  m_deltaT_Y = getUnset(m_deltaT_Y);
  m_deltaT_Z = getUnset(m_deltaT_Z);
}


IfcStructuralLoadTemperature::~IfcStructuralLoadTemperature() {
}

bool IfcStructuralLoadTemperature::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadTemperature(this);
}

const char *IfcStructuralLoadTemperature::type() {
  return "IfcStructuralLoadTemperature";
}

Step::ClassType IfcStructuralLoadTemperature::getClassType() {
  return IfcStructuralLoadTemperature::s_type;
}

Step::ClassType IfcStructuralLoadTemperature::getType() const {
  return IfcStructuralLoadTemperature::s_type;
}

bool IfcStructuralLoadTemperature::isOfType(Step::ClassType t) {
  return IfcStructuralLoadTemperature::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Constant() {
  if (Step::BaseObject::inited()) {
    return m_deltaT_Constant;
  }
  else {
    return getUnset(m_deltaT_Constant);
  }
}

void IfcStructuralLoadTemperature::setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value) {
  m_deltaT_Constant = value;
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Y() {
  if (Step::BaseObject::inited()) {
    return m_deltaT_Y;
  }
  else {
    return getUnset(m_deltaT_Y);
  }
}

void IfcStructuralLoadTemperature::setDeltaT_Y(IfcThermodynamicTemperatureMeasure value) {
  m_deltaT_Y = value;
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Z() {
  if (Step::BaseObject::inited()) {
    return m_deltaT_Z;
  }
  else {
    return getUnset(m_deltaT_Z);
  }
}

void IfcStructuralLoadTemperature::setDeltaT_Z(IfcThermodynamicTemperatureMeasure value) {
  m_deltaT_Z = value;
}

void IfcStructuralLoadTemperature::release() {
  IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadTemperature::init() {
  bool status = IfcStructuralLoadStatic::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_deltaT_Constant = getUnset(m_deltaT_Constant);
  }
  else {
    m_deltaT_Constant = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_deltaT_Y = getUnset(m_deltaT_Y);
  }
  else {
    m_deltaT_Y = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_deltaT_Z = getUnset(m_deltaT_Z);
  }
  else {
    m_deltaT_Z = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadTemperature::s_type = new Step::ClassType_class("IfcStructuralLoadTemperature");
IfcStructuralLoadTemperature_Factory::IfcStructuralLoadTemperature_Factory() {
}

IfcStructuralLoadTemperature_Factory::~IfcStructuralLoadTemperature_Factory() {
  clear(true);
}

void IfcStructuralLoadTemperature_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadTemperature_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadTemperature_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadTemperature *IfcStructuralLoadTemperature_Factory::get(Step::StepId id) {
  IfcStructuralLoadTemperature *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadTemperature * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadTemperature_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadTemperature * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadTemperature_Factory::create(Step::StepId id) {
  IfcStructuralLoadTemperature *ret = new IfcStructuralLoadTemperature(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadTemperature_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadTemperature *ret = new IfcStructuralLoadTemperature(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadTemperature_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadTemperature *ret = new IfcStructuralLoadTemperature(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadTemperature *IfcStructuralLoadTemperature_Factory::generate() {
  return static_cast< IfcStructuralLoadTemperature * > (create(m_model->getNewId()));
}

IfcStructuralLoadTemperature *IfcStructuralLoadTemperature_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadTemperature * > (it->second);
  }
  else {
    return NULL;
  }
}

