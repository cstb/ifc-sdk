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
#include <ifc2x3/IfcStructuralPlanarActionVarying.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralPlanarActionVarying::IfcStructuralPlanarActionVarying(Step::SPFData *args) : IfcStructuralPlanarAction(args) {
  m_varyingAppliedLoadLocation = NULL;
  m_subsequentAppliedLoads.setUnset(true);
}


IfcStructuralPlanarActionVarying::~IfcStructuralPlanarActionVarying() {
}

bool IfcStructuralPlanarActionVarying::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralPlanarActionVarying(this);
}

const char *IfcStructuralPlanarActionVarying::type() {
  return "IfcStructuralPlanarActionVarying";
}

Step::ClassType IfcStructuralPlanarActionVarying::getClassType() {
  return IfcStructuralPlanarActionVarying::s_type;
}

Step::ClassType IfcStructuralPlanarActionVarying::getType() const {
  return IfcStructuralPlanarActionVarying::s_type;
}

bool IfcStructuralPlanarActionVarying::isOfType(Step::ClassType t) {
  return IfcStructuralPlanarActionVarying::s_type == t ? true : IfcStructuralPlanarAction::isOfType(t);
}

IfcShapeAspect *IfcStructuralPlanarActionVarying::getVaryingAppliedLoadLocation() {
  if (Step::BaseObject::inited()) {
    return m_varyingAppliedLoadLocation.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralPlanarActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
  m_varyingAppliedLoadLocation = value;
}

Step::StepList< Step::RefPtr< IfcStructuralLoad > > &IfcStructuralPlanarActionVarying::getSubsequentAppliedLoads() {
  if (Step::BaseObject::inited()) {
    return m_subsequentAppliedLoads;
  }
  else {
    m_subsequentAppliedLoads.setUnset(true);
    return m_subsequentAppliedLoads;
  }
}

void IfcStructuralPlanarActionVarying::setSubsequentAppliedLoads(const Step::StepList< Step::RefPtr< IfcStructuralLoad > > &value) {
  m_subsequentAppliedLoads = value;
}

void IfcStructuralPlanarActionVarying::release() {
  IfcStructuralPlanarAction::release();
  m_varyingAppliedLoadLocation.release();
  m_subsequentAppliedLoads.clear();
}

bool IfcStructuralPlanarActionVarying::init() {
  bool status = IfcStructuralPlanarAction::init();
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

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPlanarActionVarying::s_type = new Step::ClassType_class("IfcStructuralPlanarActionVarying");
IfcStructuralPlanarActionVarying_Factory::IfcStructuralPlanarActionVarying_Factory() {
}

IfcStructuralPlanarActionVarying_Factory::~IfcStructuralPlanarActionVarying_Factory() {
  clear(true);
}

void IfcStructuralPlanarActionVarying_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPlanarActionVarying_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralPlanarActionVarying_Factory::end() {
  return m_idMap.end();
}

IfcStructuralPlanarActionVarying *IfcStructuralPlanarActionVarying_Factory::get(Step::StepId id) {
  IfcStructuralPlanarActionVarying *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralPlanarActionVarying * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralPlanarActionVarying_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralPlanarActionVarying * > (create(id));
  }
}

Step::BaseObject *IfcStructuralPlanarActionVarying_Factory::create(Step::StepId id) {
  IfcStructuralPlanarActionVarying *ret = new IfcStructuralPlanarActionVarying(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPlanarActionVarying_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralPlanarActionVarying *ret = new IfcStructuralPlanarActionVarying(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralPlanarActionVarying_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralPlanarActionVarying *ret = new IfcStructuralPlanarActionVarying(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralPlanarActionVarying *IfcStructuralPlanarActionVarying_Factory::generate() {
  return static_cast< IfcStructuralPlanarActionVarying * > (create(m_model->getNewId()));
}

IfcStructuralPlanarActionVarying *IfcStructuralPlanarActionVarying_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralPlanarActionVarying * > (it->second);
  }
  else {
    return NULL;
  }
}

