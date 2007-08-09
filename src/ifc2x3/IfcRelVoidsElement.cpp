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
#include <ifc2x3/IfcRelVoidsElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelVoidsElement::IfcRelVoidsElement(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingBuildingElement = NULL;
  m_relatedOpeningElement = NULL;
}


IfcRelVoidsElement::~IfcRelVoidsElement() {
}

bool IfcRelVoidsElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelVoidsElement(this);
}

const char *IfcRelVoidsElement::type() {
  return "IfcRelVoidsElement";
}

Step::ClassType IfcRelVoidsElement::getClassType() {
  return IfcRelVoidsElement::s_type;
}

Step::ClassType IfcRelVoidsElement::getType() const {
  return IfcRelVoidsElement::s_type;
}

bool IfcRelVoidsElement::isOfType(Step::ClassType t) {
  return IfcRelVoidsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelVoidsElement::getRelatingBuildingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingBuildingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelVoidsElement::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatingBuildingElement = value;
}

IfcFeatureElementSubtraction *IfcRelVoidsElement::getRelatedOpeningElement() {
  if (Step::BaseObject::inited()) {
    return m_relatedOpeningElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelVoidsElement::setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value) {
  m_relatedOpeningElement = value;
}

void IfcRelVoidsElement::release() {
  IfcRelConnects::release();
  m_relatingBuildingElement.release();
  m_relatedOpeningElement.release();
}

bool IfcRelVoidsElement::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingBuildingElement = NULL;
  }
  else {
    m_relatingBuildingElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedOpeningElement = NULL;
  }
  else {
    m_relatedOpeningElement = static_cast< IfcFeatureElementSubtraction * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelVoidsElement::s_type = new Step::ClassType_class("IfcRelVoidsElement");
IfcRelVoidsElement_Factory::IfcRelVoidsElement_Factory() {
}

IfcRelVoidsElement_Factory::~IfcRelVoidsElement_Factory() {
  clear(true);
}

void IfcRelVoidsElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelVoidsElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelVoidsElement_Factory::end() {
  return m_idMap.end();
}

IfcRelVoidsElement *IfcRelVoidsElement_Factory::get(Step::StepId id) {
  IfcRelVoidsElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelVoidsElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelVoidsElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelVoidsElement * > (create(id));
  }
}

Step::BaseObject *IfcRelVoidsElement_Factory::create(Step::StepId id) {
  IfcRelVoidsElement *ret = new IfcRelVoidsElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelVoidsElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelVoidsElement *ret = new IfcRelVoidsElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelVoidsElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelVoidsElement *ret = new IfcRelVoidsElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelVoidsElement *IfcRelVoidsElement_Factory::generate() {
  return static_cast< IfcRelVoidsElement * > (create(m_model->getNewId()));
}

IfcRelVoidsElement *IfcRelVoidsElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelVoidsElement * > (it->second);
  }
  else {
    return NULL;
  }
}

