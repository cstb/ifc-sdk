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
#include <ifc2x3/IfcClassificationItem.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/IfcClassificationItemRelationship.h>
#include <ifc2x3/IfcClassificationNotationFacet.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcClassificationItem::IfcClassificationItem(Step::SPFData *args) : Step::BaseObject(args) {
  m_notation = NULL;
  m_itemOf = NULL;
  m_title = getUnset(m_title);
  m_isClassifiedItemIn.setUnset(true);
  m_isClassifyingItemIn.setUnset(true);
}


IfcClassificationItem::~IfcClassificationItem() {
}

bool IfcClassificationItem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassificationItem(this);
}

const char *IfcClassificationItem::type() {
  return "IfcClassificationItem";
}

Step::ClassType IfcClassificationItem::getClassType() {
  return IfcClassificationItem::s_type;
}

Step::ClassType IfcClassificationItem::getType() const {
  return IfcClassificationItem::s_type;
}

bool IfcClassificationItem::isOfType(Step::ClassType t) {
  return IfcClassificationItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcClassificationNotationFacet *IfcClassificationItem::getNotation() {
  if (Step::BaseObject::inited()) {
    return m_notation.get();
  }
  else {
    return NULL;
  }
}

void IfcClassificationItem::setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value) {
  m_notation = value;
}

IfcClassification *IfcClassificationItem::getItemOf() {
  if (Step::BaseObject::inited()) {
    return m_itemOf.get();
  }
  else {
    return NULL;
  }
}

void IfcClassificationItem::setItemOf(const Step::RefPtr< IfcClassification > &value) {
  m_itemOf = value;
}

IfcLabel IfcClassificationItem::getTitle() {
  if (Step::BaseObject::inited()) {
    return m_title;
  }
  else {
    return getUnset(m_title);
  }
}

void IfcClassificationItem::setTitle(const IfcLabel &value) {
  m_title = value;
}

Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &IfcClassificationItem::getIsClassifiedItemIn() {
  if (Step::BaseObject::inited()) {
    return m_isClassifiedItemIn;
  }
  else {
    m_isClassifiedItemIn.setUnset(true);
    return m_isClassifiedItemIn;
  }
}

void IfcClassificationItem::setIsClassifiedItemIn(const Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &value) {
  m_isClassifiedItemIn = value;
}

Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &IfcClassificationItem::getIsClassifyingItemIn() {
  if (Step::BaseObject::inited()) {
    return m_isClassifyingItemIn;
  }
  else {
    m_isClassifyingItemIn.setUnset(true);
    return m_isClassifyingItemIn;
  }
}

void IfcClassificationItem::setIsClassifyingItemIn(const Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &value) {
  m_isClassifyingItemIn = value;
}

void IfcClassificationItem::release() {
  m_notation.release();
  m_itemOf.release();
}

bool IfcClassificationItem::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_notation = NULL;
  }
  else {
    m_notation = static_cast< IfcClassificationNotationFacet * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_itemOf = NULL;
  }
  else {
    m_itemOf = static_cast< IfcClassification * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_title = getUnset(m_title);
  }
  else {
    m_title = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcClassificationItemRelationship::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_isClassifiedItemIn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isClassifiedItemIn.insert(static_cast< IfcClassificationItemRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcClassificationItemRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_isClassifyingItemIn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isClassifyingItemIn.insert(static_cast< IfcClassificationItemRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationItem::s_type = new Step::ClassType_class("IfcClassificationItem");
IfcClassificationItem_Factory::IfcClassificationItem_Factory() {
}

IfcClassificationItem_Factory::~IfcClassificationItem_Factory() {
  clear(true);
}

void IfcClassificationItem_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationItem_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationItem_Factory::end() {
  return m_idMap.end();
}

IfcClassificationItem *IfcClassificationItem_Factory::get(Step::StepId id) {
  IfcClassificationItem *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcClassificationItem * > (it->second);
  }
  else {
    LOG_ERROR("IfcClassificationItem_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcClassificationItem * > (create(id));
  }
}

Step::BaseObject *IfcClassificationItem_Factory::create(Step::StepId id) {
  IfcClassificationItem *ret = new IfcClassificationItem(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationItem_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcClassificationItem *ret = new IfcClassificationItem(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationItem_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcClassificationItem *ret = new IfcClassificationItem(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcClassificationItem *IfcClassificationItem_Factory::generate() {
  return static_cast< IfcClassificationItem * > (create(m_model->getNewId()));
}

IfcClassificationItem *IfcClassificationItem_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcClassificationItem * > (it->second);
  }
  else {
    return NULL;
  }
}

