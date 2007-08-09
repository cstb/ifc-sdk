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
#include <ifc2x3/IfcStructuralLinearActionVarying.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLinearActionVarying::IfcStructuralLinearActionVarying(Step::SPFData *args) : IfcStructuralLinearAction(args) {
  m_varyingAppliedLoadLocation = NULL;
  m_subsequentAppliedLoads.setUnset(true);
}


IfcStructuralLinearActionVarying::~IfcStructuralLinearActionVarying() {
}

bool IfcStructuralLinearActionVarying::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLinearActionVarying(this);
}

const char *IfcStructuralLinearActionVarying::type() {
  return "IfcStructuralLinearActionVarying";
}

Step::ClassType IfcStructuralLinearActionVarying::getClassType() {
  return IfcStructuralLinearActionVarying::s_type;
}

Step::ClassType IfcStructuralLinearActionVarying::getType() const {
  return IfcStructuralLinearActionVarying::s_type;
}

bool IfcStructuralLinearActionVarying::isOfType(Step::ClassType t) {
  return IfcStructuralLinearActionVarying::s_type == t ? true : IfcStructuralLinearAction::isOfType(t);
}

IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() {
  if (Step::BaseObject::inited()) {
    return m_varyingAppliedLoadLocation.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralLinearActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
  m_varyingAppliedLoadLocation = value;
}

Step::StepList< Step::RefPtr< IfcStructuralLoad > > &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() {
  if (Step::BaseObject::inited()) {
    return m_subsequentAppliedLoads;
  }
  else {
    m_subsequentAppliedLoads.setUnset(true);
    return m_subsequentAppliedLoads;
  }
}

void IfcStructuralLinearActionVarying::setSubsequentAppliedLoads(const Step::StepList< Step::RefPtr< IfcStructuralLoad > > &value) {
  m_subsequentAppliedLoads = value;
}

void IfcStructuralLinearActionVarying::release() {
  IfcStructuralLinearAction::release();
  m_varyingAppliedLoadLocation.release();
  m_subsequentAppliedLoads.clear();
}

bool IfcStructuralLinearActionVarying::init() {
  bool status = IfcStructuralLinearAction::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_varyingAppliedLoadLocation = NULL;
  }
  else {
    m_varyingAppliedLoadLocation = static_cast< IfcShapeAspect * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_subsequentAppliedLoads.setUnset(true);
  }
  else {
    m_subsequentAppliedLoads.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcStructuralLoad > attr2;
        attr2 = static_cast< IfcStructuralLoad * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_subsequentAppliedLoads.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLinearActionVarying::s_type = new Step::ClassType_class("IfcStructuralLinearActionVarying");
IfcStructuralLinearActionVarying_Factory::IfcStructuralLinearActionVarying_Factory() {
}

IfcStructuralLinearActionVarying_Factory::~IfcStructuralLinearActionVarying_Factory() {
  clear(true);
}

void IfcStructuralLinearActionVarying_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLinearActionVarying_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLinearActionVarying_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLinearActionVarying *IfcStructuralLinearActionVarying_Factory::get(Step::StepId id) {
  IfcStructuralLinearActionVarying *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLinearActionVarying * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLinearActionVarying_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLinearActionVarying * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLinearActionVarying_Factory::create(Step::StepId id) {
  IfcStructuralLinearActionVarying *ret = new IfcStructuralLinearActionVarying(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLinearActionVarying_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLinearActionVarying *ret = new IfcStructuralLinearActionVarying(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLinearActionVarying_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLinearActionVarying *ret = new IfcStructuralLinearActionVarying(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLinearActionVarying *IfcStructuralLinearActionVarying_Factory::generate() {
  return static_cast< IfcStructuralLinearActionVarying * > (create(m_model->getNewId()));
}

IfcStructuralLinearActionVarying *IfcStructuralLinearActionVarying_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLinearActionVarying * > (it->second);
  }
  else {
    return NULL;
  }
}

