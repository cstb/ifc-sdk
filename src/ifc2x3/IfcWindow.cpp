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
#include <ifc2x3/IfcWindow.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWindow::IfcWindow(Step::SPFData *args) : IfcBuildingElement(args) {
  m_overallHeight = getUnset(m_overallHeight);
  m_overallWidth = getUnset(m_overallWidth);
}


IfcWindow::~IfcWindow() {
}

bool IfcWindow::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWindow(this);
}

const char *IfcWindow::type() {
  return "IfcWindow";
}

Step::ClassType IfcWindow::getClassType() {
  return IfcWindow::s_type;
}

Step::ClassType IfcWindow::getType() const {
  return IfcWindow::s_type;
}

bool IfcWindow::isOfType(Step::ClassType t) {
  return IfcWindow::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcWindow::getOverallHeight() {
  if (Step::BaseObject::inited()) {
    return m_overallHeight;
  }
  else {
    return getUnset(m_overallHeight);
  }
}

void IfcWindow::setOverallHeight(IfcPositiveLengthMeasure value) {
  m_overallHeight = value;
}

IfcPositiveLengthMeasure IfcWindow::getOverallWidth() {
  if (Step::BaseObject::inited()) {
    return m_overallWidth;
  }
  else {
    return getUnset(m_overallWidth);
  }
}

void IfcWindow::setOverallWidth(IfcPositiveLengthMeasure value) {
  m_overallWidth = value;
}

void IfcWindow::release() {
  IfcBuildingElement::release();
}

bool IfcWindow::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_overallHeight = getUnset(m_overallHeight);
  }
  else {
    m_overallHeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_overallWidth = getUnset(m_overallWidth);
  }
  else {
    m_overallWidth = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcWindow::s_type = new Step::ClassType_class("IfcWindow");
IfcWindow_Factory::IfcWindow_Factory() {
}

IfcWindow_Factory::~IfcWindow_Factory() {
  clear(true);
}

void IfcWindow_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindow_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindow_Factory::end() {
  return m_idMap.end();
}

IfcWindow *IfcWindow_Factory::get(Step::StepId id) {
  IfcWindow *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWindow * > (it->second);
  }
  else {
    LOG_ERROR("IfcWindow_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWindow * > (create(id));
  }
}

Step::BaseObject *IfcWindow_Factory::create(Step::StepId id) {
  IfcWindow *ret = new IfcWindow(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWindow_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWindow *ret = new IfcWindow(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWindow_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWindow *ret = new IfcWindow(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWindow *IfcWindow_Factory::generate() {
  return static_cast< IfcWindow * > (create(m_model->getNewId()));
}

IfcWindow *IfcWindow_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWindow * > (it->second);
  }
  else {
    return NULL;
  }
}

