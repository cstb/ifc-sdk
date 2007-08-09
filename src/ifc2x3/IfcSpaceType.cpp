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
#include <ifc2x3/IfcSpaceType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSpaceType::IfcSpaceType(Step::SPFData *args) : IfcSpatialStructureElementType(args) {
  m_predefinedType = IfcSpaceTypeEnum_UNSET;
}


IfcSpaceType::~IfcSpaceType() {
}

bool IfcSpaceType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpaceType(this);
}

const char *IfcSpaceType::type() {
  return "IfcSpaceType";
}

Step::ClassType IfcSpaceType::getClassType() {
  return IfcSpaceType::s_type;
}

Step::ClassType IfcSpaceType::getType() const {
  return IfcSpaceType::s_type;
}

bool IfcSpaceType::isOfType(Step::ClassType t) {
  return IfcSpaceType::s_type == t ? true : IfcSpatialStructureElementType::isOfType(t);
}

IfcSpaceTypeEnum IfcSpaceType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcSpaceTypeEnum_UNSET;
  }
}

void IfcSpaceType::setPredefinedType(IfcSpaceTypeEnum value) {
  m_predefinedType = value;
}

void IfcSpaceType::release() {
  IfcSpatialStructureElementType::release();
}

bool IfcSpaceType::init() {
  bool status = IfcSpatialStructureElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcSpaceTypeEnum_UNSET;
  }
  else {
    if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcSpaceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcSpaceTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceType::s_type = new Step::ClassType_class("IfcSpaceType");
IfcSpaceType_Factory::IfcSpaceType_Factory() {
}

IfcSpaceType_Factory::~IfcSpaceType_Factory() {
  clear(true);
}

void IfcSpaceType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceType_Factory::end() {
  return m_idMap.end();
}

IfcSpaceType *IfcSpaceType_Factory::get(Step::StepId id) {
  IfcSpaceType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSpaceType * > (it->second);
  }
  else {
    LOG_ERROR("IfcSpaceType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSpaceType * > (create(id));
  }
}

Step::BaseObject *IfcSpaceType_Factory::create(Step::StepId id) {
  IfcSpaceType *ret = new IfcSpaceType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSpaceType *ret = new IfcSpaceType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSpaceType *ret = new IfcSpaceType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSpaceType *IfcSpaceType_Factory::generate() {
  return static_cast< IfcSpaceType * > (create(m_model->getNewId()));
}

IfcSpaceType *IfcSpaceType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSpaceType * > (it->second);
  }
  else {
    return NULL;
  }
}

