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
#include <ifc2x3/IfcAnnotation.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAnnotation::IfcAnnotation(Step::SPFData *args) : IfcProduct(args) {
  m_containedInStructure.setUnset(true);
}


IfcAnnotation::~IfcAnnotation() {
}

bool IfcAnnotation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAnnotation(this);
}

const char *IfcAnnotation::type() {
  return "IfcAnnotation";
}

Step::ClassType IfcAnnotation::getClassType() {
  return IfcAnnotation::s_type;
}

Step::ClassType IfcAnnotation::getType() const {
  return IfcAnnotation::s_type;
}

bool IfcAnnotation::isOfType(Step::ClassType t) {
  return IfcAnnotation::s_type == t ? true : IfcProduct::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &IfcAnnotation::getContainedInStructure() {
  if (Step::BaseObject::inited()) {
    return m_containedInStructure;
  }
  else {
    m_containedInStructure.setUnset(true);
    return m_containedInStructure;
  }
}

void IfcAnnotation::setContainedInStructure(const Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &value) {
  m_containedInStructure = value;
}

void IfcAnnotation::release() {
  IfcProduct::release();
}

bool IfcAnnotation::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_containedInStructure.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotation::s_type = new Step::ClassType_class("IfcAnnotation");
IfcAnnotation_Factory::IfcAnnotation_Factory() {
}

IfcAnnotation_Factory::~IfcAnnotation_Factory() {
  clear(true);
}

void IfcAnnotation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotation_Factory::end() {
  return m_idMap.end();
}

IfcAnnotation *IfcAnnotation_Factory::get(Step::StepId id) {
  IfcAnnotation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAnnotation * > (it->second);
  }
  else {
    LOG_ERROR("IfcAnnotation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAnnotation * > (create(id));
  }
}

Step::BaseObject *IfcAnnotation_Factory::create(Step::StepId id) {
  IfcAnnotation *ret = new IfcAnnotation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAnnotation *ret = new IfcAnnotation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAnnotation *ret = new IfcAnnotation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAnnotation *IfcAnnotation_Factory::generate() {
  return static_cast< IfcAnnotation * > (create(m_model->getNewId()));
}

IfcAnnotation *IfcAnnotation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAnnotation * > (it->second);
  }
  else {
    return NULL;
  }
}

