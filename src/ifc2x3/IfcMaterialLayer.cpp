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
#include <ifc2x3/IfcMaterialLayer.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterialLayer::IfcMaterialLayer(Step::SPFData *args) : Step::BaseObject(args) {
  m_material = NULL;
  m_layerThickness = getUnset(m_layerThickness);
  m_isVentilated = getUnset(m_isVentilated);
  m_toMaterialLayerSet = NULL;
}


IfcMaterialLayer::~IfcMaterialLayer() {
}

bool IfcMaterialLayer::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialLayer(this);
}

const char *IfcMaterialLayer::type() {
  return "IfcMaterialLayer";
}

Step::ClassType IfcMaterialLayer::getClassType() {
  return IfcMaterialLayer::s_type;
}

Step::ClassType IfcMaterialLayer::getType() const {
  return IfcMaterialLayer::s_type;
}

bool IfcMaterialLayer::isOfType(Step::ClassType t) {
  return IfcMaterialLayer::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterial *IfcMaterialLayer::getMaterial() {
  if (Step::BaseObject::inited()) {
    return m_material.get();
  }
  else {
    return NULL;
  }
}

void IfcMaterialLayer::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
  m_material = value;
}

IfcPositiveLengthMeasure IfcMaterialLayer::getLayerThickness() {
  if (Step::BaseObject::inited()) {
    return m_layerThickness;
  }
  else {
    return getUnset(m_layerThickness);
  }
}

void IfcMaterialLayer::setLayerThickness(IfcPositiveLengthMeasure value) {
  m_layerThickness = value;
}

IfcLogical IfcMaterialLayer::getIsVentilated() {
  if (Step::BaseObject::inited()) {
    return m_isVentilated;
  }
  else {
    return getUnset(m_isVentilated);
  }
}

void IfcMaterialLayer::setIsVentilated(IfcLogical value) {
  m_isVentilated = value;
}

IfcMaterialLayerSet *IfcMaterialLayer::getToMaterialLayerSet() {
  if (Step::BaseObject::inited()) {
    return m_toMaterialLayerSet.get();
  }
  else {
    return NULL;
  }
}

void IfcMaterialLayer::setToMaterialLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value) {
  m_toMaterialLayerSet = value;
}

void IfcMaterialLayer::release() {
  m_material.release();
}

bool IfcMaterialLayer::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_material = NULL;
  }
  else {
    m_material = static_cast< IfcMaterial * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerThickness = getUnset(m_layerThickness);
  }
  else {
    m_layerThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isVentilated = getUnset(m_isVentilated);
  }
  else {
    m_isVentilated = Step::spfToLogical(arg);
  }
  inverses = m_args->getInverses(IfcMaterialLayerSet::getClassType(), 0);
  if (inverses) {
    m_toMaterialLayerSet = static_cast< IfcMaterialLayerSet * > (m_model->getObjectById((*inverses)[0]));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialLayer::s_type = new Step::ClassType_class("IfcMaterialLayer");
IfcMaterialLayer_Factory::IfcMaterialLayer_Factory() {
}

IfcMaterialLayer_Factory::~IfcMaterialLayer_Factory() {
  clear(true);
}

void IfcMaterialLayer_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialLayer_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialLayer_Factory::end() {
  return m_idMap.end();
}

IfcMaterialLayer *IfcMaterialLayer_Factory::get(Step::StepId id) {
  IfcMaterialLayer *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterialLayer * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterialLayer_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterialLayer * > (create(id));
  }
}

Step::BaseObject *IfcMaterialLayer_Factory::create(Step::StepId id) {
  IfcMaterialLayer *ret = new IfcMaterialLayer(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialLayer_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterialLayer *ret = new IfcMaterialLayer(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialLayer_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterialLayer *ret = new IfcMaterialLayer(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterialLayer *IfcMaterialLayer_Factory::generate() {
  return static_cast< IfcMaterialLayer * > (create(m_model->getNewId()));
}

IfcMaterialLayer *IfcMaterialLayer_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterialLayer * > (it->second);
  }
  else {
    return NULL;
  }
}

