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
#include <ifc2x3/IfcMaterialLayerSetUsage.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage(Step::SPFData *args) : Step::BaseObject(args) {
  m_forLayerSet = NULL;
  m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
  m_directionSense = IfcDirectionSenseEnum_UNSET;
  m_offsetFromReferenceLine = getUnset(m_offsetFromReferenceLine);
}


IfcMaterialLayerSetUsage::~IfcMaterialLayerSetUsage() {
}

bool IfcMaterialLayerSetUsage::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialLayerSetUsage(this);
}

const char *IfcMaterialLayerSetUsage::type() {
  return "IfcMaterialLayerSetUsage";
}

Step::ClassType IfcMaterialLayerSetUsage::getClassType() {
  return IfcMaterialLayerSetUsage::s_type;
}

Step::ClassType IfcMaterialLayerSetUsage::getType() const {
  return IfcMaterialLayerSetUsage::s_type;
}

bool IfcMaterialLayerSetUsage::isOfType(Step::ClassType t) {
  return IfcMaterialLayerSetUsage::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterialLayerSet *IfcMaterialLayerSetUsage::getForLayerSet() {
  if (Step::BaseObject::inited()) {
    return m_forLayerSet.get();
  }
  else {
    return NULL;
  }
}

void IfcMaterialLayerSetUsage::setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value) {
  m_forLayerSet = value;
}

IfcLayerSetDirectionEnum IfcMaterialLayerSetUsage::getLayerSetDirection() {
  if (Step::BaseObject::inited()) {
    return m_layerSetDirection;
  }
  else {
    return IfcLayerSetDirectionEnum_UNSET;
  }
}

void IfcMaterialLayerSetUsage::setLayerSetDirection(IfcLayerSetDirectionEnum value) {
  m_layerSetDirection = value;
}

IfcDirectionSenseEnum IfcMaterialLayerSetUsage::getDirectionSense() {
  if (Step::BaseObject::inited()) {
    return m_directionSense;
  }
  else {
    return IfcDirectionSenseEnum_UNSET;
  }
}

void IfcMaterialLayerSetUsage::setDirectionSense(IfcDirectionSenseEnum value) {
  m_directionSense = value;
}

IfcLengthMeasure IfcMaterialLayerSetUsage::getOffsetFromReferenceLine() {
  if (Step::BaseObject::inited()) {
    return m_offsetFromReferenceLine;
  }
  else {
    return getUnset(m_offsetFromReferenceLine);
  }
}

void IfcMaterialLayerSetUsage::setOffsetFromReferenceLine(IfcLengthMeasure value) {
  m_offsetFromReferenceLine = value;
}

void IfcMaterialLayerSetUsage::release() {
  m_forLayerSet.release();
}

bool IfcMaterialLayerSetUsage::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_forLayerSet = NULL;
  }
  else {
    m_forLayerSet = static_cast< IfcMaterialLayerSet * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
  }
  else {
    if (arg == ".AXIS1.") {
      m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS1;
    }
    else if (arg == ".AXIS2.") {
      m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS2;
    }
    else if (arg == ".AXIS3.") {
      m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS3;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_directionSense = IfcDirectionSenseEnum_UNSET;
  }
  else {
    if (arg == ".POSITIVE.") {
      m_directionSense = IfcDirectionSenseEnum_POSITIVE;
    }
    else if (arg == ".NEGATIVE.") {
      m_directionSense = IfcDirectionSenseEnum_NEGATIVE;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_offsetFromReferenceLine = getUnset(m_offsetFromReferenceLine);
  }
  else {
    m_offsetFromReferenceLine = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialLayerSetUsage::s_type = new Step::ClassType_class("IfcMaterialLayerSetUsage");
IfcMaterialLayerSetUsage_Factory::IfcMaterialLayerSetUsage_Factory() {
}

IfcMaterialLayerSetUsage_Factory::~IfcMaterialLayerSetUsage_Factory() {
  clear(true);
}

void IfcMaterialLayerSetUsage_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialLayerSetUsage_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialLayerSetUsage_Factory::end() {
  return m_idMap.end();
}

IfcMaterialLayerSetUsage *IfcMaterialLayerSetUsage_Factory::get(Step::StepId id) {
  IfcMaterialLayerSetUsage *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterialLayerSetUsage * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterialLayerSetUsage_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterialLayerSetUsage * > (create(id));
  }
}

Step::BaseObject *IfcMaterialLayerSetUsage_Factory::create(Step::StepId id) {
  IfcMaterialLayerSetUsage *ret = new IfcMaterialLayerSetUsage(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialLayerSetUsage_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterialLayerSetUsage *ret = new IfcMaterialLayerSetUsage(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialLayerSetUsage_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterialLayerSetUsage *ret = new IfcMaterialLayerSetUsage(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterialLayerSetUsage *IfcMaterialLayerSetUsage_Factory::generate() {
  return static_cast< IfcMaterialLayerSetUsage * > (create(m_model->getNewId()));
}

IfcMaterialLayerSetUsage *IfcMaterialLayerSetUsage_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterialLayerSetUsage * > (it->second);
  }
  else {
    return NULL;
  }
}

