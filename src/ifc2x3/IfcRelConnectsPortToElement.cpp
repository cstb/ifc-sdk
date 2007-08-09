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
#include <ifc2x3/IfcRelConnectsPortToElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcPort.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsPortToElement::IfcRelConnectsPortToElement(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingPort = NULL;
  m_relatedElement = NULL;
}


IfcRelConnectsPortToElement::~IfcRelConnectsPortToElement() {
}

bool IfcRelConnectsPortToElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsPortToElement(this);
}

const char *IfcRelConnectsPortToElement::type() {
  return "IfcRelConnectsPortToElement";
}

Step::ClassType IfcRelConnectsPortToElement::getClassType() {
  return IfcRelConnectsPortToElement::s_type;
}

Step::ClassType IfcRelConnectsPortToElement::getType() const {
  return IfcRelConnectsPortToElement::s_type;
}

bool IfcRelConnectsPortToElement::isOfType(Step::ClassType t) {
  return IfcRelConnectsPortToElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcPort *IfcRelConnectsPortToElement::getRelatingPort() {
  if (Step::BaseObject::inited()) {
    return m_relatingPort.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsPortToElement::setRelatingPort(const Step::RefPtr< IfcPort > &value) {
  m_relatingPort = value;
}

IfcElement *IfcRelConnectsPortToElement::getRelatedElement() {
  if (Step::BaseObject::inited()) {
    return m_relatedElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsPortToElement::setRelatedElement(const Step::RefPtr< IfcElement > &value) {
  m_relatedElement = value;
}

void IfcRelConnectsPortToElement::release() {
  IfcRelConnects::release();
  m_relatingPort.release();
  m_relatedElement.release();
}

bool IfcRelConnectsPortToElement::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingPort = NULL;
  }
  else {
    m_relatingPort = static_cast< IfcPort * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsPortToElement::s_type = new Step::ClassType_class("IfcRelConnectsPortToElement");
IfcRelConnectsPortToElement_Factory::IfcRelConnectsPortToElement_Factory() {
}

IfcRelConnectsPortToElement_Factory::~IfcRelConnectsPortToElement_Factory() {
  clear(true);
}

void IfcRelConnectsPortToElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsPortToElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsPortToElement_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsPortToElement *IfcRelConnectsPortToElement_Factory::get(Step::StepId id) {
  IfcRelConnectsPortToElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsPortToElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsPortToElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsPortToElement * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsPortToElement_Factory::create(Step::StepId id) {
  IfcRelConnectsPortToElement *ret = new IfcRelConnectsPortToElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsPortToElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsPortToElement *ret = new IfcRelConnectsPortToElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsPortToElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsPortToElement *ret = new IfcRelConnectsPortToElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsPortToElement *IfcRelConnectsPortToElement_Factory::generate() {
  return static_cast< IfcRelConnectsPortToElement * > (create(m_model->getNewId()));
}

IfcRelConnectsPortToElement *IfcRelConnectsPortToElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsPortToElement * > (it->second);
  }
  else {
    return NULL;
  }
}

