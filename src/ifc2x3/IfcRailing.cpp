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
#include <ifc2x3/IfcRailing.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRailing::IfcRailing(Step::SPFData *args) : IfcBuildingElement(args) {
  m_predefinedType = IfcRailingTypeEnum_UNSET;
}


IfcRailing::~IfcRailing() {
}

bool IfcRailing::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRailing(this);
}

const char *IfcRailing::type() {
  return "IfcRailing";
}

Step::ClassType IfcRailing::getClassType() {
  return IfcRailing::s_type;
}

Step::ClassType IfcRailing::getType() const {
  return IfcRailing::s_type;
}

bool IfcRailing::isOfType(Step::ClassType t) {
  return IfcRailing::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRailingTypeEnum IfcRailing::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcRailingTypeEnum_UNSET;
  }
}

void IfcRailing::setPredefinedType(IfcRailingTypeEnum value) {
  m_predefinedType = value;
}

void IfcRailing::release() {
  IfcBuildingElement::release();
}

bool IfcRailing::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcRailingTypeEnum_UNSET;
  }
  else {
    if (arg == ".HANDRAIL.") {
      m_predefinedType = IfcRailingTypeEnum_HANDRAIL;
    }
    else if (arg == ".GUARDRAIL.") {
      m_predefinedType = IfcRailingTypeEnum_GUARDRAIL;
    }
    else if (arg == ".BALUSTRADE.") {
      m_predefinedType = IfcRailingTypeEnum_BALUSTRADE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcRailingTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcRailingTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRailing::s_type = new Step::ClassType_class("IfcRailing");
IfcRailing_Factory::IfcRailing_Factory() {
}

IfcRailing_Factory::~IfcRailing_Factory() {
  clear(true);
}

void IfcRailing_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRailing_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRailing_Factory::end() {
  return m_idMap.end();
}

IfcRailing *IfcRailing_Factory::get(Step::StepId id) {
  IfcRailing *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRailing * > (it->second);
  }
  else {
    LOG_ERROR("IfcRailing_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRailing * > (create(id));
  }
}

Step::BaseObject *IfcRailing_Factory::create(Step::StepId id) {
  IfcRailing *ret = new IfcRailing(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRailing_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRailing *ret = new IfcRailing(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRailing_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRailing *ret = new IfcRailing(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRailing *IfcRailing_Factory::generate() {
  return static_cast< IfcRailing * > (create(m_model->getNewId()));
}

IfcRailing *IfcRailing_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRailing * > (it->second);
  }
  else {
    return NULL;
  }
}

