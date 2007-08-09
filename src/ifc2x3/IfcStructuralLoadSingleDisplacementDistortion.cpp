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
#include <ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralLoadSingleDisplacementDistortion::IfcStructuralLoadSingleDisplacementDistortion(Step::SPFData *args) : IfcStructuralLoadSingleDisplacement(args) {
  m_distortion = getUnset(m_distortion);
}


IfcStructuralLoadSingleDisplacementDistortion::~IfcStructuralLoadSingleDisplacementDistortion() {
}

bool IfcStructuralLoadSingleDisplacementDistortion::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleDisplacementDistortion(this);
}

const char *IfcStructuralLoadSingleDisplacementDistortion::type() {
  return "IfcStructuralLoadSingleDisplacementDistortion";
}

Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::getClassType() {
  return IfcStructuralLoadSingleDisplacementDistortion::s_type;
}

Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::getType() const {
  return IfcStructuralLoadSingleDisplacementDistortion::s_type;
}

bool IfcStructuralLoadSingleDisplacementDistortion::isOfType(Step::ClassType t) {
  return IfcStructuralLoadSingleDisplacementDistortion::s_type == t ? true : IfcStructuralLoadSingleDisplacement::isOfType(t);
}

IfcCurvatureMeasure IfcStructuralLoadSingleDisplacementDistortion::getDistortion() {
  if (Step::BaseObject::inited()) {
    return m_distortion;
  }
  else {
    return getUnset(m_distortion);
  }
}

void IfcStructuralLoadSingleDisplacementDistortion::setDistortion(IfcCurvatureMeasure value) {
  m_distortion = value;
}

void IfcStructuralLoadSingleDisplacementDistortion::release() {
  IfcStructuralLoadSingleDisplacement::release();
}

bool IfcStructuralLoadSingleDisplacementDistortion::init() {
  bool status = IfcStructuralLoadSingleDisplacement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_distortion = getUnset(m_distortion);
  }
  else {
    m_distortion = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::s_type = new Step::ClassType_class("IfcStructuralLoadSingleDisplacementDistortion");
IfcStructuralLoadSingleDisplacementDistortion_Factory::IfcStructuralLoadSingleDisplacementDistortion_Factory() {
}

IfcStructuralLoadSingleDisplacementDistortion_Factory::~IfcStructuralLoadSingleDisplacementDistortion_Factory() {
  clear(true);
}

void IfcStructuralLoadSingleDisplacementDistortion_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleDisplacementDistortion_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralLoadSingleDisplacementDistortion_Factory::end() {
  return m_idMap.end();
}

IfcStructuralLoadSingleDisplacementDistortion *IfcStructuralLoadSingleDisplacementDistortion_Factory::get(Step::StepId id) {
  IfcStructuralLoadSingleDisplacementDistortion *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralLoadSingleDisplacementDistortion_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (create(id));
  }
}

Step::BaseObject *IfcStructuralLoadSingleDisplacementDistortion_Factory::create(Step::StepId id) {
  IfcStructuralLoadSingleDisplacementDistortion *ret = new IfcStructuralLoadSingleDisplacementDistortion(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleDisplacementDistortion_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralLoadSingleDisplacementDistortion *ret = new IfcStructuralLoadSingleDisplacementDistortion(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralLoadSingleDisplacementDistortion_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralLoadSingleDisplacementDistortion *ret = new IfcStructuralLoadSingleDisplacementDistortion(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralLoadSingleDisplacementDistortion *IfcStructuralLoadSingleDisplacementDistortion_Factory::generate() {
  return static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (create(m_model->getNewId()));
}

IfcStructuralLoadSingleDisplacementDistortion *IfcStructuralLoadSingleDisplacementDistortion_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (it->second);
  }
  else {
    return NULL;
  }
}

