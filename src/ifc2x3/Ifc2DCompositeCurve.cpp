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
#include <ifc2x3/Ifc2DCompositeCurve.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

Ifc2DCompositeCurve::Ifc2DCompositeCurve(Step::SPFData *args) : IfcCompositeCurve(args) {
}


Ifc2DCompositeCurve::~Ifc2DCompositeCurve() {
}

bool Ifc2DCompositeCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfc2DCompositeCurve(this);
}

const char *Ifc2DCompositeCurve::type() {
  return "Ifc2DCompositeCurve";
}

Step::ClassType Ifc2DCompositeCurve::getClassType() {
  return Ifc2DCompositeCurve::s_type;
}

Step::ClassType Ifc2DCompositeCurve::getType() const {
  return Ifc2DCompositeCurve::s_type;
}

bool Ifc2DCompositeCurve::isOfType(Step::ClassType t) {
  return Ifc2DCompositeCurve::s_type == t ? true : IfcCompositeCurve::isOfType(t);
}

void Ifc2DCompositeCurve::release() {
  IfcCompositeCurve::release();
}

bool Ifc2DCompositeCurve::init() {
  bool status = IfcCompositeCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType Ifc2DCompositeCurve::s_type = new Step::ClassType_class("Ifc2DCompositeCurve");
Ifc2DCompositeCurve_Factory::Ifc2DCompositeCurve_Factory() {
}

Ifc2DCompositeCurve_Factory::~Ifc2DCompositeCurve_Factory() {
  clear(true);
}

void Ifc2DCompositeCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator Ifc2DCompositeCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator Ifc2DCompositeCurve_Factory::end() {
  return m_idMap.end();
}

Ifc2DCompositeCurve *Ifc2DCompositeCurve_Factory::get(Step::StepId id) {
  Ifc2DCompositeCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< Ifc2DCompositeCurve * > (it->second);
  }
  else {
    LOG_ERROR("Ifc2DCompositeCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< Ifc2DCompositeCurve * > (create(id));
  }
}

Step::BaseObject *Ifc2DCompositeCurve_Factory::create(Step::StepId id) {
  Ifc2DCompositeCurve *ret = new Ifc2DCompositeCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *Ifc2DCompositeCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  Ifc2DCompositeCurve *ret = new Ifc2DCompositeCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *Ifc2DCompositeCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  Ifc2DCompositeCurve *ret = new Ifc2DCompositeCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

Ifc2DCompositeCurve *Ifc2DCompositeCurve_Factory::generate() {
  return static_cast< Ifc2DCompositeCurve * > (create(m_model->getNewId()));
}

Ifc2DCompositeCurve *Ifc2DCompositeCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< Ifc2DCompositeCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

