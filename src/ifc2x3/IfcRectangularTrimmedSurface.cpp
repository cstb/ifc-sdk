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
#include <ifc2x3/IfcRectangularTrimmedSurface.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRectangularTrimmedSurface::IfcRectangularTrimmedSurface(Step::SPFData *args) : IfcBoundedSurface(args) {
  m_basisSurface = NULL;
  m_u1 = getUnset(m_u1);
  m_v1 = getUnset(m_v1);
  m_u2 = getUnset(m_u2);
  m_v2 = getUnset(m_v2);
  m_usense = getUnset(m_usense);
  m_vsense = getUnset(m_vsense);
}


IfcRectangularTrimmedSurface::~IfcRectangularTrimmedSurface() {
}

bool IfcRectangularTrimmedSurface::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRectangularTrimmedSurface(this);
}

const char *IfcRectangularTrimmedSurface::type() {
  return "IfcRectangularTrimmedSurface";
}

Step::ClassType IfcRectangularTrimmedSurface::getClassType() {
  return IfcRectangularTrimmedSurface::s_type;
}

Step::ClassType IfcRectangularTrimmedSurface::getType() const {
  return IfcRectangularTrimmedSurface::s_type;
}

bool IfcRectangularTrimmedSurface::isOfType(Step::ClassType t) {
  return IfcRectangularTrimmedSurface::s_type == t ? true : IfcBoundedSurface::isOfType(t);
}

IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface() {
  if (Step::BaseObject::inited()) {
    return m_basisSurface.get();
  }
  else {
    return NULL;
  }
}

void IfcRectangularTrimmedSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
  m_basisSurface = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getU1() {
  if (Step::BaseObject::inited()) {
    return m_u1;
  }
  else {
    return getUnset(m_u1);
  }
}

void IfcRectangularTrimmedSurface::setU1(IfcParameterValue value) {
  m_u1 = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getV1() {
  if (Step::BaseObject::inited()) {
    return m_v1;
  }
  else {
    return getUnset(m_v1);
  }
}

void IfcRectangularTrimmedSurface::setV1(IfcParameterValue value) {
  m_v1 = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getU2() {
  if (Step::BaseObject::inited()) {
    return m_u2;
  }
  else {
    return getUnset(m_u2);
  }
}

void IfcRectangularTrimmedSurface::setU2(IfcParameterValue value) {
  m_u2 = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getV2() {
  if (Step::BaseObject::inited()) {
    return m_v2;
  }
  else {
    return getUnset(m_v2);
  }
}

void IfcRectangularTrimmedSurface::setV2(IfcParameterValue value) {
  m_v2 = value;
}

Bool IfcRectangularTrimmedSurface::getUsense() {
  if (Step::BaseObject::inited()) {
    return m_usense;
  }
  else {
    return getUnset(m_usense);
  }
}

void IfcRectangularTrimmedSurface::setUsense(Bool value) {
  m_usense = value;
}

Bool IfcRectangularTrimmedSurface::getVsense() {
  if (Step::BaseObject::inited()) {
    return m_vsense;
  }
  else {
    return getUnset(m_vsense);
  }
}

void IfcRectangularTrimmedSurface::setVsense(Bool value) {
  m_vsense = value;
}

void IfcRectangularTrimmedSurface::release() {
  IfcBoundedSurface::release();
  m_basisSurface.release();
}

bool IfcRectangularTrimmedSurface::init() {
  bool status = IfcBoundedSurface::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_basisSurface = NULL;
  }
  else {
    m_basisSurface = static_cast< IfcSurface * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_u1 = getUnset(m_u1);
  }
  else {
    m_u1 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_v1 = getUnset(m_v1);
  }
  else {
    m_v1 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_u2 = getUnset(m_u2);
  }
  else {
    m_u2 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_v2 = getUnset(m_v2);
  }
  else {
    m_v2 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_usense = getUnset(m_usense);
  }
  else {
    m_usense = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_vsense = getUnset(m_vsense);
  }
  else {
    m_vsense = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangularTrimmedSurface::s_type = new Step::ClassType_class("IfcRectangularTrimmedSurface");
IfcRectangularTrimmedSurface_Factory::IfcRectangularTrimmedSurface_Factory() {
}

IfcRectangularTrimmedSurface_Factory::~IfcRectangularTrimmedSurface_Factory() {
  clear(true);
}

void IfcRectangularTrimmedSurface_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangularTrimmedSurface_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangularTrimmedSurface_Factory::end() {
  return m_idMap.end();
}

IfcRectangularTrimmedSurface *IfcRectangularTrimmedSurface_Factory::get(Step::StepId id) {
  IfcRectangularTrimmedSurface *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRectangularTrimmedSurface * > (it->second);
  }
  else {
    LOG_ERROR("IfcRectangularTrimmedSurface_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRectangularTrimmedSurface * > (create(id));
  }
}

Step::BaseObject *IfcRectangularTrimmedSurface_Factory::create(Step::StepId id) {
  IfcRectangularTrimmedSurface *ret = new IfcRectangularTrimmedSurface(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRectangularTrimmedSurface_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRectangularTrimmedSurface *ret = new IfcRectangularTrimmedSurface(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRectangularTrimmedSurface_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRectangularTrimmedSurface *ret = new IfcRectangularTrimmedSurface(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRectangularTrimmedSurface *IfcRectangularTrimmedSurface_Factory::generate() {
  return static_cast< IfcRectangularTrimmedSurface * > (create(m_model->getNewId()));
}

IfcRectangularTrimmedSurface *IfcRectangularTrimmedSurface_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRectangularTrimmedSurface * > (it->second);
  }
  else {
    return NULL;
  }
}

