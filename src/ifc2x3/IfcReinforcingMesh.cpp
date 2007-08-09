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
#include <ifc2x3/IfcReinforcingMesh.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcReinforcingMesh::IfcReinforcingMesh(Step::SPFData *args) : IfcReinforcingElement(args) {
  m_meshLength = getUnset(m_meshLength);
  m_meshWidth = getUnset(m_meshWidth);
  m_longitudinalBarNominalDiameter = getUnset(m_longitudinalBarNominalDiameter);
  m_transverseBarNominalDiameter = getUnset(m_transverseBarNominalDiameter);
  m_longitudinalBarCrossSectionArea = getUnset(m_longitudinalBarCrossSectionArea);
  m_transverseBarCrossSectionArea = getUnset(m_transverseBarCrossSectionArea);
  m_longitudinalBarSpacing = getUnset(m_longitudinalBarSpacing);
  m_transverseBarSpacing = getUnset(m_transverseBarSpacing);
}


IfcReinforcingMesh::~IfcReinforcingMesh() {
}

bool IfcReinforcingMesh::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcReinforcingMesh(this);
}

const char *IfcReinforcingMesh::type() {
  return "IfcReinforcingMesh";
}

Step::ClassType IfcReinforcingMesh::getClassType() {
  return IfcReinforcingMesh::s_type;
}

Step::ClassType IfcReinforcingMesh::getType() const {
  return IfcReinforcingMesh::s_type;
}

bool IfcReinforcingMesh::isOfType(Step::ClassType t) {
  return IfcReinforcingMesh::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshLength() {
  if (Step::BaseObject::inited()) {
    return m_meshLength;
  }
  else {
    return getUnset(m_meshLength);
  }
}

void IfcReinforcingMesh::setMeshLength(IfcPositiveLengthMeasure value) {
  m_meshLength = value;
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshWidth() {
  if (Step::BaseObject::inited()) {
    return m_meshWidth;
  }
  else {
    return getUnset(m_meshWidth);
  }
}

void IfcReinforcingMesh::setMeshWidth(IfcPositiveLengthMeasure value) {
  m_meshWidth = value;
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarNominalDiameter() {
  if (Step::BaseObject::inited()) {
    return m_longitudinalBarNominalDiameter;
  }
  else {
    return getUnset(m_longitudinalBarNominalDiameter);
  }
}

void IfcReinforcingMesh::setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value) {
  m_longitudinalBarNominalDiameter = value;
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarNominalDiameter() {
  if (Step::BaseObject::inited()) {
    return m_transverseBarNominalDiameter;
  }
  else {
    return getUnset(m_transverseBarNominalDiameter);
  }
}

void IfcReinforcingMesh::setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value) {
  m_transverseBarNominalDiameter = value;
}

IfcAreaMeasure IfcReinforcingMesh::getLongitudinalBarCrossSectionArea() {
  if (Step::BaseObject::inited()) {
    return m_longitudinalBarCrossSectionArea;
  }
  else {
    return getUnset(m_longitudinalBarCrossSectionArea);
  }
}

void IfcReinforcingMesh::setLongitudinalBarCrossSectionArea(IfcAreaMeasure value) {
  m_longitudinalBarCrossSectionArea = value;
}

IfcAreaMeasure IfcReinforcingMesh::getTransverseBarCrossSectionArea() {
  if (Step::BaseObject::inited()) {
    return m_transverseBarCrossSectionArea;
  }
  else {
    return getUnset(m_transverseBarCrossSectionArea);
  }
}

void IfcReinforcingMesh::setTransverseBarCrossSectionArea(IfcAreaMeasure value) {
  m_transverseBarCrossSectionArea = value;
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarSpacing() {
  if (Step::BaseObject::inited()) {
    return m_longitudinalBarSpacing;
  }
  else {
    return getUnset(m_longitudinalBarSpacing);
  }
}

void IfcReinforcingMesh::setLongitudinalBarSpacing(IfcPositiveLengthMeasure value) {
  m_longitudinalBarSpacing = value;
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarSpacing() {
  if (Step::BaseObject::inited()) {
    return m_transverseBarSpacing;
  }
  else {
    return getUnset(m_transverseBarSpacing);
  }
}

void IfcReinforcingMesh::setTransverseBarSpacing(IfcPositiveLengthMeasure value) {
  m_transverseBarSpacing = value;
}

void IfcReinforcingMesh::release() {
  IfcReinforcingElement::release();
}

bool IfcReinforcingMesh::init() {
  bool status = IfcReinforcingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_meshLength = getUnset(m_meshLength);
  }
  else {
    m_meshLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_meshWidth = getUnset(m_meshWidth);
  }
  else {
    m_meshWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longitudinalBarNominalDiameter = getUnset(m_longitudinalBarNominalDiameter);
  }
  else {
    m_longitudinalBarNominalDiameter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transverseBarNominalDiameter = getUnset(m_transverseBarNominalDiameter);
  }
  else {
    m_transverseBarNominalDiameter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longitudinalBarCrossSectionArea = getUnset(m_longitudinalBarCrossSectionArea);
  }
  else {
    m_longitudinalBarCrossSectionArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transverseBarCrossSectionArea = getUnset(m_transverseBarCrossSectionArea);
  }
  else {
    m_transverseBarCrossSectionArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longitudinalBarSpacing = getUnset(m_longitudinalBarSpacing);
  }
  else {
    m_longitudinalBarSpacing = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transverseBarSpacing = getUnset(m_transverseBarSpacing);
  }
  else {
    m_transverseBarSpacing = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcingMesh::s_type = new Step::ClassType_class("IfcReinforcingMesh");
IfcReinforcingMesh_Factory::IfcReinforcingMesh_Factory() {
}

IfcReinforcingMesh_Factory::~IfcReinforcingMesh_Factory() {
  clear(true);
}

void IfcReinforcingMesh_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcingMesh_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcingMesh_Factory::end() {
  return m_idMap.end();
}

IfcReinforcingMesh *IfcReinforcingMesh_Factory::get(Step::StepId id) {
  IfcReinforcingMesh *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcReinforcingMesh * > (it->second);
  }
  else {
    LOG_ERROR("IfcReinforcingMesh_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcReinforcingMesh * > (create(id));
  }
}

Step::BaseObject *IfcReinforcingMesh_Factory::create(Step::StepId id) {
  IfcReinforcingMesh *ret = new IfcReinforcingMesh(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcingMesh_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcReinforcingMesh *ret = new IfcReinforcingMesh(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcingMesh_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcReinforcingMesh *ret = new IfcReinforcingMesh(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcReinforcingMesh *IfcReinforcingMesh_Factory::generate() {
  return static_cast< IfcReinforcingMesh * > (create(m_model->getNewId()));
}

IfcReinforcingMesh *IfcReinforcingMesh_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcReinforcingMesh * > (it->second);
  }
  else {
    return NULL;
  }
}

