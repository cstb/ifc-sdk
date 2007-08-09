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
#include <ifc2x3/IfcRelOverridesProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelOverridesProperties::IfcRelOverridesProperties(Step::SPFData *args) : IfcRelDefinesByProperties(args) {
  m_overridingProperties.setUnset(true);
}


IfcRelOverridesProperties::~IfcRelOverridesProperties() {
}

bool IfcRelOverridesProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelOverridesProperties(this);
}

const char *IfcRelOverridesProperties::type() {
  return "IfcRelOverridesProperties";
}

Step::ClassType IfcRelOverridesProperties::getClassType() {
  return IfcRelOverridesProperties::s_type;
}

Step::ClassType IfcRelOverridesProperties::getType() const {
  return IfcRelOverridesProperties::s_type;
}

bool IfcRelOverridesProperties::isOfType(Step::ClassType t) {
  return IfcRelOverridesProperties::s_type == t ? true : IfcRelDefinesByProperties::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProperty > > &IfcRelOverridesProperties::getOverridingProperties() {
  if (Step::BaseObject::inited()) {
    return m_overridingProperties;
  }
  else {
    m_overridingProperties.setUnset(true);
    return m_overridingProperties;
  }
}

void IfcRelOverridesProperties::setOverridingProperties(const Step::StepSet< Step::RefPtr< IfcProperty > > &value) {
  m_overridingProperties = value;
}

void IfcRelOverridesProperties::release() {
  IfcRelDefinesByProperties::release();
  m_overridingProperties.clear();
}

bool IfcRelOverridesProperties::init() {
  bool status = IfcRelDefinesByProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_overridingProperties.setUnset(true);
  }
  else {
    m_overridingProperties.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProperty > attr2;
        attr2 = static_cast< IfcProperty * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_overridingProperties.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelOverridesProperties::s_type = new Step::ClassType_class("IfcRelOverridesProperties");
IfcRelOverridesProperties_Factory::IfcRelOverridesProperties_Factory() {
}

IfcRelOverridesProperties_Factory::~IfcRelOverridesProperties_Factory() {
  clear(true);
}

void IfcRelOverridesProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelOverridesProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelOverridesProperties_Factory::end() {
  return m_idMap.end();
}

IfcRelOverridesProperties *IfcRelOverridesProperties_Factory::get(Step::StepId id) {
  IfcRelOverridesProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelOverridesProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelOverridesProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelOverridesProperties * > (create(id));
  }
}

Step::BaseObject *IfcRelOverridesProperties_Factory::create(Step::StepId id) {
  IfcRelOverridesProperties *ret = new IfcRelOverridesProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelOverridesProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelOverridesProperties *ret = new IfcRelOverridesProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelOverridesProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelOverridesProperties *ret = new IfcRelOverridesProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelOverridesProperties *IfcRelOverridesProperties_Factory::generate() {
  return static_cast< IfcRelOverridesProperties * > (create(m_model->getNewId()));
}

IfcRelOverridesProperties *IfcRelOverridesProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelOverridesProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

