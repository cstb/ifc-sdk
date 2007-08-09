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
#include <ifc2x3/IfcWasteTerminalType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWasteTerminalType::IfcWasteTerminalType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcWasteTerminalTypeEnum_UNSET;
}


IfcWasteTerminalType::~IfcWasteTerminalType() {
}

bool IfcWasteTerminalType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWasteTerminalType(this);
}

const char *IfcWasteTerminalType::type() {
  return "IfcWasteTerminalType";
}

Step::ClassType IfcWasteTerminalType::getClassType() {
  return IfcWasteTerminalType::s_type;
}

Step::ClassType IfcWasteTerminalType::getType() const {
  return IfcWasteTerminalType::s_type;
}

bool IfcWasteTerminalType::isOfType(Step::ClassType t) {
  return IfcWasteTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcWasteTerminalTypeEnum IfcWasteTerminalType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcWasteTerminalTypeEnum_UNSET;
  }
}

void IfcWasteTerminalType::setPredefinedType(IfcWasteTerminalTypeEnum value) {
  m_predefinedType = value;
}

void IfcWasteTerminalType::release() {
  IfcFlowTerminalType::release();
}

bool IfcWasteTerminalType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcWasteTerminalTypeEnum_UNSET;
  }
  else {
    if (arg == ".FLOORTRAP.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_FLOORTRAP;
    }
    else if (arg == ".FLOORWASTE.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_FLOORWASTE;
    }
    else if (arg == ".GULLYSUMP.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_GULLYSUMP;
    }
    else if (arg == ".GULLYTRAP.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_GULLYTRAP;
    }
    else if (arg == ".GREASEINTERCEPTOR.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_GREASEINTERCEPTOR;
    }
    else if (arg == ".OILINTERCEPTOR.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_OILINTERCEPTOR;
    }
    else if (arg == ".PETROLINTERCEPTOR.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_PETROLINTERCEPTOR;
    }
    else if (arg == ".ROOFDRAIN.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_ROOFDRAIN;
    }
    else if (arg == ".WASTEDISPOSALUNIT.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_WASTEDISPOSALUNIT;
    }
    else if (arg == ".WASTETRAP.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_WASTETRAP;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcWasteTerminalTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcWasteTerminalType::s_type = new Step::ClassType_class("IfcWasteTerminalType");
IfcWasteTerminalType_Factory::IfcWasteTerminalType_Factory() {
}

IfcWasteTerminalType_Factory::~IfcWasteTerminalType_Factory() {
  clear(true);
}

void IfcWasteTerminalType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWasteTerminalType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWasteTerminalType_Factory::end() {
  return m_idMap.end();
}

IfcWasteTerminalType *IfcWasteTerminalType_Factory::get(Step::StepId id) {
  IfcWasteTerminalType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWasteTerminalType * > (it->second);
  }
  else {
    LOG_ERROR("IfcWasteTerminalType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWasteTerminalType * > (create(id));
  }
}

Step::BaseObject *IfcWasteTerminalType_Factory::create(Step::StepId id) {
  IfcWasteTerminalType *ret = new IfcWasteTerminalType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWasteTerminalType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWasteTerminalType *ret = new IfcWasteTerminalType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWasteTerminalType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWasteTerminalType *ret = new IfcWasteTerminalType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWasteTerminalType *IfcWasteTerminalType_Factory::generate() {
  return static_cast< IfcWasteTerminalType * > (create(m_model->getNewId()));
}

IfcWasteTerminalType *IfcWasteTerminalType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWasteTerminalType * > (it->second);
  }
  else {
    return NULL;
  }
}

