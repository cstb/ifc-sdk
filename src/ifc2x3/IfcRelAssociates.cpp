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
#include <ifc2x3/IfcRelAssociates.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociates::IfcRelAssociates(Step::SPFData *args) : IfcRelationship(args) {
  m_relatedObjects.setUnset(true);
}


IfcRelAssociates::~IfcRelAssociates() {
}

bool IfcRelAssociates::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociates(this);
}

const char *IfcRelAssociates::type() {
  return "IfcRelAssociates";
}

Step::ClassType IfcRelAssociates::getClassType() {
  return IfcRelAssociates::s_type;
}

Step::ClassType IfcRelAssociates::getType() const {
  return IfcRelAssociates::s_type;
}

bool IfcRelAssociates::isOfType(Step::ClassType t) {
  return IfcRelAssociates::s_type == t ? true : IfcRelationship::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRoot > > &IfcRelAssociates::getRelatedObjects() {
  if (Step::BaseObject::inited()) {
    return m_relatedObjects;
  }
  else {
    m_relatedObjects.setUnset(true);
    return m_relatedObjects;
  }
}

void IfcRelAssociates::setRelatedObjects(const Step::StepSet< Step::RefPtr< IfcRoot > > &value) {
  m_relatedObjects = value;
}

void IfcRelAssociates::release() {
  IfcRelationship::release();
  m_relatedObjects.clear();
}

bool IfcRelAssociates::init() {
  bool status = IfcRelationship::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedObjects.setUnset(true);
  }
  else {
    m_relatedObjects.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRoot > attr2;
        attr2 = static_cast< IfcRoot * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedObjects.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociates::s_type = new Step::ClassType_class("IfcRelAssociates");
IfcRelAssociates_Factory::IfcRelAssociates_Factory() {
}

IfcRelAssociates_Factory::~IfcRelAssociates_Factory() {
  clear(true);
}

void IfcRelAssociates_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociates_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociates_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociates *IfcRelAssociates_Factory::get(Step::StepId id) {
  IfcRelAssociates *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociates * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociates_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociates * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociates_Factory::create(Step::StepId id) {
  IfcRelAssociates *ret = new IfcRelAssociates(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociates_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociates *ret = new IfcRelAssociates(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociates_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociates *ret = new IfcRelAssociates(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociates *IfcRelAssociates_Factory::generate() {
  return static_cast< IfcRelAssociates * > (create(m_model->getNewId()));
}

IfcRelAssociates *IfcRelAssociates_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociates * > (it->second);
  }
  else {
    return NULL;
  }
}

