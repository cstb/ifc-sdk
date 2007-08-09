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
#include <ifc2x3/IfcStructuralProfileProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralProfileProperties::IfcStructuralProfileProperties(Step::SPFData *args) : IfcGeneralProfileProperties(args) {
  m_torsionalConstantX = getUnset(m_torsionalConstantX);
  m_momentOfInertiaYZ = getUnset(m_momentOfInertiaYZ);
  m_momentOfInertiaY = getUnset(m_momentOfInertiaY);
  m_momentOfInertiaZ = getUnset(m_momentOfInertiaZ);
  m_warpingConstant = getUnset(m_warpingConstant);
  m_shearCentreZ = getUnset(m_shearCentreZ);
  m_shearCentreY = getUnset(m_shearCentreY);
  m_shearDeformationAreaZ = getUnset(m_shearDeformationAreaZ);
  m_shearDeformationAreaY = getUnset(m_shearDeformationAreaY);
  m_maximumSectionModulusY = getUnset(m_maximumSectionModulusY);
  m_minimumSectionModulusY = getUnset(m_minimumSectionModulusY);
  m_maximumSectionModulusZ = getUnset(m_maximumSectionModulusZ);
  m_minimumSectionModulusZ = getUnset(m_minimumSectionModulusZ);
  m_torsionalSectionModulus = getUnset(m_torsionalSectionModulus);
  m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
  m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
}


IfcStructuralProfileProperties::~IfcStructuralProfileProperties() {
}

bool IfcStructuralProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralProfileProperties(this);
}

const char *IfcStructuralProfileProperties::type() {
  return "IfcStructuralProfileProperties";
}

Step::ClassType IfcStructuralProfileProperties::getClassType() {
  return IfcStructuralProfileProperties::s_type;
}

Step::ClassType IfcStructuralProfileProperties::getType() const {
  return IfcStructuralProfileProperties::s_type;
}

