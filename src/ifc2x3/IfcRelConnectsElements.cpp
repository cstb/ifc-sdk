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
#include <ifc2x3/IfcRelConnectsElements.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsElements::IfcRelConnectsElements(Step::SPFData *args) : IfcRelConnects(args) {
  m_connectionGeometry = NULL;
  m_relatingElement = NULL;
  m_relatedElement = NULL;
}


IfcRelConnectsElements::~IfcRelConnectsElements() {
}

bool IfcRelConnectsElements::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsElements(this);
}

const char *IfcRelConnectsElements::type() {
  return "IfcRelConnectsElements";
}

Step::ClassType IfcRelConnectsElements::getClassType() {
  return IfcRelConnectsElements::s_type;
}

Step::ClassType IfcRelConnectsElements::getType() const {
  return IfcRelConnectsElements::s_type;
}

bool IfcRelConnectsElements::isOfType(Step::ClassType t) {
  return IfcRelConnectsElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcConnectionGeometry *IfcRelConnectsElements::getConnectionGeometry() {
  if (Step::BaseObject::inited()) {
    return m_connectionGeometry.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsElements::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value) {
  m_connectionGeometry = value;
}

IfcElement *IfcRelConnectsElements::getRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsElements::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatingElement = value;
}

IfcElement *IfcRelConnectsElements::getRelatedElement() {
  if (Step::BaseObject::inited()) {
    return m_relatedElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsElements::setRelatedElement(const Step::RefPtr< IfcElement > &value) {
  m_relatedElement = value;
}

void IfcRelConnectsElements::release() {
  IfcRelConnects::release();
  m_connectionGeometry.release();
  m_relatingElement.release();
  m_relatedElement.release();
}

bool IfcRelConnectsElements::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_connectionGeometry = NULL;
  }
  else {
    m_connectionGeometry = static_cast< IfcConnectionGeometry * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingElement = NULL;
  }
  else {
    m_relatingElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedElement = NULL;
  }
  else {
    m_relatedElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsElements::s_type = new Step::ClassType_class("IfcRelConnectsElements");
IfcRelConnectsElements_Factory::IfcRelConnectsElements_Factory() {
}

IfcRelConnectsElements_Factory::~IfcRelConnectsElements_Factory() {
  clear(true);
}

void IfcRelConnectsElements_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsElements_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsElements_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsElements *IfcRelConnectsElements_Factory::get(Step::StepId id) {
  IfcRelConnectsElements *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsElements * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsElements_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsElements * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsElements_Factory::create(Step::StepId id) {
  IfcRelConnectsElements *ret = new IfcRelConnectsElements(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsElements_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsElements *ret = new IfcRelConnectsElements(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsElements_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsElements *ret = new IfcRelConnectsElements(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsElements *IfcRelConnectsElements_Factory::generate() {
  return static_cast< IfcRelConnectsElements * > (create(m_model->getNewId()));
}

IfcRelConnectsElements *IfcRelConnectsElements_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsElements * > (it->second);
  }
  else {
    return NULL;
  }
}

