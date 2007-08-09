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
#include <ifc2x3/IfcFacetedBrepWithVoids.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids(Step::SPFData *args) : IfcManifoldSolidBrep(args) {
  m_voids.setUnset(true);
}


IfcFacetedBrepWithVoids::~IfcFacetedBrepWithVoids() {
}

bool IfcFacetedBrepWithVoids::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFacetedBrepWithVoids(this);
}

const char *IfcFacetedBrepWithVoids::type() {
  return "IfcFacetedBrepWithVoids";
}

Step::ClassType IfcFacetedBrepWithVoids::getClassType() {
  return IfcFacetedBrepWithVoids::s_type;
}

Step::ClassType IfcFacetedBrepWithVoids::getType() const {
  return IfcFacetedBrepWithVoids::s_type;
}

bool IfcFacetedBrepWithVoids::isOfType(Step::ClassType t) {
  return IfcFacetedBrepWithVoids::s_type == t ? true : IfcManifoldSolidBrep::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcClosedShell > > &IfcFacetedBrepWithVoids::getVoids() {
  if (Step::BaseObject::inited()) {
    return m_voids;
  }
  else {
    m_voids.setUnset(true);
    return m_voids;
  }
}

void IfcFacetedBrepWithVoids::setVoids(const Step::StepSet< Step::RefPtr< IfcClosedShell > > &value) {
  m_voids = value;
}

void IfcFacetedBrepWithVoids::release() {
  IfcManifoldSolidBrep::release();
  m_voids.clear();
}

bool IfcFacetedBrepWithVoids::init() {
  bool status = IfcManifoldSolidBrep::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_voids.setUnset(true);
  }
  else {
    m_voids.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcClosedShell > attr2;
        attr2 = static_cast< IfcClosedShell * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_voids.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFacetedBrepWithVoids::s_type = new Step::ClassType_class("IfcFacetedBrepWithVoids");
IfcFacetedBrepWithVoids_Factory::IfcFacetedBrepWithVoids_Factory() {
}

IfcFacetedBrepWithVoids_Factory::~IfcFacetedBrepWithVoids_Factory() {
  clear(true);
}

void IfcFacetedBrepWithVoids_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFacetedBrepWithVoids_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFacetedBrepWithVoids_Factory::end() {
  return m_idMap.end();
}

IfcFacetedBrepWithVoids *IfcFacetedBrepWithVoids_Factory::get(Step::StepId id) {
  IfcFacetedBrepWithVoids *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFacetedBrepWithVoids * > (it->second);
  }
  else {
    LOG_ERROR("IfcFacetedBrepWithVoids_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFacetedBrepWithVoids * > (create(id));
  }
}

Step::BaseObject *IfcFacetedBrepWithVoids_Factory::create(Step::StepId id) {
  IfcFacetedBrepWithVoids *ret = new IfcFacetedBrepWithVoids(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFacetedBrepWithVoids_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFacetedBrepWithVoids *ret = new IfcFacetedBrepWithVoids(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFacetedBrepWithVoids_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFacetedBrepWithVoids *ret = new IfcFacetedBrepWithVoids(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFacetedBrepWithVoids *IfcFacetedBrepWithVoids_Factory::generate() {
  return static_cast< IfcFacetedBrepWithVoids * > (create(m_model->getNewId()));
}

IfcFacetedBrepWithVoids *IfcFacetedBrepWithVoids_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFacetedBrepWithVoids * > (it->second);
  }
  else {
    return NULL;
  }
}

