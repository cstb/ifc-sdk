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
#include <ifc2x3/IfcCurveStyle.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcColour.h>
#include <ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurveStyle::IfcCurveStyle(Step::SPFData *args) : IfcPresentationStyle(args) {
  m_curveFont = NULL;
  m_curveWidth = NULL;
  m_curveColour = NULL;
}


IfcCurveStyle::~IfcCurveStyle() {
}

bool IfcCurveStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveStyle(this);
}

const char *IfcCurveStyle::type() {
  return "IfcCurveStyle";
}

Step::ClassType IfcCurveStyle::getClassType() {
  return IfcCurveStyle::s_type;
}

Step::ClassType IfcCurveStyle::getType() const {
  return IfcCurveStyle::s_type;
}

bool IfcCurveStyle::isOfType(Step::ClassType t) {
  return IfcCurveStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcCurveFontOrScaledCurveFontSelect *IfcCurveStyle::getCurveFont() {
  if (Step::BaseObject::inited()) {
    return m_curveFont.get();
  }
  else {
    return NULL;
  }
}

void IfcCurveStyle::setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value) {
  m_curveFont = value;
}

IfcSizeSelect *IfcCurveStyle::getCurveWidth() {
  if (Step::BaseObject::inited()) {
    return m_curveWidth.get();
  }
  else {
    return NULL;
  }
}

void IfcCurveStyle::setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value) {
  m_curveWidth = value;
}

IfcColour *IfcCurveStyle::getCurveColour() {
  if (Step::BaseObject::inited()) {
    return m_curveColour.get();
  }
  else {
    return NULL;
  }
}

void IfcCurveStyle::setCurveColour(const Step::RefPtr< IfcColour > &value) {
  m_curveColour = value;
}

void IfcCurveStyle::release() {
  IfcPresentationStyle::release();
}

bool IfcCurveStyle::init() {
  bool status = IfcPresentationStyle::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curveFont = NULL;
  }
  else {
    m_curveFont = new IfcCurveFontOrScaledCurveFontSelect;
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
    m_curveWidth = NULL;
  }
  else {
    m_curveWidth = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_curveWidth->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_curveWidth->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_curveWidth->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_curveWidth->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_curveWidth->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_curveWidth->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_curveWidth->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curveColour = NULL;
  }
  else {
    m_curveColour = new IfcColour;
    if (arg[0] == '#') {
      m_curveColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyle::s_type = new Step::ClassType_class("IfcCurveStyle");
IfcCurveStyle_Factory::IfcCurveStyle_Factory() {
}

IfcCurveStyle_Factory::~IfcCurveStyle_Factory() {
  clear(true);
}

void IfcCurveStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyle_Factory::end() {
  return m_idMap.end();
}

IfcCurveStyle *IfcCurveStyle_Factory::get(Step::StepId id) {
  IfcCurveStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurveStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurveStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurveStyle * > (create(id));
  }
}

Step::BaseObject *IfcCurveStyle_Factory::create(Step::StepId id) {
  IfcCurveStyle *ret = new IfcCurveStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurveStyle *ret = new IfcCurveStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurveStyle *ret = new IfcCurveStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurveStyle *IfcCurveStyle_Factory::generate() {
  return static_cast< IfcCurveStyle * > (create(m_model->getNewId()));
}

IfcCurveStyle *IfcCurveStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurveStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

