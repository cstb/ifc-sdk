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
#include <ifc2x3/IfcMaterialLayerSet.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterialLayerSet::IfcMaterialLayerSet(Step::SPFData *args) : Step::BaseObject(args) {
  m_materialLayers.setUnset(true);
  m_layerSetName = getUnset(m_layerSetName);
}


IfcMaterialLayerSet::~IfcMaterialLayerSet() {
}

bool IfcMaterialLayerSet::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialLayerSet(this);
}

const char *IfcMaterialLayerSet::type() {
  return "IfcMaterialLayerSet";
}

Step::ClassType IfcMaterialLayerSet::getClassType() {
  return IfcMaterialLayerSet::s_type;
}

Step::ClassType IfcMaterialLayerSet::getType() const {
  return IfcMaterialLayerSet::s_type;
}

bool IfcMaterialLayerSet::isOfType(Step::ClassType t) {
  return IfcMaterialLayerSet::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcMaterialLayer > > &IfcMaterialLayerSet::getMaterialLayers() {
  if (Step::BaseObject::inited()) {
    return m_materialLayers;
  }
  else {
    m_materialLayers.setUnset(true);
    return m_materialLayers;
  }
}

void IfcMaterialLayerSet::setMaterialLayers(const Step::StepList< Step::RefPtr< IfcMaterialLayer > > &value) {
  m_materialLayers = value;
}

IfcLabel IfcMaterialLayerSet::getLayerSetName() {
  if (Step::BaseObject::inited()) {
    return m_layerSetName;
  }
  else {
    return getUnset(m_layerSetName);
  }
}

void IfcMaterialLayerSet::setLayerSetName(const IfcLabel &value) {
  m_layerSetName = value;
}

void IfcMaterialLayerSet::release() {
  m_materialLayers.clear();
}

bool IfcMaterialLayerSet::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_materialLayers.setUnset(true);
  }
  else {
    m_materialLayers.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcMaterialLayer > attr2;
        attr2 = static_cast< IfcMaterialLayer * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_materialLayers.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerSetName = getUnset(m_layerSetName);
  }
  else {
    m_layerSetName = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialLayerSet::s_type = new Step::ClassType_class("IfcMaterialLayerSet");
IfcMaterialLayerSet_Factory::IfcMaterialLayerSet_Factory() {
}

IfcMaterialLayerSet_Factory::~IfcMaterialLayerSet_Factory() {
  clear(true);
}

void IfcMaterialLayerSet_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialLayerSet_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialLayerSet_Factory::end() {
  return m_idMap.end();
}

IfcMaterialLayerSet *IfcMaterialLayerSet_Factory::get(Step::StepId id) {
  IfcMaterialLayerSet *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterialLayerSet * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterialLayerSet_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterialLayerSet * > (create(id));
  }
}

Step::BaseObject *IfcMaterialLayerSet_Factory::create(Step::StepId id) {
  IfcMaterialLayerSet *ret = new IfcMaterialLayerSet(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialLayerSet_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterialLayerSet *ret = new IfcMaterialLayerSet(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialLayerSet_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterialLayerSet *ret = new IfcMaterialLayerSet(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterialLayerSet *IfcMaterialLayerSet_Factory::generate() {
  return static_cast< IfcMaterialLayerSet * > (create(m_model->getNewId()));
}

IfcMaterialLayerSet *IfcMaterialLayerSet_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterialLayerSet * > (it->second);
  }
  else {
    return NULL;
  }
}

