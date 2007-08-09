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
#include <ifc2x3/IfcColumnType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcColumnType::IfcColumnType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcColumnTypeEnum_UNSET;
}


IfcColumnType::~IfcColumnType() {
}

bool IfcColumnType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcColumnType(this);
}

const char *IfcColumnType::type() {
  return "IfcColumnType";
}

Step::ClassType IfcColumnType::getClassType() {
  return IfcColumnType::s_type;
}

Step::ClassType IfcColumnType::getType() const {
  return IfcColumnType::s_type;
}

bool IfcColumnType::isOfType(Step::ClassType t) {
  return IfcColumnType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcColumnTypeEnum IfcColumnType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcColumnTypeEnum_UNSET;
  }
}

void IfcColumnType::setPredefinedType(IfcColumnTypeEnum value) {
  m_predefinedType = value;
}

void IfcColumnType::release() {
  IfcBuildingElementType::release();
}

bool IfcColumnType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcColumnTypeEnum_UNSET;
  }
  else {
    if (arg == ".COLUMN.") {
      m_predefinedType = IfcColumnTypeEnum_COLUMN;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcColumnTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcColumnTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcColumnType::s_type = new Step::ClassType_class("IfcColumnType");
IfcColumnType_Factory::IfcColumnType_Factory() {
}

IfcColumnType_Factory::~IfcColumnType_Factory() {
  clear(true);
}

void IfcColumnType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcColumnType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcColumnType_Factory::end() {
  return m_idMap.end();
}

IfcColumnType *IfcColumnType_Factory::get(Step::StepId id) {
  IfcColumnType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcColumnType * > (it->second);
  }
  else {
    LOG_ERROR("IfcColumnType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcColumnType * > (create(id));
  }
}

Step::BaseObject *IfcColumnType_Factory::create(Step::StepId id) {
  IfcColumnType *ret = new IfcColumnType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcColumnType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcColumnType *ret = new IfcColumnType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcColumnType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcColumnType *ret = new IfcColumnType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcColumnType *IfcColumnType_Factory::generate() {
  return static_cast< IfcColumnType * > (create(m_model->getNewId()));
}

IfcColumnType *IfcColumnType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcColumnType * > (it->second);
  }
  else {
    return NULL;
  }
}

