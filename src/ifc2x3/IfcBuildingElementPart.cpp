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
#include <ifc2x3/IfcBuildingElementPart.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBuildingElementPart::IfcBuildingElementPart(Step::SPFData *args) : IfcBuildingElementComponent(args) {
}


IfcBuildingElementPart::~IfcBuildingElementPart() {
}

bool IfcBuildingElementPart::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBuildingElementPart(this);
}

const char *IfcBuildingElementPart::type() {
  return "IfcBuildingElementPart";
}

Step::ClassType IfcBuildingElementPart::getClassType() {
  return IfcBuildingElementPart::s_type;
}

Step::ClassType IfcBuildingElementPart::getType() const {
  return IfcBuildingElementPart::s_type;
}

bool IfcBuildingElementPart::isOfType(Step::ClassType t) {
  return IfcBuildingElementPart::s_type == t ? true : IfcBuildingElementComponent::isOfType(t);
}

void IfcBuildingElementPart::release() {
  IfcBuildingElementComponent::release();
}

bool IfcBuildingElementPart::init() {
  bool status = IfcBuildingElementComponent::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementPart::s_type = new Step::ClassType_class("IfcBuildingElementPart");
IfcBuildingElementPart_Factory::IfcBuildingElementPart_Factory() {
}

IfcBuildingElementPart_Factory::~IfcBuildingElementPart_Factory() {
  clear(true);
}

void IfcBuildingElementPart_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuildingElementPart_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuildingElementPart_Factory::end() {
  return m_idMap.end();
}

IfcBuildingElementPart *IfcBuildingElementPart_Factory::get(Step::StepId id) {
  IfcBuildingElementPart *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBuildingElementPart * > (it->second);
  }
  else {
    LOG_ERROR("IfcBuildingElementPart_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBuildingElementPart * > (create(id));
  }
}

Step::BaseObject *IfcBuildingElementPart_Factory::create(Step::StepId id) {
  IfcBuildingElementPart *ret = new IfcBuildingElementPart(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBuildingElementPart_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBuildingElementPart *ret = new IfcBuildingElementPart(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBuildingElementPart_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBuildingElementPart *ret = new IfcBuildingElementPart(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBuildingElementPart *IfcBuildingElementPart_Factory::generate() {
  return static_cast< IfcBuildingElementPart * > (create(m_model->getNewId()));
}

IfcBuildingElementPart *IfcBuildingElementPart_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBuildingElementPart * > (it->second);
  }
  else {
    return NULL;
  }
}

