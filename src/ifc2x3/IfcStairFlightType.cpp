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
#include <ifc2x3/IfcStairFlightType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStairFlightType::IfcStairFlightType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcStairFlightTypeEnum_UNSET;
}


IfcStairFlightType::~IfcStairFlightType() {
}

bool IfcStairFlightType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStairFlightType(this);
}

const char *IfcStairFlightType::type() {
  return "IfcStairFlightType";
}

Step::ClassType IfcStairFlightType::getClassType() {
  return IfcStairFlightType::s_type;
}

Step::ClassType IfcStairFlightType::getType() const {
  return IfcStairFlightType::s_type;
}

bool IfcStairFlightType::isOfType(Step::ClassType t) {
  return IfcStairFlightType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcStairFlightTypeEnum IfcStairFlightType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcStairFlightTypeEnum_UNSET;
  }
}

void IfcStairFlightType::setPredefinedType(IfcStairFlightTypeEnum value) {
  m_predefinedType = value;
}

void IfcStairFlightType::release() {
  IfcBuildingElementType::release();
}

bool IfcStairFlightType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcStairFlightTypeEnum_UNSET;
  }
  else {
    if (arg == ".STRAIGHT.") {
      m_predefinedType = IfcStairFlightTypeEnum_STRAIGHT;
    }
    else if (arg == ".WINDER.") {
      m_predefinedType = IfcStairFlightTypeEnum_WINDER;
    }
    else if (arg == ".SPIRAL.") {
      m_predefinedType = IfcStairFlightTypeEnum_SPIRAL;
    }
    else if (arg == ".CURVED.") {
      m_predefinedType = IfcStairFlightTypeEnum_CURVED;
    }
    else if (arg == ".FREEFORM.") {
      m_predefinedType = IfcStairFlightTypeEnum_FREEFORM;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcStairFlightTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcStairFlightTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStairFlightType::s_type = new Step::ClassType_class("IfcStairFlightType");
IfcStairFlightType_Factory::IfcStairFlightType_Factory() {
}

IfcStairFlightType_Factory::~IfcStairFlightType_Factory() {
  clear(true);
}

void IfcStairFlightType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStairFlightType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStairFlightType_Factory::end() {
  return m_idMap.end();
}

IfcStairFlightType *IfcStairFlightType_Factory::get(Step::StepId id) {
  IfcStairFlightType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStairFlightType * > (it->second);
  }
  else {
    LOG_ERROR("IfcStairFlightType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStairFlightType * > (create(id));
  }
}

Step::BaseObject *IfcStairFlightType_Factory::create(Step::StepId id) {
  IfcStairFlightType *ret = new IfcStairFlightType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStairFlightType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStairFlightType *ret = new IfcStairFlightType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStairFlightType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStairFlightType *ret = new IfcStairFlightType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStairFlightType *IfcStairFlightType_Factory::generate() {
  return static_cast< IfcStairFlightType * > (create(m_model->getNewId()));
}

IfcStairFlightType *IfcStairFlightType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStairFlightType * > (it->second);
  }
  else {
    return NULL;
  }
}

