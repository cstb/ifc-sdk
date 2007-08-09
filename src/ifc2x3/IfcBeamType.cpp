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
#include <ifc2x3/IfcBeamType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBeamType::IfcBeamType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcBeamTypeEnum_UNSET;
}


IfcBeamType::~IfcBeamType() {
}

bool IfcBeamType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBeamType(this);
}

const char *IfcBeamType::type() {
  return "IfcBeamType";
}

Step::ClassType IfcBeamType::getClassType() {
  return IfcBeamType::s_type;
}

Step::ClassType IfcBeamType::getType() const {
  return IfcBeamType::s_type;
}

bool IfcBeamType::isOfType(Step::ClassType t) {
  return IfcBeamType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcBeamTypeEnum IfcBeamType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcBeamTypeEnum_UNSET;
  }
}

void IfcBeamType::setPredefinedType(IfcBeamTypeEnum value) {
  m_predefinedType = value;
}

void IfcBeamType::release() {
  IfcBuildingElementType::release();
}

bool IfcBeamType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcBeamTypeEnum_UNSET;
  }
  else {
    if (arg == ".BEAM.") {
      m_predefinedType = IfcBeamTypeEnum_BEAM;
    }
    else if (arg == ".JOIST.") {
      m_predefinedType = IfcBeamTypeEnum_JOIST;
    }
    else if (arg == ".LINTEL.") {
      m_predefinedType = IfcBeamTypeEnum_LINTEL;
    }
    else if (arg == ".T_BEAM.") {
      m_predefinedType = IfcBeamTypeEnum_T_BEAM;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcBeamTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcBeamTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBeamType::s_type = new Step::ClassType_class("IfcBeamType");
IfcBeamType_Factory::IfcBeamType_Factory() {
}

IfcBeamType_Factory::~IfcBeamType_Factory() {
  clear(true);
}

void IfcBeamType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBeamType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBeamType_Factory::end() {
  return m_idMap.end();
}

IfcBeamType *IfcBeamType_Factory::get(Step::StepId id) {
  IfcBeamType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBeamType * > (it->second);
  }
  else {
    LOG_ERROR("IfcBeamType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBeamType * > (create(id));
  }
}

Step::BaseObject *IfcBeamType_Factory::create(Step::StepId id) {
  IfcBeamType *ret = new IfcBeamType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBeamType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBeamType *ret = new IfcBeamType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBeamType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBeamType *ret = new IfcBeamType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBeamType *IfcBeamType_Factory::generate() {
  return static_cast< IfcBeamType * > (create(m_model->getNewId()));
}

IfcBeamType *IfcBeamType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBeamType * > (it->second);
  }
  else {
    return NULL;
  }
}

