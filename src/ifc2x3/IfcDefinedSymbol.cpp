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
#include <ifc2x3/IfcDefinedSymbol.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcDefinedSymbolSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDefinedSymbol::IfcDefinedSymbol(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_definition = NULL;
  m_target = NULL;
}


IfcDefinedSymbol::~IfcDefinedSymbol() {
}

bool IfcDefinedSymbol::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDefinedSymbol(this);
}

const char *IfcDefinedSymbol::type() {
  return "IfcDefinedSymbol";
}

Step::ClassType IfcDefinedSymbol::getClassType() {
  return IfcDefinedSymbol::s_type;
}

Step::ClassType IfcDefinedSymbol::getType() const {
  return IfcDefinedSymbol::s_type;
}

bool IfcDefinedSymbol::isOfType(Step::ClassType t) {
  return IfcDefinedSymbol::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDefinedSymbolSelect *IfcDefinedSymbol::getDefinition() {
  if (Step::BaseObject::inited()) {
    return m_definition.get();
  }
  else {
    return NULL;
  }
}

void IfcDefinedSymbol::setDefinition(const Step::RefPtr< IfcDefinedSymbolSelect > &value) {
  m_definition = value;
}

IfcCartesianTransformationOperator2D *IfcDefinedSymbol::getTarget() {
  if (Step::BaseObject::inited()) {
    return m_target.get();
  }
  else {
    return NULL;
  }
}

void IfcDefinedSymbol::setTarget(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
  m_target = value;
}

void IfcDefinedSymbol::release() {
  IfcGeometricRepresentationItem::release();
  m_target.release();
}

bool IfcDefinedSymbol::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_definition = NULL;
  }
  else {
    m_definition = new IfcDefinedSymbolSelect;
    if (arg[0] == '#') {
      m_definition->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_target = NULL;
  }
  else {
    m_target = static_cast< IfcCartesianTransformationOperator2D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDefinedSymbol::s_type = new Step::ClassType_class("IfcDefinedSymbol");
IfcDefinedSymbol_Factory::IfcDefinedSymbol_Factory() {
}

IfcDefinedSymbol_Factory::~IfcDefinedSymbol_Factory() {
  clear(true);
}

void IfcDefinedSymbol_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDefinedSymbol_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDefinedSymbol_Factory::end() {
  return m_idMap.end();
}

IfcDefinedSymbol *IfcDefinedSymbol_Factory::get(Step::StepId id) {
  IfcDefinedSymbol *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDefinedSymbol * > (it->second);
  }
  else {
    LOG_ERROR("IfcDefinedSymbol_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDefinedSymbol * > (create(id));
  }
}

Step::BaseObject *IfcDefinedSymbol_Factory::create(Step::StepId id) {
  IfcDefinedSymbol *ret = new IfcDefinedSymbol(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDefinedSymbol_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDefinedSymbol *ret = new IfcDefinedSymbol(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDefinedSymbol_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDefinedSymbol *ret = new IfcDefinedSymbol(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDefinedSymbol *IfcDefinedSymbol_Factory::generate() {
  return static_cast< IfcDefinedSymbol * > (create(m_model->getNewId()));
}

IfcDefinedSymbol *IfcDefinedSymbol_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDefinedSymbol * > (it->second);
  }
  else {
    return NULL;
  }
}

