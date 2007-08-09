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
#include <ifc2x3/IfcPostalAddress.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPostalAddress::IfcPostalAddress(Step::SPFData *args) : IfcAddress(args) {
  m_internalLocation = getUnset(m_internalLocation);
  m_addressLines.setUnset(true);
  m_postalBox = getUnset(m_postalBox);
  m_town = getUnset(m_town);
  m_region = getUnset(m_region);
  m_postalCode = getUnset(m_postalCode);
  m_country = getUnset(m_country);
}


IfcPostalAddress::~IfcPostalAddress() {
}

bool IfcPostalAddress::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPostalAddress(this);
}

const char *IfcPostalAddress::type() {
  return "IfcPostalAddress";
}

Step::ClassType IfcPostalAddress::getClassType() {
  return IfcPostalAddress::s_type;
}

Step::ClassType IfcPostalAddress::getType() const {
  return IfcPostalAddress::s_type;
}

bool IfcPostalAddress::isOfType(Step::ClassType t) {
  return IfcPostalAddress::s_type == t ? true : IfcAddress::isOfType(t);
}

IfcLabel IfcPostalAddress::getInternalLocation() {
  if (Step::BaseObject::inited()) {
    return m_internalLocation;
  }
  else {
    return getUnset(m_internalLocation);
  }
}

void IfcPostalAddress::setInternalLocation(const IfcLabel &value) {
  m_internalLocation = value;
}

Step::StepList< IfcLabel > &IfcPostalAddress::getAddressLines() {
  if (Step::BaseObject::inited()) {
    return m_addressLines;
  }
  else {
    m_addressLines.setUnset(true);
    return m_addressLines;
  }
}

void IfcPostalAddress::setAddressLines(const Step::StepList< IfcLabel > &value) {
  m_addressLines = value;
}

IfcLabel IfcPostalAddress::getPostalBox() {
  if (Step::BaseObject::inited()) {
    return m_postalBox;
  }
  else {
    return getUnset(m_postalBox);
  }
}

void IfcPostalAddress::setPostalBox(const IfcLabel &value) {
  m_postalBox = value;
}

IfcLabel IfcPostalAddress::getTown() {
  if (Step::BaseObject::inited()) {
    return m_town;
  }
  else {
    return getUnset(m_town);
  }
}

void IfcPostalAddress::setTown(const IfcLabel &value) {
  m_town = value;
}

IfcLabel IfcPostalAddress::getRegion() {
  if (Step::BaseObject::inited()) {
    return m_region;
  }
  else {
    return getUnset(m_region);
  }
}

void IfcPostalAddress::setRegion(const IfcLabel &value) {
  m_region = value;
}

IfcLabel IfcPostalAddress::getPostalCode() {
  if (Step::BaseObject::inited()) {
    return m_postalCode;
  }
  else {
    return getUnset(m_postalCode);
  }
}

void IfcPostalAddress::setPostalCode(const IfcLabel &value) {
  m_postalCode = value;
}

IfcLabel IfcPostalAddress::getCountry() {
  if (Step::BaseObject::inited()) {
    return m_country;
  }
  else {
    return getUnset(m_country);
  }
}

void IfcPostalAddress::setCountry(const IfcLabel &value) {
  m_country = value;
}

void IfcPostalAddress::release() {
  IfcAddress::release();
  m_addressLines.clear();
}

bool IfcPostalAddress::init() {
  bool status = IfcAddress::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_internalLocation = getUnset(m_internalLocation);
  }
  else {
    m_internalLocation = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_addressLines.setUnset(true);
  }
  else {
    m_addressLines.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_addressLines.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_postalBox = getUnset(m_postalBox);
  }
  else {
    m_postalBox = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_town = getUnset(m_town);
  }
  else {
    m_town = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_region = getUnset(m_region);
  }
  else {
    m_region = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_postalCode = getUnset(m_postalCode);
  }
  else {
    m_postalCode = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_country = getUnset(m_country);
  }
  else {
    m_country = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPostalAddress::s_type = new Step::ClassType_class("IfcPostalAddress");
IfcPostalAddress_Factory::IfcPostalAddress_Factory() {
}

IfcPostalAddress_Factory::~IfcPostalAddress_Factory() {
  clear(true);
}

void IfcPostalAddress_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPostalAddress_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPostalAddress_Factory::end() {
  return m_idMap.end();
}

IfcPostalAddress *IfcPostalAddress_Factory::get(Step::StepId id) {
  IfcPostalAddress *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPostalAddress * > (it->second);
  }
  else {
    LOG_ERROR("IfcPostalAddress_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPostalAddress * > (create(id));
  }
}

Step::BaseObject *IfcPostalAddress_Factory::create(Step::StepId id) {
  IfcPostalAddress *ret = new IfcPostalAddress(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPostalAddress_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPostalAddress *ret = new IfcPostalAddress(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPostalAddress_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPostalAddress *ret = new IfcPostalAddress(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPostalAddress *IfcPostalAddress_Factory::generate() {
  return static_cast< IfcPostalAddress * > (create(m_model->getNewId()));
}

IfcPostalAddress *IfcPostalAddress_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPostalAddress * > (it->second);
  }
  else {
    return NULL;
  }
}

