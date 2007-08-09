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
#include <ifc2x3/IfcConnectedFaceSet.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcFace.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConnectedFaceSet::IfcConnectedFaceSet(Step::SPFData *args) : IfcTopologicalRepresentationItem(args) {
  m_cfsFaces.setUnset(true);
}


IfcConnectedFaceSet::~IfcConnectedFaceSet() {
}

bool IfcConnectedFaceSet::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConnectedFaceSet(this);
}

const char *IfcConnectedFaceSet::type() {
  return "IfcConnectedFaceSet";
}

Step::ClassType IfcConnectedFaceSet::getClassType() {
  return IfcConnectedFaceSet::s_type;
}

Step::ClassType IfcConnectedFaceSet::getType() const {
  return IfcConnectedFaceSet::s_type;
}

bool IfcConnectedFaceSet::isOfType(Step::ClassType t) {
  return IfcConnectedFaceSet::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcFace > > &IfcConnectedFaceSet::getCfsFaces() {
  if (Step::BaseObject::inited()) {
    return m_cfsFaces;
  }
  else {
    m_cfsFaces.setUnset(true);
    return m_cfsFaces;
  }
}

void IfcConnectedFaceSet::setCfsFaces(const Step::StepSet< Step::RefPtr< IfcFace > > &value) {
  m_cfsFaces = value;
}

void IfcConnectedFaceSet::release() {
  IfcTopologicalRepresentationItem::release();
  m_cfsFaces.clear();
}

bool IfcConnectedFaceSet::init() {
  bool status = IfcTopologicalRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_cfsFaces.setUnset(true);
  }
  else {
    m_cfsFaces.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcFace > attr2;
        attr2 = static_cast< IfcFace * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_cfsFaces.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectedFaceSet::s_type = new Step::ClassType_class("IfcConnectedFaceSet");
IfcConnectedFaceSet_Factory::IfcConnectedFaceSet_Factory() {
}

IfcConnectedFaceSet_Factory::~IfcConnectedFaceSet_Factory() {
  clear(true);
}

void IfcConnectedFaceSet_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectedFaceSet_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectedFaceSet_Factory::end() {
  return m_idMap.end();
}

IfcConnectedFaceSet *IfcConnectedFaceSet_Factory::get(Step::StepId id) {
  IfcConnectedFaceSet *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConnectedFaceSet * > (it->second);
  }
  else {
    LOG_ERROR("IfcConnectedFaceSet_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConnectedFaceSet * > (create(id));
  }
}

Step::BaseObject *IfcConnectedFaceSet_Factory::create(Step::StepId id) {
  IfcConnectedFaceSet *ret = new IfcConnectedFaceSet(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConnectedFaceSet_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConnectedFaceSet *ret = new IfcConnectedFaceSet(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConnectedFaceSet_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConnectedFaceSet *ret = new IfcConnectedFaceSet(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConnectedFaceSet *IfcConnectedFaceSet_Factory::generate() {
  return static_cast< IfcConnectedFaceSet * > (create(m_model->getNewId()));
}

IfcConnectedFaceSet *IfcConnectedFaceSet_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConnectedFaceSet * > (it->second);
  }
  else {
    return NULL;
  }
}

