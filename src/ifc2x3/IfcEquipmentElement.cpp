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
#include <ifc2x3/IfcEquipmentElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEquipmentElement::IfcEquipmentElement(Step::SPFData *args) : IfcElement(args) {
}


IfcEquipmentElement::~IfcEquipmentElement() {
}

bool IfcEquipmentElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEquipmentElement(this);
}

const char *IfcEquipmentElement::type() {
  return "IfcEquipmentElement";
}

Step::ClassType IfcEquipmentElement::getClassType() {
  return IfcEquipmentElement::s_type;
}

Step::ClassType IfcEquipmentElement::getType() const {
  return IfcEquipmentElement::s_type;
}

bool IfcEquipmentElement::isOfType(Step::ClassType t) {
  return IfcEquipmentElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcEquipmentElement::release() {
  IfcElement::release();
}

bool IfcEquipmentElement::init() {
  bool status = IfcElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEquipmentElement::s_type = new Step::ClassType_class("IfcEquipmentElement");
IfcEquipmentElement_Factory::IfcEquipmentElement_Factory() {
}

IfcEquipmentElement_Factory::~IfcEquipmentElement_Factory() {
  clear(true);
}

void IfcEquipmentElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEquipmentElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEquipmentElement_Factory::end() {
  return m_idMap.end();
}

IfcEquipmentElement *IfcEquipmentElement_Factory::get(Step::StepId id) {
  IfcEquipmentElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEquipmentElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcEquipmentElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEquipmentElement * > (create(id));
  }
}

Step::BaseObject *IfcEquipmentElement_Factory::create(Step::StepId id) {
  IfcEquipmentElement *ret = new IfcEquipmentElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEquipmentElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEquipmentElement *ret = new IfcEquipmentElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEquipmentElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEquipmentElement *ret = new IfcEquipmentElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEquipmentElement *IfcEquipmentElement_Factory::generate() {
  return static_cast< IfcEquipmentElement * > (create(m_model->getNewId()));
}

IfcEquipmentElement *IfcEquipmentElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEquipmentElement * > (it->second);
  }
  else {
    return NULL;
  }
}

