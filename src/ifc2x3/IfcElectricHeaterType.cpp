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
#include <ifc2x3/IfcElectricHeaterType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricHeaterType::IfcElectricHeaterType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
}


IfcElectricHeaterType::~IfcElectricHeaterType() {
}

bool IfcElectricHeaterType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricHeaterType(this);
}

const char *IfcElectricHeaterType::type() {
  return "IfcElectricHeaterType";
}

Step::ClassType IfcElectricHeaterType::getClassType() {
  return IfcElectricHeaterType::s_type;
}

Step::ClassType IfcElectricHeaterType::getType() const {
  return IfcElectricHeaterType::s_type;
}

bool IfcElectricHeaterType::isOfType(Step::ClassType t) {
  return IfcElectricHeaterType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcElectricHeaterTypeEnum IfcElectricHeaterType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElectricHeaterTypeEnum_UNSET;
  }
}

void IfcElectricHeaterType::setPredefinedType(IfcElectricHeaterTypeEnum value) {
  m_predefinedType = value;
}

void IfcElectricHeaterType::release() {
  IfcFlowTerminalType::release();
}

bool IfcElectricHeaterType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
  }
  else {
    if (arg == ".ELECTRICPOINTHEATER.") {
      m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICPOINTHEATER;
    }
    else if (arg == ".ELECTRICCABLEHEATER.") {
      m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICCABLEHEATER;
    }
    else if (arg == ".ELECTRICMATHEATER.") {
      m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICMATHEATER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElectricHeaterTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElectricHeaterTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricHeaterType::s_type = new Step::ClassType_class("IfcElectricHeaterType");
IfcElectricHeaterType_Factory::IfcElectricHeaterType_Factory() {
}

IfcElectricHeaterType_Factory::~IfcElectricHeaterType_Factory() {
  clear(true);
}

void IfcElectricHeaterType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricHeaterType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricHeaterType_Factory::end() {
  return m_idMap.end();
}

IfcElectricHeaterType *IfcElectricHeaterType_Factory::get(Step::StepId id) {
  IfcElectricHeaterType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricHeaterType * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricHeaterType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricHeaterType * > (create(id));
  }
}

Step::BaseObject *IfcElectricHeaterType_Factory::create(Step::StepId id) {
  IfcElectricHeaterType *ret = new IfcElectricHeaterType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricHeaterType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricHeaterType *ret = new IfcElectricHeaterType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricHeaterType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricHeaterType *ret = new IfcElectricHeaterType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricHeaterType *IfcElectricHeaterType_Factory::generate() {
  return static_cast< IfcElectricHeaterType * > (create(m_model->getNewId()));
}

IfcElectricHeaterType *IfcElectricHeaterType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricHeaterType * > (it->second);
  }
  else {
    return NULL;
  }
}

