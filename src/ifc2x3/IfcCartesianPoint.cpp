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
#include <ifc2x3/IfcCartesianPoint.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCartesianPoint::IfcCartesianPoint(Step::SPFData *args) : IfcPoint(args) {
  m_coordinates.setUnset(true);
}


IfcCartesianPoint::~IfcCartesianPoint() {
}

bool IfcCartesianPoint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCartesianPoint(this);
}

const char *IfcCartesianPoint::type() {
  return "IfcCartesianPoint";
}

Step::ClassType IfcCartesianPoint::getClassType() {
  return IfcCartesianPoint::s_type;
}

Step::ClassType IfcCartesianPoint::getType() const {
  return IfcCartesianPoint::s_type;
}

bool IfcCartesianPoint::isOfType(Step::ClassType t) {
  return IfcCartesianPoint::s_type == t ? true : IfcPoint::isOfType(t);
}

Step::StepList< IfcLengthMeasure > &IfcCartesianPoint::getCoordinates() {
  if (Step::BaseObject::inited()) {
    return m_coordinates;
  }
  else {
    m_coordinates.setUnset(true);
    return m_coordinates;
  }
}

void IfcCartesianPoint::setCoordinates(const Step::StepList< IfcLengthMeasure > &value) {
  m_coordinates = value;
}

void IfcCartesianPoint::release() {
  IfcPoint::release();
  m_coordinates.clear();
}

bool IfcCartesianPoint::init() {
  bool status = IfcPoint::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_coordinates.setUnset(true);
  }
  else {
    m_coordinates.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLengthMeasure attr2;
        attr2 = Step::spfToReal(str1);
        m_coordinates.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianPoint::s_type = new Step::ClassType_class("IfcCartesianPoint");
IfcCartesianPoint_Factory::IfcCartesianPoint_Factory() {
}

IfcCartesianPoint_Factory::~IfcCartesianPoint_Factory() {
  clear(true);
}

void IfcCartesianPoint_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCartesianPoint_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCartesianPoint_Factory::end() {
  return m_idMap.end();
}

IfcCartesianPoint *IfcCartesianPoint_Factory::get(Step::StepId id) {
  IfcCartesianPoint *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCartesianPoint * > (it->second);
  }
  else {
    LOG_ERROR("IfcCartesianPoint_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCartesianPoint * > (create(id));
  }
}

Step::BaseObject *IfcCartesianPoint_Factory::create(Step::StepId id) {
  IfcCartesianPoint *ret = new IfcCartesianPoint(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCartesianPoint_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCartesianPoint *ret = new IfcCartesianPoint(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCartesianPoint_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCartesianPoint *ret = new IfcCartesianPoint(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCartesianPoint *IfcCartesianPoint_Factory::generate() {
  return static_cast< IfcCartesianPoint * > (create(m_model->getNewId()));
}

IfcCartesianPoint *IfcCartesianPoint_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCartesianPoint * > (it->second);
  }
  else {
    return NULL;
  }
}

