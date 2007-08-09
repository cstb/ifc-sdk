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
#include <ifc2x3/IfcStructuralSteelProfileProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralSteelProfileProperties::IfcStructuralSteelProfileProperties(Step::SPFData *args) : IfcStructuralProfileProperties(args) {
  m_shearAreaZ = getUnset(m_shearAreaZ);
  m_shearAreaY = getUnset(m_shearAreaY);
  m_plasticShapeFactorY = getUnset(m_plasticShapeFactorY);
  m_plasticShapeFactorZ = getUnset(m_plasticShapeFactorZ);
}


IfcStructuralSteelProfileProperties::~IfcStructuralSteelProfileProperties() {
}

bool IfcStructuralSteelProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralSteelProfileProperties(this);
}

const char *IfcStructuralSteelProfileProperties::type() {
  return "IfcStructuralSteelProfileProperties";
}

Step::ClassType IfcStructuralSteelProfileProperties::getClassType() {
  return IfcStructuralSteelProfileProperties::s_type;
}

Step::ClassType IfcStructuralSteelProfileProperties::getType() const {
  return IfcStructuralSteelProfileProperties::s_type;
}

bool IfcStructuralSteelProfileProperties::isOfType(Step::ClassType t) {
  return IfcStructuralSteelProfileProperties::s_type == t ? true : IfcStructuralProfileProperties::isOfType(t);
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaZ() {
  if (Step::BaseObject::inited()) {
    return m_shearAreaZ;
  }
  else {
    return getUnset(m_shearAreaZ);
  }
}

void IfcStructuralSteelProfileProperties::setShearAreaZ(IfcAreaMeasure value) {
  m_shearAreaZ = value;
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaY() {
  if (Step::BaseObject::inited()) {
    return m_shearAreaY;
  }
  else {
    return getUnset(m_shearAreaY);
  }
}

void IfcStructuralSteelProfileProperties::setShearAreaY(IfcAreaMeasure value) {
  m_shearAreaY = value;
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorY() {
  if (Step::BaseObject::inited()) {
    return m_plasticShapeFactorY;
  }
  else {
    return getUnset(m_plasticShapeFactorY);
  }
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorY(IfcPositiveRatioMeasure value) {
  m_plasticShapeFactorY = value;
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorZ() {
  if (Step::BaseObject::inited()) {
    return m_plasticShapeFactorZ;
  }
  else {
    return getUnset(m_plasticShapeFactorZ);
  }
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorZ(IfcPositiveRatioMeasure value) {
  m_plasticShapeFactorZ = value;
}

void IfcStructuralSteelProfileProperties::release() {
  IfcStructuralProfileProperties::release();
}

bool IfcStructuralSteelProfileProperties::init() {
  bool status = IfcStructuralProfileProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearAreaZ = getUnset(m_shearAreaZ);
  }
  else {
    m_shearAreaZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearAreaY = getUnset(m_shearAreaY);
  }
  else {
    m_shearAreaY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_plasticShapeFactorY = getUnset(m_plasticShapeFactorY);
  }
  else {
    m_plasticShapeFactorY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_plasticShapeFactorZ = getUnset(m_plasticShapeFactorZ);
  }
  else {
    m_plasticShapeFactorZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSteelProfileProperties::s_type = new Step::ClassType_class("IfcStructuralSteelProfileProperties");
IfcStructuralSteelProfileProperties_Factory::IfcStructuralSteelProfileProperties_Factory() {
}

IfcStructuralSteelProfileProperties_Factory::~IfcStructuralSteelProfileProperties_Factory() {
  clear(true);
}

void IfcStructuralSteelProfileProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralSteelProfileProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralSteelProfileProperties_Factory::end() {
  return m_idMap.end();
}

IfcStructuralSteelProfileProperties *IfcStructuralSteelProfileProperties_Factory::get(Step::StepId id) {
  IfcStructuralSteelProfileProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralSteelProfileProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralSteelProfileProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralSteelProfileProperties * > (create(id));
  }
}

Step::BaseObject *IfcStructuralSteelProfileProperties_Factory::create(Step::StepId id) {
  IfcStructuralSteelProfileProperties *ret = new IfcStructuralSteelProfileProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralSteelProfileProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralSteelProfileProperties *ret = new IfcStructuralSteelProfileProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralSteelProfileProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralSteelProfileProperties *ret = new IfcStructuralSteelProfileProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralSteelProfileProperties *IfcStructuralSteelProfileProperties_Factory::generate() {
  return static_cast< IfcStructuralSteelProfileProperties * > (create(m_model->getNewId()));
}

IfcStructuralSteelProfileProperties *IfcStructuralSteelProfileProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralSteelProfileProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

