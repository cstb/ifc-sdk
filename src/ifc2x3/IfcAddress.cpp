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
#include <ifc2x3/IfcAddress.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcAddress::IfcAddress(Step::SPFData *args) : Step::BaseObject(args) {
  m_purpose = IfcAddressTypeEnum_UNSET;
  m_description = getUnset(m_description);
  m_userDefinedPurpose = getUnset(m_userDefinedPurpose);
  m_ofPerson.setUnset(true);
  m_ofOrganization.setUnset(true);
}


IfcAddress::~IfcAddress() {
}

bool IfcAddress::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAddress(this);
}

const char *IfcAddress::type() {
  return "IfcAddress";
}

Step::ClassType IfcAddress::getClassType() {
  return IfcAddress::s_type;
}

Step::ClassType IfcAddress::getType() const {
  return IfcAddress::s_type;
}

bool IfcAddress::isOfType(Step::ClassType t) {
  return IfcAddress::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAddressTypeEnum IfcAddress::getPurpose() {
  if (Step::BaseObject::inited()) {
    return m_purpose;
  }
  else {
    return IfcAddressTypeEnum_UNSET;
  }
}

void IfcAddress::setPurpose(IfcAddressTypeEnum value) {
  m_purpose = value;
}

IfcText IfcAddress::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcAddress::setDescription(const IfcText &value) {
  m_description = value;
}

IfcLabel IfcAddress::getUserDefinedPurpose() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedPurpose;
  }
  else {
    return getUnset(m_userDefinedPurpose);
  }
}

void IfcAddress::setUserDefinedPurpose(const IfcLabel &value) {
  m_userDefinedPurpose = value;
}

Step::StepSet< Step::RefPtr< IfcPerson > > &IfcAddress::getOfPerson() {
  if (Step::BaseObject::inited()) {
    return m_ofPerson;
  }
  else {
    m_ofPerson.setUnset(true);
    return m_ofPerson;
  }
}

void IfcAddress::setOfPerson(const Step::StepSet< Step::RefPtr< IfcPerson > > &value) {
  m_ofPerson = value;
}

Step::StepSet< Step::RefPtr< IfcOrganization > > &IfcAddress::getOfOrganization() {
  if (Step::BaseObject::inited()) {
    return m_ofOrganization;
  }
  else {
    m_ofOrganization.setUnset(true);
    return m_ofOrganization;
  }
}

void IfcAddress::setOfOrganization(const Step::StepSet< Step::RefPtr< IfcOrganization > > &value) {
  m_ofOrganization = value;
}

void IfcAddress::release() {
}

bool IfcAddress::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_purpose = IfcAddressTypeEnum_UNSET;
  }
  else {
    if (arg == ".OFFICE.") {
      m_purpose = IfcAddressTypeEnum_OFFICE;
    }
    else if (arg == ".SITE.") {
      m_purpose = IfcAddressTypeEnum_SITE;
    }
    else if (arg == ".HOME.") {
      m_purpose = IfcAddressTypeEnum_HOME;
    }
    else if (arg == ".DISTRIBUTIONPOINT.") {
      m_purpose = IfcAddressTypeEnum_DISTRIBUTIONPOINT;
    }
    else if (arg == ".USERDEFINED.") {
      m_purpose = IfcAddressTypeEnum_USERDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedPurpose = getUnset(m_userDefinedPurpose);
  }
  else {
    m_userDefinedPurpose = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcPerson::getClassType(), 7);
  if (inverses) {
    unsigned int i;
    m_ofPerson.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_ofPerson.insert(static_cast< IfcPerson * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcOrganization::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_ofOrganization.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_ofOrganization.insert(static_cast< IfcOrganization * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAddress::s_type = new Step::ClassType_class("IfcAddress");
