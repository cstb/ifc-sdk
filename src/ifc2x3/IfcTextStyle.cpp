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
#include <ifc2x3/IfcTextStyle.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCharacterStyleSelect.h>
#include <ifc2x3/IfcTextFontSelect.h>
#include <ifc2x3/IfcTextStyleSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextStyle::IfcTextStyle(Step::SPFData *args) : IfcPresentationStyle(args) {
  m_textCharacterAppearance = NULL;
  m_textStyle = NULL;
  m_textFontStyle = NULL;
}


IfcTextStyle::~IfcTextStyle() {
}

bool IfcTextStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextStyle(this);
}

const char *IfcTextStyle::type() {
  return "IfcTextStyle";
}

Step::ClassType IfcTextStyle::getClassType() {
  return IfcTextStyle::s_type;
}

Step::ClassType IfcTextStyle::getType() const {
  return IfcTextStyle::s_type;
}

bool IfcTextStyle::isOfType(Step::ClassType t) {
  return IfcTextStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcCharacterStyleSelect *IfcTextStyle::getTextCharacterAppearance() {
  if (Step::BaseObject::inited()) {
    return m_textCharacterAppearance.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyle::setTextCharacterAppearance(const Step::RefPtr< IfcCharacterStyleSelect > &value) {
  m_textCharacterAppearance = value;
}

IfcTextStyleSelect *IfcTextStyle::getTextStyle() {
  if (Step::BaseObject::inited()) {
    return m_textStyle.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyle::setTextStyle(const Step::RefPtr< IfcTextStyleSelect > &value) {
  m_textStyle = value;
}

IfcTextFontSelect *IfcTextStyle::getTextFontStyle() {
  if (Step::BaseObject::inited()) {
    return m_textFontStyle.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyle::setTextFontStyle(const Step::RefPtr< IfcTextFontSelect > &value) {
  m_textFontStyle = value;
}

void IfcTextStyle::release() {
  IfcPresentationStyle::release();
}

bool IfcTextStyle::init() {
  bool status = IfcPresentationStyle::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textCharacterAppearance = NULL;
  }
  else {
    m_textCharacterAppearance = new IfcCharacterStyleSelect;
    if (arg[0] == '#') {
      m_textCharacterAppearance->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_textStyle = NULL;
  }
  else {
    m_textStyle = new IfcTextStyleSelect;
    if (arg[0] == '#') {
      m_textStyle->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_textFontStyle = NULL;
  }
  else {
    m_textFontStyle = new IfcTextFontSelect;
    if (arg[0] == '#') {
      m_textFontStyle->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcTextStyle::s_type = new Step::ClassType_class("IfcTextStyle");
IfcTextStyle_Factory::IfcTextStyle_Factory() {
}

IfcTextStyle_Factory::~IfcTextStyle_Factory() {
  clear(true);
}

void IfcTextStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyle_Factory::end() {
  return m_idMap.end();
}

IfcTextStyle *IfcTextStyle_Factory::get(Step::StepId id) {
  IfcTextStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextStyle * > (create(id));
  }
}

Step::BaseObject *IfcTextStyle_Factory::create(Step::StepId id) {
  IfcTextStyle *ret = new IfcTextStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextStyle *ret = new IfcTextStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextStyle *ret = new IfcTextStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextStyle *IfcTextStyle_Factory::generate() {
  return static_cast< IfcTextStyle * > (create(m_model->getNewId()));
}

IfcTextStyle *IfcTextStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

