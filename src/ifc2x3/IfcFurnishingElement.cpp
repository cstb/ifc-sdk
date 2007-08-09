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
#include <ifc2x3/IfcFurnishingElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFurnishingElement::IfcFurnishingElement(Step::SPFData *args) : IfcElement(args) {
}


IfcFurnishingElement::~IfcFurnishingElement() {
}

bool IfcFurnishingElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFurnishingElement(this);
}

const char *IfcFurnishingElement::type() {
  return "IfcFurnishingElement";
}

Step::ClassType IfcFurnishingElement::getClassType() {
  return IfcFurnishingElement::s_type;
}

Step::ClassType IfcFurnishingElement::getType() const {
  return IfcFurnishingElement::s_type;
}

bool IfcFurnishingElement::isOfType(Step::ClassType t) {
  return IfcFurnishingElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcFurnishingElement::release() {
  IfcElement::release();
}

bool IfcFurnishingElement::init() {
  bool status = IfcElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnishingElement::s_type = new Step::ClassType_class("IfcFurnishingElement");
IfcFurnishingElement_Factory::IfcFurnishingElement_Factory() {
}

IfcFurnishingElement_Factory::~IfcFurnishingElement_Factory() {
  clear(true);
}

void IfcFurnishingElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFurnishingElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFurnishingElement_Factory::end() {
  return m_idMap.end();
}

IfcFurnishingElement *IfcFurnishingElement_Factory::get(Step::StepId id) {
  IfcFurnishingElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFurnishingElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcFurnishingElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFurnishingElement * > (create(id));
  }
}

Step::BaseObject *IfcFurnishingElement_Factory::create(Step::StepId id) {
  IfcFurnishingElement *ret = new IfcFurnishingElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFurnishingElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFurnishingElement *ret = new IfcFurnishingElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFurnishingElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFurnishingElement *ret = new IfcFurnishingElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFurnishingElement *IfcFurnishingElement_Factory::generate() {
  return static_cast< IfcFurnishingElement * > (create(m_model->getNewId()));
}

IfcFurnishingElement *IfcFurnishingElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFurnishingElement * > (it->second);
  }
  else {
    return NULL;
  }
}

