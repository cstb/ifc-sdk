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
#include <ifc2x3/IfcArbitraryProfileDefWithVoids.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcArbitraryProfileDefWithVoids::IfcArbitraryProfileDefWithVoids(Step::SPFData *args) : IfcArbitraryClosedProfileDef(args) {
  m_innerCurves.setUnset(true);
}


IfcArbitraryProfileDefWithVoids::~IfcArbitraryProfileDefWithVoids() {
}

bool IfcArbitraryProfileDefWithVoids::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcArbitraryProfileDefWithVoids(this);
}

const char *IfcArbitraryProfileDefWithVoids::type() {
  return "IfcArbitraryProfileDefWithVoids";
}

Step::ClassType IfcArbitraryProfileDefWithVoids::getClassType() {
  return IfcArbitraryProfileDefWithVoids::s_type;
}

Step::ClassType IfcArbitraryProfileDefWithVoids::getType() const {
  return IfcArbitraryProfileDefWithVoids::s_type;
}

bool IfcArbitraryProfileDefWithVoids::isOfType(Step::ClassType t) {
  return IfcArbitraryProfileDefWithVoids::s_type == t ? true : IfcArbitraryClosedProfileDef::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcCurve > > &IfcArbitraryProfileDefWithVoids::getInnerCurves() {
  if (Step::BaseObject::inited()) {
    return m_innerCurves;
  }
  else {
    m_innerCurves.setUnset(true);
    return m_innerCurves;
  }
}

void IfcArbitraryProfileDefWithVoids::setInnerCurves(const Step::StepSet< Step::RefPtr< IfcCurve > > &value) {
  m_innerCurves = value;
}

void IfcArbitraryProfileDefWithVoids::release() {
  IfcArbitraryClosedProfileDef::release();
  m_innerCurves.clear();
}

bool IfcArbitraryProfileDefWithVoids::init() {
  bool status = IfcArbitraryClosedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_innerCurves.setUnset(true);
  }
  else {
    m_innerCurves.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCurve > attr2;
        attr2 = static_cast< IfcCurve * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_innerCurves.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryProfileDefWithVoids::s_type = new Step::ClassType_class("IfcArbitraryProfileDefWithVoids");
IfcArbitraryProfileDefWithVoids_Factory::IfcArbitraryProfileDefWithVoids_Factory() {
}

IfcArbitraryProfileDefWithVoids_Factory::~IfcArbitraryProfileDefWithVoids_Factory() {
  clear(true);
}

void IfcArbitraryProfileDefWithVoids_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcArbitraryProfileDefWithVoids_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcArbitraryProfileDefWithVoids_Factory::end() {
  return m_idMap.end();
}

IfcArbitraryProfileDefWithVoids *IfcArbitraryProfileDefWithVoids_Factory::get(Step::StepId id) {
  IfcArbitraryProfileDefWithVoids *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcArbitraryProfileDefWithVoids * > (it->second);
  }
  else {
    LOG_ERROR("IfcArbitraryProfileDefWithVoids_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcArbitraryProfileDefWithVoids * > (create(id));
  }
}

Step::BaseObject *IfcArbitraryProfileDefWithVoids_Factory::create(Step::StepId id) {
  IfcArbitraryProfileDefWithVoids *ret = new IfcArbitraryProfileDefWithVoids(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcArbitraryProfileDefWithVoids_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcArbitraryProfileDefWithVoids *ret = new IfcArbitraryProfileDefWithVoids(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcArbitraryProfileDefWithVoids_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcArbitraryProfileDefWithVoids *ret = new IfcArbitraryProfileDefWithVoids(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcArbitraryProfileDefWithVoids *IfcArbitraryProfileDefWithVoids_Factory::generate() {
  return static_cast< IfcArbitraryProfileDefWithVoids * > (create(m_model->getNewId()));
}

IfcArbitraryProfileDefWithVoids *IfcArbitraryProfileDefWithVoids_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcArbitraryProfileDefWithVoids * > (it->second);
  }
  else {
    return NULL;
  }
}

