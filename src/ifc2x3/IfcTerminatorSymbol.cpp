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
#include <ifc2x3/IfcTerminatorSymbol.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTerminatorSymbol::IfcTerminatorSymbol(Step::SPFData *args) : IfcAnnotationSymbolOccurrence(args) {
  m_annotatedCurve = NULL;
}


IfcTerminatorSymbol::~IfcTerminatorSymbol() {
}

bool IfcTerminatorSymbol::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTerminatorSymbol(this);
}

const char *IfcTerminatorSymbol::type() {
  return "IfcTerminatorSymbol";
}

Step::ClassType IfcTerminatorSymbol::getClassType() {
  return IfcTerminatorSymbol::s_type;
}

Step::ClassType IfcTerminatorSymbol::getType() const {
  return IfcTerminatorSymbol::s_type;
}

bool IfcTerminatorSymbol::isOfType(Step::ClassType t) {
  return IfcTerminatorSymbol::s_type == t ? true : IfcAnnotationSymbolOccurrence::isOfType(t);
}

IfcAnnotationCurveOccurrence *IfcTerminatorSymbol::getAnnotatedCurve() {
  if (Step::BaseObject::inited()) {
    return m_annotatedCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcTerminatorSymbol::setAnnotatedCurve(const Step::RefPtr< IfcAnnotationCurveOccurrence > &value) {
  m_annotatedCurve = value;
}

void IfcTerminatorSymbol::release() {
  IfcAnnotationSymbolOccurrence::release();
  m_annotatedCurve.release();
}

bool IfcTerminatorSymbol::init() {
  bool status = IfcAnnotationSymbolOccurrence::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_annotatedCurve = NULL;
  }
  else {
    m_annotatedCurve = static_cast< IfcAnnotationCurveOccurrence * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTerminatorSymbol::s_type = new Step::ClassType_class("IfcTerminatorSymbol");
IfcTerminatorSymbol_Factory::IfcTerminatorSymbol_Factory() {
}

IfcTerminatorSymbol_Factory::~IfcTerminatorSymbol_Factory() {
  clear(true);
}

void IfcTerminatorSymbol_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTerminatorSymbol_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTerminatorSymbol_Factory::end() {
  return m_idMap.end();
}

IfcTerminatorSymbol *IfcTerminatorSymbol_Factory::get(Step::StepId id) {
  IfcTerminatorSymbol *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTerminatorSymbol * > (it->second);
  }
  else {
    LOG_ERROR("IfcTerminatorSymbol_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTerminatorSymbol * > (create(id));
  }
}

Step::BaseObject *IfcTerminatorSymbol_Factory::create(Step::StepId id) {
  IfcTerminatorSymbol *ret = new IfcTerminatorSymbol(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTerminatorSymbol_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTerminatorSymbol *ret = new IfcTerminatorSymbol(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTerminatorSymbol_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTerminatorSymbol *ret = new IfcTerminatorSymbol(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTerminatorSymbol *IfcTerminatorSymbol_Factory::generate() {
  return static_cast< IfcTerminatorSymbol * > (create(m_model->getNewId()));
}

IfcTerminatorSymbol *IfcTerminatorSymbol_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTerminatorSymbol * > (it->second);
  }
  else {
    return NULL;
  }
}

