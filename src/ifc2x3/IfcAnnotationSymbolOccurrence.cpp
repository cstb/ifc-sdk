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
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAnnotationSymbolOccurrence::IfcAnnotationSymbolOccurrence(Step::SPFData *args) : IfcAnnotationOccurrence(args) {
}


IfcAnnotationSymbolOccurrence::~IfcAnnotationSymbolOccurrence() {
}

bool IfcAnnotationSymbolOccurrence::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAnnotationSymbolOccurrence(this);
}

const char *IfcAnnotationSymbolOccurrence::type() {
  return "IfcAnnotationSymbolOccurrence";
}

Step::ClassType IfcAnnotationSymbolOccurrence::getClassType() {
  return IfcAnnotationSymbolOccurrence::s_type;
}

Step::ClassType IfcAnnotationSymbolOccurrence::getType() const {
  return IfcAnnotationSymbolOccurrence::s_type;
}

bool IfcAnnotationSymbolOccurrence::isOfType(Step::ClassType t) {
  return IfcAnnotationSymbolOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

void IfcAnnotationSymbolOccurrence::release() {
  IfcAnnotationOccurrence::release();
}

bool IfcAnnotationSymbolOccurrence::init() {
  bool status = IfcAnnotationOccurrence::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationSymbolOccurrence::s_type = new Step::ClassType_class("IfcAnnotationSymbolOccurrence");
IfcAnnotationSymbolOccurrence_Factory::IfcAnnotationSymbolOccurrence_Factory() {
}

IfcAnnotationSymbolOccurrence_Factory::~IfcAnnotationSymbolOccurrence_Factory() {
  clear(true);
}

void IfcAnnotationSymbolOccurrence_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationSymbolOccurrence_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationSymbolOccurrence_Factory::end() {
  return m_idMap.end();
}

IfcAnnotationSymbolOccurrence *IfcAnnotationSymbolOccurrence_Factory::get(Step::StepId id) {
  IfcAnnotationSymbolOccurrence *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAnnotationSymbolOccurrence * > (it->second);
  }
  else {
    LOG_ERROR("IfcAnnotationSymbolOccurrence_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAnnotationSymbolOccurrence * > (create(id));
  }
}

Step::BaseObject *IfcAnnotationSymbolOccurrence_Factory::create(Step::StepId id) {
  IfcAnnotationSymbolOccurrence *ret = new IfcAnnotationSymbolOccurrence(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationSymbolOccurrence_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAnnotationSymbolOccurrence *ret = new IfcAnnotationSymbolOccurrence(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationSymbolOccurrence_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAnnotationSymbolOccurrence *ret = new IfcAnnotationSymbolOccurrence(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAnnotationSymbolOccurrence *IfcAnnotationSymbolOccurrence_Factory::generate() {
  return static_cast< IfcAnnotationSymbolOccurrence * > (create(m_model->getNewId()));
}

IfcAnnotationSymbolOccurrence *IfcAnnotationSymbolOccurrence_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAnnotationSymbolOccurrence * > (it->second);
  }
  else {
    return NULL;
  }
}

