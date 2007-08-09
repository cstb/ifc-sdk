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
#include <ifc2x3/IfcSymbolStyle.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSymbolStyleSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSymbolStyle::IfcSymbolStyle(Step::SPFData *args) : IfcPresentationStyle(args) {
  m_styleOfSymbol = NULL;
}


IfcSymbolStyle::~IfcSymbolStyle() {
}

bool IfcSymbolStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSymbolStyle(this);
}

const char *IfcSymbolStyle::type() {
  return "IfcSymbolStyle";
}

Step::ClassType IfcSymbolStyle::getClassType() {
  return IfcSymbolStyle::s_type;
}

Step::ClassType IfcSymbolStyle::getType() const {
  return IfcSymbolStyle::s_type;
}

bool IfcSymbolStyle::isOfType(Step::ClassType t) {
  return IfcSymbolStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcSymbolStyleSelect *IfcSymbolStyle::getStyleOfSymbol() {
  if (Step::BaseObject::inited()) {
    return m_styleOfSymbol.get();
  }
  else {
    return NULL;
  }
}

void IfcSymbolStyle::setStyleOfSymbol(const Step::RefPtr< IfcSymbolStyleSelect > &value) {
  m_styleOfSymbol = value;
}

void IfcSymbolStyle::release() {
  IfcPresentationStyle::release();
}

bool IfcSymbolStyle::init() {
  bool status = IfcPresentationStyle::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_styleOfSymbol = NULL;
  }
  else {
    m_styleOfSymbol = new IfcSymbolStyleSelect;
    if (arg[0] == '#') {
      m_styleOfSymbol->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSymbolStyle::s_type = new Step::ClassType_class("IfcSymbolStyle");
IfcSymbolStyle_Factory::IfcSymbolStyle_Factory() {
}

IfcSymbolStyle_Factory::~IfcSymbolStyle_Factory() {
  clear(true);
}

void IfcSymbolStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSymbolStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSymbolStyle_Factory::end() {
  return m_idMap.end();
}

IfcSymbolStyle *IfcSymbolStyle_Factory::get(Step::StepId id) {
  IfcSymbolStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSymbolStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcSymbolStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSymbolStyle * > (create(id));
  }
}

Step::BaseObject *IfcSymbolStyle_Factory::create(Step::StepId id) {
  IfcSymbolStyle *ret = new IfcSymbolStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSymbolStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSymbolStyle *ret = new IfcSymbolStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSymbolStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSymbolStyle *ret = new IfcSymbolStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSymbolStyle *IfcSymbolStyle_Factory::generate() {
  return static_cast< IfcSymbolStyle * > (create(m_model->getNewId()));
}

IfcSymbolStyle *IfcSymbolStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSymbolStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

