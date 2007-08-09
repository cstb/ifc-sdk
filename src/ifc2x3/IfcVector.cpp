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
#include <ifc2x3/IfcVector.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcVector::IfcVector(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_orientation = NULL;
  m_magnitude = getUnset(m_magnitude);
}


IfcVector::~IfcVector() {
}

bool IfcVector::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcVector(this);
}

const char *IfcVector::type() {
  return "IfcVector";
}

Step::ClassType IfcVector::getClassType() {
  return IfcVector::s_type;
}

Step::ClassType IfcVector::getType() const {
  return IfcVector::s_type;
}

bool IfcVector::isOfType(Step::ClassType t) {
  return IfcVector::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDirection *IfcVector::getOrientation() {
  if (Step::BaseObject::inited()) {
    return m_orientation.get();
  }
  else {
    return NULL;
  }
}

void IfcVector::setOrientation(const Step::RefPtr< IfcDirection > &value) {
  m_orientation = value;
}

IfcLengthMeasure IfcVector::getMagnitude() {
  if (Step::BaseObject::inited()) {
    return m_magnitude;
  }
  else {
    return getUnset(m_magnitude);
  }
}

void IfcVector::setMagnitude(IfcLengthMeasure value) {
  m_magnitude = value;
}

void IfcVector::release() {
  IfcGeometricRepresentationItem::release();
  m_orientation.release();
}

bool IfcVector::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_orientation = NULL;
  }
  else {
    m_orientation = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_magnitude = getUnset(m_magnitude);
  }
  else {
    m_magnitude = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcVector::s_type = new Step::ClassType_class("IfcVector");
IfcVector_Factory::IfcVector_Factory() {
}

IfcVector_Factory::~IfcVector_Factory() {
  clear(true);
}

void IfcVector_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVector_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVector_Factory::end() {
  return m_idMap.end();
}

IfcVector *IfcVector_Factory::get(Step::StepId id) {
  IfcVector *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcVector * > (it->second);
  }
  else {
    LOG_ERROR("IfcVector_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcVector * > (create(id));
  }
}

Step::BaseObject *IfcVector_Factory::create(Step::StepId id) {
  IfcVector *ret = new IfcVector(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcVector_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcVector *ret = new IfcVector(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcVector_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcVector *ret = new IfcVector(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcVector *IfcVector_Factory::generate() {
  return static_cast< IfcVector * > (create(m_model->getNewId()));
}

IfcVector *IfcVector_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcVector * > (it->second);
  }
  else {
    return NULL;
  }
}

