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
#include <ifc2x3/IfcLibraryInformation.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLibraryInformation::IfcLibraryInformation(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_version = getUnset(m_version);
  m_publisher = NULL;
  m_versionDate = NULL;
  m_libraryReference.setUnset(true);
}


IfcLibraryInformation::~IfcLibraryInformation() {
}

bool IfcLibraryInformation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLibraryInformation(this);
}

const char *IfcLibraryInformation::type() {
  return "IfcLibraryInformation";
}

Step::ClassType IfcLibraryInformation::getClassType() {
  return IfcLibraryInformation::s_type;
}

Step::ClassType IfcLibraryInformation::getType() const {
  return IfcLibraryInformation::s_type;
}

bool IfcLibraryInformation::isOfType(Step::ClassType t) {
  return IfcLibraryInformation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcLibraryInformation::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcLibraryInformation::setName(const IfcLabel &value) {
  m_name = value;
}

IfcLabel IfcLibraryInformation::getVersion() {
  if (Step::BaseObject::inited()) {
    return m_version;
  }
  else {
    return getUnset(m_version);
  }
}

void IfcLibraryInformation::setVersion(const IfcLabel &value) {
  m_version = value;
}

IfcOrganization *IfcLibraryInformation::getPublisher() {
  if (Step::BaseObject::inited()) {
    return m_publisher.get();
  }
  else {
    return NULL;
  }
}

void IfcLibraryInformation::setPublisher(const Step::RefPtr< IfcOrganization > &value) {
  m_publisher = value;
}

IfcCalendarDate *IfcLibraryInformation::getVersionDate() {
  if (Step::BaseObject::inited()) {
    return m_versionDate.get();
  }
  else {
    return NULL;
  }
}

void IfcLibraryInformation::setVersionDate(const Step::RefPtr< IfcCalendarDate > &value) {
  m_versionDate = value;
}

Step::StepSet< Step::RefPtr< IfcLibraryReference > > &IfcLibraryInformation::getLibraryReference() {
  if (Step::BaseObject::inited()) {
    return m_libraryReference;
  }
  else {
    m_libraryReference.setUnset(true);
    return m_libraryReference;
  }
}

void IfcLibraryInformation::setLibraryReference(const Step::StepSet< Step::RefPtr< IfcLibraryReference > > &value) {
  m_libraryReference = value;
}

void IfcLibraryInformation::release() {
  m_publisher.release();
  m_versionDate.release();
  m_libraryReference.clear();
}

bool IfcLibraryInformation::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_version = getUnset(m_version);
  }
  else {
    m_version = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_publisher = NULL;
  }
  else {
    m_publisher = static_cast< IfcOrganization * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_versionDate = NULL;
  }
  else {
    m_versionDate = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_libraryReference.setUnset(true);
  }
  else {
    m_libraryReference.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcLibraryReference > attr2;
        attr2 = static_cast< IfcLibraryReference * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_libraryReference.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLibraryInformation::s_type = new Step::ClassType_class("IfcLibraryInformation");
IfcLibraryInformation_Factory::IfcLibraryInformation_Factory() {
}

IfcLibraryInformation_Factory::~IfcLibraryInformation_Factory() {
  clear(true);
}

void IfcLibraryInformation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLibraryInformation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLibraryInformation_Factory::end() {
  return m_idMap.end();
}

IfcLibraryInformation *IfcLibraryInformation_Factory::get(Step::StepId id) {
  IfcLibraryInformation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLibraryInformation * > (it->second);
  }
  else {
    LOG_ERROR("IfcLibraryInformation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLibraryInformation * > (create(id));
  }
}

Step::BaseObject *IfcLibraryInformation_Factory::create(Step::StepId id) {
  IfcLibraryInformation *ret = new IfcLibraryInformation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLibraryInformation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLibraryInformation *ret = new IfcLibraryInformation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLibraryInformation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLibraryInformation *ret = new IfcLibraryInformation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLibraryInformation *IfcLibraryInformation_Factory::generate() {
  return static_cast< IfcLibraryInformation * > (create(m_model->getNewId()));
}

IfcLibraryInformation *IfcLibraryInformation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLibraryInformation * > (it->second);
  }
  else {
    return NULL;
  }
}

