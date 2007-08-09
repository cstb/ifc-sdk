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
#include <ifc2x3/IfcLightFixtureType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLightFixtureType::IfcLightFixtureType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
}


IfcLightFixtureType::~IfcLightFixtureType() {
}

bool IfcLightFixtureType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightFixtureType(this);
}

const char *IfcLightFixtureType::type() {
  return "IfcLightFixtureType";
}

Step::ClassType IfcLightFixtureType::getClassType() {
  return IfcLightFixtureType::s_type;
}

Step::ClassType IfcLightFixtureType::getType() const {
  return IfcLightFixtureType::s_type;
}

bool IfcLightFixtureType::isOfType(Step::ClassType t) {
  return IfcLightFixtureType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcLightFixtureTypeEnum IfcLightFixtureType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcLightFixtureTypeEnum_UNSET;
  }
}

void IfcLightFixtureType::setPredefinedType(IfcLightFixtureTypeEnum value) {
  m_predefinedType = value;
}

void IfcLightFixtureType::release() {
  IfcFlowTerminalType::release();
}

bool IfcLightFixtureType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
  }
  else {
    if (arg == ".POINTSOURCE.") {
      m_predefinedType = IfcLightFixtureTypeEnum_POINTSOURCE;
    }
    else if (arg == ".DIRECTIONSOURCE.") {
      m_predefinedType = IfcLightFixtureTypeEnum_DIRECTIONSOURCE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcLightFixtureTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcLightFixtureTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightFixtureType::s_type = new Step::ClassType_class("IfcLightFixtureType");
IfcLightFixtureType_Factory::IfcLightFixtureType_Factory() {
}

IfcLightFixtureType_Factory::~IfcLightFixtureType_Factory() {
  clear(true);
}

void IfcLightFixtureType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightFixtureType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightFixtureType_Factory::end() {
  return m_idMap.end();
}

IfcLightFixtureType *IfcLightFixtureType_Factory::get(Step::StepId id) {
  IfcLightFixtureType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLightFixtureType * > (it->second);
  }
  else {
    LOG_ERROR("IfcLightFixtureType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLightFixtureType * > (create(id));
  }
}

Step::BaseObject *IfcLightFixtureType_Factory::create(Step::StepId id) {
  IfcLightFixtureType *ret = new IfcLightFixtureType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLightFixtureType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLightFixtureType *ret = new IfcLightFixtureType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLightFixtureType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLightFixtureType *ret = new IfcLightFixtureType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLightFixtureType *IfcLightFixtureType_Factory::generate() {
  return static_cast< IfcLightFixtureType * > (create(m_model->getNewId()));
}

IfcLightFixtureType *IfcLightFixtureType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLightFixtureType * > (it->second);
  }
  else {
    return NULL;
  }
}

