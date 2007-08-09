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
#include <ifc2x3/IfcOutletType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOutletType::IfcOutletType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcOutletTypeEnum_UNSET;
}


IfcOutletType::~IfcOutletType() {
}

bool IfcOutletType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOutletType(this);
}

const char *IfcOutletType::type() {
  return "IfcOutletType";
}

Step::ClassType IfcOutletType::getClassType() {
  return IfcOutletType::s_type;
}

Step::ClassType IfcOutletType::getType() const {
  return IfcOutletType::s_type;
}

bool IfcOutletType::isOfType(Step::ClassType t) {
  return IfcOutletType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcOutletTypeEnum IfcOutletType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcOutletTypeEnum_UNSET;
  }
}

void IfcOutletType::setPredefinedType(IfcOutletTypeEnum value) {
  m_predefinedType = value;
}

void IfcOutletType::release() {
  IfcFlowTerminalType::release();
}

bool IfcOutletType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcOutletTypeEnum_UNSET;
  }
  else {
    if (arg == ".AUDIOVISUALOUTLET.") {
      m_predefinedType = IfcOutletTypeEnum_AUDIOVISUALOUTLET;
    }
    else if (arg == ".COMMUNICATIONSOUTLET.") {
      m_predefinedType = IfcOutletTypeEnum_COMMUNICATIONSOUTLET;
    }
    else if (arg == ".POWEROUTLET.") {
      m_predefinedType = IfcOutletTypeEnum_POWEROUTLET;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcOutletTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcOutletTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOutletType::s_type = new Step::ClassType_class("IfcOutletType");
IfcOutletType_Factory::IfcOutletType_Factory() {
}

IfcOutletType_Factory::~IfcOutletType_Factory() {
  clear(true);
}

void IfcOutletType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOutletType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOutletType_Factory::end() {
  return m_idMap.end();
}

IfcOutletType *IfcOutletType_Factory::get(Step::StepId id) {
  IfcOutletType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOutletType * > (it->second);
  }
  else {
    LOG_ERROR("IfcOutletType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOutletType * > (create(id));
  }
}

Step::BaseObject *IfcOutletType_Factory::create(Step::StepId id) {
  IfcOutletType *ret = new IfcOutletType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOutletType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOutletType *ret = new IfcOutletType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOutletType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOutletType *ret = new IfcOutletType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOutletType *IfcOutletType_Factory::generate() {
  return static_cast< IfcOutletType * > (create(m_model->getNewId()));
}

IfcOutletType *IfcOutletType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOutletType * > (it->second);
  }
  else {
    return NULL;
  }
}

