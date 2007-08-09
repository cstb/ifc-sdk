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
#include <ifc2x3/IfcWallType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWallType::IfcWallType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcWallTypeEnum_UNSET;
}


IfcWallType::~IfcWallType() {
}

bool IfcWallType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWallType(this);
}

const char *IfcWallType::type() {
  return "IfcWallType";
}

Step::ClassType IfcWallType::getClassType() {
  return IfcWallType::s_type;
}

Step::ClassType IfcWallType::getType() const {
  return IfcWallType::s_type;
}

bool IfcWallType::isOfType(Step::ClassType t) {
  return IfcWallType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcWallTypeEnum IfcWallType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcWallTypeEnum_UNSET;
  }
}

void IfcWallType::setPredefinedType(IfcWallTypeEnum value) {
  m_predefinedType = value;
}

void IfcWallType::release() {
  IfcBuildingElementType::release();
}

bool IfcWallType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcWallTypeEnum_UNSET;
  }
  else {
    if (arg == ".STANDARD.") {
      m_predefinedType = IfcWallTypeEnum_STANDARD;
    }
    else if (arg == ".POLYGONAL.") {
      m_predefinedType = IfcWallTypeEnum_POLYGONAL;
    }
    else if (arg == ".SHEAR.") {
      m_predefinedType = IfcWallTypeEnum_SHEAR;
    }
    else if (arg == ".ELEMENTEDWALL.") {
      m_predefinedType = IfcWallTypeEnum_ELEMENTEDWALL;
    }
    else if (arg == ".PLUMBINGWALL.") {
      m_predefinedType = IfcWallTypeEnum_PLUMBINGWALL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcWallTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcWallTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcWallType::s_type = new Step::ClassType_class("IfcWallType");
IfcWallType_Factory::IfcWallType_Factory() {
}

IfcWallType_Factory::~IfcWallType_Factory() {
  clear(true);
}

void IfcWallType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWallType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWallType_Factory::end() {
  return m_idMap.end();
}

IfcWallType *IfcWallType_Factory::get(Step::StepId id) {
  IfcWallType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWallType * > (it->second);
  }
  else {
    LOG_ERROR("IfcWallType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWallType * > (create(id));
  }
}

Step::BaseObject *IfcWallType_Factory::create(Step::StepId id) {
  IfcWallType *ret = new IfcWallType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWallType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWallType *ret = new IfcWallType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWallType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWallType *ret = new IfcWallType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWallType *IfcWallType_Factory::generate() {
  return static_cast< IfcWallType * > (create(m_model->getNewId()));
}

IfcWallType *IfcWallType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWallType * > (it->second);
  }
  else {
    return NULL;
  }
}

