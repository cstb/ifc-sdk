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
#include <ifc2x3/IfcConnectionPortGeometry.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConnectionPortGeometry::IfcConnectionPortGeometry(Step::SPFData *args) : IfcConnectionGeometry(args) {
  m_locationAtRelatingElement = NULL;
  m_locationAtRelatedElement = NULL;
  m_profileOfPort = NULL;
}


IfcConnectionPortGeometry::~IfcConnectionPortGeometry() {
}

bool IfcConnectionPortGeometry::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConnectionPortGeometry(this);
}

const char *IfcConnectionPortGeometry::type() {
  return "IfcConnectionPortGeometry";
}

Step::ClassType IfcConnectionPortGeometry::getClassType() {
  return IfcConnectionPortGeometry::s_type;
}

Step::ClassType IfcConnectionPortGeometry::getType() const {
  return IfcConnectionPortGeometry::s_type;
}

bool IfcConnectionPortGeometry::isOfType(Step::ClassType t) {
  return IfcConnectionPortGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_locationAtRelatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionPortGeometry::setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_locationAtRelatingElement = value;
}

IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement() {
  if (Step::BaseObject::inited()) {
    return m_locationAtRelatedElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionPortGeometry::setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_locationAtRelatedElement = value;
}

IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort() {
  if (Step::BaseObject::inited()) {
    return m_profileOfPort.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionPortGeometry::setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value) {
  m_profileOfPort = value;
}

void IfcConnectionPortGeometry::release() {
  IfcConnectionGeometry::release();
  m_profileOfPort.release();
}

bool IfcConnectionPortGeometry::init() {
  bool status = IfcConnectionGeometry::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_locationAtRelatingElement = NULL;
  }
  else {
    m_locationAtRelatingElement = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_locationAtRelatingElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_locationAtRelatedElement = NULL;
  }
  else {
    m_locationAtRelatedElement = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_locationAtRelatedElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileOfPort = NULL;
  }
  else {
    m_profileOfPort = static_cast< IfcProfileDef * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionPortGeometry::s_type = new Step::ClassType_class("IfcConnectionPortGeometry");
IfcConnectionPortGeometry_Factory::IfcConnectionPortGeometry_Factory() {
}

IfcConnectionPortGeometry_Factory::~IfcConnectionPortGeometry_Factory() {
  clear(true);
}

void IfcConnectionPortGeometry_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionPortGeometry_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionPortGeometry_Factory::end() {
  return m_idMap.end();
}

IfcConnectionPortGeometry *IfcConnectionPortGeometry_Factory::get(Step::StepId id) {
  IfcConnectionPortGeometry *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConnectionPortGeometry * > (it->second);
  }
  else {
    LOG_ERROR("IfcConnectionPortGeometry_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConnectionPortGeometry * > (create(id));
  }
}

Step::BaseObject *IfcConnectionPortGeometry_Factory::create(Step::StepId id) {
  IfcConnectionPortGeometry *ret = new IfcConnectionPortGeometry(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionPortGeometry_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConnectionPortGeometry *ret = new IfcConnectionPortGeometry(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionPortGeometry_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConnectionPortGeometry *ret = new IfcConnectionPortGeometry(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConnectionPortGeometry *IfcConnectionPortGeometry_Factory::generate() {
  return static_cast< IfcConnectionPortGeometry * > (create(m_model->getNewId()));
}

IfcConnectionPortGeometry *IfcConnectionPortGeometry_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConnectionPortGeometry * > (it->second);
  }
  else {
    return NULL;
  }
}

