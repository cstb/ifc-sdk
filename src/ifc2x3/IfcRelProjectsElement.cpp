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
#include <ifc2x3/IfcRelProjectsElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcFeatureElementAddition.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelProjectsElement::IfcRelProjectsElement(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingElement = NULL;
  m_relatedFeatureElement = NULL;
}


IfcRelProjectsElement::~IfcRelProjectsElement() {
}

bool IfcRelProjectsElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelProjectsElement(this);
}

const char *IfcRelProjectsElement::type() {
  return "IfcRelProjectsElement";
}

Step::ClassType IfcRelProjectsElement::getClassType() {
  return IfcRelProjectsElement::s_type;
}

Step::ClassType IfcRelProjectsElement::getType() const {
  return IfcRelProjectsElement::s_type;
}

bool IfcRelProjectsElement::isOfType(Step::ClassType t) {
  return IfcRelProjectsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelProjectsElement::getRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelProjectsElement::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatingElement = value;
}

IfcFeatureElementAddition *IfcRelProjectsElement::getRelatedFeatureElement() {
  if (Step::BaseObject::inited()) {
    return m_relatedFeatureElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelProjectsElement::setRelatedFeatureElement(const Step::RefPtr< IfcFeatureElementAddition > &value) {
  m_relatedFeatureElement = value;
}

void IfcRelProjectsElement::release() {
  IfcRelConnects::release();
  m_relatingElement.release();
  m_relatedFeatureElement.release();
}

bool IfcRelProjectsElement::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
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
    m_relatedFeatureElement = NULL;
  }
  else {
    m_relatedFeatureElement = static_cast< IfcFeatureElementAddition * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelProjectsElement::s_type = new Step::ClassType_class("IfcRelProjectsElement");
IfcRelProjectsElement_Factory::IfcRelProjectsElement_Factory() {
}

IfcRelProjectsElement_Factory::~IfcRelProjectsElement_Factory() {
  clear(true);
}

void IfcRelProjectsElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelProjectsElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelProjectsElement_Factory::end() {
  return m_idMap.end();
}

IfcRelProjectsElement *IfcRelProjectsElement_Factory::get(Step::StepId id) {
  IfcRelProjectsElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelProjectsElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelProjectsElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelProjectsElement * > (create(id));
  }
}

Step::BaseObject *IfcRelProjectsElement_Factory::create(Step::StepId id) {
  IfcRelProjectsElement *ret = new IfcRelProjectsElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelProjectsElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelProjectsElement *ret = new IfcRelProjectsElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelProjectsElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelProjectsElement *ret = new IfcRelProjectsElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelProjectsElement *IfcRelProjectsElement_Factory::generate() {
  return static_cast< IfcRelProjectsElement * > (create(m_model->getNewId()));
}

IfcRelProjectsElement *IfcRelProjectsElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelProjectsElement * > (it->second);
  }
  else {
    return NULL;
  }
}

