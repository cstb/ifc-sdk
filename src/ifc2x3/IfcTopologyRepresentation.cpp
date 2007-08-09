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
#include <ifc2x3/IfcTopologyRepresentation.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTopologyRepresentation::IfcTopologyRepresentation(Step::SPFData *args) : IfcShapeModel(args) {
}


IfcTopologyRepresentation::~IfcTopologyRepresentation() {
}

bool IfcTopologyRepresentation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTopologyRepresentation(this);
}

const char *IfcTopologyRepresentation::type() {
  return "IfcTopologyRepresentation";
}

Step::ClassType IfcTopologyRepresentation::getClassType() {
  return IfcTopologyRepresentation::s_type;
}

Step::ClassType IfcTopologyRepresentation::getType() const {
  return IfcTopologyRepresentation::s_type;
}

bool IfcTopologyRepresentation::isOfType(Step::ClassType t) {
  return IfcTopologyRepresentation::s_type == t ? true : IfcShapeModel::isOfType(t);
}

void IfcTopologyRepresentation::release() {
  IfcShapeModel::release();
}

bool IfcTopologyRepresentation::init() {
  bool status = IfcShapeModel::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTopologyRepresentation::s_type = new Step::ClassType_class("IfcTopologyRepresentation");
IfcTopologyRepresentation_Factory::IfcTopologyRepresentation_Factory() {
}

IfcTopologyRepresentation_Factory::~IfcTopologyRepresentation_Factory() {
  clear(true);
}

void IfcTopologyRepresentation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTopologyRepresentation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTopologyRepresentation_Factory::end() {
  return m_idMap.end();
}

IfcTopologyRepresentation *IfcTopologyRepresentation_Factory::get(Step::StepId id) {
  IfcTopologyRepresentation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTopologyRepresentation * > (it->second);
  }
  else {
    LOG_ERROR("IfcTopologyRepresentation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTopologyRepresentation * > (create(id));
  }
}

Step::BaseObject *IfcTopologyRepresentation_Factory::create(Step::StepId id) {
  IfcTopologyRepresentation *ret = new IfcTopologyRepresentation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTopologyRepresentation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTopologyRepresentation *ret = new IfcTopologyRepresentation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTopologyRepresentation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTopologyRepresentation *ret = new IfcTopologyRepresentation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTopologyRepresentation *IfcTopologyRepresentation_Factory::generate() {
  return static_cast< IfcTopologyRepresentation * > (create(m_model->getNewId()));
}

IfcTopologyRepresentation *IfcTopologyRepresentation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTopologyRepresentation * > (it->second);
  }
  else {
    return NULL;
  }
}

