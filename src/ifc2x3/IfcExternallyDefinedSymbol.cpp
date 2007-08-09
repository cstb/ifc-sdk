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
#include <ifc2x3/IfcExternallyDefinedSymbol.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcExternallyDefinedSymbol::IfcExternallyDefinedSymbol(Step::SPFData *args) : IfcExternalReference(args) {
}


IfcExternallyDefinedSymbol::~IfcExternallyDefinedSymbol() {
}

bool IfcExternallyDefinedSymbol::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcExternallyDefinedSymbol(this);
}

const char *IfcExternallyDefinedSymbol::type() {
  return "IfcExternallyDefinedSymbol";
}

Step::ClassType IfcExternallyDefinedSymbol::getClassType() {
  return IfcExternallyDefinedSymbol::s_type;
}

Step::ClassType IfcExternallyDefinedSymbol::getType() const {
  return IfcExternallyDefinedSymbol::s_type;
}

bool IfcExternallyDefinedSymbol::isOfType(Step::ClassType t) {
  return IfcExternallyDefinedSymbol::s_type == t ? true : IfcExternalReference::isOfType(t);
}

void IfcExternallyDefinedSymbol::release() {
  IfcExternalReference::release();
}

bool IfcExternallyDefinedSymbol::init() {
  bool status = IfcExternalReference::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedSymbol::s_type = new Step::ClassType_class("IfcExternallyDefinedSymbol");
IfcExternallyDefinedSymbol_Factory::IfcExternallyDefinedSymbol_Factory() {
}

IfcExternallyDefinedSymbol_Factory::~IfcExternallyDefinedSymbol_Factory() {
  clear(true);
}

void IfcExternallyDefinedSymbol_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExternallyDefinedSymbol_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExternallyDefinedSymbol_Factory::end() {
  return m_idMap.end();
}

IfcExternallyDefinedSymbol *IfcExternallyDefinedSymbol_Factory::get(Step::StepId id) {
  IfcExternallyDefinedSymbol *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcExternallyDefinedSymbol * > (it->second);
  }
  else {
    LOG_ERROR("IfcExternallyDefinedSymbol_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcExternallyDefinedSymbol * > (create(id));
  }
}

Step::BaseObject *IfcExternallyDefinedSymbol_Factory::create(Step::StepId id) {
  IfcExternallyDefinedSymbol *ret = new IfcExternallyDefinedSymbol(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcExternallyDefinedSymbol_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcExternallyDefinedSymbol *ret = new IfcExternallyDefinedSymbol(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcExternallyDefinedSymbol_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcExternallyDefinedSymbol *ret = new IfcExternallyDefinedSymbol(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcExternallyDefinedSymbol *IfcExternallyDefinedSymbol_Factory::generate() {
  return static_cast< IfcExternallyDefinedSymbol * > (create(m_model->getNewId()));
}

IfcExternallyDefinedSymbol *IfcExternallyDefinedSymbol_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcExternallyDefinedSymbol * > (it->second);
  }
  else {
    return NULL;
  }
}

