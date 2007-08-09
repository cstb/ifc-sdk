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
#include <ifc2x3/IfcRelAssociatesClassification.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesClassification::IfcRelAssociatesClassification(Step::SPFData *args) : IfcRelAssociates(args) {
  m_relatingClassification = NULL;
}


IfcRelAssociatesClassification::~IfcRelAssociatesClassification() {
}

bool IfcRelAssociatesClassification::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesClassification(this);
}

const char *IfcRelAssociatesClassification::type() {
  return "IfcRelAssociatesClassification";
}

Step::ClassType IfcRelAssociatesClassification::getClassType() {
  return IfcRelAssociatesClassification::s_type;
}

Step::ClassType IfcRelAssociatesClassification::getType() const {
  return IfcRelAssociatesClassification::s_type;
}

bool IfcRelAssociatesClassification::isOfType(Step::ClassType t) {
  return IfcRelAssociatesClassification::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification() {
  if (Step::BaseObject::inited()) {
    return m_relatingClassification.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesClassification::setRelatingClassification(const Step::RefPtr< IfcClassificationNotationSelect > &value) {
  m_relatingClassification = value;
}

void IfcRelAssociatesClassification::release() {
  IfcRelAssociates::release();
}

bool IfcRelAssociatesClassification::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingClassification = NULL;
  }
  else {
    m_relatingClassification = new IfcClassificationNotationSelect;
    if (arg[0] == '#') {
      m_relatingClassification->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesClassification::s_type = new Step::ClassType_class("IfcRelAssociatesClassification");
IfcRelAssociatesClassification_Factory::IfcRelAssociatesClassification_Factory() {
}

IfcRelAssociatesClassification_Factory::~IfcRelAssociatesClassification_Factory() {
  clear(true);
}

void IfcRelAssociatesClassification_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesClassification_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesClassification_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesClassification *IfcRelAssociatesClassification_Factory::get(Step::StepId id) {
  IfcRelAssociatesClassification *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesClassification * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesClassification_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesClassification * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesClassification_Factory::create(Step::StepId id) {
  IfcRelAssociatesClassification *ret = new IfcRelAssociatesClassification(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesClassification_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesClassification *ret = new IfcRelAssociatesClassification(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesClassification_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesClassification *ret = new IfcRelAssociatesClassification(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesClassification *IfcRelAssociatesClassification_Factory::generate() {
  return static_cast< IfcRelAssociatesClassification * > (create(m_model->getNewId()));
}

IfcRelAssociatesClassification *IfcRelAssociatesClassification_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesClassification * > (it->second);
  }
  else {
    return NULL;
  }
}

