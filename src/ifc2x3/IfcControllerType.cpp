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
#include <ifc2x3/IfcControllerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcControllerType::IfcControllerType(Step::SPFData *args) : IfcDistributionControlElementType(args) {
  m_predefinedType = IfcControllerTypeEnum_UNSET;
}


IfcControllerType::~IfcControllerType() {
}

bool IfcControllerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcControllerType(this);
}

const char *IfcControllerType::type() {
  return "IfcControllerType";
}

Step::ClassType IfcControllerType::getClassType() {
  return IfcControllerType::s_type;
}

Step::ClassType IfcControllerType::getType() const {
  return IfcControllerType::s_type;
}

bool IfcControllerType::isOfType(Step::ClassType t) {
  return IfcControllerType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcControllerTypeEnum IfcControllerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcControllerTypeEnum_UNSET;
  }
}

void IfcControllerType::setPredefinedType(IfcControllerTypeEnum value) {
  m_predefinedType = value;
}

void IfcControllerType::release() {
  IfcDistributionControlElementType::release();
}

bool IfcControllerType::init() {
  bool status = IfcDistributionControlElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcControllerTypeEnum_UNSET;
  }
  else {
    if (arg == ".FLOATING.") {
      m_predefinedType = IfcControllerTypeEnum_FLOATING;
    }
    else if (arg == ".PROPORTIONAL.") {
      m_predefinedType = IfcControllerTypeEnum_PROPORTIONAL;
    }
    else if (arg == ".PROPORTIONALINTEGRAL.") {
      m_predefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRAL;
    }
    else if (arg == ".PROPORTIONALINTEGRALDERIVATIVE.") {
      m_predefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRALDERIVATIVE;
    }
    else if (arg == ".TIMEDTWOPOSITION.") {
      m_predefinedType = IfcControllerTypeEnum_TIMEDTWOPOSITION;
    }
    else if (arg == ".TWOPOSITION.") {
      m_predefinedType = IfcControllerTypeEnum_TWOPOSITION;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcControllerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcControllerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcControllerType::s_type = new Step::ClassType_class("IfcControllerType");
IfcControllerType_Factory::IfcControllerType_Factory() {
}

IfcControllerType_Factory::~IfcControllerType_Factory() {
  clear(true);
}

void IfcControllerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcControllerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcControllerType_Factory::end() {
  return m_idMap.end();
}

IfcControllerType *IfcControllerType_Factory::get(Step::StepId id) {
  IfcControllerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcControllerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcControllerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcControllerType * > (create(id));
  }
}

Step::BaseObject *IfcControllerType_Factory::create(Step::StepId id) {
  IfcControllerType *ret = new IfcControllerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcControllerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcControllerType *ret = new IfcControllerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcControllerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcControllerType *ret = new IfcControllerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcControllerType *IfcControllerType_Factory::generate() {
  return static_cast< IfcControllerType * > (create(m_model->getNewId()));
}

IfcControllerType *IfcControllerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcControllerType * > (it->second);
  }
  else {
    return NULL;
  }
}

