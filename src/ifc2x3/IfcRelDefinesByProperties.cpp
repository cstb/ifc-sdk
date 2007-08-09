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
#include <ifc2x3/IfcRelDefinesByProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelDefinesByProperties::IfcRelDefinesByProperties(Step::SPFData *args) : IfcRelDefines(args) {
  m_relatingPropertyDefinition = NULL;
}


IfcRelDefinesByProperties::~IfcRelDefinesByProperties() {
}

bool IfcRelDefinesByProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelDefinesByProperties(this);
}

const char *IfcRelDefinesByProperties::type() {
  return "IfcRelDefinesByProperties";
}

Step::ClassType IfcRelDefinesByProperties::getClassType() {
  return IfcRelDefinesByProperties::s_type;
}

Step::ClassType IfcRelDefinesByProperties::getType() const {
  return IfcRelDefinesByProperties::s_type;
}

bool IfcRelDefinesByProperties::isOfType(Step::ClassType t) {
  return IfcRelDefinesByProperties::s_type == t ? true : IfcRelDefines::isOfType(t);
}

IfcPropertySetDefinition *IfcRelDefinesByProperties::getRelatingPropertyDefinition() {
  if (Step::BaseObject::inited()) {
    return m_relatingPropertyDefinition.get();
  }
  else {
    return NULL;
  }
}

void IfcRelDefinesByProperties::setRelatingPropertyDefinition(const Step::RefPtr< IfcPropertySetDefinition > &value) {
  m_relatingPropertyDefinition = value;
}

void IfcRelDefinesByProperties::release() {
  IfcRelDefines::release();
  m_relatingPropertyDefinition.release();
}

bool IfcRelDefinesByProperties::init() {
  bool status = IfcRelDefines::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingPropertyDefinition = NULL;
  }
  else {
    m_relatingPropertyDefinition = static_cast< IfcPropertySetDefinition * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefinesByProperties::s_type = new Step::ClassType_class("IfcRelDefinesByProperties");
IfcRelDefinesByProperties_Factory::IfcRelDefinesByProperties_Factory() {
}

IfcRelDefinesByProperties_Factory::~IfcRelDefinesByProperties_Factory() {
  clear(true);
}

void IfcRelDefinesByProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelDefinesByProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelDefinesByProperties_Factory::end() {
  return m_idMap.end();
}

IfcRelDefinesByProperties *IfcRelDefinesByProperties_Factory::get(Step::StepId id) {
  IfcRelDefinesByProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelDefinesByProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelDefinesByProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelDefinesByProperties * > (create(id));
  }
}

Step::BaseObject *IfcRelDefinesByProperties_Factory::create(Step::StepId id) {
  IfcRelDefinesByProperties *ret = new IfcRelDefinesByProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelDefinesByProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelDefinesByProperties *ret = new IfcRelDefinesByProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelDefinesByProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelDefinesByProperties *ret = new IfcRelDefinesByProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelDefinesByProperties *IfcRelDefinesByProperties_Factory::generate() {
  return static_cast< IfcRelDefinesByProperties * > (create(m_model->getNewId()));
}

IfcRelDefinesByProperties *IfcRelDefinesByProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelDefinesByProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

