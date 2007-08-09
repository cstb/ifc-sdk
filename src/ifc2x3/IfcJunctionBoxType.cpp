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
#include <ifc2x3/IfcJunctionBoxType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcJunctionBoxType::IfcJunctionBoxType(Step::SPFData *args) : IfcFlowFittingType(args) {
  m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
}


IfcJunctionBoxType::~IfcJunctionBoxType() {
}

bool IfcJunctionBoxType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcJunctionBoxType(this);
}

const char *IfcJunctionBoxType::type() {
  return "IfcJunctionBoxType";
}

Step::ClassType IfcJunctionBoxType::getClassType() {
  return IfcJunctionBoxType::s_type;
}

Step::ClassType IfcJunctionBoxType::getType() const {
  return IfcJunctionBoxType::s_type;
}

bool IfcJunctionBoxType::isOfType(Step::ClassType t) {
  return IfcJunctionBoxType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcJunctionBoxTypeEnum IfcJunctionBoxType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcJunctionBoxTypeEnum_UNSET;
  }
}

void IfcJunctionBoxType::setPredefinedType(IfcJunctionBoxTypeEnum value) {
  m_predefinedType = value;
}

void IfcJunctionBoxType::release() {
  IfcFlowFittingType::release();
}

bool IfcJunctionBoxType::init() {
  bool status = IfcFlowFittingType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
  }
  else {
    if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcJunctionBoxTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcJunctionBoxTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcJunctionBoxType::s_type = new Step::ClassType_class("IfcJunctionBoxType");
IfcJunctionBoxType_Factory::IfcJunctionBoxType_Factory() {
}

IfcJunctionBoxType_Factory::~IfcJunctionBoxType_Factory() {
  clear(true);
}

void IfcJunctionBoxType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcJunctionBoxType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcJunctionBoxType_Factory::end() {
  return m_idMap.end();
}

IfcJunctionBoxType *IfcJunctionBoxType_Factory::get(Step::StepId id) {
  IfcJunctionBoxType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcJunctionBoxType * > (it->second);
  }
  else {
    LOG_ERROR("IfcJunctionBoxType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcJunctionBoxType * > (create(id));
  }
}

Step::BaseObject *IfcJunctionBoxType_Factory::create(Step::StepId id) {
  IfcJunctionBoxType *ret = new IfcJunctionBoxType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcJunctionBoxType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcJunctionBoxType *ret = new IfcJunctionBoxType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcJunctionBoxType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcJunctionBoxType *ret = new IfcJunctionBoxType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcJunctionBoxType *IfcJunctionBoxType_Factory::generate() {
  return static_cast< IfcJunctionBoxType * > (create(m_model->getNewId()));
}

IfcJunctionBoxType *IfcJunctionBoxType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcJunctionBoxType * > (it->second);
  }
  else {
    return NULL;
  }
}

