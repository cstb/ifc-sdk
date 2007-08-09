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
#include <ifc2x3/IfcPlateType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPlateType::IfcPlateType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcPlateTypeEnum_UNSET;
}


IfcPlateType::~IfcPlateType() {
}

bool IfcPlateType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPlateType(this);
}

const char *IfcPlateType::type() {
  return "IfcPlateType";
}

Step::ClassType IfcPlateType::getClassType() {
  return IfcPlateType::s_type;
}

Step::ClassType IfcPlateType::getType() const {
  return IfcPlateType::s_type;
}

bool IfcPlateType::isOfType(Step::ClassType t) {
  return IfcPlateType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcPlateTypeEnum IfcPlateType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcPlateTypeEnum_UNSET;
  }
}

void IfcPlateType::setPredefinedType(IfcPlateTypeEnum value) {
  m_predefinedType = value;
}

void IfcPlateType::release() {
  IfcBuildingElementType::release();
}

bool IfcPlateType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcPlateTypeEnum_UNSET;
  }
  else {
    if (arg == ".CURTAIN_PANEL.") {
      m_predefinedType = IfcPlateTypeEnum_CURTAIN_PANEL;
    }
    else if (arg == ".SHEET.") {
      m_predefinedType = IfcPlateTypeEnum_SHEET;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcPlateTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcPlateTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlateType::s_type = new Step::ClassType_class("IfcPlateType");
IfcPlateType_Factory::IfcPlateType_Factory() {
}

IfcPlateType_Factory::~IfcPlateType_Factory() {
  clear(true);
}

void IfcPlateType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPlateType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPlateType_Factory::end() {
  return m_idMap.end();
}

IfcPlateType *IfcPlateType_Factory::get(Step::StepId id) {
  IfcPlateType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPlateType * > (it->second);
  }
  else {
    LOG_ERROR("IfcPlateType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPlateType * > (create(id));
  }
}

Step::BaseObject *IfcPlateType_Factory::create(Step::StepId id) {
  IfcPlateType *ret = new IfcPlateType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPlateType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPlateType *ret = new IfcPlateType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPlateType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPlateType *ret = new IfcPlateType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPlateType *IfcPlateType_Factory::generate() {
  return static_cast< IfcPlateType * > (create(m_model->getNewId()));
}

IfcPlateType *IfcPlateType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPlateType * > (it->second);
  }
  else {
    return NULL;
  }
}

