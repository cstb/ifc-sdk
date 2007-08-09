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
#include <ifc2x3/IfcPhysicalComplexQuantity.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity(Step::SPFData *args) : IfcPhysicalQuantity(args) {
  m_hasQuantities.setUnset(true);
  m_discrimination = getUnset(m_discrimination);
  m_quality = getUnset(m_quality);
  m_usage = getUnset(m_usage);
}


IfcPhysicalComplexQuantity::~IfcPhysicalComplexQuantity() {
}

bool IfcPhysicalComplexQuantity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPhysicalComplexQuantity(this);
}

const char *IfcPhysicalComplexQuantity::type() {
  return "IfcPhysicalComplexQuantity";
}

Step::ClassType IfcPhysicalComplexQuantity::getClassType() {
  return IfcPhysicalComplexQuantity::s_type;
}

Step::ClassType IfcPhysicalComplexQuantity::getType() const {
  return IfcPhysicalComplexQuantity::s_type;
}

bool IfcPhysicalComplexQuantity::isOfType(Step::ClassType t) {
  return IfcPhysicalComplexQuantity::s_type == t ? true : IfcPhysicalQuantity::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > &IfcPhysicalComplexQuantity::getHasQuantities() {
  if (Step::BaseObject::inited()) {
    return m_hasQuantities;
  }
  else {
    m_hasQuantities.setUnset(true);
    return m_hasQuantities;
  }
}

void IfcPhysicalComplexQuantity::setHasQuantities(const Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > &value) {
  m_hasQuantities = value;
}

IfcLabel IfcPhysicalComplexQuantity::getDiscrimination() {
  if (Step::BaseObject::inited()) {
    return m_discrimination;
  }
  else {
    return getUnset(m_discrimination);
  }
}

void IfcPhysicalComplexQuantity::setDiscrimination(const IfcLabel &value) {
  m_discrimination = value;
}

IfcLabel IfcPhysicalComplexQuantity::getQuality() {
  if (Step::BaseObject::inited()) {
    return m_quality;
  }
  else {
    return getUnset(m_quality);
  }
}

void IfcPhysicalComplexQuantity::setQuality(const IfcLabel &value) {
  m_quality = value;
}

IfcLabel IfcPhysicalComplexQuantity::getUsage() {
  if (Step::BaseObject::inited()) {
    return m_usage;
  }
  else {
    return getUnset(m_usage);
  }
}

void IfcPhysicalComplexQuantity::setUsage(const IfcLabel &value) {
  m_usage = value;
}

void IfcPhysicalComplexQuantity::release() {
  IfcPhysicalQuantity::release();
  m_hasQuantities.clear();
}

bool IfcPhysicalComplexQuantity::init() {
  bool status = IfcPhysicalQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hasQuantities.setUnset(true);
  }
  else {
    m_hasQuantities.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcPhysicalQuantity > attr2;
        attr2 = static_cast< IfcPhysicalQuantity * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_hasQuantities.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_discrimination = getUnset(m_discrimination);
  }
  else {
    m_discrimination = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_quality = getUnset(m_quality);
  }
  else {
    m_quality = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_usage = getUnset(m_usage);
  }
  else {
    m_usage = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalComplexQuantity::s_type = new Step::ClassType_class("IfcPhysicalComplexQuantity");
IfcPhysicalComplexQuantity_Factory::IfcPhysicalComplexQuantity_Factory() {
}

IfcPhysicalComplexQuantity_Factory::~IfcPhysicalComplexQuantity_Factory() {
  clear(true);
}

void IfcPhysicalComplexQuantity_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPhysicalComplexQuantity_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPhysicalComplexQuantity_Factory::end() {
  return m_idMap.end();
}

IfcPhysicalComplexQuantity *IfcPhysicalComplexQuantity_Factory::get(Step::StepId id) {
  IfcPhysicalComplexQuantity *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPhysicalComplexQuantity * > (it->second);
  }
  else {
    LOG_ERROR("IfcPhysicalComplexQuantity_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPhysicalComplexQuantity * > (create(id));
  }
}

Step::BaseObject *IfcPhysicalComplexQuantity_Factory::create(Step::StepId id) {
  IfcPhysicalComplexQuantity *ret = new IfcPhysicalComplexQuantity(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPhysicalComplexQuantity_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPhysicalComplexQuantity *ret = new IfcPhysicalComplexQuantity(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPhysicalComplexQuantity_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPhysicalComplexQuantity *ret = new IfcPhysicalComplexQuantity(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPhysicalComplexQuantity *IfcPhysicalComplexQuantity_Factory::generate() {
  return static_cast< IfcPhysicalComplexQuantity * > (create(m_model->getNewId()));
}

IfcPhysicalComplexQuantity *IfcPhysicalComplexQuantity_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPhysicalComplexQuantity * > (it->second);
  }
  else {
    return NULL;
  }
}

