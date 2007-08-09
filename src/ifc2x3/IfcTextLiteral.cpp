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
#include <ifc2x3/IfcTextLiteral.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextLiteral::IfcTextLiteral(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_literal = getUnset(m_literal);
  m_placement = NULL;
  m_path = IfcTextPath_UNSET;
}


IfcTextLiteral::~IfcTextLiteral() {
}

bool IfcTextLiteral::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextLiteral(this);
}

const char *IfcTextLiteral::type() {
  return "IfcTextLiteral";
}

Step::ClassType IfcTextLiteral::getClassType() {
  return IfcTextLiteral::s_type;
}

Step::ClassType IfcTextLiteral::getType() const {
  return IfcTextLiteral::s_type;
}

bool IfcTextLiteral::isOfType(Step::ClassType t) {
  return IfcTextLiteral::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcPresentableText IfcTextLiteral::getLiteral() {
  if (Step::BaseObject::inited()) {
    return m_literal;
  }
  else {
    return getUnset(m_literal);
  }
}

void IfcTextLiteral::setLiteral(const IfcPresentableText &value) {
  m_literal = value;
}

IfcAxis2Placement *IfcTextLiteral::getPlacement() {
  if (Step::BaseObject::inited()) {
    return m_placement.get();
  }
  else {
    return NULL;
  }
}

void IfcTextLiteral::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_placement = value;
}

IfcTextPath IfcTextLiteral::getPath() {
  if (Step::BaseObject::inited()) {
    return m_path;
  }
  else {
    return IfcTextPath_UNSET;
  }
}

void IfcTextLiteral::setPath(IfcTextPath value) {
  m_path = value;
}

void IfcTextLiteral::release() {
  IfcGeometricRepresentationItem::release();
}

bool IfcTextLiteral::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_literal = getUnset(m_literal);
  }
  else {
    m_literal = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_placement = NULL;
  }
  else {
    m_placement = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_placement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_path = IfcTextPath_UNSET;
  }
  else {
    if (arg == ".LEFT.") {
      m_path = IfcTextPath_LEFT;
    }
    else if (arg == ".RIGHT.") {
      m_path = IfcTextPath_RIGHT;
    }
    else if (arg == ".UP.") {
      m_path = IfcTextPath_UP;
    }
    else if (arg == ".DOWN.") {
      m_path = IfcTextPath_DOWN;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextLiteral::s_type = new Step::ClassType_class("IfcTextLiteral");
IfcTextLiteral_Factory::IfcTextLiteral_Factory() {
}

IfcTextLiteral_Factory::~IfcTextLiteral_Factory() {
  clear(true);
}

void IfcTextLiteral_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextLiteral_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextLiteral_Factory::end() {
  return m_idMap.end();
}

IfcTextLiteral *IfcTextLiteral_Factory::get(Step::StepId id) {
  IfcTextLiteral *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextLiteral * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextLiteral_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextLiteral * > (create(id));
  }
}

Step::BaseObject *IfcTextLiteral_Factory::create(Step::StepId id) {
  IfcTextLiteral *ret = new IfcTextLiteral(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextLiteral_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextLiteral *ret = new IfcTextLiteral(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextLiteral_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextLiteral *ret = new IfcTextLiteral(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextLiteral *IfcTextLiteral_Factory::generate() {
  return static_cast< IfcTextLiteral * > (create(m_model->getNewId()));
}

IfcTextLiteral *IfcTextLiteral_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextLiteral * > (it->second);
  }
  else {
    return NULL;
  }
}

