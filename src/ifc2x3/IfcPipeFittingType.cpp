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
#include <ifc2x3/IfcPipeFittingType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPipeFittingType::IfcPipeFittingType(Step::SPFData *args) : IfcFlowFittingType(args) {
  m_predefinedType = IfcPipeFittingTypeEnum_UNSET;
}


IfcPipeFittingType::~IfcPipeFittingType() {
}

bool IfcPipeFittingType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPipeFittingType(this);
}

const char *IfcPipeFittingType::type() {
  return "IfcPipeFittingType";
}

Step::ClassType IfcPipeFittingType::getClassType() {
  return IfcPipeFittingType::s_type;
}

Step::ClassType IfcPipeFittingType::getType() const {
  return IfcPipeFittingType::s_type;
}

bool IfcPipeFittingType::isOfType(Step::ClassType t) {
  return IfcPipeFittingType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcPipeFittingTypeEnum IfcPipeFittingType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcPipeFittingTypeEnum_UNSET;
  }
}

void IfcPipeFittingType::setPredefinedType(IfcPipeFittingTypeEnum value) {
  m_predefinedType = value;
}

void IfcPipeFittingType::release() {
  IfcFlowFittingType::release();
}

bool IfcPipeFittingType::init() {
  bool status = IfcFlowFittingType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcPipeFittingTypeEnum_UNSET;
  }
  else {
    if (arg == ".BEND.") {
      m_predefinedType = IfcPipeFittingTypeEnum_BEND;
    }
    else if (arg == ".CONNECTOR.") {
      m_predefinedType = IfcPipeFittingTypeEnum_CONNECTOR;
    }
    else if (arg == ".ENTRY.") {
      m_predefinedType = IfcPipeFittingTypeEnum_ENTRY;
    }
    else if (arg == ".EXIT.") {
      m_predefinedType = IfcPipeFittingTypeEnum_EXIT;
    }
    else if (arg == ".JUNCTION.") {
      m_predefinedType = IfcPipeFittingTypeEnum_JUNCTION;
    }
    else if (arg == ".OBSTRUCTION.") {
      m_predefinedType = IfcPipeFittingTypeEnum_OBSTRUCTION;
    }
    else if (arg == ".TRANSITION.") {
      m_predefinedType = IfcPipeFittingTypeEnum_TRANSITION;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcPipeFittingTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcPipeFittingTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPipeFittingType::s_type = new Step::ClassType_class("IfcPipeFittingType");
IfcPipeFittingType_Factory::IfcPipeFittingType_Factory() {
}

IfcPipeFittingType_Factory::~IfcPipeFittingType_Factory() {
  clear(true);
}

void IfcPipeFittingType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPipeFittingType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPipeFittingType_Factory::end() {
  return m_idMap.end();
}

IfcPipeFittingType *IfcPipeFittingType_Factory::get(Step::StepId id) {
  IfcPipeFittingType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPipeFittingType * > (it->second);
  }
  else {
    LOG_ERROR("IfcPipeFittingType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPipeFittingType * > (create(id));
  }
}

Step::BaseObject *IfcPipeFittingType_Factory::create(Step::StepId id) {
  IfcPipeFittingType *ret = new IfcPipeFittingType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPipeFittingType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPipeFittingType *ret = new IfcPipeFittingType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPipeFittingType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPipeFittingType *ret = new IfcPipeFittingType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPipeFittingType *IfcPipeFittingType_Factory::generate() {
  return static_cast< IfcPipeFittingType * > (create(m_model->getNewId()));
}

IfcPipeFittingType *IfcPipeFittingType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPipeFittingType * > (it->second);
  }
  else {
    return NULL;
  }
}

