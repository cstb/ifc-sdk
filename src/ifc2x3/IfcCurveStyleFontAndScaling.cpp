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
#include <ifc2x3/IfcCurveStyleFontAndScaling.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurveStyleFontSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurveStyleFontAndScaling::IfcCurveStyleFontAndScaling(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_curveFont = NULL;
  m_curveFontScaling = getUnset(m_curveFontScaling);
}


IfcCurveStyleFontAndScaling::~IfcCurveStyleFontAndScaling() {
}

bool IfcCurveStyleFontAndScaling::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveStyleFontAndScaling(this);
}

const char *IfcCurveStyleFontAndScaling::type() {
  return "IfcCurveStyleFontAndScaling";
}

Step::ClassType IfcCurveStyleFontAndScaling::getClassType() {
  return IfcCurveStyleFontAndScaling::s_type;
}

Step::ClassType IfcCurveStyleFontAndScaling::getType() const {
  return IfcCurveStyleFontAndScaling::s_type;
}

bool IfcCurveStyleFontAndScaling::isOfType(Step::ClassType t) {
  return IfcCurveStyleFontAndScaling::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcCurveStyleFontAndScaling::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcCurveStyleFontAndScaling::setName(const IfcLabel &value) {
  m_name = value;
}

IfcCurveStyleFontSelect *IfcCurveStyleFontAndScaling::getCurveFont() {
  if (Step::BaseObject::inited()) {
    return m_curveFont.get();
  }
  else {
    return NULL;
  }
}

void IfcCurveStyleFontAndScaling::setCurveFont(const Step::RefPtr< IfcCurveStyleFontSelect > &value) {
  m_curveFont = value;
}

IfcPositiveRatioMeasure IfcCurveStyleFontAndScaling::getCurveFontScaling() {
  if (Step::BaseObject::inited()) {
    return m_curveFontScaling;
  }
  else {
    return getUnset(m_curveFontScaling);
  }
}

void IfcCurveStyleFontAndScaling::setCurveFontScaling(IfcPositiveRatioMeasure value) {
  m_curveFontScaling = value;
}

void IfcCurveStyleFontAndScaling::release() {
}

bool IfcCurveStyleFontAndScaling::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curveFont = NULL;
  }
  else {
    m_curveFont = new IfcCurveStyleFontSelect;
    if (arg[0] == '#') {
      m_curveFont->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curveFontScaling = getUnset(m_curveFontScaling);
  }
  else {
    m_curveFontScaling = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyleFontAndScaling::s_type = new Step::ClassType_class("IfcCurveStyleFontAndScaling");
IfcCurveStyleFontAndScaling_Factory::IfcCurveStyleFontAndScaling_Factory() {
}

IfcCurveStyleFontAndScaling_Factory::~IfcCurveStyleFontAndScaling_Factory() {
  clear(true);
}

void IfcCurveStyleFontAndScaling_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyleFontAndScaling_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyleFontAndScaling_Factory::end() {
  return m_idMap.end();
}

IfcCurveStyleFontAndScaling *IfcCurveStyleFontAndScaling_Factory::get(Step::StepId id) {
  IfcCurveStyleFontAndScaling *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurveStyleFontAndScaling * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurveStyleFontAndScaling_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurveStyleFontAndScaling * > (create(id));
  }
}

Step::BaseObject *IfcCurveStyleFontAndScaling_Factory::create(Step::StepId id) {
  IfcCurveStyleFontAndScaling *ret = new IfcCurveStyleFontAndScaling(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyleFontAndScaling_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurveStyleFontAndScaling *ret = new IfcCurveStyleFontAndScaling(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyleFontAndScaling_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurveStyleFontAndScaling *ret = new IfcCurveStyleFontAndScaling(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurveStyleFontAndScaling *IfcCurveStyleFontAndScaling_Factory::generate() {
  return static_cast< IfcCurveStyleFontAndScaling * > (create(m_model->getNewId()));
}

IfcCurveStyleFontAndScaling *IfcCurveStyleFontAndScaling_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurveStyleFontAndScaling * > (it->second);
  }
  else {
    return NULL;
  }
}

