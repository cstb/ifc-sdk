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
#include <ifc2x3/IfcCurtainWallType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurtainWallType::IfcCurtainWallType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcCurtainWallTypeEnum_UNSET;
}


IfcCurtainWallType::~IfcCurtainWallType() {
}

bool IfcCurtainWallType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurtainWallType(this);
}

const char *IfcCurtainWallType::type() {
  return "IfcCurtainWallType";
}

Step::ClassType IfcCurtainWallType::getClassType() {
  return IfcCurtainWallType::s_type;
}

Step::ClassType IfcCurtainWallType::getType() const {
  return IfcCurtainWallType::s_type;
}

bool IfcCurtainWallType::isOfType(Step::ClassType t) {
  return IfcCurtainWallType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcCurtainWallTypeEnum IfcCurtainWallType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCurtainWallTypeEnum_UNSET;
  }
}

void IfcCurtainWallType::setPredefinedType(IfcCurtainWallTypeEnum value) {
  m_predefinedType = value;
}

void IfcCurtainWallType::release() {
  IfcBuildingElementType::release();
}

bool IfcCurtainWallType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCurtainWallTypeEnum_UNSET;
  }
  else {
    if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCurtainWallTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCurtainWallTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurtainWallType::s_type = new Step::ClassType_class("IfcCurtainWallType");
IfcCurtainWallType_Factory::IfcCurtainWallType_Factory() {
}

IfcCurtainWallType_Factory::~IfcCurtainWallType_Factory() {
  clear(true);
}

void IfcCurtainWallType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurtainWallType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurtainWallType_Factory::end() {
  return m_idMap.end();
}

IfcCurtainWallType *IfcCurtainWallType_Factory::get(Step::StepId id) {
  IfcCurtainWallType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurtainWallType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurtainWallType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurtainWallType * > (create(id));
  }
}

Step::BaseObject *IfcCurtainWallType_Factory::create(Step::StepId id) {
  IfcCurtainWallType *ret = new IfcCurtainWallType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurtainWallType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurtainWallType *ret = new IfcCurtainWallType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurtainWallType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurtainWallType *ret = new IfcCurtainWallType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurtainWallType *IfcCurtainWallType_Factory::generate() {
  return static_cast< IfcCurtainWallType * > (create(m_model->getNewId()));
}

IfcCurtainWallType *IfcCurtainWallType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurtainWallType * > (it->second);
  }
  else {
    return NULL;
  }
}

