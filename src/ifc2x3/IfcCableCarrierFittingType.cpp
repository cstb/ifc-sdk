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
#include <ifc2x3/IfcCableCarrierFittingType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCableCarrierFittingType::IfcCableCarrierFittingType(Step::SPFData *args) : IfcFlowFittingType(args) {
  m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
}


IfcCableCarrierFittingType::~IfcCableCarrierFittingType() {
}

bool IfcCableCarrierFittingType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCableCarrierFittingType(this);
}

const char *IfcCableCarrierFittingType::type() {
  return "IfcCableCarrierFittingType";
}

Step::ClassType IfcCableCarrierFittingType::getClassType() {
  return IfcCableCarrierFittingType::s_type;
}

Step::ClassType IfcCableCarrierFittingType::getType() const {
  return IfcCableCarrierFittingType::s_type;
}

bool IfcCableCarrierFittingType::isOfType(Step::ClassType t) {
  return IfcCableCarrierFittingType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcCableCarrierFittingTypeEnum IfcCableCarrierFittingType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCableCarrierFittingTypeEnum_UNSET;
  }
}

void IfcCableCarrierFittingType::setPredefinedType(IfcCableCarrierFittingTypeEnum value) {
  m_predefinedType = value;
}

void IfcCableCarrierFittingType::release() {
  IfcFlowFittingType::release();
}

bool IfcCableCarrierFittingType::init() {
  bool status = IfcFlowFittingType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
  }
  else {
    if (arg == ".BEND.") {
      m_predefinedType = IfcCableCarrierFittingTypeEnum_BEND;
    }
    else if (arg == ".CROSS.") {
      m_predefinedType = IfcCableCarrierFittingTypeEnum_CROSS;
    }
    else if (arg == ".REDUCER.") {
      m_predefinedType = IfcCableCarrierFittingTypeEnum_REDUCER;
    }
    else if (arg == ".TEE.") {
      m_predefinedType = IfcCableCarrierFittingTypeEnum_TEE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCableCarrierFittingTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCableCarrierFittingTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCableCarrierFittingType::s_type = new Step::ClassType_class("IfcCableCarrierFittingType");
IfcCableCarrierFittingType_Factory::IfcCableCarrierFittingType_Factory() {
}

IfcCableCarrierFittingType_Factory::~IfcCableCarrierFittingType_Factory() {
  clear(true);
}

void IfcCableCarrierFittingType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCableCarrierFittingType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCableCarrierFittingType_Factory::end() {
  return m_idMap.end();
}

IfcCableCarrierFittingType *IfcCableCarrierFittingType_Factory::get(Step::StepId id) {
  IfcCableCarrierFittingType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCableCarrierFittingType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCableCarrierFittingType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCableCarrierFittingType * > (create(id));
  }
}

Step::BaseObject *IfcCableCarrierFittingType_Factory::create(Step::StepId id) {
  IfcCableCarrierFittingType *ret = new IfcCableCarrierFittingType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCableCarrierFittingType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCableCarrierFittingType *ret = new IfcCableCarrierFittingType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCableCarrierFittingType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCableCarrierFittingType *ret = new IfcCableCarrierFittingType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCableCarrierFittingType *IfcCableCarrierFittingType_Factory::generate() {
  return static_cast< IfcCableCarrierFittingType * > (create(m_model->getNewId()));
}

IfcCableCarrierFittingType *IfcCableCarrierFittingType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCableCarrierFittingType * > (it->second);
  }
  else {
    return NULL;
  }
}

