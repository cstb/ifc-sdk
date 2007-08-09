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
#include <ifc2x3/IfcElementQuantity.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElementQuantity::IfcElementQuantity(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_methodOfMeasurement = getUnset(m_methodOfMeasurement);
  m_quantities.setUnset(true);
}


IfcElementQuantity::~IfcElementQuantity() {
}

bool IfcElementQuantity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElementQuantity(this);
}

const char *IfcElementQuantity::type() {
  return "IfcElementQuantity";
}

Step::ClassType IfcElementQuantity::getClassType() {
  return IfcElementQuantity::s_type;
}

Step::ClassType IfcElementQuantity::getType() const {
  return IfcElementQuantity::s_type;
}

bool IfcElementQuantity::isOfType(Step::ClassType t) {
  return IfcElementQuantity::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcLabel IfcElementQuantity::getMethodOfMeasurement() {
  if (Step::BaseObject::inited()) {
    return m_methodOfMeasurement;
  }
  else {
    return getUnset(m_methodOfMeasurement);
  }
}

void IfcElementQuantity::setMethodOfMeasurement(const IfcLabel &value) {
  m_methodOfMeasurement = value;
}

Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > &IfcElementQuantity::getQuantities() {
  if (Step::BaseObject::inited()) {
    return m_quantities;
  }
  else {
    m_quantities.setUnset(true);
    return m_quantities;
  }
}

void IfcElementQuantity::setQuantities(const Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > &value) {
  m_quantities = value;
}

void IfcElementQuantity::release() {
  IfcPropertySetDefinition::release();
  m_quantities.clear();
}

bool IfcElementQuantity::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_methodOfMeasurement = getUnset(m_methodOfMeasurement);
  }
  else {
    m_methodOfMeasurement = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_quantities.setUnset(true);
  }
  else {
    m_quantities.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcPhysicalQuantity > attr2;
        attr2 = static_cast< IfcPhysicalQuantity * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_quantities.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementQuantity::s_type = new Step::ClassType_class("IfcElementQuantity");
IfcElementQuantity_Factory::IfcElementQuantity_Factory() {
}

IfcElementQuantity_Factory::~IfcElementQuantity_Factory() {
  clear(true);
}

void IfcElementQuantity_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElementQuantity_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElementQuantity_Factory::end() {
  return m_idMap.end();
}

IfcElementQuantity *IfcElementQuantity_Factory::get(Step::StepId id) {
  IfcElementQuantity *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElementQuantity * > (it->second);
  }
  else {
    LOG_ERROR("IfcElementQuantity_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElementQuantity * > (create(id));
  }
}

Step::BaseObject *IfcElementQuantity_Factory::create(Step::StepId id) {
  IfcElementQuantity *ret = new IfcElementQuantity(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElementQuantity_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElementQuantity *ret = new IfcElementQuantity(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElementQuantity_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElementQuantity *ret = new IfcElementQuantity(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElementQuantity *IfcElementQuantity_Factory::generate() {
  return static_cast< IfcElementQuantity * > (create(m_model->getNewId()));
}

IfcElementQuantity *IfcElementQuantity_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElementQuantity * > (it->second);
  }
  else {
    return NULL;
  }
}

