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
#include <ifc2x3/IfcRepresentation.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRepresentation::IfcRepresentation(Step::SPFData *args) : Step::BaseObject(args) {
  m_contextOfItems = NULL;
  m_representationIdentifier = getUnset(m_representationIdentifier);
  m_representationType = getUnset(m_representationType);
  m_items.setUnset(true);
  m_representationMap.setUnset(true);
  m_layerAssignments.setUnset(true);
  m_ofProductRepresentation.setUnset(true);
}


IfcRepresentation::~IfcRepresentation() {
}

bool IfcRepresentation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRepresentation(this);
}

const char *IfcRepresentation::type() {
  return "IfcRepresentation";
}

Step::ClassType IfcRepresentation::getClassType() {
  return IfcRepresentation::s_type;
}

Step::ClassType IfcRepresentation::getType() const {
  return IfcRepresentation::s_type;
}

bool IfcRepresentation::isOfType(Step::ClassType t) {
  return IfcRepresentation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcRepresentationContext *IfcRepresentation::getContextOfItems() {
  if (Step::BaseObject::inited()) {
    return m_contextOfItems.get();
  }
  else {
    return NULL;
  }
}

void IfcRepresentation::setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value) {
  m_contextOfItems = value;
}

IfcLabel IfcRepresentation::getRepresentationIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_representationIdentifier;
  }
  else {
    return getUnset(m_representationIdentifier);
  }
}

void IfcRepresentation::setRepresentationIdentifier(const IfcLabel &value) {
  m_representationIdentifier = value;
}

IfcLabel IfcRepresentation::getRepresentationType() {
  if (Step::BaseObject::inited()) {
    return m_representationType;
  }
  else {
    return getUnset(m_representationType);
  }
}

void IfcRepresentation::setRepresentationType(const IfcLabel &value) {
  m_representationType = value;
}

Step::StepSet< Step::RefPtr< IfcRepresentationItem > > &IfcRepresentation::getItems() {
  if (Step::BaseObject::inited()) {
    return m_items;
  }
  else {
    m_items.setUnset(true);
    return m_items;
  }
}

void IfcRepresentation::setItems(const Step::StepSet< Step::RefPtr< IfcRepresentationItem > > &value) {
  m_items = value;
}

Step::StepSet< Step::RefPtr< IfcRepresentationMap > > &IfcRepresentation::getRepresentationMap() {
  if (Step::BaseObject::inited()) {
    return m_representationMap;
  }
  else {
    m_representationMap.setUnset(true);
    return m_representationMap;
  }
}

void IfcRepresentation::setRepresentationMap(const Step::StepSet< Step::RefPtr< IfcRepresentationMap > > &value) {
  m_representationMap = value;
}

Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > &IfcRepresentation::getLayerAssignments() {
  if (Step::BaseObject::inited()) {
    return m_layerAssignments;
  }
  else {
    m_layerAssignments.setUnset(true);
    return m_layerAssignments;
  }
}

void IfcRepresentation::setLayerAssignments(const Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > &value) {
  m_layerAssignments = value;
}

Step::StepSet< Step::RefPtr< IfcProductRepresentation > > &IfcRepresentation::getOfProductRepresentation() {
  if (Step::BaseObject::inited()) {
    return m_ofProductRepresentation;
  }
  else {
    m_ofProductRepresentation.setUnset(true);
    return m_ofProductRepresentation;
  }
}

void IfcRepresentation::setOfProductRepresentation(const Step::StepSet< Step::RefPtr< IfcProductRepresentation > > &value) {
  m_ofProductRepresentation = value;
}

void IfcRepresentation::release() {
  m_contextOfItems.release();
  m_items.clear();
}

bool IfcRepresentation::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_contextOfItems = NULL;
  }
  else {
    m_contextOfItems = static_cast< IfcRepresentationContext * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_representationIdentifier = getUnset(m_representationIdentifier);
  }
  else {
    m_representationIdentifier = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_representationType = getUnset(m_representationType);
  }
  else {
    m_representationType = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_items.setUnset(true);
  }
  else {
    m_items.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRepresentationItem > attr2;
        attr2 = static_cast< IfcRepresentationItem * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_items.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  inverses = m_args->getInverses(IfcRepresentationMap::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_representationMap.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_representationMap.insert(static_cast< IfcRepresentationMap * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_layerAssignments.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_layerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcProductRepresentation::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_ofProductRepresentation.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_ofProductRepresentation.insert(static_cast< IfcProductRepresentation * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentation::s_type = new Step::ClassType_class("IfcRepresentation");
IfcRepresentation_Factory::IfcRepresentation_Factory() {
}

IfcRepresentation_Factory::~IfcRepresentation_Factory() {
  clear(true);
}

void IfcRepresentation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRepresentation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRepresentation_Factory::end() {
  return m_idMap.end();
}

IfcRepresentation *IfcRepresentation_Factory::get(Step::StepId id) {
  IfcRepresentation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRepresentation * > (it->second);
  }
  else {
    LOG_ERROR("IfcRepresentation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRepresentation * > (create(id));
  }
}

Step::BaseObject *IfcRepresentation_Factory::create(Step::StepId id) {
  IfcRepresentation *ret = new IfcRepresentation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRepresentation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRepresentation *ret = new IfcRepresentation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRepresentation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRepresentation *ret = new IfcRepresentation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRepresentation *IfcRepresentation_Factory::generate() {
  return static_cast< IfcRepresentation * > (create(m_model->getNewId()));
}

IfcRepresentation *IfcRepresentation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRepresentation * > (it->second);
  }
  else {
    return NULL;
  }
}

