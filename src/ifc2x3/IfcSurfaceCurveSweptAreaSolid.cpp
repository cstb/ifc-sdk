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
#include <ifc2x3/IfcSurfaceCurveSweptAreaSolid.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid(Step::SPFData *args) : IfcSweptAreaSolid(args) {
  m_directrix = NULL;
  m_startParam = getUnset(m_startParam);
  m_endParam = getUnset(m_endParam);
  m_referenceSurface = NULL;
}


IfcSurfaceCurveSweptAreaSolid::~IfcSurfaceCurveSweptAreaSolid() {
}

bool IfcSurfaceCurveSweptAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceCurveSweptAreaSolid(this);
}

const char *IfcSurfaceCurveSweptAreaSolid::type() {
  return "IfcSurfaceCurveSweptAreaSolid";
}

Step::ClassType IfcSurfaceCurveSweptAreaSolid::getClassType() {
  return IfcSurfaceCurveSweptAreaSolid::s_type;
}

Step::ClassType IfcSurfaceCurveSweptAreaSolid::getType() const {
  return IfcSurfaceCurveSweptAreaSolid::s_type;
}

bool IfcSurfaceCurveSweptAreaSolid::isOfType(Step::ClassType t) {
  return IfcSurfaceCurveSweptAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcCurve *IfcSurfaceCurveSweptAreaSolid::getDirectrix() {
  if (Step::BaseObject::inited()) {
    return m_directrix.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceCurveSweptAreaSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value) {
  m_directrix = value;
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getStartParam() {
  if (Step::BaseObject::inited()) {
    return m_startParam;
  }
  else {
    return getUnset(m_startParam);
  }
}

void IfcSurfaceCurveSweptAreaSolid::setStartParam(IfcParameterValue value) {
  m_startParam = value;
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getEndParam() {
  if (Step::BaseObject::inited()) {
    return m_endParam;
  }
  else {
    return getUnset(m_endParam);
  }
}

void IfcSurfaceCurveSweptAreaSolid::setEndParam(IfcParameterValue value) {
  m_endParam = value;
}

IfcSurface *IfcSurfaceCurveSweptAreaSolid::getReferenceSurface() {
  if (Step::BaseObject::inited()) {
    return m_referenceSurface.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceCurveSweptAreaSolid::setReferenceSurface(const Step::RefPtr< IfcSurface > &value) {
  m_referenceSurface = value;
}

void IfcSurfaceCurveSweptAreaSolid::release() {
  IfcSweptAreaSolid::release();
  m_directrix.release();
  m_referenceSurface.release();
}

bool IfcSurfaceCurveSweptAreaSolid::init() {
  bool status = IfcSweptAreaSolid::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_directrix = NULL;
  }
  else {
    m_directrix = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_startParam = getUnset(m_startParam);
  }
  else {
    m_startParam = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_endParam = getUnset(m_endParam);
  }
  else {
    m_endParam = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_referenceSurface = NULL;
  }
  else {
    m_referenceSurface = static_cast< IfcSurface * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceCurveSweptAreaSolid::s_type = new Step::ClassType_class("IfcSurfaceCurveSweptAreaSolid");
IfcSurfaceCurveSweptAreaSolid_Factory::IfcSurfaceCurveSweptAreaSolid_Factory() {
}

IfcSurfaceCurveSweptAreaSolid_Factory::~IfcSurfaceCurveSweptAreaSolid_Factory() {
  clear(true);
}

void IfcSurfaceCurveSweptAreaSolid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceCurveSweptAreaSolid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceCurveSweptAreaSolid_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceCurveSweptAreaSolid *IfcSurfaceCurveSweptAreaSolid_Factory::get(Step::StepId id) {
  IfcSurfaceCurveSweptAreaSolid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceCurveSweptAreaSolid * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceCurveSweptAreaSolid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceCurveSweptAreaSolid * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceCurveSweptAreaSolid_Factory::create(Step::StepId id) {
  IfcSurfaceCurveSweptAreaSolid *ret = new IfcSurfaceCurveSweptAreaSolid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceCurveSweptAreaSolid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceCurveSweptAreaSolid *ret = new IfcSurfaceCurveSweptAreaSolid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceCurveSweptAreaSolid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceCurveSweptAreaSolid *ret = new IfcSurfaceCurveSweptAreaSolid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceCurveSweptAreaSolid *IfcSurfaceCurveSweptAreaSolid_Factory::generate() {
  return static_cast< IfcSurfaceCurveSweptAreaSolid * > (create(m_model->getNewId()));
}

IfcSurfaceCurveSweptAreaSolid *IfcSurfaceCurveSweptAreaSolid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceCurveSweptAreaSolid * > (it->second);
  }
  else {
    return NULL;
  }
}

