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
#include <ifc2x3/IfcOccupant.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOccupant::IfcOccupant(Step::SPFData *args) : IfcActor(args) {
  m_predefinedType = IfcOccupantTypeEnum_UNSET;
}


IfcOccupant::~IfcOccupant() {
}

bool IfcOccupant::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOccupant(this);
}

const char *IfcOccupant::type() {
  return "IfcOccupant";
}

Step::ClassType IfcOccupant::getClassType() {
  return IfcOccupant::s_type;
}

Step::ClassType IfcOccupant::getType() const {
  return IfcOccupant::s_type;
}

bool IfcOccupant::isOfType(Step::ClassType t) {
  return IfcOccupant::s_type == t ? true : IfcActor::isOfType(t);
}

IfcOccupantTypeEnum IfcOccupant::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcOccupantTypeEnum_UNSET;
  }
}

void IfcOccupant::setPredefinedType(IfcOccupantTypeEnum value) {
  m_predefinedType = value;
}

void IfcOccupant::release() {
  IfcActor::release();
}

bool IfcOccupant::init() {
  bool status = IfcActor::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcOccupantTypeEnum_UNSET;
  }
  else {
    if (arg == ".ASSIGNEE.") {
      m_predefinedType = IfcOccupantTypeEnum_ASSIGNEE;
    }
    else if (arg == ".ASSIGNOR.") {
      m_predefinedType = IfcOccupantTypeEnum_ASSIGNOR;
    }
    else if (arg == ".LESSEE.") {
      m_predefinedType = IfcOccupantTypeEnum_LESSEE;
    }
    else if (arg == ".LESSOR.") {
      m_predefinedType = IfcOccupantTypeEnum_LESSOR;
    }
    else if (arg == ".LETTINGAGENT.") {
      m_predefinedType = IfcOccupantTypeEnum_LETTINGAGENT;
    }
    else if (arg == ".OWNER.") {
      m_predefinedType = IfcOccupantTypeEnum_OWNER;
    }
    else if (arg == ".TENANT.") {
      m_predefinedType = IfcOccupantTypeEnum_TENANT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcOccupantTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcOccupantTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOccupant::s_type = new Step::ClassType_class("IfcOccupant");
IfcOccupant_Factory::IfcOccupant_Factory() {
}

IfcOccupant_Factory::~IfcOccupant_Factory() {
  clear(true);
}

void IfcOccupant_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOccupant_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOccupant_Factory::end() {
  return m_idMap.end();
}

IfcOccupant *IfcOccupant_Factory::get(Step::StepId id) {
  IfcOccupant *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOccupant * > (it->second);
  }
  else {
    LOG_ERROR("IfcOccupant_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOccupant * > (create(id));
  }
}

Step::BaseObject *IfcOccupant_Factory::create(Step::StepId id) {
  IfcOccupant *ret = new IfcOccupant(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOccupant_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOccupant *ret = new IfcOccupant(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOccupant_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOccupant *ret = new IfcOccupant(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOccupant *IfcOccupant_Factory::generate() {
  return static_cast< IfcOccupant * > (create(m_model->getNewId()));
}

IfcOccupant *IfcOccupant_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOccupant * > (it->second);
  }
  else {
    return NULL;
  }
}

