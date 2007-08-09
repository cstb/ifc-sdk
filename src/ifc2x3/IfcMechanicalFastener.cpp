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
#include <ifc2x3/IfcMechanicalFastener.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMechanicalFastener::IfcMechanicalFastener(Step::SPFData *args) : IfcFastener(args) {
  m_nominalDiameter = getUnset(m_nominalDiameter);
  m_nominalLength = getUnset(m_nominalLength);
}


IfcMechanicalFastener::~IfcMechanicalFastener() {
}

bool IfcMechanicalFastener::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMechanicalFastener(this);
}

const char *IfcMechanicalFastener::type() {
  return "IfcMechanicalFastener";
}

Step::ClassType IfcMechanicalFastener::getClassType() {
  return IfcMechanicalFastener::s_type;
}

Step::ClassType IfcMechanicalFastener::getType() const {
  return IfcMechanicalFastener::s_type;
}

bool IfcMechanicalFastener::isOfType(Step::ClassType t) {
  return IfcMechanicalFastener::s_type == t ? true : IfcFastener::isOfType(t);
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter() {
  if (Step::BaseObject::inited()) {
    return m_nominalDiameter;
  }
  else {
    return getUnset(m_nominalDiameter);
  }
}

void IfcMechanicalFastener::setNominalDiameter(IfcPositiveLengthMeasure value) {
  m_nominalDiameter = value;
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength() {
  if (Step::BaseObject::inited()) {
    return m_nominalLength;
  }
  else {
    return getUnset(m_nominalLength);
  }
}

void IfcMechanicalFastener::setNominalLength(IfcPositiveLengthMeasure value) {
  m_nominalLength = value;
}

void IfcMechanicalFastener::release() {
  IfcFastener::release();
}

bool IfcMechanicalFastener::init() {
  bool status = IfcFastener::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_nominalDiameter = getUnset(m_nominalDiameter);
  }
  else {
    m_nominalDiameter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_nominalLength = getUnset(m_nominalLength);
  }
  else {
    m_nominalLength = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalFastener::s_type = new Step::ClassType_class("IfcMechanicalFastener");
IfcMechanicalFastener_Factory::IfcMechanicalFastener_Factory() {
}

IfcMechanicalFastener_Factory::~IfcMechanicalFastener_Factory() {
  clear(true);
}

void IfcMechanicalFastener_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalFastener_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalFastener_Factory::end() {
  return m_idMap.end();
}

IfcMechanicalFastener *IfcMechanicalFastener_Factory::get(Step::StepId id) {
  IfcMechanicalFastener *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMechanicalFastener * > (it->second);
  }
  else {
    LOG_ERROR("IfcMechanicalFastener_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMechanicalFastener * > (create(id));
  }
}

Step::BaseObject *IfcMechanicalFastener_Factory::create(Step::StepId id) {
  IfcMechanicalFastener *ret = new IfcMechanicalFastener(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalFastener_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMechanicalFastener *ret = new IfcMechanicalFastener(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalFastener_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMechanicalFastener *ret = new IfcMechanicalFastener(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMechanicalFastener *IfcMechanicalFastener_Factory::generate() {
  return static_cast< IfcMechanicalFastener * > (create(m_model->getNewId()));
}

IfcMechanicalFastener *IfcMechanicalFastener_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMechanicalFastener * > (it->second);
  }
  else {
    return NULL;
  }
}

