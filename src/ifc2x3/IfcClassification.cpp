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
#include <ifc2x3/IfcClassification.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcClassification::IfcClassification(Step::SPFData *args) : Step::BaseObject(args) {
  m_source = getUnset(m_source);
  m_edition = getUnset(m_edition);
  m_editionDate = NULL;
  m_name = getUnset(m_name);
  m_contains.setUnset(true);
}


IfcClassification::~IfcClassification() {
}

bool IfcClassification::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassification(this);
}

const char *IfcClassification::type() {
  return "IfcClassification";
}

Step::ClassType IfcClassification::getClassType() {
  return IfcClassification::s_type;
}

Step::ClassType IfcClassification::getType() const {
  return IfcClassification::s_type;
}

bool IfcClassification::isOfType(Step::ClassType t) {
  return IfcClassification::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcClassification::getSource() {
  if (Step::BaseObject::inited()) {
    return m_source;
  }
  else {
    return getUnset(m_source);
  }
}

void IfcClassification::setSource(const IfcLabel &value) {
  m_source = value;
}

IfcLabel IfcClassification::getEdition() {
  if (Step::BaseObject::inited()) {
    return m_edition;
  }
  else {
    return getUnset(m_edition);
  }
}

void IfcClassification::setEdition(const IfcLabel &value) {
  m_edition = value;
}

IfcCalendarDate *IfcClassification::getEditionDate() {
  if (Step::BaseObject::inited()) {
    return m_editionDate.get();
  }
  else {
    return NULL;
  }
}

void IfcClassification::setEditionDate(const Step::RefPtr< IfcCalendarDate > &value) {
  m_editionDate = value;
}

IfcLabel IfcClassification::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcClassification::setName(const IfcLabel &value) {
  m_name = value;
}

Step::StepSet< Step::RefPtr< IfcClassificationItem > > &IfcClassification::getContains() {
  if (Step::BaseObject::inited()) {
    return m_contains;
  }
  else {
    m_contains.setUnset(true);
    return m_contains;
  }
}

void IfcClassification::setContains(const Step::StepSet< Step::RefPtr< IfcClassificationItem > > &value) {
  m_contains = value;
}

void IfcClassification::release() {
  m_editionDate.release();
}

bool IfcClassification::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_source = getUnset(m_source);
  }
  else {
    m_source = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edition = getUnset(m_edition);
  }
  else {
    m_edition = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_editionDate = NULL;
  }
  else {
    m_editionDate = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcClassificationItem::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_contains.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_contains.insert(static_cast< IfcClassificationItem * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassification::s_type = new Step::ClassType_class("IfcClassification");
IfcClassification_Factory::IfcClassification_Factory() {
}

IfcClassification_Factory::~IfcClassification_Factory() {
  clear(true);
}

void IfcClassification_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassification_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassification_Factory::end() {
  return m_idMap.end();
}

IfcClassification *IfcClassification_Factory::get(Step::StepId id) {
  IfcClassification *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcClassification * > (it->second);
  }
  else {
    LOG_ERROR("IfcClassification_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcClassification * > (create(id));
  }
}

Step::BaseObject *IfcClassification_Factory::create(Step::StepId id) {
  IfcClassification *ret = new IfcClassification(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcClassification_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcClassification *ret = new IfcClassification(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcClassification_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcClassification *ret = new IfcClassification(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcClassification *IfcClassification_Factory::generate() {
  return static_cast< IfcClassification * > (create(m_model->getNewId()));
}

IfcClassification *IfcClassification_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcClassification * > (it->second);
  }
  else {
    return NULL;
  }
}

