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
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation(Step::SPFData *args) : IfcProductRepresentation(args) {
  m_representedMaterial = NULL;
}


IfcMaterialDefinitionRepresentation::~IfcMaterialDefinitionRepresentation() {
}

bool IfcMaterialDefinitionRepresentation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialDefinitionRepresentation(this);
}

const char *IfcMaterialDefinitionRepresentation::type() {
  return "IfcMaterialDefinitionRepresentation";
}

Step::ClassType IfcMaterialDefinitionRepresentation::getClassType() {
  return IfcMaterialDefinitionRepresentation::s_type;
}

Step::ClassType IfcMaterialDefinitionRepresentation::getType() const {
  return IfcMaterialDefinitionRepresentation::s_type;
}

bool IfcMaterialDefinitionRepresentation::isOfType(Step::ClassType t) {
  return IfcMaterialDefinitionRepresentation::s_type == t ? true : IfcProductRepresentation::isOfType(t);
}

IfcMaterial *IfcMaterialDefinitionRepresentation::getRepresentedMaterial() {
  if (Step::BaseObject::inited()) {
    return m_representedMaterial.get();
  }
  else {
    return NULL;
  }
}

void IfcMaterialDefinitionRepresentation::setRepresentedMaterial(const Step::RefPtr< IfcMaterial > &value) {
  m_representedMaterial = value;
}

void IfcMaterialDefinitionRepresentation::release() {
  IfcProductRepresentation::release();
  m_representedMaterial.release();
}

bool IfcMaterialDefinitionRepresentation::init() {
  bool status = IfcProductRepresentation::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_representedMaterial = NULL;
  }
  else {
    m_representedMaterial = static_cast< IfcMaterial * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialDefinitionRepresentation::s_type = new Step::ClassType_class("IfcMaterialDefinitionRepresentation");
IfcMaterialDefinitionRepresentation_Factory::IfcMaterialDefinitionRepresentation_Factory() {
}

IfcMaterialDefinitionRepresentation_Factory::~IfcMaterialDefinitionRepresentation_Factory() {
  clear(true);
}

void IfcMaterialDefinitionRepresentation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialDefinitionRepresentation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialDefinitionRepresentation_Factory::end() {
  return m_idMap.end();
}

IfcMaterialDefinitionRepresentation *IfcMaterialDefinitionRepresentation_Factory::get(Step::StepId id) {
  IfcMaterialDefinitionRepresentation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterialDefinitionRepresentation * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterialDefinitionRepresentation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterialDefinitionRepresentation * > (create(id));
  }
}

Step::BaseObject *IfcMaterialDefinitionRepresentation_Factory::create(Step::StepId id) {
  IfcMaterialDefinitionRepresentation *ret = new IfcMaterialDefinitionRepresentation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialDefinitionRepresentation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterialDefinitionRepresentation *ret = new IfcMaterialDefinitionRepresentation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialDefinitionRepresentation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterialDefinitionRepresentation *ret = new IfcMaterialDefinitionRepresentation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterialDefinitionRepresentation *IfcMaterialDefinitionRepresentation_Factory::generate() {
  return static_cast< IfcMaterialDefinitionRepresentation * > (create(m_model->getNewId()));
}

IfcMaterialDefinitionRepresentation *IfcMaterialDefinitionRepresentation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterialDefinitionRepresentation * > (it->second);
  }
  else {
    return NULL;
  }
}

