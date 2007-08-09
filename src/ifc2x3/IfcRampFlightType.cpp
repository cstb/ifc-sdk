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
#include <ifc2x3/IfcRampFlightType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRampFlightType::IfcRampFlightType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcRampFlightTypeEnum_UNSET;
}


IfcRampFlightType::~IfcRampFlightType() {
}

bool IfcRampFlightType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRampFlightType(this);
}

const char *IfcRampFlightType::type() {
  return "IfcRampFlightType";
}

Step::ClassType IfcRampFlightType::getClassType() {
  return IfcRampFlightType::s_type;
}

Step::ClassType IfcRampFlightType::getType() const {
  return IfcRampFlightType::s_type;
}

bool IfcRampFlightType::isOfType(Step::ClassType t) {
  return IfcRampFlightType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcRampFlightTypeEnum_UNSET;
  }
}

void IfcRampFlightType::setPredefinedType(IfcRampFlightTypeEnum value) {
  m_predefinedType = value;
}

void IfcRampFlightType::release() {
  IfcBuildingElementType::release();
}

bool IfcRampFlightType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcRampFlightTypeEnum_UNSET;
  }
  else {
    if (arg == ".STRAIGHT.") {
      m_predefinedType = IfcRampFlightTypeEnum_STRAIGHT;
    }
    else if (arg == ".SPIRAL.") {
      m_predefinedType = IfcRampFlightTypeEnum_SPIRAL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcRampFlightTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcRampFlightTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRampFlightType::s_type = new Step::ClassType_class("IfcRampFlightType");
IfcRampFlightType_Factory::IfcRampFlightType_Factory() {
}

IfcRampFlightType_Factory::~IfcRampFlightType_Factory() {
  clear(true);
}

void IfcRampFlightType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRampFlightType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRampFlightType_Factory::end() {
  return m_idMap.end();
}

IfcRampFlightType *IfcRampFlightType_Factory::get(Step::StepId id) {
  IfcRampFlightType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRampFlightType * > (it->second);
  }
  else {
    LOG_ERROR("IfcRampFlightType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRampFlightType * > (create(id));
  }
}

Step::BaseObject *IfcRampFlightType_Factory::create(Step::StepId id) {
  IfcRampFlightType *ret = new IfcRampFlightType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRampFlightType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRampFlightType *ret = new IfcRampFlightType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRampFlightType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRampFlightType *ret = new IfcRampFlightType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRampFlightType *IfcRampFlightType_Factory::generate() {
  return static_cast< IfcRampFlightType * > (create(m_model->getNewId()));
}

IfcRampFlightType *IfcRampFlightType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRampFlightType * > (it->second);
  }
  else {
    return NULL;
  }
}

