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
#include <ifc2x3/IfcChamferEdgeFeature.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcChamferEdgeFeature::IfcChamferEdgeFeature(Step::SPFData *args) : IfcEdgeFeature(args) {
  m_width = getUnset(m_width);
  m_height = getUnset(m_height);
}


IfcChamferEdgeFeature::~IfcChamferEdgeFeature() {
}

bool IfcChamferEdgeFeature::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcChamferEdgeFeature(this);
}

const char *IfcChamferEdgeFeature::type() {
  return "IfcChamferEdgeFeature";
}

Step::ClassType IfcChamferEdgeFeature::getClassType() {
  return IfcChamferEdgeFeature::s_type;
}

Step::ClassType IfcChamferEdgeFeature::getType() const {
  return IfcChamferEdgeFeature::s_type;
}

bool IfcChamferEdgeFeature::isOfType(Step::ClassType t) {
  return IfcChamferEdgeFeature::s_type == t ? true : IfcEdgeFeature::isOfType(t);
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getWidth() {
  if (Step::BaseObject::inited()) {
    return m_width;
  }
  else {
    return getUnset(m_width);
  }
}

void IfcChamferEdgeFeature::setWidth(IfcPositiveLengthMeasure value) {
  m_width = value;
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getHeight() {
  if (Step::BaseObject::inited()) {
    return m_height;
  }
  else {
    return getUnset(m_height);
  }
}

void IfcChamferEdgeFeature::setHeight(IfcPositiveLengthMeasure value) {
  m_height = value;
}

void IfcChamferEdgeFeature::release() {
  IfcEdgeFeature::release();
}

bool IfcChamferEdgeFeature::init() {
  bool status = IfcEdgeFeature::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_width = getUnset(m_width);
  }
  else {
    m_width = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_height = getUnset(m_height);
  }
  else {
    m_height = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcChamferEdgeFeature::s_type = new Step::ClassType_class("IfcChamferEdgeFeature");
IfcChamferEdgeFeature_Factory::IfcChamferEdgeFeature_Factory() {
}

IfcChamferEdgeFeature_Factory::~IfcChamferEdgeFeature_Factory() {
  clear(true);
}

void IfcChamferEdgeFeature_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcChamferEdgeFeature_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcChamferEdgeFeature_Factory::end() {
  return m_idMap.end();
}

IfcChamferEdgeFeature *IfcChamferEdgeFeature_Factory::get(Step::StepId id) {
  IfcChamferEdgeFeature *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcChamferEdgeFeature * > (it->second);
  }
  else {
    LOG_ERROR("IfcChamferEdgeFeature_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcChamferEdgeFeature * > (create(id));
  }
}

Step::BaseObject *IfcChamferEdgeFeature_Factory::create(Step::StepId id) {
  IfcChamferEdgeFeature *ret = new IfcChamferEdgeFeature(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcChamferEdgeFeature_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcChamferEdgeFeature *ret = new IfcChamferEdgeFeature(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcChamferEdgeFeature_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcChamferEdgeFeature *ret = new IfcChamferEdgeFeature(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcChamferEdgeFeature *IfcChamferEdgeFeature_Factory::generate() {
  return static_cast< IfcChamferEdgeFeature * > (create(m_model->getNewId()));
}

IfcChamferEdgeFeature *IfcChamferEdgeFeature_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcChamferEdgeFeature * > (it->second);
  }
  else {
    return NULL;
  }
}

