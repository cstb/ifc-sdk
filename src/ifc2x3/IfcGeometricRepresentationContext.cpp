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
#include <ifc2x3/IfcGeometricRepresentationContext.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGeometricRepresentationContext::IfcGeometricRepresentationContext(Step::SPFData *args) : IfcRepresentationContext(args) {
  m_coordinateSpaceDimension = getUnset(m_coordinateSpaceDimension);
  m_precision = getUnset(m_precision);
  m_worldCoordinateSystem = NULL;
  m_trueNorth = NULL;
  m_hasSubContexts.setUnset(true);
}


IfcGeometricRepresentationContext::~IfcGeometricRepresentationContext() {
}

bool IfcGeometricRepresentationContext::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGeometricRepresentationContext(this);
}

const char *IfcGeometricRepresentationContext::type() {
  return "IfcGeometricRepresentationContext";
}

Step::ClassType IfcGeometricRepresentationContext::getClassType() {
  return IfcGeometricRepresentationContext::s_type;
}

Step::ClassType IfcGeometricRepresentationContext::getType() const {
  return IfcGeometricRepresentationContext::s_type;
}

bool IfcGeometricRepresentationContext::isOfType(Step::ClassType t) {
  return IfcGeometricRepresentationContext::s_type == t ? true : IfcRepresentationContext::isOfType(t);
}

IfcDimensionCount IfcGeometricRepresentationContext::getCoordinateSpaceDimension() {
  if (Step::BaseObject::inited()) {
    return m_coordinateSpaceDimension;
  }
  else {
    return getUnset(m_coordinateSpaceDimension);
  }
}

void IfcGeometricRepresentationContext::setCoordinateSpaceDimension(IfcDimensionCount value) {
  m_coordinateSpaceDimension = value;
}

Real IfcGeometricRepresentationContext::getPrecision() {
  if (Step::BaseObject::inited()) {
    return m_precision;
  }
  else {
    return getUnset(m_precision);
  }
}

void IfcGeometricRepresentationContext::setPrecision(Real value) {
  m_precision = value;
}

IfcAxis2Placement *IfcGeometricRepresentationContext::getWorldCoordinateSystem() {
  if (Step::BaseObject::inited()) {
    return m_worldCoordinateSystem.get();
  }
  else {
    return NULL;
  }
}

void IfcGeometricRepresentationContext::setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_worldCoordinateSystem = value;
}

IfcDirection *IfcGeometricRepresentationContext::getTrueNorth() {
  if (Step::BaseObject::inited()) {
    return m_trueNorth.get();
  }
  else {
    return NULL;
  }
}

void IfcGeometricRepresentationContext::setTrueNorth(const Step::RefPtr< IfcDirection > &value) {
  m_trueNorth = value;
}

Step::StepSet< Step::RefPtr< IfcGeometricRepresentationSubContext > > &IfcGeometricRepresentationContext::getHasSubContexts() {
  if (Step::BaseObject::inited()) {
    return m_hasSubContexts;
  }
  else {
    m_hasSubContexts.setUnset(true);
    return m_hasSubContexts;
  }
}

void IfcGeometricRepresentationContext::setHasSubContexts(const Step::StepSet< Step::RefPtr< IfcGeometricRepresentationSubContext > > &value) {
  m_hasSubContexts = value;
}

void IfcGeometricRepresentationContext::release() {
  IfcRepresentationContext::release();
  m_trueNorth.release();
}

bool IfcGeometricRepresentationContext::init() {
  bool status = IfcRepresentationContext::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_coordinateSpaceDimension = getUnset(m_coordinateSpaceDimension);
  }
  else {
    m_coordinateSpaceDimension = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_precision = getUnset(m_precision);
  }
  else {
    m_precision = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_worldCoordinateSystem = NULL;
  }
  else {
    m_worldCoordinateSystem = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_worldCoordinateSystem->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_trueNorth = NULL;
  }
  else {
    m_trueNorth = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  inverses = m_args->getInverses(IfcGeometricRepresentationSubContext::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_hasSubContexts.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasSubContexts.insert(static_cast< IfcGeometricRepresentationSubContext * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricRepresentationContext::s_type = new Step::ClassType_class("IfcGeometricRepresentationContext");
IfcGeometricRepresentationContext_Factory::IfcGeometricRepresentationContext_Factory() {
}

IfcGeometricRepresentationContext_Factory::~IfcGeometricRepresentationContext_Factory() {
  clear(true);
}

void IfcGeometricRepresentationContext_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeometricRepresentationContext_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeometricRepresentationContext_Factory::end() {
  return m_idMap.end();
}

IfcGeometricRepresentationContext *IfcGeometricRepresentationContext_Factory::get(Step::StepId id) {
  IfcGeometricRepresentationContext *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGeometricRepresentationContext * > (it->second);
  }
  else {
    LOG_ERROR("IfcGeometricRepresentationContext_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGeometricRepresentationContext * > (create(id));
  }
}

Step::BaseObject *IfcGeometricRepresentationContext_Factory::create(Step::StepId id) {
  IfcGeometricRepresentationContext *ret = new IfcGeometricRepresentationContext(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGeometricRepresentationContext_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGeometricRepresentationContext *ret = new IfcGeometricRepresentationContext(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGeometricRepresentationContext_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGeometricRepresentationContext *ret = new IfcGeometricRepresentationContext(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGeometricRepresentationContext *IfcGeometricRepresentationContext_Factory::generate() {
  return static_cast< IfcGeometricRepresentationContext * > (create(m_model->getNewId()));
}

IfcGeometricRepresentationContext *IfcGeometricRepresentationContext_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGeometricRepresentationContext * > (it->second);
  }
  else {
    return NULL;
  }
}

