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
#include <ifc2x3/IfcCoveringType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCoveringType::IfcCoveringType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcCoveringTypeEnum_UNSET;
}


IfcCoveringType::~IfcCoveringType() {
}

bool IfcCoveringType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCoveringType(this);
}

const char *IfcCoveringType::type() {
  return "IfcCoveringType";
}

Step::ClassType IfcCoveringType::getClassType() {
  return IfcCoveringType::s_type;
}

Step::ClassType IfcCoveringType::getType() const {
  return IfcCoveringType::s_type;
}

bool IfcCoveringType::isOfType(Step::ClassType t) {
  return IfcCoveringType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcCoveringTypeEnum IfcCoveringType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCoveringTypeEnum_UNSET;
  }
}

void IfcCoveringType::setPredefinedType(IfcCoveringTypeEnum value) {
  m_predefinedType = value;
}

void IfcCoveringType::release() {
  IfcBuildingElementType::release();
}

bool IfcCoveringType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
  }
  else {
    if (arg == ".CEILING.") {
      m_predefinedType = IfcCoveringTypeEnum_CEILING;
    }
    else if (arg == ".FLOORING.") {
      m_predefinedType = IfcCoveringTypeEnum_FLOORING;
    }
    else if (arg == ".CLADDING.") {
      m_predefinedType = IfcCoveringTypeEnum_CLADDING;
    }
    else if (arg == ".ROOFING.") {
      m_predefinedType = IfcCoveringTypeEnum_ROOFING;
    }
    else if (arg == ".INSULATION.") {
      m_predefinedType = IfcCoveringTypeEnum_INSULATION;
    }
    else if (arg == ".MEMBRANE.") {
      m_predefinedType = IfcCoveringTypeEnum_MEMBRANE;
    }
    else if (arg == ".SLEEVING.") {
      m_predefinedType = IfcCoveringTypeEnum_SLEEVING;
    }
    else if (arg == ".WRAPPING.") {
      m_predefinedType = IfcCoveringTypeEnum_WRAPPING;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCoveringTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCoveringTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCoveringType::s_type = new Step::ClassType_class("IfcCoveringType");
IfcCoveringType_Factory::IfcCoveringType_Factory() {
}

IfcCoveringType_Factory::~IfcCoveringType_Factory() {
  clear(true);
}

void IfcCoveringType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCoveringType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCoveringType_Factory::end() {
  return m_idMap.end();
}

IfcCoveringType *IfcCoveringType_Factory::get(Step::StepId id) {
  IfcCoveringType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCoveringType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCoveringType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCoveringType * > (create(id));
  }
}

Step::BaseObject *IfcCoveringType_Factory::create(Step::StepId id) {
  IfcCoveringType *ret = new IfcCoveringType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCoveringType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCoveringType *ret = new IfcCoveringType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCoveringType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCoveringType *ret = new IfcCoveringType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCoveringType *IfcCoveringType_Factory::generate() {
  return static_cast< IfcCoveringType * > (create(m_model->getNewId()));
}

IfcCoveringType *IfcCoveringType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCoveringType * > (it->second);
  }
  else {
    return NULL;
  }
}

