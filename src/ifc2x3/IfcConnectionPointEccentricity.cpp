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
#include <ifc2x3/IfcConnectionPointEccentricity.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConnectionPointEccentricity::IfcConnectionPointEccentricity(Step::SPFData *args) : IfcConnectionPointGeometry(args) {
  m_eccentricityInX = getUnset(m_eccentricityInX);
  m_eccentricityInY = getUnset(m_eccentricityInY);
  m_eccentricityInZ = getUnset(m_eccentricityInZ);
}


IfcConnectionPointEccentricity::~IfcConnectionPointEccentricity() {
}

bool IfcConnectionPointEccentricity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConnectionPointEccentricity(this);
}

const char *IfcConnectionPointEccentricity::type() {
  return "IfcConnectionPointEccentricity";
}

Step::ClassType IfcConnectionPointEccentricity::getClassType() {
  return IfcConnectionPointEccentricity::s_type;
}

Step::ClassType IfcConnectionPointEccentricity::getType() const {
  return IfcConnectionPointEccentricity::s_type;
}

bool IfcConnectionPointEccentricity::isOfType(Step::ClassType t) {
  return IfcConnectionPointEccentricity::s_type == t ? true : IfcConnectionPointGeometry::isOfType(t);
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInX() {
  if (Step::BaseObject::inited()) {
    return m_eccentricityInX;
  }
  else {
    return getUnset(m_eccentricityInX);
  }
}

void IfcConnectionPointEccentricity::setEccentricityInX(IfcLengthMeasure value) {
  m_eccentricityInX = value;
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInY() {
  if (Step::BaseObject::inited()) {
    return m_eccentricityInY;
  }
  else {
    return getUnset(m_eccentricityInY);
  }
}

void IfcConnectionPointEccentricity::setEccentricityInY(IfcLengthMeasure value) {
  m_eccentricityInY = value;
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInZ() {
  if (Step::BaseObject::inited()) {
    return m_eccentricityInZ;
  }
  else {
    return getUnset(m_eccentricityInZ);
  }
}

void IfcConnectionPointEccentricity::setEccentricityInZ(IfcLengthMeasure value) {
  m_eccentricityInZ = value;
}

void IfcConnectionPointEccentricity::release() {
  IfcConnectionPointGeometry::release();
}

bool IfcConnectionPointEccentricity::init() {
  bool status = IfcConnectionPointGeometry::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_eccentricityInX = getUnset(m_eccentricityInX);
  }
  else {
    m_eccentricityInX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_eccentricityInY = getUnset(m_eccentricityInY);
  }
  else {
    m_eccentricityInY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_eccentricityInZ = getUnset(m_eccentricityInZ);
  }
  else {
    m_eccentricityInZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionPointEccentricity::s_type = new Step::ClassType_class("IfcConnectionPointEccentricity");
IfcConnectionPointEccentricity_Factory::IfcConnectionPointEccentricity_Factory() {
}

IfcConnectionPointEccentricity_Factory::~IfcConnectionPointEccentricity_Factory() {
  clear(true);
}

void IfcConnectionPointEccentricity_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionPointEccentricity_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionPointEccentricity_Factory::end() {
  return m_idMap.end();
}

IfcConnectionPointEccentricity *IfcConnectionPointEccentricity_Factory::get(Step::StepId id) {
  IfcConnectionPointEccentricity *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConnectionPointEccentricity * > (it->second);
  }
  else {
    LOG_ERROR("IfcConnectionPointEccentricity_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConnectionPointEccentricity * > (create(id));
  }
}

Step::BaseObject *IfcConnectionPointEccentricity_Factory::create(Step::StepId id) {
  IfcConnectionPointEccentricity *ret = new IfcConnectionPointEccentricity(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionPointEccentricity_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConnectionPointEccentricity *ret = new IfcConnectionPointEccentricity(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionPointEccentricity_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConnectionPointEccentricity *ret = new IfcConnectionPointEccentricity(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConnectionPointEccentricity *IfcConnectionPointEccentricity_Factory::generate() {
  return static_cast< IfcConnectionPointEccentricity * > (create(m_model->getNewId()));
}

IfcConnectionPointEccentricity *IfcConnectionPointEccentricity_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConnectionPointEccentricity * > (it->second);
  }
  else {
    return NULL;
  }
}

