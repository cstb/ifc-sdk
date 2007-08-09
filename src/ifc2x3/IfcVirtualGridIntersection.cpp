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
#include <ifc2x3/IfcVirtualGridIntersection.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcVirtualGridIntersection::IfcVirtualGridIntersection(Step::SPFData *args) : Step::BaseObject(args) {
  m_intersectingAxes.setUnset(true);
  m_offsetDistances.setUnset(true);
}


IfcVirtualGridIntersection::~IfcVirtualGridIntersection() {
}

bool IfcVirtualGridIntersection::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcVirtualGridIntersection(this);
}

const char *IfcVirtualGridIntersection::type() {
  return "IfcVirtualGridIntersection";
}

Step::ClassType IfcVirtualGridIntersection::getClassType() {
  return IfcVirtualGridIntersection::s_type;
}

Step::ClassType IfcVirtualGridIntersection::getType() const {
  return IfcVirtualGridIntersection::s_type;
}

bool IfcVirtualGridIntersection::isOfType(Step::ClassType t) {
  return IfcVirtualGridIntersection::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcGridAxis > > &IfcVirtualGridIntersection::getIntersectingAxes() {
  if (Step::BaseObject::inited()) {
    return m_intersectingAxes;
  }
  else {
    m_intersectingAxes.setUnset(true);
    return m_intersectingAxes;
  }
}

void IfcVirtualGridIntersection::setIntersectingAxes(const Step::StepList< Step::RefPtr< IfcGridAxis > > &value) {
  m_intersectingAxes = value;
}

Step::StepList< IfcLengthMeasure > &IfcVirtualGridIntersection::getOffsetDistances() {
  if (Step::BaseObject::inited()) {
    return m_offsetDistances;
  }
  else {
    m_offsetDistances.setUnset(true);
    return m_offsetDistances;
  }
}

void IfcVirtualGridIntersection::setOffsetDistances(const Step::StepList< IfcLengthMeasure > &value) {
  m_offsetDistances = value;
}

void IfcVirtualGridIntersection::release() {
  m_intersectingAxes.clear();
  m_offsetDistances.clear();
}

bool IfcVirtualGridIntersection::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_intersectingAxes.setUnset(true);
  }
  else {
    m_intersectingAxes.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcGridAxis > attr2;
        attr2 = static_cast< IfcGridAxis * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_intersectingAxes.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_offsetDistances.setUnset(true);
  }
  else {
    m_offsetDistances.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLengthMeasure attr2;
        attr2 = Step::spfToReal(str1);
        m_offsetDistances.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcVirtualGridIntersection::s_type = new Step::ClassType_class("IfcVirtualGridIntersection");
IfcVirtualGridIntersection_Factory::IfcVirtualGridIntersection_Factory() {
}

IfcVirtualGridIntersection_Factory::~IfcVirtualGridIntersection_Factory() {
  clear(true);
}

void IfcVirtualGridIntersection_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVirtualGridIntersection_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVirtualGridIntersection_Factory::end() {
  return m_idMap.end();
}

IfcVirtualGridIntersection *IfcVirtualGridIntersection_Factory::get(Step::StepId id) {
  IfcVirtualGridIntersection *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcVirtualGridIntersection * > (it->second);
  }
  else {
    LOG_ERROR("IfcVirtualGridIntersection_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcVirtualGridIntersection * > (create(id));
  }
}

Step::BaseObject *IfcVirtualGridIntersection_Factory::create(Step::StepId id) {
  IfcVirtualGridIntersection *ret = new IfcVirtualGridIntersection(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcVirtualGridIntersection_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcVirtualGridIntersection *ret = new IfcVirtualGridIntersection(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcVirtualGridIntersection_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcVirtualGridIntersection *ret = new IfcVirtualGridIntersection(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcVirtualGridIntersection *IfcVirtualGridIntersection_Factory::generate() {
  return static_cast< IfcVirtualGridIntersection * > (create(m_model->getNewId()));
}

IfcVirtualGridIntersection *IfcVirtualGridIntersection_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcVirtualGridIntersection * > (it->second);
  }
  else {
    return NULL;
  }
}

