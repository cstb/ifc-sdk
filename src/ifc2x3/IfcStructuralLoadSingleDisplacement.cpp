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
#include <ifc2x3/IfcStructuralLoadSingleDisplacement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadSingleDisplacement::IfcStructuralLoadSingleDisplacement(Step::SPFData *args) : IfcStructuralLoadStatic(args) {
  m_displacementX = getUnset(m_displacementX);
  m_displacementY = getUnset(m_displacementY);
  m_displacementZ = getUnset(m_displacementZ);
  m_rotationalDisplacementRX = getUnset(m_rotationalDisplacementRX);
  m_rotationalDisplacementRY = getUnset(m_rotationalDisplacementRY);
  m_rotationalDisplacementRZ = getUnset(m_rotationalDisplacementRZ);
}


IfcStructuralLoadSingleDisplacement::~IfcStructuralLoadSingleDisplacement() {
}

bool IfcStructuralLoadSingleDisplacement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleDisplacement(this);
}

const char *IfcStructuralLoadSingleDisplacement::type() {
  return "IfcStructuralLoadSingleDisplacement";
}

Step::ClassType IfcStructuralLoadSingleDisplacement::getClassType() {
  return IfcStructuralLoadSingleDisplacement::s_type;
}

Step::ClassType IfcStructuralLoadSingleDisplacement::getType() const {
  return IfcStructuralLoadSingleDisplacement::s_type;
}

bool IfcStructuralLoadSingleDisplacement::isOfType(Step::ClassType t) {
  return IfcStructuralLoadSingleDisplacement::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementX() {
  if (Step::BaseObject::inited()) {
    return m_displacementX;
  }
  else {
    return getUnset(m_displacementX);
  }
}

void IfcStructuralLoadSingleDisplacement::setDisplacementX(IfcLengthMeasure value) {
  m_displacementX = value;
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementY() {
  if (Step::BaseObject::inited()) {
    return m_displacementY;
  }
  else {
    return getUnset(m_displacementY);
  }
}

void IfcStructuralLoadSingleDisplacement::setDisplacementY(IfcLengthMeasure value) {
  m_displacementY = value;
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementZ() {
  if (Step::BaseObject::inited()) {
    return m_displacementZ;
  }
  else {
    return getUnset(m_displacementZ);
  }
}

void IfcStructuralLoadSingleDisplacement::setDisplacementZ(IfcLengthMeasure value) {
  m_displacementZ = value;
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRX() {
  if (Step::BaseObject::inited()) {
    return m_rotationalDisplacementRX;
  }
  else {
    return getUnset(m_rotationalDisplacementRX);
  }
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRX(IfcPlaneAngleMeasure value) {
  m_rotationalDisplacementRX = value;
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRY() {
  if (Step::BaseObject::inited()) {
    return m_rotationalDisplacementRY;
  }
  else {
    return getUnset(m_rotationalDisplacementRY);
  }
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRY(IfcPlaneAngleMeasure value) {
  m_rotationalDisplacementRY = value;
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRZ() {
  if (Step::BaseObject::inited()) {
    return m_rotationalDisplacementRZ;
  }
  else {
    return getUnset(m_rotationalDisplacementRZ);
  }
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRZ(IfcPlaneAngleMeasure value) {
  m_rotationalDisplacementRZ = value;
}

void IfcStructuralLoadSingleDisplacement::release() {
  IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadSingleDisplacement::init() {
  bool status = IfcStructuralLoadStatic::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_displacementX = getUnset(m_displacementX);
  }
  else {
    m_displacementX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_displacementY = getUnset(m_displacementY);
  }
  else {
    m_displacementY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_displacementZ = getUnset(m_displacementZ);
  }
  else {
    m_displacementZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalDisplacementRX = getUnset(m_rotationalDisplacementRX);
  }
  else {
    m_rotationalDisplacementRX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalDisplacementRY = getUnset(m_rotationalDisplacementRY);
  }
  else {
    m_rotationalDisplacementRY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalDisplacementRZ = getUnset(m_rotationalDisplacementRZ);
  }
  else {
    m_rotationalDisplacementRZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleDisplacement::s_type = new Step::ClassType_class("IfcStructuralLoadSingleDisplacement");
IfcStructuralLoadSingleDisplacement_Factory::IfcStructuralLoadSingleDisplacement_Factory() {
}

IfcStructuralLoadSingleDisplacement_Factory::~IfcStructuralLoadSingleDisplacement_Factory() {
  clear(true);
}

void IfcStructuralLoadSingleDisplacement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleDisplacement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleDisplacement_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadSingleDisplacement *IfcStructuralLoadSingleDisplacement_Factory::get(Step::StepId id) {
  IfcStructuralLoadSingleDisplacement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadSingleDisplacement * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadSingleDisplacement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadSingleDisplacement * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadSingleDisplacement_Factory::create(Step::StepId id) {
  IfcStructuralLoadSingleDisplacement *ret = new IfcStructuralLoadSingleDisplacement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleDisplacement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadSingleDisplacement *ret = new IfcStructuralLoadSingleDisplacement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleDisplacement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadSingleDisplacement *ret = new IfcStructuralLoadSingleDisplacement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadSingleDisplacement *IfcStructuralLoadSingleDisplacement_Factory::generate() {
  return static_cast< IfcStructuralLoadSingleDisplacement * > (create(m_model->getNewId()));
}

IfcStructuralLoadSingleDisplacement *IfcStructuralLoadSingleDisplacement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadSingleDisplacement * > (it->second);
  }
  else {
    return NULL;
  }
}

