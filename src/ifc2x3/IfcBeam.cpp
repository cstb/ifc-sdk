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
#include <ifc2x3/IfcBeam.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBeam::IfcBeam(Step::SPFData *args) : IfcBuildingElement(args) {
}


IfcBeam::~IfcBeam() {
}

bool IfcBeam::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBeam(this);
}

const char *IfcBeam::type() {
  return "IfcBeam";
}

Step::ClassType IfcBeam::getClassType() {
  return IfcBeam::s_type;
}

Step::ClassType IfcBeam::getType() const {
  return IfcBeam::s_type;
}

bool IfcBeam::isOfType(Step::ClassType t) {
  return IfcBeam::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcBeam::release() {
  IfcBuildingElement::release();
}

bool IfcBeam::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBeam::s_type = new Step::ClassType_class("IfcBeam");
IfcBeam_Factory::IfcBeam_Factory() {
}

IfcBeam_Factory::~IfcBeam_Factory() {
  clear(true);
}

void IfcBeam_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBeam_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBeam_Factory::end() {
  return m_idMap.end();
}

IfcBeam *IfcBeam_Factory::get(Step::StepId id) {
  IfcBeam *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBeam * > (it->second);
  }
  else {
    LOG_ERROR("IfcBeam_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBeam * > (create(id));
  }
}

Step::BaseObject *IfcBeam_Factory::create(Step::StepId id) {
  IfcBeam *ret = new IfcBeam(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBeam_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBeam *ret = new IfcBeam(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBeam_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBeam *ret = new IfcBeam(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBeam *IfcBeam_Factory::generate() {
  return static_cast< IfcBeam * > (create(m_model->getNewId()));
}

IfcBeam *IfcBeam_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBeam * > (it->second);
  }
  else {
    return NULL;
  }
}

