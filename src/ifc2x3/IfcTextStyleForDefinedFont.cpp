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
#include <ifc2x3/IfcTextStyleForDefinedFont.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcColour.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextStyleForDefinedFont::IfcTextStyleForDefinedFont(Step::SPFData *args) : Step::BaseObject(args) {
  m_colour = NULL;
  m_backgroundColour = NULL;
}


IfcTextStyleForDefinedFont::~IfcTextStyleForDefinedFont() {
}

bool IfcTextStyleForDefinedFont::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextStyleForDefinedFont(this);
}

const char *IfcTextStyleForDefinedFont::type() {
  return "IfcTextStyleForDefinedFont";
}

Step::ClassType IfcTextStyleForDefinedFont::getClassType() {
  return IfcTextStyleForDefinedFont::s_type;
}

Step::ClassType IfcTextStyleForDefinedFont::getType() const {
  return IfcTextStyleForDefinedFont::s_type;
}

bool IfcTextStyleForDefinedFont::isOfType(Step::ClassType t) {
  return IfcTextStyleForDefinedFont::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColour *IfcTextStyleForDefinedFont::getColour() {
  if (Step::BaseObject::inited()) {
    return m_colour.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleForDefinedFont::setColour(const Step::RefPtr< IfcColour > &value) {
  m_colour = value;
}

IfcColour *IfcTextStyleForDefinedFont::getBackgroundColour() {
  if (Step::BaseObject::inited()) {
    return m_backgroundColour.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleForDefinedFont::setBackgroundColour(const Step::RefPtr< IfcColour > &value) {
  m_backgroundColour = value;
}

void IfcTextStyleForDefinedFont::release() {
}

bool IfcTextStyleForDefinedFont::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_colour = NULL;
  }
  else {
    m_colour = new IfcColour;
    if (arg[0] == '#') {
      m_colour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_backgroundColour = NULL;
  }
  else {
    m_backgroundColour = new IfcColour;
    if (arg[0] == '#') {
      m_backgroundColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleForDefinedFont::s_type = new Step::ClassType_class("IfcTextStyleForDefinedFont");
IfcTextStyleForDefinedFont_Factory::IfcTextStyleForDefinedFont_Factory() {
}

IfcTextStyleForDefinedFont_Factory::~IfcTextStyleForDefinedFont_Factory() {
  clear(true);
}

void IfcTextStyleForDefinedFont_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleForDefinedFont_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleForDefinedFont_Factory::end() {
  return m_idMap.end();
}

IfcTextStyleForDefinedFont *IfcTextStyleForDefinedFont_Factory::get(Step::StepId id) {
  IfcTextStyleForDefinedFont *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextStyleForDefinedFont * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextStyleForDefinedFont_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextStyleForDefinedFont * > (create(id));
  }
}

Step::BaseObject *IfcTextStyleForDefinedFont_Factory::create(Step::StepId id) {
  IfcTextStyleForDefinedFont *ret = new IfcTextStyleForDefinedFont(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleForDefinedFont_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextStyleForDefinedFont *ret = new IfcTextStyleForDefinedFont(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleForDefinedFont_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextStyleForDefinedFont *ret = new IfcTextStyleForDefinedFont(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextStyleForDefinedFont *IfcTextStyleForDefinedFont_Factory::generate() {
  return static_cast< IfcTextStyleForDefinedFont * > (create(m_model->getNewId()));
}

IfcTextStyleForDefinedFont *IfcTextStyleForDefinedFont_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextStyleForDefinedFont * > (it->second);
  }
  else {
    return NULL;
  }
}

