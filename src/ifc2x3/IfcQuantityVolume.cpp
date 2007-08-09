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
#include <ifc2x3/IfcQuantityVolume.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcQuantityVolume::IfcQuantityVolume(Step::SPFData *args) : IfcPhysicalSimpleQuantity(args) {
  m_volumeValue = getUnset(m_volumeValue);
}


IfcQuantityVolume::~IfcQuantityVolume() {
}

bool IfcQuantityVolume::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcQuantityVolume(this);
}

const char *IfcQuantityVolume::type() {
  return "IfcQuantityVolume";
}

Step::ClassType IfcQuantityVolume::getClassType() {
  return IfcQuantityVolume::s_type;
}

Step::ClassType IfcQuantityVolume::getType() const {
  return IfcQuantityVolume::s_type;
}

bool IfcQuantityVolume::isOfType(Step::ClassType t) {
  return IfcQuantityVolume::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcVolumeMeasure IfcQuantityVolume::getVolumeValue() {
  if (Step::BaseObject::inited()) {
    return m_volumeValue;
  }
  else {
    return getUnset(m_volumeValue);
  }
}

void IfcQuantityVolume::setVolumeValue(IfcVolumeMeasure value) {
  m_volumeValue = value;
}

void IfcQuantityVolume::release() {
  IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityVolume::init() {
  bool status = IfcPhysicalSimpleQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_volumeValue = getUnset(m_volumeValue);
  }
  else {
    m_volumeValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityVolume::s_type = new Step::ClassType_class("IfcQuantityVolume");
IfcQuantityVolume_Factory::IfcQuantityVolume_Factory() {
}

IfcQuantityVolume_Factory::~IfcQuantityVolume_Factory() {
  clear(true);
}

void IfcQuantityVolume_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityVolume_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityVolume_Factory::end() {
  return m_idMap.end();
}

IfcQuantityVolume *IfcQuantityVolume_Factory::get(Step::StepId id) {
  IfcQuantityVolume *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcQuantityVolume * > (it->second);
  }
  else {
    LOG_ERROR("IfcQuantityVolume_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcQuantityVolume * > (create(id));
  }
}

Step::BaseObject *IfcQuantityVolume_Factory::create(Step::StepId id) {
  IfcQuantityVolume *ret = new IfcQuantityVolume(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityVolume_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcQuantityVolume *ret = new IfcQuantityVolume(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityVolume_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcQuantityVolume *ret = new IfcQuantityVolume(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcQuantityVolume *IfcQuantityVolume_Factory::generate() {
  return static_cast< IfcQuantityVolume * > (create(m_model->getNewId()));
}

IfcQuantityVolume *IfcQuantityVolume_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcQuantityVolume * > (it->second);
  }
  else {
    return NULL;
  }
}

