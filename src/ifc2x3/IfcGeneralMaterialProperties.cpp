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
#include <ifc2x3/IfcGeneralMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGeneralMaterialProperties::IfcGeneralMaterialProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_molecularWeight = getUnset(m_molecularWeight);
  m_porosity = getUnset(m_porosity);
  m_massDensity = getUnset(m_massDensity);
}


IfcGeneralMaterialProperties::~IfcGeneralMaterialProperties() {
}

bool IfcGeneralMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGeneralMaterialProperties(this);
}

const char *IfcGeneralMaterialProperties::type() {
  return "IfcGeneralMaterialProperties";
}

Step::ClassType IfcGeneralMaterialProperties::getClassType() {
  return IfcGeneralMaterialProperties::s_type;
}

Step::ClassType IfcGeneralMaterialProperties::getType() const {
  return IfcGeneralMaterialProperties::s_type;
}

bool IfcGeneralMaterialProperties::isOfType(Step::ClassType t) {
  return IfcGeneralMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcMolecularWeightMeasure IfcGeneralMaterialProperties::getMolecularWeight() {
  if (Step::BaseObject::inited()) {
    return m_molecularWeight;
  }
  else {
    return getUnset(m_molecularWeight);
  }
}

void IfcGeneralMaterialProperties::setMolecularWeight(IfcMolecularWeightMeasure value) {
  m_molecularWeight = value;
}

IfcNormalisedRatioMeasure IfcGeneralMaterialProperties::getPorosity() {
  if (Step::BaseObject::inited()) {
    return m_porosity;
  }
  else {
    return getUnset(m_porosity);
  }
}

void IfcGeneralMaterialProperties::setPorosity(IfcNormalisedRatioMeasure value) {
  m_porosity = value;
}

IfcMassDensityMeasure IfcGeneralMaterialProperties::getMassDensity() {
  if (Step::BaseObject::inited()) {
    return m_massDensity;
  }
  else {
    return getUnset(m_massDensity);
  }
}

void IfcGeneralMaterialProperties::setMassDensity(IfcMassDensityMeasure value) {
  m_massDensity = value;
}

void IfcGeneralMaterialProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcGeneralMaterialProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_molecularWeight = getUnset(m_molecularWeight);
  }
  else {
    m_molecularWeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_porosity = getUnset(m_porosity);
  }
  else {
    m_porosity = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_massDensity = getUnset(m_massDensity);
  }
  else {
    m_massDensity = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeneralMaterialProperties::s_type = new Step::ClassType_class("IfcGeneralMaterialProperties");
IfcGeneralMaterialProperties_Factory::IfcGeneralMaterialProperties_Factory() {
}

IfcGeneralMaterialProperties_Factory::~IfcGeneralMaterialProperties_Factory() {
  clear(true);
}

void IfcGeneralMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeneralMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeneralMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcGeneralMaterialProperties *IfcGeneralMaterialProperties_Factory::get(Step::StepId id) {
  IfcGeneralMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGeneralMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcGeneralMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGeneralMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcGeneralMaterialProperties_Factory::create(Step::StepId id) {
  IfcGeneralMaterialProperties *ret = new IfcGeneralMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGeneralMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGeneralMaterialProperties *ret = new IfcGeneralMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGeneralMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGeneralMaterialProperties *ret = new IfcGeneralMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGeneralMaterialProperties *IfcGeneralMaterialProperties_Factory::generate() {
  return static_cast< IfcGeneralMaterialProperties * > (create(m_model->getNewId()));
}

IfcGeneralMaterialProperties *IfcGeneralMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGeneralMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

