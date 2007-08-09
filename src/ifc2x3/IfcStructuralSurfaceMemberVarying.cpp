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
#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralSurfaceMemberVarying::IfcStructuralSurfaceMemberVarying(Step::SPFData *args) : IfcStructuralSurfaceMember(args) {
  m_subsequentThickness.setUnset(true);
  m_varyingThicknessLocation = NULL;
}


IfcStructuralSurfaceMemberVarying::~IfcStructuralSurfaceMemberVarying() {
}

bool IfcStructuralSurfaceMemberVarying::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralSurfaceMemberVarying(this);
}

const char *IfcStructuralSurfaceMemberVarying::type() {
  return "IfcStructuralSurfaceMemberVarying";
}

Step::ClassType IfcStructuralSurfaceMemberVarying::getClassType() {
  return IfcStructuralSurfaceMemberVarying::s_type;
}

Step::ClassType IfcStructuralSurfaceMemberVarying::getType() const {
  return IfcStructuralSurfaceMemberVarying::s_type;
}

bool IfcStructuralSurfaceMemberVarying::isOfType(Step::ClassType t) {
  return IfcStructuralSurfaceMemberVarying::s_type == t ? true : IfcStructuralSurfaceMember::isOfType(t);
}

Step::StepList< IfcPositiveLengthMeasure > &IfcStructuralSurfaceMemberVarying::getSubsequentThickness() {
  if (Step::BaseObject::inited()) {
    return m_subsequentThickness;
  }
  else {
    m_subsequentThickness.setUnset(true);
    return m_subsequentThickness;
  }
}

void IfcStructuralSurfaceMemberVarying::setSubsequentThickness(const Step::StepList< IfcPositiveLengthMeasure > &value) {
  m_subsequentThickness = value;
}

IfcShapeAspect *IfcStructuralSurfaceMemberVarying::getVaryingThicknessLocation() {
  if (Step::BaseObject::inited()) {
    return m_varyingThicknessLocation.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralSurfaceMemberVarying::setVaryingThicknessLocation(const Step::RefPtr< IfcShapeAspect > &value) {
  m_varyingThicknessLocation = value;
}

void IfcStructuralSurfaceMemberVarying::release() {
  IfcStructuralSurfaceMember::release();
  m_subsequentThickness.clear();
  m_varyingThicknessLocation.release();
}

bool IfcStructuralSurfaceMemberVarying::init() {
  bool status = IfcStructuralSurfaceMember::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_subsequentThickness.setUnset(true);
  }
  else {
    m_subsequentThickness.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcPositiveLengthMeasure attr2;
        attr2 = Step::spfToReal(str1);
        m_subsequentThickness.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_varyingThicknessLocation = NULL;
  }
  else {
    m_varyingThicknessLocation = static_cast< IfcShapeAspect * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSurfaceMemberVarying::s_type = new Step::ClassType_class("IfcStructuralSurfaceMemberVarying");
IfcStructuralSurfaceMemberVarying_Factory::IfcStructuralSurfaceMemberVarying_Factory() {
}

IfcStructuralSurfaceMemberVarying_Factory::~IfcStructuralSurfaceMemberVarying_Factory() {
  clear(true);
}

void IfcStructuralSurfaceMemberVarying_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralSurfaceMemberVarying_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralSurfaceMemberVarying_Factory::end() {
  return m_idMap.end();
}

IfcStructuralSurfaceMemberVarying *IfcStructuralSurfaceMemberVarying_Factory::get(Step::StepId id) {
  IfcStructuralSurfaceMemberVarying *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralSurfaceMemberVarying * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralSurfaceMemberVarying_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralSurfaceMemberVarying * > (create(id));
  }
}

Step::BaseObject *IfcStructuralSurfaceMemberVarying_Factory::create(Step::StepId id) {
  IfcStructuralSurfaceMemberVarying *ret = new IfcStructuralSurfaceMemberVarying(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralSurfaceMemberVarying_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralSurfaceMemberVarying *ret = new IfcStructuralSurfaceMemberVarying(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralSurfaceMemberVarying_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralSurfaceMemberVarying *ret = new IfcStructuralSurfaceMemberVarying(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralSurfaceMemberVarying *IfcStructuralSurfaceMemberVarying_Factory::generate() {
  return static_cast< IfcStructuralSurfaceMemberVarying * > (create(m_model->getNewId()));
}

IfcStructuralSurfaceMemberVarying *IfcStructuralSurfaceMemberVarying_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralSurfaceMemberVarying * > (it->second);
  }
  else {
    return NULL;
  }
}

