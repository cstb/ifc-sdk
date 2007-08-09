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
#include <ifc2x3/IfcAnnotationFillArea.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAnnotationFillArea::IfcAnnotationFillArea(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_outerBoundary = NULL;
  m_innerBoundaries.setUnset(true);
}


IfcAnnotationFillArea::~IfcAnnotationFillArea() {
}

bool IfcAnnotationFillArea::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAnnotationFillArea(this);
}

const char *IfcAnnotationFillArea::type() {
  return "IfcAnnotationFillArea";
}

Step::ClassType IfcAnnotationFillArea::getClassType() {
  return IfcAnnotationFillArea::s_type;
}

Step::ClassType IfcAnnotationFillArea::getType() const {
  return IfcAnnotationFillArea::s_type;
}

bool IfcAnnotationFillArea::isOfType(Step::ClassType t) {
  return IfcAnnotationFillArea::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCurve *IfcAnnotationFillArea::getOuterBoundary() {
  if (Step::BaseObject::inited()) {
    return m_outerBoundary.get();
  }
  else {
    return NULL;
  }
}

void IfcAnnotationFillArea::setOuterBoundary(const Step::RefPtr< IfcCurve > &value) {
  m_outerBoundary = value;
}

Step::StepSet< Step::RefPtr< IfcCurve > > &IfcAnnotationFillArea::getInnerBoundaries() {
  if (Step::BaseObject::inited()) {
    return m_innerBoundaries;
  }
  else {
    m_innerBoundaries.setUnset(true);
    return m_innerBoundaries;
  }
}

void IfcAnnotationFillArea::setInnerBoundaries(const Step::StepSet< Step::RefPtr< IfcCurve > > &value) {
  m_innerBoundaries = value;
}

void IfcAnnotationFillArea::release() {
  IfcGeometricRepresentationItem::release();
  m_outerBoundary.release();
  m_innerBoundaries.clear();
}

bool IfcAnnotationFillArea::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_outerBoundary = NULL;
  }
  else {
    m_outerBoundary = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_innerBoundaries.setUnset(true);
  }
  else {
    m_innerBoundaries.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCurve > attr2;
        attr2 = static_cast< IfcCurve * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_innerBoundaries.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationFillArea::s_type = new Step::ClassType_class("IfcAnnotationFillArea");
IfcAnnotationFillArea_Factory::IfcAnnotationFillArea_Factory() {
}

IfcAnnotationFillArea_Factory::~IfcAnnotationFillArea_Factory() {
  clear(true);
}

void IfcAnnotationFillArea_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationFillArea_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationFillArea_Factory::end() {
  return m_idMap.end();
}

IfcAnnotationFillArea *IfcAnnotationFillArea_Factory::get(Step::StepId id) {
  IfcAnnotationFillArea *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAnnotationFillArea * > (it->second);
  }
  else {
    LOG_ERROR("IfcAnnotationFillArea_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAnnotationFillArea * > (create(id));
  }
}

Step::BaseObject *IfcAnnotationFillArea_Factory::create(Step::StepId id) {
  IfcAnnotationFillArea *ret = new IfcAnnotationFillArea(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationFillArea_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAnnotationFillArea *ret = new IfcAnnotationFillArea(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationFillArea_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAnnotationFillArea *ret = new IfcAnnotationFillArea(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAnnotationFillArea *IfcAnnotationFillArea_Factory::generate() {
  return static_cast< IfcAnnotationFillArea * > (create(m_model->getNewId()));
}

IfcAnnotationFillArea *IfcAnnotationFillArea_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAnnotationFillArea * > (it->second);
  }
  else {
    return NULL;
  }
}

