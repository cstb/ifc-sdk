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
#include <ifc2x3/IfcRailingType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRailingType::IfcRailingType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcRailingTypeEnum_UNSET;
}


IfcRailingType::~IfcRailingType() {
}

bool IfcRailingType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRailingType(this);
}

const char *IfcRailingType::type() {
  return "IfcRailingType";
}

Step::ClassType IfcRailingType::getClassType() {
  return IfcRailingType::s_type;
}

Step::ClassType IfcRailingType::getType() const {
  return IfcRailingType::s_type;
}

bool IfcRailingType::isOfType(Step::ClassType t) {
  return IfcRailingType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcRailingTypeEnum IfcRailingType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcRailingTypeEnum_UNSET;
  }
}

void IfcRailingType::setPredefinedType(IfcRailingTypeEnum value) {
  m_predefinedType = value;
}

void IfcRailingType::release() {
  IfcBuildingElementType::release();
}

bool IfcRailingType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcRailingTypeEnum_UNSET;
  }
  else {
    if (arg == ".HANDRAIL.") {
      m_predefinedType = IfcRailingTypeEnum_HANDRAIL;
    }
    else if (arg == ".GUARDRAIL.") {
      m_predefinedType = IfcRailingTypeEnum_GUARDRAIL;
    }
    else if (arg == ".BALUSTRADE.") {
      m_predefinedType = IfcRailingTypeEnum_BALUSTRADE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcRailingTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcRailingTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRailingType::s_type = new Step::ClassType_class("IfcRailingType");
IfcRailingType_Factory::IfcRailingType_Factory() {
}

IfcRailingType_Factory::~IfcRailingType_Factory() {
  clear(true);
}

void IfcRailingType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRailingType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRailingType_Factory::end() {
  return m_idMap.end();
}

IfcRailingType *IfcRailingType_Factory::get(Step::StepId id) {
  IfcRailingType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRailingType * > (it->second);
  }
  else {
    LOG_ERROR("IfcRailingType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRailingType * > (create(id));
  }
}

Step::BaseObject *IfcRailingType_Factory::create(Step::StepId id) {
  IfcRailingType *ret = new IfcRailingType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRailingType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRailingType *ret = new IfcRailingType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRailingType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRailingType *ret = new IfcRailingType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRailingType *IfcRailingType_Factory::generate() {
  return static_cast< IfcRailingType * > (create(m_model->getNewId()));
}

IfcRailingType *IfcRailingType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRailingType * > (it->second);
  }
  else {
    return NULL;
  }
}

