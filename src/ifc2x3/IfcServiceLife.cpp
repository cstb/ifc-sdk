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
#include <ifc2x3/IfcServiceLife.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcServiceLife::IfcServiceLife(Step::SPFData *args) : IfcControl(args) {
  m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
  m_serviceLifeDuration = getUnset(m_serviceLifeDuration);
}


IfcServiceLife::~IfcServiceLife() {
}

bool IfcServiceLife::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcServiceLife(this);
}

const char *IfcServiceLife::type() {
  return "IfcServiceLife";
}

Step::ClassType IfcServiceLife::getClassType() {
  return IfcServiceLife::s_type;
}

Step::ClassType IfcServiceLife::getType() const {
  return IfcServiceLife::s_type;
}

bool IfcServiceLife::isOfType(Step::ClassType t) {
  return IfcServiceLife::s_type == t ? true : IfcControl::isOfType(t);
}

IfcServiceLifeTypeEnum IfcServiceLife::getServiceLifeType() {
  if (Step::BaseObject::inited()) {
    return m_serviceLifeType;
  }
  else {
    return IfcServiceLifeTypeEnum_UNSET;
  }
}

void IfcServiceLife::setServiceLifeType(IfcServiceLifeTypeEnum value) {
  m_serviceLifeType = value;
}

IfcTimeMeasure IfcServiceLife::getServiceLifeDuration() {
  if (Step::BaseObject::inited()) {
    return m_serviceLifeDuration;
  }
  else {
    return getUnset(m_serviceLifeDuration);
  }
}

void IfcServiceLife::setServiceLifeDuration(IfcTimeMeasure value) {
  m_serviceLifeDuration = value;
}

void IfcServiceLife::release() {
  IfcControl::release();
}

bool IfcServiceLife::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
  }
  else {
    if (arg == ".ACTUALSERVICELIFE.") {
      m_serviceLifeType = IfcServiceLifeTypeEnum_ACTUALSERVICELIFE;
    }
    else if (arg == ".EXPECTEDSERVICELIFE.") {
      m_serviceLifeType = IfcServiceLifeTypeEnum_EXPECTEDSERVICELIFE;
    }
    else if (arg == ".OPTIMISTICREFERENCESERVICELIFE.") {
      m_serviceLifeType = IfcServiceLifeTypeEnum_OPTIMISTICREFERENCESERVICELIFE;
    }
    else if (arg == ".PESSIMISTICREFERENCESERVICELIFE.") {
      m_serviceLifeType = IfcServiceLifeTypeEnum_PESSIMISTICREFERENCESERVICELIFE;
    }
    else if (arg == ".REFERENCESERVICELIFE.") {
      m_serviceLifeType = IfcServiceLifeTypeEnum_REFERENCESERVICELIFE;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_serviceLifeDuration = getUnset(m_serviceLifeDuration);
  }
  else {
    m_serviceLifeDuration = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcServiceLife::s_type = new Step::ClassType_class("IfcServiceLife");
IfcServiceLife_Factory::IfcServiceLife_Factory() {
}

IfcServiceLife_Factory::~IfcServiceLife_Factory() {
  clear(true);
}

void IfcServiceLife_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcServiceLife_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcServiceLife_Factory::end() {
  return m_idMap.end();
}

IfcServiceLife *IfcServiceLife_Factory::get(Step::StepId id) {
  IfcServiceLife *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcServiceLife * > (it->second);
  }
  else {
    LOG_ERROR("IfcServiceLife_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcServiceLife * > (create(id));
  }
}

Step::BaseObject *IfcServiceLife_Factory::create(Step::StepId id) {
  IfcServiceLife *ret = new IfcServiceLife(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcServiceLife_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcServiceLife *ret = new IfcServiceLife(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcServiceLife_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcServiceLife *ret = new IfcServiceLife(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcServiceLife *IfcServiceLife_Factory::generate() {
  return static_cast< IfcServiceLife * > (create(m_model->getNewId()));
}

IfcServiceLife *IfcServiceLife_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcServiceLife * > (it->second);
  }
  else {
    return NULL;
  }
}

