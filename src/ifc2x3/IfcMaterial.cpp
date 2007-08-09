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
#include <ifc2x3/IfcMaterial.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterialClassificationRelationship.h>
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterial::IfcMaterial(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_hasRepresentation.setUnset(true);
  m_classifiedAs.setUnset(true);
}


IfcMaterial::~IfcMaterial() {
}

bool IfcMaterial::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterial(this);
}

const char *IfcMaterial::type() {
  return "IfcMaterial";
}

Step::ClassType IfcMaterial::getClassType() {
  return IfcMaterial::s_type;
}

Step::ClassType IfcMaterial::getType() const {
  return IfcMaterial::s_type;
}

bool IfcMaterial::isOfType(Step::ClassType t) {
  return IfcMaterial::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcMaterial::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcMaterial::setName(const IfcLabel &value) {
  m_name = value;
}

Step::StepSet< Step::RefPtr< IfcMaterialDefinitionRepresentation > > &IfcMaterial::getHasRepresentation() {
  if (Step::BaseObject::inited()) {
    return m_hasRepresentation;
  }
  else {
    m_hasRepresentation.setUnset(true);
    return m_hasRepresentation;
  }
}

void IfcMaterial::setHasRepresentation(const Step::StepSet< Step::RefPtr< IfcMaterialDefinitionRepresentation > > &value) {
  m_hasRepresentation = value;
}

Step::StepSet< Step::RefPtr< IfcMaterialClassificationRelationship > > &IfcMaterial::getClassifiedAs() {
  if (Step::BaseObject::inited()) {
    return m_classifiedAs;
  }
  else {
    m_classifiedAs.setUnset(true);
    return m_classifiedAs;
  }
}

void IfcMaterial::setClassifiedAs(const Step::StepSet< Step::RefPtr< IfcMaterialClassificationRelationship > > &value) {
  m_classifiedAs = value;
}

void IfcMaterial::release() {
}

bool IfcMaterial::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcMaterialDefinitionRepresentation::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_hasRepresentation.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasRepresentation.insert(static_cast< IfcMaterialDefinitionRepresentation * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcMaterialClassificationRelationship::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_classifiedAs.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_classifiedAs.insert(static_cast< IfcMaterialClassificationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterial::s_type = new Step::ClassType_class("IfcMaterial");
IfcMaterial_Factory::IfcMaterial_Factory() {
}

IfcMaterial_Factory::~IfcMaterial_Factory() {
  clear(true);
}

void IfcMaterial_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterial_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterial_Factory::end() {
  return m_idMap.end();
}

IfcMaterial *IfcMaterial_Factory::get(Step::StepId id) {
  IfcMaterial *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterial * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterial_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterial * > (create(id));
  }
}

Step::BaseObject *IfcMaterial_Factory::create(Step::StepId id) {
  IfcMaterial *ret = new IfcMaterial(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterial_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterial *ret = new IfcMaterial(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterial_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterial *ret = new IfcMaterial(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterial *IfcMaterial_Factory::generate() {
  return static_cast< IfcMaterial * > (create(m_model->getNewId()));
}

IfcMaterial *IfcMaterial_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterial * > (it->second);
  }
  else {
    return NULL;
  }
}

