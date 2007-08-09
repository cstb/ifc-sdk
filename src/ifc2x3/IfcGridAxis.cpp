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
#include <ifc2x3/IfcGridAxis.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGridAxis::IfcGridAxis(Step::SPFData *args) : Step::BaseObject(args) {
  m_axisTag = getUnset(m_axisTag);
  m_axisCurve = NULL;
  m_sameSense = getUnset(m_sameSense);
  m_partOfW.setUnset(true);
  m_partOfV.setUnset(true);
  m_partOfU.setUnset(true);
  m_hasIntersections.setUnset(true);
}


IfcGridAxis::~IfcGridAxis() {
}

bool IfcGridAxis::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGridAxis(this);
}

const char *IfcGridAxis::type() {
  return "IfcGridAxis";
}

Step::ClassType IfcGridAxis::getClassType() {
  return IfcGridAxis::s_type;
}

Step::ClassType IfcGridAxis::getType() const {
  return IfcGridAxis::s_type;
}

bool IfcGridAxis::isOfType(Step::ClassType t) {
  return IfcGridAxis::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcGridAxis::getAxisTag() {
  if (Step::BaseObject::inited()) {
    return m_axisTag;
  }
  else {
    return getUnset(m_axisTag);
  }
}

void IfcGridAxis::setAxisTag(const IfcLabel &value) {
  m_axisTag = value;
}

IfcCurve *IfcGridAxis::getAxisCurve() {
  if (Step::BaseObject::inited()) {
    return m_axisCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcGridAxis::setAxisCurve(const Step::RefPtr< IfcCurve > &value) {
  m_axisCurve = value;
}

IfcBoolean IfcGridAxis::getSameSense() {
  if (Step::BaseObject::inited()) {
    return m_sameSense;
  }
  else {
    return getUnset(m_sameSense);
  }
}

void IfcGridAxis::setSameSense(IfcBoolean value) {
  m_sameSense = value;
}

Step::StepSet< Step::RefPtr< IfcGrid > > &IfcGridAxis::getPartOfW() {
  if (Step::BaseObject::inited()) {
    return m_partOfW;
  }
  else {
    m_partOfW.setUnset(true);
    return m_partOfW;
  }
}

void IfcGridAxis::setPartOfW(const Step::StepSet< Step::RefPtr< IfcGrid > > &value) {
  m_partOfW = value;
}

Step::StepSet< Step::RefPtr< IfcGrid > > &IfcGridAxis::getPartOfV() {
  if (Step::BaseObject::inited()) {
    return m_partOfV;
  }
  else {
    m_partOfV.setUnset(true);
    return m_partOfV;
  }
}

void IfcGridAxis::setPartOfV(const Step::StepSet< Step::RefPtr< IfcGrid > > &value) {
  m_partOfV = value;
}

Step::StepSet< Step::RefPtr< IfcGrid > > &IfcGridAxis::getPartOfU() {
  if (Step::BaseObject::inited()) {
    return m_partOfU;
  }
  else {
    m_partOfU.setUnset(true);
    return m_partOfU;
  }
}

void IfcGridAxis::setPartOfU(const Step::StepSet< Step::RefPtr< IfcGrid > > &value) {
  m_partOfU = value;
}

Step::StepSet< Step::RefPtr< IfcVirtualGridIntersection > > &IfcGridAxis::getHasIntersections() {
  if (Step::BaseObject::inited()) {
    return m_hasIntersections;
  }
  else {
    m_hasIntersections.setUnset(true);
    return m_hasIntersections;
  }
}

void IfcGridAxis::setHasIntersections(const Step::StepSet< Step::RefPtr< IfcVirtualGridIntersection > > &value) {
  m_hasIntersections = value;
}

void IfcGridAxis::release() {
  m_axisCurve.release();
}

bool IfcGridAxis::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axisTag = getUnset(m_axisTag);
  }
  else {
    m_axisTag = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axisCurve = NULL;
  }
  else {
    m_axisCurve = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sameSense = getUnset(m_sameSense);
  }
  else {
    m_sameSense = Step::spfToBool(arg);
  }
  inverses = m_args->getInverses(IfcGrid::getClassType(), 9);
  if (inverses) {
    unsigned int i;
    m_partOfW.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_partOfW.insert(static_cast< IfcGrid * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcGrid::getClassType(), 8);
  if (inverses) {
    unsigned int i;
    m_partOfV.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_partOfV.insert(static_cast< IfcGrid * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcGrid::getClassType(), 7);
  if (inverses) {
    unsigned int i;
    m_partOfU.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_partOfU.insert(static_cast< IfcGrid * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcVirtualGridIntersection::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_hasIntersections.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasIntersections.insert(static_cast< IfcVirtualGridIntersection * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGridAxis::s_type = new Step::ClassType_class("IfcGridAxis");
IfcGridAxis_Factory::IfcGridAxis_Factory() {
}

IfcGridAxis_Factory::~IfcGridAxis_Factory() {
  clear(true);
}

void IfcGridAxis_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGridAxis_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGridAxis_Factory::end() {
  return m_idMap.end();
}

IfcGridAxis *IfcGridAxis_Factory::get(Step::StepId id) {
  IfcGridAxis *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGridAxis * > (it->second);
  }
  else {
    LOG_ERROR("IfcGridAxis_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGridAxis * > (create(id));
  }
}

Step::BaseObject *IfcGridAxis_Factory::create(Step::StepId id) {
  IfcGridAxis *ret = new IfcGridAxis(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGridAxis_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGridAxis *ret = new IfcGridAxis(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGridAxis_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGridAxis *ret = new IfcGridAxis(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGridAxis *IfcGridAxis_Factory::generate() {
  return static_cast< IfcGridAxis * > (create(m_model->getNewId()));
}

IfcGridAxis *IfcGridAxis_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGridAxis * > (it->second);
  }
  else {
    return NULL;
  }
}