bool IfcStructuralProfileProperties::isOfType(Step::ClassType t) {
  return IfcStructuralProfileProperties::s_type == t ? true : IfcGeneralProfileProperties::isOfType(t);
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getTorsionalConstantX() {
  if (Step::BaseObject::inited()) {
    return m_torsionalConstantX;
  }
  else {
    return getUnset(m_torsionalConstantX);
  }
}

void IfcStructuralProfileProperties::setTorsionalConstantX(IfcMomentOfInertiaMeasure value) {
  m_torsionalConstantX = value;
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaYZ() {
  if (Step::BaseObject::inited()) {
    return m_momentOfInertiaYZ;
  }
  else {
    return getUnset(m_momentOfInertiaYZ);
  }
}

void IfcStructuralProfileProperties::setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value) {
  m_momentOfInertiaYZ = value;
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaY() {
  if (Step::BaseObject::inited()) {
    return m_momentOfInertiaY;
  }
  else {
    return getUnset(m_momentOfInertiaY);
  }
}

void IfcStructuralProfileProperties::setMomentOfInertiaY(IfcMomentOfInertiaMeasure value) {
  m_momentOfInertiaY = value;
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaZ() {
  if (Step::BaseObject::inited()) {
    return m_momentOfInertiaZ;
  }
  else {
    return getUnset(m_momentOfInertiaZ);
  }
}

void IfcStructuralProfileProperties::setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value) {
  m_momentOfInertiaZ = value;
}

IfcWarpingConstantMeasure IfcStructuralProfileProperties::getWarpingConstant() {
  if (Step::BaseObject::inited()) {
    return m_warpingConstant;
  }
  else {
    return getUnset(m_warpingConstant);
  }
}

void IfcStructuralProfileProperties::setWarpingConstant(IfcWarpingConstantMeasure value) {
  m_warpingConstant = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreZ() {
  if (Step::BaseObject::inited()) {
    return m_shearCentreZ;
  }
  else {
    return getUnset(m_shearCentreZ);
  }
}

void IfcStructuralProfileProperties::setShearCentreZ(IfcLengthMeasure value) {
  m_shearCentreZ = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreY() {
  if (Step::BaseObject::inited()) {
    return m_shearCentreY;
  }
  else {
    return getUnset(m_shearCentreY);
  }
}

void IfcStructuralProfileProperties::setShearCentreY(IfcLengthMeasure value) {
  m_shearCentreY = value;
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaZ() {
  if (Step::BaseObject::inited()) {
    return m_shearDeformationAreaZ;
  }
  else {
    return getUnset(m_shearDeformationAreaZ);
  }
}

void IfcStructuralProfileProperties::setShearDeformationAreaZ(IfcAreaMeasure value) {
  m_shearDeformationAreaZ = value;
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaY() {
  if (Step::BaseObject::inited()) {
    return m_shearDeformationAreaY;
  }
  else {
    return getUnset(m_shearDeformationAreaY);
  }
}

void IfcStructuralProfileProperties::setShearDeformationAreaY(IfcAreaMeasure value) {
  m_shearDeformationAreaY = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusY() {
  if (Step::BaseObject::inited()) {
    return m_maximumSectionModulusY;
  }
  else {
    return getUnset(m_maximumSectionModulusY);
  }
}

void IfcStructuralProfileProperties::setMaximumSectionModulusY(IfcSectionModulusMeasure value) {
  m_maximumSectionModulusY = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusY() {
  if (Step::BaseObject::inited()) {
    return m_minimumSectionModulusY;
  }
  else {
    return getUnset(m_minimumSectionModulusY);
  }
}

void IfcStructuralProfileProperties::setMinimumSectionModulusY(IfcSectionModulusMeasure value) {
  m_minimumSectionModulusY = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusZ() {
  if (Step::BaseObject::inited()) {
    return m_maximumSectionModulusZ;
  }
  else {
    return getUnset(m_maximumSectionModulusZ);
  }
}

void IfcStructuralProfileProperties::setMaximumSectionModulusZ(IfcSectionModulusMeasure value) {
  m_maximumSectionModulusZ = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusZ() {
  if (Step::BaseObject::inited()) {
    return m_minimumSectionModulusZ;
  }
  else {
    return getUnset(m_minimumSectionModulusZ);
  }
}

void IfcStructuralProfileProperties::setMinimumSectionModulusZ(IfcSectionModulusMeasure value) {
  m_minimumSectionModulusZ = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getTorsionalSectionModulus() {
  if (Step::BaseObject::inited()) {
    return m_torsionalSectionModulus;
  }
  else {
    return getUnset(m_torsionalSectionModulus);
  }
}

void IfcStructuralProfileProperties::setTorsionalSectionModulus(IfcSectionModulusMeasure value) {
  m_torsionalSectionModulus = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInX() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInX;
  }
  else {
    return getUnset(m_centreOfGravityInX);
  }
}

void IfcStructuralProfileProperties::setCentreOfGravityInX(IfcLengthMeasure value) {
  m_centreOfGravityInX = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInY() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInY;
  }
  else {
    return getUnset(m_centreOfGravityInY);
  }
}

void IfcStructuralProfileProperties::setCentreOfGravityInY(IfcLengthMeasure value) {
  m_centreOfGravityInY = value;
}

void IfcStructuralProfileProperties::release() {
  IfcGeneralProfileProperties::release();
}

bool IfcStructuralProfileProperties::init() {
  bool status = IfcGeneralProfileProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_torsionalConstantX = getUnset(m_torsionalConstantX);
  }
  else {
    m_torsionalConstantX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_momentOfInertiaYZ = getUnset(m_momentOfInertiaYZ);
  }
  else {
    m_momentOfInertiaYZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_momentOfInertiaY = getUnset(m_momentOfInertiaY);
  }
  else {
    m_momentOfInertiaY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_momentOfInertiaZ = getUnset(m_momentOfInertiaZ);
  }
  else {
    m_momentOfInertiaZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_warpingConstant = getUnset(m_warpingConstant);
  }
  else {
    m_warpingConstant = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearCentreZ = getUnset(m_shearCentreZ);
  }
  else {
    m_shearCentreZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearCentreY = getUnset(m_shearCentreY);
  }
  else {
    m_shearCentreY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearDeformationAreaZ = getUnset(m_shearDeformationAreaZ);
  }
  else {
    m_shearDeformationAreaZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearDeformationAreaY = getUnset(m_shearDeformationAreaY);
  }
  else {
    m_shearDeformationAreaY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maximumSectionModulusY = getUnset(m_maximumSectionModulusY);
  }
  else {
    m_maximumSectionModulusY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minimumSectionModulusY = getUnset(m_minimumSectionModulusY);
  }
  else {
    m_minimumSectionModulusY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maximumSectionModulusZ = getUnset(m_maximumSectionModulusZ);
  }
  else {
    m_maximumSectionModulusZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minimumSectionModulusZ = getUnset(m_minimumSectionModulusZ);
  }
  else {
    m_minimumSectionModulusZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_torsionalSectionModulus = getUnset(m_torsionalSectionModulus);
  }
  else {
    m_torsionalSectionModulus = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
  }
  else {
    m_centreOfGravityInX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
  }
  else {
    m_centreOfGravityInY = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralProfileProperties::s_type = new Step::ClassType_class("IfcStructuralProfileProperties");
IfcStructuralProfileProperties_Factory::IfcStructuralProfileProperties_Factory() {
}

IfcStructuralProfileProperties_Factory::~IfcStructuralProfileProperties_Factory() {
  clear(true);
}

void IfcStructuralProfileProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralProfileProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralProfileProperties_Factory::end() {
  return m_idMap.end();
}

IfcStructuralProfileProperties *IfcStructuralProfileProperties_Factory::get(Step::StepId id) {
  IfcStructuralProfileProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralProfileProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralProfileProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralProfileProperties * > (create(id));
  }
}

Step::BaseObject *IfcStructuralProfileProperties_Factory::create(Step::StepId id) {
  IfcStructuralProfileProperties *ret = new IfcStructuralProfileProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralProfileProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralProfileProperties *ret = new IfcStructuralProfileProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralProfileProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralProfileProperties *ret = new IfcStructuralProfileProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralProfileProperties *IfcStructuralProfileProperties_Factory::generate() {
  return static_cast< IfcStructuralProfileProperties * > (create(m_model->getNewId()));
}

IfcStructuralProfileProperties *IfcStructuralProfileProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralProfileProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

