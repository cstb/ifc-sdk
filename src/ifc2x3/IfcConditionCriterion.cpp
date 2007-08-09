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
#include <ifc2x3/IfcConditionCriterion.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConditionCriterionSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConditionCriterion::IfcConditionCriterion(Step::SPFData *args) : IfcControl(args) {
  m_criterion = NULL;
  m_criterionDateTime = NULL;
}


IfcConditionCriterion::~IfcConditionCriterion() {
}

bool IfcConditionCriterion::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConditionCriterion(this);
}

const char *IfcConditionCriterion::type() {
  return "IfcConditionCriterion";
}

Step::ClassType IfcConditionCriterion::getClassType() {
  return IfcConditionCriterion::s_type;
}

Step::ClassType IfcConditionCriterion::getType() const {
  return IfcConditionCriterion::s_type;
}

bool IfcConditionCriterion::isOfType(Step::ClassType t) {
  return IfcConditionCriterion::s_type == t ? true : IfcControl::isOfType(t);
}

IfcConditionCriterionSelect *IfcConditionCriterion::getCriterion() {
  if (Step::BaseObject::inited()) {
    return m_criterion.get();
  }
  else {
    return NULL;
  }
}

void IfcConditionCriterion::setCriterion(const Step::RefPtr< IfcConditionCriterionSelect > &value) {
  m_criterion = value;
}

IfcDateTimeSelect *IfcConditionCriterion::getCriterionDateTime() {
  if (Step::BaseObject::inited()) {
    return m_criterionDateTime.get();
  }
  else {
    return NULL;
  }
}

void IfcConditionCriterion::setCriterionDateTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_criterionDateTime = value;
}

void IfcConditionCriterion::release() {
  IfcControl::release();
}

bool IfcConditionCriterion::init() {
  bool status = IfcControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_criterion = NULL;
  }
  else {
    m_criterion = new IfcConditionCriterionSelect;
    if (arg[0] == '#') {
      m_criterion->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCLABEL") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_criterion->setIfcLabel(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_criterionDateTime = NULL;
  }
  else {
    m_criterionDateTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_criterionDateTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcConditionCriterion::s_type = new Step::ClassType_class("IfcConditionCriterion");
IfcConditionCriterion_Factory::IfcConditionCriterion_Factory() {
}

IfcConditionCriterion_Factory::~IfcConditionCriterion_Factory() {
  clear(true);
}

void IfcConditionCriterion_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConditionCriterion_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConditionCriterion_Factory::end() {
  return m_idMap.end();
}

IfcConditionCriterion *IfcConditionCriterion_Factory::get(Step::StepId id) {
  IfcConditionCriterion *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConditionCriterion * > (it->second);
  }
  else {
    LOG_ERROR("IfcConditionCriterion_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConditionCriterion * > (create(id));
  }
}

Step::BaseObject *IfcConditionCriterion_Factory::create(Step::StepId id) {
  IfcConditionCriterion *ret = new IfcConditionCriterion(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConditionCriterion_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConditionCriterion *ret = new IfcConditionCriterion(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConditionCriterion_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConditionCriterion *ret = new IfcConditionCriterion(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConditionCriterion *IfcConditionCriterion_Factory::generate() {
  return static_cast< IfcConditionCriterion * > (create(m_model->getNewId()));
}

IfcConditionCriterion *IfcConditionCriterion_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConditionCriterion * > (it->second);
  }
  else {
    return NULL;
  }
}

