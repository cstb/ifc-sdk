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
#include <ifc2x3/IfcBooleanResult.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBooleanOperand.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBooleanResult::IfcBooleanResult(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_operator = IfcBooleanOperator_UNSET;
  m_firstOperand = NULL;
  m_secondOperand = NULL;
}


IfcBooleanResult::~IfcBooleanResult() {
}

bool IfcBooleanResult::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBooleanResult(this);
}

const char *IfcBooleanResult::type() {
  return "IfcBooleanResult";
}

Step::ClassType IfcBooleanResult::getClassType() {
  return IfcBooleanResult::s_type;
}

Step::ClassType IfcBooleanResult::getType() const {
  return IfcBooleanResult::s_type;
}

bool IfcBooleanResult::isOfType(Step::ClassType t) {
  return IfcBooleanResult::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcBooleanOperator IfcBooleanResult::getOperator() {
  if (Step::BaseObject::inited()) {
    return m_operator;
  }
  else {
    return IfcBooleanOperator_UNSET;
  }
}

void IfcBooleanResult::setOperator(IfcBooleanOperator value) {
  m_operator = value;
}

IfcBooleanOperand *IfcBooleanResult::getFirstOperand() {
  if (Step::BaseObject::inited()) {
    return m_firstOperand.get();
  }
  else {
    return NULL;
  }
}

void IfcBooleanResult::setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value) {
  m_firstOperand = value;
}

IfcBooleanOperand *IfcBooleanResult::getSecondOperand() {
  if (Step::BaseObject::inited()) {
    return m_secondOperand.get();
  }
  else {
    return NULL;
  }
}

void IfcBooleanResult::setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value) {
  m_secondOperand = value;
}

void IfcBooleanResult::release() {
  IfcGeometricRepresentationItem::release();
}

bool IfcBooleanResult::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_operator = IfcBooleanOperator_UNSET;
  }
  else {
    if (arg == ".UNION.") {
      m_operator = IfcBooleanOperator_UNION;
    }
    else if (arg == ".INTERSECTION.") {
      m_operator = IfcBooleanOperator_INTERSECTION;
    }
    else if (arg == ".DIFFERENCE.") {
      m_operator = IfcBooleanOperator_DIFFERENCE;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_firstOperand = NULL;
  }
  else {
    m_firstOperand = new IfcBooleanOperand;
    if (arg[0] == '#') {
      m_firstOperand->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_secondOperand = NULL;
  }
  else {
    m_secondOperand = new IfcBooleanOperand;
    if (arg[0] == '#') {
      m_secondOperand->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcBooleanResult::s_type = new Step::ClassType_class("IfcBooleanResult");
IfcBooleanResult_Factory::IfcBooleanResult_Factory() {
}

IfcBooleanResult_Factory::~IfcBooleanResult_Factory() {
  clear(true);
}

void IfcBooleanResult_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBooleanResult_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBooleanResult_Factory::end() {
  return m_idMap.end();
}

IfcBooleanResult *IfcBooleanResult_Factory::get(Step::StepId id) {
  IfcBooleanResult *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBooleanResult * > (it->second);
  }
  else {
    LOG_ERROR("IfcBooleanResult_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBooleanResult * > (create(id));
  }
}

Step::BaseObject *IfcBooleanResult_Factory::create(Step::StepId id) {
  IfcBooleanResult *ret = new IfcBooleanResult(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBooleanResult_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBooleanResult *ret = new IfcBooleanResult(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBooleanResult_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBooleanResult *ret = new IfcBooleanResult(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBooleanResult *IfcBooleanResult_Factory::generate() {
  return static_cast< IfcBooleanResult * > (create(m_model->getNewId()));
}

IfcBooleanResult *IfcBooleanResult_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBooleanResult * > (it->second);
  }
  else {
    return NULL;
  }
}

