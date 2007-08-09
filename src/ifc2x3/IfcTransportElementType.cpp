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
#include <ifc2x3/IfcTransportElementType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTransportElementType::IfcTransportElementType(Step::SPFData *args) : IfcElementType(args) {
  m_predefinedType = IfcTransportElementTypeEnum_UNSET;
}


IfcTransportElementType::~IfcTransportElementType() {
}

bool IfcTransportElementType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTransportElementType(this);
}

const char *IfcTransportElementType::type() {
  return "IfcTransportElementType";
}

Step::ClassType IfcTransportElementType::getClassType() {
  return IfcTransportElementType::s_type;
}

Step::ClassType IfcTransportElementType::getType() const {
  return IfcTransportElementType::s_type;
}

bool IfcTransportElementType::isOfType(Step::ClassType t) {
  return IfcTransportElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

IfcTransportElementTypeEnum IfcTransportElementType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcTransportElementTypeEnum_UNSET;
  }
}

void IfcTransportElementType::setPredefinedType(IfcTransportElementTypeEnum value) {
  m_predefinedType = value;
}

void IfcTransportElementType::release() {
  IfcElementType::release();
}

bool IfcTransportElementType::init() {
  bool status = IfcElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcTransportElementTypeEnum_UNSET;
  }
  else {
    if (arg == ".ELEVATOR.") {
      m_predefinedType = IfcTransportElementTypeEnum_ELEVATOR;
    }
    else if (arg == ".ESCALATOR.") {
      m_predefinedType = IfcTransportElementTypeEnum_ESCALATOR;
    }
    else if (arg == ".MOVINGWALKWAY.") {
      m_predefinedType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcTransportElementTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcTransportElementTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTransportElementType::s_type = new Step::ClassType_class("IfcTransportElementType");
IfcTransportElementType_Factory::IfcTransportElementType_Factory() {
}

IfcTransportElementType_Factory::~IfcTransportElementType_Factory() {
  clear(true);
}

void IfcTransportElementType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTransportElementType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTransportElementType_Factory::end() {
  return m_idMap.end();
}

IfcTransportElementType *IfcTransportElementType_Factory::get(Step::StepId id) {
  IfcTransportElementType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTransportElementType * > (it->second);
  }
  else {
    LOG_ERROR("IfcTransportElementType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTransportElementType * > (create(id));
  }
}

Step::BaseObject *IfcTransportElementType_Factory::create(Step::StepId id) {
  IfcTransportElementType *ret = new IfcTransportElementType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTransportElementType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTransportElementType *ret = new IfcTransportElementType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTransportElementType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTransportElementType *ret = new IfcTransportElementType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTransportElementType *IfcTransportElementType_Factory::generate() {
  return static_cast< IfcTransportElementType * > (create(m_model->getNewId()));
}

IfcTransportElementType *IfcTransportElementType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTransportElementType * > (it->second);
  }
  else {
    return NULL;
  }
}

