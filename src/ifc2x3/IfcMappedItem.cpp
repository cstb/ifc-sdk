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
#include <ifc2x3/IfcMappedItem.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMappedItem::IfcMappedItem(Step::SPFData *args) : IfcRepresentationItem(args) {
  m_mappingSource = NULL;
  m_mappingTarget = NULL;
}


IfcMappedItem::~IfcMappedItem() {
}

bool IfcMappedItem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMappedItem(this);
}

const char *IfcMappedItem::type() {
  return "IfcMappedItem";
}

Step::ClassType IfcMappedItem::getClassType() {
  return IfcMappedItem::s_type;
}

Step::ClassType IfcMappedItem::getType() const {
  return IfcMappedItem::s_type;
}

bool IfcMappedItem::isOfType(Step::ClassType t) {
  return IfcMappedItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

IfcRepresentationMap *IfcMappedItem::getMappingSource() {
  if (Step::BaseObject::inited()) {
    return m_mappingSource.get();
  }
  else {
    return NULL;
  }
}

void IfcMappedItem::setMappingSource(const Step::RefPtr< IfcRepresentationMap > &value) {
  m_mappingSource = value;
}

IfcCartesianTransformationOperator *IfcMappedItem::getMappingTarget() {
  if (Step::BaseObject::inited()) {
    return m_mappingTarget.get();
  }
  else {
    return NULL;
  }
}

void IfcMappedItem::setMappingTarget(const Step::RefPtr< IfcCartesianTransformationOperator > &value) {
  m_mappingTarget = value;
}

void IfcMappedItem::release() {
  IfcRepresentationItem::release();
  m_mappingSource.release();
  m_mappingTarget.release();
}

bool IfcMappedItem::init() {
  bool status = IfcRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mappingSource = NULL;
  }
  else {
    m_mappingSource = static_cast< IfcRepresentationMap * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mappingTarget = NULL;
  }
  else {
    m_mappingTarget = static_cast< IfcCartesianTransformationOperator * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMappedItem::s_type = new Step::ClassType_class("IfcMappedItem");
IfcMappedItem_Factory::IfcMappedItem_Factory() {
}

IfcMappedItem_Factory::~IfcMappedItem_Factory() {
  clear(true);
}

void IfcMappedItem_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMappedItem_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMappedItem_Factory::end() {
  return m_idMap.end();
}

IfcMappedItem *IfcMappedItem_Factory::get(Step::StepId id) {
  IfcMappedItem *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMappedItem * > (it->second);
  }
  else {
    LOG_ERROR("IfcMappedItem_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMappedItem * > (create(id));
  }
}

Step::BaseObject *IfcMappedItem_Factory::create(Step::StepId id) {
  IfcMappedItem *ret = new IfcMappedItem(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMappedItem_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMappedItem *ret = new IfcMappedItem(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMappedItem_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMappedItem *ret = new IfcMappedItem(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMappedItem *IfcMappedItem_Factory::generate() {
  return static_cast< IfcMappedItem * > (create(m_model->getNewId()));
}

IfcMappedItem *IfcMappedItem_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMappedItem * > (it->second);
  }
  else {
    return NULL;
  }
}

