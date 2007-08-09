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
#include <ifc2x3/IfcLampType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLampType::IfcLampType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcLampTypeEnum_UNSET;
}


IfcLampType::~IfcLampType() {
}

bool IfcLampType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLampType(this);
}

const char *IfcLampType::type() {
  return "IfcLampType";
}

Step::ClassType IfcLampType::getClassType() {
  return IfcLampType::s_type;
}

Step::ClassType IfcLampType::getType() const {
  return IfcLampType::s_type;
}

bool IfcLampType::isOfType(Step::ClassType t) {
  return IfcLampType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcLampTypeEnum IfcLampType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcLampTypeEnum_UNSET;
  }
}

void IfcLampType::setPredefinedType(IfcLampTypeEnum value) {
  m_predefinedType = value;
}

void IfcLampType::release() {
  IfcFlowTerminalType::release();
}

bool IfcLampType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcLampTypeEnum_UNSET;
  }
  else {
    if (arg == ".COMPACTFLUORESCENT.") {
      m_predefinedType = IfcLampTypeEnum_COMPACTFLUORESCENT;
    }
    else if (arg == ".FLUORESCENT.") {
      m_predefinedType = IfcLampTypeEnum_FLUORESCENT;
    }
    else if (arg == ".HIGHPRESSUREMERCURY.") {
      m_predefinedType = IfcLampTypeEnum_HIGHPRESSUREMERCURY;
    }
    else if (arg == ".HIGHPRESSURESODIUM.") {
      m_predefinedType = IfcLampTypeEnum_HIGHPRESSURESODIUM;
    }
    else if (arg == ".METALHALIDE.") {
      m_predefinedType = IfcLampTypeEnum_METALHALIDE;
    }
    else if (arg == ".TUNGSTENFILAMENT.") {
      m_predefinedType = IfcLampTypeEnum_TUNGSTENFILAMENT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcLampTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcLampTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLampType::s_type = new Step::ClassType_class("IfcLampType");
IfcLampType_Factory::IfcLampType_Factory() {
}

IfcLampType_Factory::~IfcLampType_Factory() {
  clear(true);
}

void IfcLampType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLampType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLampType_Factory::end() {
  return m_idMap.end();
}

IfcLampType *IfcLampType_Factory::get(Step::StepId id) {
  IfcLampType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLampType * > (it->second);
  }
  else {
    LOG_ERROR("IfcLampType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLampType * > (create(id));
  }
}

Step::BaseObject *IfcLampType_Factory::create(Step::StepId id) {
  IfcLampType *ret = new IfcLampType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLampType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLampType *ret = new IfcLampType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLampType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLampType *ret = new IfcLampType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLampType *IfcLampType_Factory::generate() {
  return static_cast< IfcLampType * > (create(m_model->getNewId()));
}

IfcLampType *IfcLampType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLampType * > (it->second);
  }
  else {
    return NULL;
  }
}

