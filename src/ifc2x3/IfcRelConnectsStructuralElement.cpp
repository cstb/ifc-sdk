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
#include <ifc2x3/IfcRelConnectsStructuralElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsStructuralElement::IfcRelConnectsStructuralElement(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingElement = NULL;
  m_relatedStructuralMember = NULL;
}


IfcRelConnectsStructuralElement::~IfcRelConnectsStructuralElement() {
}

bool IfcRelConnectsStructuralElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsStructuralElement(this);
}

const char *IfcRelConnectsStructuralElement::type() {
  return "IfcRelConnectsStructuralElement";
}

Step::ClassType IfcRelConnectsStructuralElement::getClassType() {
  return IfcRelConnectsStructuralElement::s_type;
}

Step::ClassType IfcRelConnectsStructuralElement::getType() const {
  return IfcRelConnectsStructuralElement::s_type;
}

bool IfcRelConnectsStructuralElement::isOfType(Step::ClassType t) {
  return IfcRelConnectsStructuralElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelConnectsStructuralElement::getRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralElement::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatingElement = value;
}

IfcStructuralMember *IfcRelConnectsStructuralElement::getRelatedStructuralMember() {
  if (Step::BaseObject::inited()) {
    return m_relatedStructuralMember.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralElement::setRelatedStructuralMember(const Step::RefPtr< IfcStructuralMember > &value) {
  m_relatedStructuralMember = value;
}

void IfcRelConnectsStructuralElement::release() {
  IfcRelConnects::release();
  m_relatingElement.release();
  m_relatedStructuralMember.release();
}

bool IfcRelConnectsStructuralElement::init() {
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
    m_relatedStructuralMember = NULL;
  }
  else {
    m_relatedStructuralMember = static_cast< IfcStructuralMember * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralElement::s_type = new Step::ClassType_class("IfcRelConnectsStructuralElement");
IfcRelConnectsStructuralElement_Factory::IfcRelConnectsStructuralElement_Factory() {
}

IfcRelConnectsStructuralElement_Factory::~IfcRelConnectsStructuralElement_Factory() {
  clear(true);
}

void IfcRelConnectsStructuralElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsStructuralElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsStructuralElement_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsStructuralElement *IfcRelConnectsStructuralElement_Factory::get(Step::StepId id) {
  IfcRelConnectsStructuralElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsStructuralElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsStructuralElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsStructuralElement * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsStructuralElement_Factory::create(Step::StepId id) {
  IfcRelConnectsStructuralElement *ret = new IfcRelConnectsStructuralElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsStructuralElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsStructuralElement *ret = new IfcRelConnectsStructuralElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsStructuralElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsStructuralElement *ret = new IfcRelConnectsStructuralElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsStructuralElement *IfcRelConnectsStructuralElement_Factory::generate() {
  return static_cast< IfcRelConnectsStructuralElement * > (create(m_model->getNewId()));
}

IfcRelConnectsStructuralElement *IfcRelConnectsStructuralElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsStructuralElement * > (it->second);
  }
  else {
    return NULL;
  }
}

