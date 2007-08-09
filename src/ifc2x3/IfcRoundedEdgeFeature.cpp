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
#include <ifc2x3/IfcRoundedEdgeFeature.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRoundedEdgeFeature::IfcRoundedEdgeFeature(Step::SPFData *args) : IfcEdgeFeature(args) {
  m_radius = getUnset(m_radius);
}


IfcRoundedEdgeFeature::~IfcRoundedEdgeFeature() {
}

bool IfcRoundedEdgeFeature::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRoundedEdgeFeature(this);
}

const char *IfcRoundedEdgeFeature::type() {
  return "IfcRoundedEdgeFeature";
}

Step::ClassType IfcRoundedEdgeFeature::getClassType() {
  return IfcRoundedEdgeFeature::s_type;
}

Step::ClassType IfcRoundedEdgeFeature::getType() const {
  return IfcRoundedEdgeFeature::s_type;
}

bool IfcRoundedEdgeFeature::isOfType(Step::ClassType t) {
  return IfcRoundedEdgeFeature::s_type == t ? true : IfcEdgeFeature::isOfType(t);
}

IfcPositiveLengthMeasure IfcRoundedEdgeFeature::getRadius() {
  if (Step::BaseObject::inited()) {
    return m_radius;
  }
  else {
    return getUnset(m_radius);
  }
}

void IfcRoundedEdgeFeature::setRadius(IfcPositiveLengthMeasure value) {
  m_radius = value;
}

void IfcRoundedEdgeFeature::release() {
  IfcEdgeFeature::release();
}

bool IfcRoundedEdgeFeature::init() {
  bool status = IfcEdgeFeature::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_radius = getUnset(m_radius);
  }
  else {
    m_radius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoundedEdgeFeature::s_type = new Step::ClassType_class("IfcRoundedEdgeFeature");
IfcRoundedEdgeFeature_Factory::IfcRoundedEdgeFeature_Factory() {
}

IfcRoundedEdgeFeature_Factory::~IfcRoundedEdgeFeature_Factory() {
  clear(true);
}

void IfcRoundedEdgeFeature_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRoundedEdgeFeature_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRoundedEdgeFeature_Factory::end() {
  return m_idMap.end();
}

IfcRoundedEdgeFeature *IfcRoundedEdgeFeature_Factory::get(Step::StepId id) {
  IfcRoundedEdgeFeature *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRoundedEdgeFeature * > (it->second);
  }
  else {
    LOG_ERROR("IfcRoundedEdgeFeature_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRoundedEdgeFeature * > (create(id));
  }
}

Step::BaseObject *IfcRoundedEdgeFeature_Factory::create(Step::StepId id) {
  IfcRoundedEdgeFeature *ret = new IfcRoundedEdgeFeature(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRoundedEdgeFeature_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRoundedEdgeFeature *ret = new IfcRoundedEdgeFeature(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRoundedEdgeFeature_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRoundedEdgeFeature *ret = new IfcRoundedEdgeFeature(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRoundedEdgeFeature *IfcRoundedEdgeFeature_Factory::generate() {
  return static_cast< IfcRoundedEdgeFeature * > (create(m_model->getNewId()));
}

IfcRoundedEdgeFeature *IfcRoundedEdgeFeature_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRoundedEdgeFeature * > (it->second);
  }
  else {
    return NULL;
  }
}

