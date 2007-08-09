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
#include <ifc2x3/IfcRelFillsElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcOpeningElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelFillsElement::IfcRelFillsElement(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingOpeningElement = NULL;
  m_relatedBuildingElement = NULL;
}


IfcRelFillsElement::~IfcRelFillsElement() {
}

bool IfcRelFillsElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelFillsElement(this);
}

const char *IfcRelFillsElement::type() {
  return "IfcRelFillsElement";
}

Step::ClassType IfcRelFillsElement::getClassType() {
  return IfcRelFillsElement::s_type;
}

Step::ClassType IfcRelFillsElement::getType() const {
  return IfcRelFillsElement::s_type;
}

bool IfcRelFillsElement::isOfType(Step::ClassType t) {
  return IfcRelFillsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcOpeningElement *IfcRelFillsElement::getRelatingOpeningElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingOpeningElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelFillsElement::setRelatingOpeningElement(const Step::RefPtr< IfcOpeningElement > &value) {
  m_relatingOpeningElement = value;
}

IfcElement *IfcRelFillsElement::getRelatedBuildingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatedBuildingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelFillsElement::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatedBuildingElement = value;
}

void IfcRelFillsElement::release() {
  IfcRelConnects::release();
  m_relatingOpeningElement.release();
  m_relatedBuildingElement.release();
}

bool IfcRelFillsElement::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingOpeningElement = NULL;
  }
  else {
    m_relatingOpeningElement = static_cast< IfcOpeningElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedBuildingElement = NULL;
  }
  else {
    m_relatedBuildingElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelFillsElement::s_type = new Step::ClassType_class("IfcRelFillsElement");
IfcRelFillsElement_Factory::IfcRelFillsElement_Factory() {
}

IfcRelFillsElement_Factory::~IfcRelFillsElement_Factory() {
  clear(true);
}

void IfcRelFillsElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelFillsElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelFillsElement_Factory::end() {
  return m_idMap.end();
}

IfcRelFillsElement *IfcRelFillsElement_Factory::get(Step::StepId id) {
  IfcRelFillsElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelFillsElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelFillsElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelFillsElement * > (create(id));
  }
}

Step::BaseObject *IfcRelFillsElement_Factory::create(Step::StepId id) {
  IfcRelFillsElement *ret = new IfcRelFillsElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelFillsElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelFillsElement *ret = new IfcRelFillsElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelFillsElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelFillsElement *ret = new IfcRelFillsElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelFillsElement *IfcRelFillsElement_Factory::generate() {
  return static_cast< IfcRelFillsElement * > (create(m_model->getNewId()));
}

IfcRelFillsElement *IfcRelFillsElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelFillsElement * > (it->second);
  }
  else {
    return NULL;
  }
}

