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
#include <ifc2x3/IfcRelCoversSpaces.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelCoversSpaces::IfcRelCoversSpaces(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatedSpace = NULL;
  m_relatedCoverings.setUnset(true);
}


IfcRelCoversSpaces::~IfcRelCoversSpaces() {
}

bool IfcRelCoversSpaces::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelCoversSpaces(this);
}

const char *IfcRelCoversSpaces::type() {
  return "IfcRelCoversSpaces";
}

Step::ClassType IfcRelCoversSpaces::getClassType() {
  return IfcRelCoversSpaces::s_type;
}

Step::ClassType IfcRelCoversSpaces::getType() const {
  return IfcRelCoversSpaces::s_type;
}

bool IfcRelCoversSpaces::isOfType(Step::ClassType t) {
  return IfcRelCoversSpaces::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSpace *IfcRelCoversSpaces::getRelatedSpace() {
  if (Step::BaseObject::inited()) {
    return m_relatedSpace.get();
  }
  else {
    return NULL;
  }
}

void IfcRelCoversSpaces::setRelatedSpace(const Step::RefPtr< IfcSpace > &value) {
  m_relatedSpace = value;
}

Step::StepSet< Step::RefPtr< IfcCovering > > &IfcRelCoversSpaces::getRelatedCoverings() {
  if (Step::BaseObject::inited()) {
    return m_relatedCoverings;
  }
  else {
    m_relatedCoverings.setUnset(true);
    return m_relatedCoverings;
  }
}

void IfcRelCoversSpaces::setRelatedCoverings(const Step::StepSet< Step::RefPtr< IfcCovering > > &value) {
  m_relatedCoverings = value;
}

void IfcRelCoversSpaces::release() {
  IfcRelConnects::release();
  m_relatedSpace.release();
  m_relatedCoverings.clear();
}

bool IfcRelCoversSpaces::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedSpace = NULL;
  }
  else {
    m_relatedSpace = static_cast< IfcSpace * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedCoverings.setUnset(true);
  }
  else {
    m_relatedCoverings.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCovering > attr2;
        attr2 = static_cast< IfcCovering * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedCoverings.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelCoversSpaces::s_type = new Step::ClassType_class("IfcRelCoversSpaces");
IfcRelCoversSpaces_Factory::IfcRelCoversSpaces_Factory() {
}

IfcRelCoversSpaces_Factory::~IfcRelCoversSpaces_Factory() {
  clear(true);
}

void IfcRelCoversSpaces_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelCoversSpaces_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelCoversSpaces_Factory::end() {
  return m_idMap.end();
}

IfcRelCoversSpaces *IfcRelCoversSpaces_Factory::get(Step::StepId id) {
  IfcRelCoversSpaces *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelCoversSpaces * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelCoversSpaces_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelCoversSpaces * > (create(id));
  }
}

Step::BaseObject *IfcRelCoversSpaces_Factory::create(Step::StepId id) {
  IfcRelCoversSpaces *ret = new IfcRelCoversSpaces(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelCoversSpaces_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelCoversSpaces *ret = new IfcRelCoversSpaces(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelCoversSpaces_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelCoversSpaces *ret = new IfcRelCoversSpaces(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelCoversSpaces *IfcRelCoversSpaces_Factory::generate() {
  return static_cast< IfcRelCoversSpaces * > (create(m_model->getNewId()));
}

IfcRelCoversSpaces *IfcRelCoversSpaces_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelCoversSpaces * > (it->second);
  }
  else {
    return NULL;
  }
}

