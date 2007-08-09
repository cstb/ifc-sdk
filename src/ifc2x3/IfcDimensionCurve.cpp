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
#include <ifc2x3/IfcDimensionCurve.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcTerminatorSymbol.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDimensionCurve::IfcDimensionCurve(Step::SPFData *args) : IfcAnnotationCurveOccurrence(args) {
  m_annotatedBySymbols.setUnset(true);
}


IfcDimensionCurve::~IfcDimensionCurve() {
}

bool IfcDimensionCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDimensionCurve(this);
}

const char *IfcDimensionCurve::type() {
  return "IfcDimensionCurve";
}

Step::ClassType IfcDimensionCurve::getClassType() {
  return IfcDimensionCurve::s_type;
}

Step::ClassType IfcDimensionCurve::getType() const {
  return IfcDimensionCurve::s_type;
}

bool IfcDimensionCurve::isOfType(Step::ClassType t) {
  return IfcDimensionCurve::s_type == t ? true : IfcAnnotationCurveOccurrence::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcTerminatorSymbol > > &IfcDimensionCurve::getAnnotatedBySymbols() {
  if (Step::BaseObject::inited()) {
    return m_annotatedBySymbols;
  }
  else {
    m_annotatedBySymbols.setUnset(true);
    return m_annotatedBySymbols;
  }
}

void IfcDimensionCurve::setAnnotatedBySymbols(const Step::StepSet< Step::RefPtr< IfcTerminatorSymbol > > &value) {
  m_annotatedBySymbols = value;
}

void IfcDimensionCurve::release() {
  IfcAnnotationCurveOccurrence::release();
}

bool IfcDimensionCurve::init() {
  bool status = IfcAnnotationCurveOccurrence::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcTerminatorSymbol::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_annotatedBySymbols.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_annotatedBySymbols.insert(static_cast< IfcTerminatorSymbol * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCurve::s_type = new Step::ClassType_class("IfcDimensionCurve");
IfcDimensionCurve_Factory::IfcDimensionCurve_Factory() {
}

IfcDimensionCurve_Factory::~IfcDimensionCurve_Factory() {
  clear(true);
}

void IfcDimensionCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionCurve_Factory::end() {
  return m_idMap.end();
}

IfcDimensionCurve *IfcDimensionCurve_Factory::get(Step::StepId id) {
  IfcDimensionCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDimensionCurve * > (it->second);
  }
  else {
    LOG_ERROR("IfcDimensionCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDimensionCurve * > (create(id));
  }
}

Step::BaseObject *IfcDimensionCurve_Factory::create(Step::StepId id) {
  IfcDimensionCurve *ret = new IfcDimensionCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDimensionCurve *ret = new IfcDimensionCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDimensionCurve *ret = new IfcDimensionCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDimensionCurve *IfcDimensionCurve_Factory::generate() {
  return static_cast< IfcDimensionCurve * > (create(m_model->getNewId()));
}

IfcDimensionCurve *IfcDimensionCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDimensionCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

