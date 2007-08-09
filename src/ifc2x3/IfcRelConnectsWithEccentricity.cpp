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
#include <ifc2x3/IfcRelConnectsWithEccentricity.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsWithEccentricity::IfcRelConnectsWithEccentricity(Step::SPFData *args) : IfcRelConnectsStructuralMember(args) {
  m_connectionConstraint = NULL;
}


IfcRelConnectsWithEccentricity::~IfcRelConnectsWithEccentricity() {
}

bool IfcRelConnectsWithEccentricity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsWithEccentricity(this);
}

const char *IfcRelConnectsWithEccentricity::type() {
  return "IfcRelConnectsWithEccentricity";
}

Step::ClassType IfcRelConnectsWithEccentricity::getClassType() {
  return IfcRelConnectsWithEccentricity::s_type;
}

Step::ClassType IfcRelConnectsWithEccentricity::getType() const {
  return IfcRelConnectsWithEccentricity::s_type;
}

bool IfcRelConnectsWithEccentricity::isOfType(Step::ClassType t) {
  return IfcRelConnectsWithEccentricity::s_type == t ? true : IfcRelConnectsStructuralMember::isOfType(t);
}

IfcConnectionGeometry *IfcRelConnectsWithEccentricity::getConnectionConstraint() {
  if (Step::BaseObject::inited()) {
    return m_connectionConstraint.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsWithEccentricity::setConnectionConstraint(const Step::RefPtr< IfcConnectionGeometry > &value) {
  m_connectionConstraint = value;
}

void IfcRelConnectsWithEccentricity::release() {
  IfcRelConnectsStructuralMember::release();
  m_connectionConstraint.release();
}

bool IfcRelConnectsWithEccentricity::init() {
  bool status = IfcRelConnectsStructuralMember::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_connectionConstraint = NULL;
  }
  else {
    m_connectionConstraint = static_cast< IfcConnectionGeometry * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsWithEccentricity::s_type = new Step::ClassType_class("IfcRelConnectsWithEccentricity");
IfcRelConnectsWithEccentricity_Factory::IfcRelConnectsWithEccentricity_Factory() {
}

IfcRelConnectsWithEccentricity_Factory::~IfcRelConnectsWithEccentricity_Factory() {
  clear(true);
}

void IfcRelConnectsWithEccentricity_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsWithEccentricity_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsWithEccentricity_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsWithEccentricity *IfcRelConnectsWithEccentricity_Factory::get(Step::StepId id) {
  IfcRelConnectsWithEccentricity *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsWithEccentricity * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsWithEccentricity_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsWithEccentricity * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsWithEccentricity_Factory::create(Step::StepId id) {
  IfcRelConnectsWithEccentricity *ret = new IfcRelConnectsWithEccentricity(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsWithEccentricity_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsWithEccentricity *ret = new IfcRelConnectsWithEccentricity(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsWithEccentricity_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsWithEccentricity *ret = new IfcRelConnectsWithEccentricity(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsWithEccentricity *IfcRelConnectsWithEccentricity_Factory::generate() {
  return static_cast< IfcRelConnectsWithEccentricity * > (create(m_model->getNewId()));
}

IfcRelConnectsWithEccentricity *IfcRelConnectsWithEccentricity_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsWithEccentricity * > (it->second);
  }
  else {
    return NULL;
  }
}

