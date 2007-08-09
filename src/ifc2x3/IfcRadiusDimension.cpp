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
#include <ifc2x3/IfcRadiusDimension.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRadiusDimension::IfcRadiusDimension(Step::SPFData *args) : IfcDimensionCurveDirectedCallout(args) {
}


IfcRadiusDimension::~IfcRadiusDimension() {
}

bool IfcRadiusDimension::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRadiusDimension(this);
}

const char *IfcRadiusDimension::type() {
  return "IfcRadiusDimension";
}

Step::ClassType IfcRadiusDimension::getClassType() {
  return IfcRadiusDimension::s_type;
}

Step::ClassType IfcRadiusDimension::getType() const {
  return IfcRadiusDimension::s_type;
}

bool IfcRadiusDimension::isOfType(Step::ClassType t) {
  return IfcRadiusDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
}

void IfcRadiusDimension::release() {
  IfcDimensionCurveDirectedCallout::release();
}

bool IfcRadiusDimension::init() {
  bool status = IfcDimensionCurveDirectedCallout::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRadiusDimension::s_type = new Step::ClassType_class("IfcRadiusDimension");
IfcRadiusDimension_Factory::IfcRadiusDimension_Factory() {
}

IfcRadiusDimension_Factory::~IfcRadiusDimension_Factory() {
  clear(true);
}

void IfcRadiusDimension_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRadiusDimension_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRadiusDimension_Factory::end() {
  return m_idMap.end();
}

IfcRadiusDimension *IfcRadiusDimension_Factory::get(Step::StepId id) {
  IfcRadiusDimension *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRadiusDimension * > (it->second);
  }
  else {
    LOG_ERROR("IfcRadiusDimension_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRadiusDimension * > (create(id));
  }
}

Step::BaseObject *IfcRadiusDimension_Factory::create(Step::StepId id) {
  IfcRadiusDimension *ret = new IfcRadiusDimension(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRadiusDimension_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRadiusDimension *ret = new IfcRadiusDimension(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRadiusDimension_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRadiusDimension *ret = new IfcRadiusDimension(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRadiusDimension *IfcRadiusDimension_Factory::generate() {
  return static_cast< IfcRadiusDimension * > (create(m_model->getNewId()));
}

IfcRadiusDimension *IfcRadiusDimension_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRadiusDimension * > (it->second);
  }
  else {
    return NULL;
  }
}

