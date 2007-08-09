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
#include <ifc2x3/IfcTelecomAddress.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTelecomAddress::IfcTelecomAddress(Step::SPFData *args) : IfcAddress(args) {
  m_telephoneNumbers.setUnset(true);
  m_facsimileNumbers.setUnset(true);
  m_pagerNumber = getUnset(m_pagerNumber);
  m_electronicMailAddresses.setUnset(true);
  m_wWWHomePageURL = getUnset(m_wWWHomePageURL);
}


IfcTelecomAddress::~IfcTelecomAddress() {
}

bool IfcTelecomAddress::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTelecomAddress(this);
}

const char *IfcTelecomAddress::type() {
  return "IfcTelecomAddress";
}

Step::ClassType IfcTelecomAddress::getClassType() {
  return IfcTelecomAddress::s_type;
}

Step::ClassType IfcTelecomAddress::getType() const {
  return IfcTelecomAddress::s_type;
}

bool IfcTelecomAddress::isOfType(Step::ClassType t) {
  return IfcTelecomAddress::s_type == t ? true : IfcAddress::isOfType(t);
}

Step::StepList< IfcLabel > &IfcTelecomAddress::getTelephoneNumbers() {
  if (Step::BaseObject::inited()) {
    return m_telephoneNumbers;
  }
  else {
    m_telephoneNumbers.setUnset(true);
    return m_telephoneNumbers;
  }
}

void IfcTelecomAddress::setTelephoneNumbers(const Step::StepList< IfcLabel > &value) {
  m_telephoneNumbers = value;
}

Step::StepList< IfcLabel > &IfcTelecomAddress::getFacsimileNumbers() {
  if (Step::BaseObject::inited()) {
    return m_facsimileNumbers;
  }
  else {
    m_facsimileNumbers.setUnset(true);
    return m_facsimileNumbers;
  }
}

void IfcTelecomAddress::setFacsimileNumbers(const Step::StepList< IfcLabel > &value) {
  m_facsimileNumbers = value;
}

IfcLabel IfcTelecomAddress::getPagerNumber() {
  if (Step::BaseObject::inited()) {
    return m_pagerNumber;
  }
  else {
    return getUnset(m_pagerNumber);
  }
}

void IfcTelecomAddress::setPagerNumber(const IfcLabel &value) {
  m_pagerNumber = value;
}

Step::StepList< IfcLabel > &IfcTelecomAddress::getElectronicMailAddresses() {
  if (Step::BaseObject::inited()) {
    return m_electronicMailAddresses;
  }
  else {
    m_electronicMailAddresses.setUnset(true);
    return m_electronicMailAddresses;
  }
}

void IfcTelecomAddress::setElectronicMailAddresses(const Step::StepList< IfcLabel > &value) {
  m_electronicMailAddresses = value;
}

IfcLabel IfcTelecomAddress::getWWWHomePageURL() {
  if (Step::BaseObject::inited()) {
    return m_wWWHomePageURL;
  }
  else {
    return getUnset(m_wWWHomePageURL);
  }
}

void IfcTelecomAddress::setWWWHomePageURL(const IfcLabel &value) {
  m_wWWHomePageURL = value;
}

void IfcTelecomAddress::release() {
  IfcAddress::release();
  m_telephoneNumbers.clear();
  m_facsimileNumbers.clear();
  m_electronicMailAddresses.clear();
}

bool IfcTelecomAddress::init() {
  bool status = IfcAddress::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_telephoneNumbers.setUnset(true);
  }
  else {
    m_telephoneNumbers.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_telephoneNumbers.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_facsimileNumbers.setUnset(true);
  }
  else {
    m_facsimileNumbers.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_facsimileNumbers.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pagerNumber = getUnset(m_pagerNumber);
  }
  else {
    m_pagerNumber = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_electronicMailAddresses.setUnset(true);
  }
  else {
    m_electronicMailAddresses.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_electronicMailAddresses.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_wWWHomePageURL = getUnset(m_wWWHomePageURL);
  }
  else {
    m_wWWHomePageURL = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTelecomAddress::s_type = new Step::ClassType_class("IfcTelecomAddress");
IfcTelecomAddress_Factory::IfcTelecomAddress_Factory() {
}

IfcTelecomAddress_Factory::~IfcTelecomAddress_Factory() {
  clear(true);
}

void IfcTelecomAddress_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTelecomAddress_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTelecomAddress_Factory::end() {
  return m_idMap.end();
}

IfcTelecomAddress *IfcTelecomAddress_Factory::get(Step::StepId id) {
  IfcTelecomAddress *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTelecomAddress * > (it->second);
  }
  else {
    LOG_ERROR("IfcTelecomAddress_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTelecomAddress * > (create(id));
  }
}

Step::BaseObject *IfcTelecomAddress_Factory::create(Step::StepId id) {
  IfcTelecomAddress *ret = new IfcTelecomAddress(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTelecomAddress_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTelecomAddress *ret = new IfcTelecomAddress(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTelecomAddress_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTelecomAddress *ret = new IfcTelecomAddress(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTelecomAddress *IfcTelecomAddress_Factory::generate() {
  return static_cast< IfcTelecomAddress * > (create(m_model->getNewId()));
}

IfcTelecomAddress *IfcTelecomAddress_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTelecomAddress * > (it->second);
  }
  else {
    return NULL;
  }
}

