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
#include <ifc2x3/IfcCompressorType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCompressorType::IfcCompressorType(Step::SPFData *args) : IfcFlowMovingDeviceType(args) {
  m_predefinedType = IfcCompressorTypeEnum_UNSET;
}


IfcCompressorType::~IfcCompressorType() {
}

bool IfcCompressorType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCompressorType(this);
}

const char *IfcCompressorType::type() {
  return "IfcCompressorType";
}

Step::ClassType IfcCompressorType::getClassType() {
  return IfcCompressorType::s_type;
}

Step::ClassType IfcCompressorType::getType() const {
  return IfcCompressorType::s_type;
}

bool IfcCompressorType::isOfType(Step::ClassType t) {
  return IfcCompressorType::s_type == t ? true : IfcFlowMovingDeviceType::isOfType(t);
}

IfcCompressorTypeEnum IfcCompressorType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCompressorTypeEnum_UNSET;
  }
}

void IfcCompressorType::setPredefinedType(IfcCompressorTypeEnum value) {
  m_predefinedType = value;
}

void IfcCompressorType::release() {
  IfcFlowMovingDeviceType::release();
}

bool IfcCompressorType::init() {
  bool status = IfcFlowMovingDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCompressorTypeEnum_UNSET;
  }
  else {
    if (arg == ".DYNAMIC.") {
      m_predefinedType = IfcCompressorTypeEnum_DYNAMIC;
    }
    else if (arg == ".RECIPROCATING.") {
      m_predefinedType = IfcCompressorTypeEnum_RECIPROCATING;
    }
    else if (arg == ".ROTARY.") {
      m_predefinedType = IfcCompressorTypeEnum_ROTARY;
    }
    else if (arg == ".SCROLL.") {
      m_predefinedType = IfcCompressorTypeEnum_SCROLL;
    }
    else if (arg == ".TROCHOIDAL.") {
      m_predefinedType = IfcCompressorTypeEnum_TROCHOIDAL;
    }
    else if (arg == ".SINGLESTAGE.") {
      m_predefinedType = IfcCompressorTypeEnum_SINGLESTAGE;
    }
    else if (arg == ".BOOSTER.") {
      m_predefinedType = IfcCompressorTypeEnum_BOOSTER;
    }
    else if (arg == ".OPENTYPE.") {
      m_predefinedType = IfcCompressorTypeEnum_OPENTYPE;
    }
    else if (arg == ".HERMETIC.") {
      m_predefinedType = IfcCompressorTypeEnum_HERMETIC;
    }
    else if (arg == ".SEMIHERMETIC.") {
      m_predefinedType = IfcCompressorTypeEnum_SEMIHERMETIC;
    }
    else if (arg == ".WELDEDSHELLHERMETIC.") {
      m_predefinedType = IfcCompressorTypeEnum_WELDEDSHELLHERMETIC;
    }
    else if (arg == ".ROLLINGPISTON.") {
      m_predefinedType = IfcCompressorTypeEnum_ROLLINGPISTON;
    }
    else if (arg == ".ROTARYVANE.") {
      m_predefinedType = IfcCompressorTypeEnum_ROTARYVANE;
    }
    else if (arg == ".SINGLESCREW.") {
      m_predefinedType = IfcCompressorTypeEnum_SINGLESCREW;
    }
    else if (arg == ".TWINSCREW.") {
      m_predefinedType = IfcCompressorTypeEnum_TWINSCREW;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCompressorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCompressorTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompressorType::s_type = new Step::ClassType_class("IfcCompressorType");
IfcCompressorType_Factory::IfcCompressorType_Factory() {
}

IfcCompressorType_Factory::~IfcCompressorType_Factory() {
  clear(true);
}

void IfcCompressorType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCompressorType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCompressorType_Factory::end() {
  return m_idMap.end();
}

IfcCompressorType *IfcCompressorType_Factory::get(Step::StepId id) {
  IfcCompressorType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCompressorType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCompressorType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCompressorType * > (create(id));
  }
}

Step::BaseObject *IfcCompressorType_Factory::create(Step::StepId id) {
  IfcCompressorType *ret = new IfcCompressorType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCompressorType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCompressorType *ret = new IfcCompressorType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCompressorType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCompressorType *ret = new IfcCompressorType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCompressorType *IfcCompressorType_Factory::generate() {
  return static_cast< IfcCompressorType * > (create(m_model->getNewId()));
}

IfcCompressorType *IfcCompressorType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCompressorType * > (it->second);
  }
  else {
    return NULL;
  }
}

