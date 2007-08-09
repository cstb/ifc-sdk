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
#include <ifc2x3/IfcCurveStyleFont.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurveStyleFontPattern.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurveStyleFont::IfcCurveStyleFont(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_patternList.setUnset(true);
}


IfcCurveStyleFont::~IfcCurveStyleFont() {
}

bool IfcCurveStyleFont::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveStyleFont(this);
}

const char *IfcCurveStyleFont::type() {
  return "IfcCurveStyleFont";
}

Step::ClassType IfcCurveStyleFont::getClassType() {
  return IfcCurveStyleFont::s_type;
}

Step::ClassType IfcCurveStyleFont::getType() const {
  return IfcCurveStyleFont::s_type;
}

bool IfcCurveStyleFont::isOfType(Step::ClassType t) {
  return IfcCurveStyleFont::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcCurveStyleFont::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcCurveStyleFont::setName(const IfcLabel &value) {
  m_name = value;
}

Step::StepList< Step::RefPtr< IfcCurveStyleFontPattern > > &IfcCurveStyleFont::getPatternList() {
  if (Step::BaseObject::inited()) {
    return m_patternList;
  }
  else {
    m_patternList.setUnset(true);
    return m_patternList;
  }
}

void IfcCurveStyleFont::setPatternList(const Step::StepList< Step::RefPtr< IfcCurveStyleFontPattern > > &value) {
  m_patternList = value;
}

void IfcCurveStyleFont::release() {
  m_patternList.clear();
}

bool IfcCurveStyleFont::init() {
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
    m_patternList.setUnset(true);
  }
  else {
    m_patternList.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCurveStyleFontPattern > attr2;
        attr2 = static_cast< IfcCurveStyleFontPattern * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_patternList.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyleFont::s_type = new Step::ClassType_class("IfcCurveStyleFont");
IfcCurveStyleFont_Factory::IfcCurveStyleFont_Factory() {
}

IfcCurveStyleFont_Factory::~IfcCurveStyleFont_Factory() {
  clear(true);
}

void IfcCurveStyleFont_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyleFont_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyleFont_Factory::end() {
  return m_idMap.end();
}

IfcCurveStyleFont *IfcCurveStyleFont_Factory::get(Step::StepId id) {
  IfcCurveStyleFont *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurveStyleFont * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurveStyleFont_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurveStyleFont * > (create(id));
  }
}

Step::BaseObject *IfcCurveStyleFont_Factory::create(Step::StepId id) {
  IfcCurveStyleFont *ret = new IfcCurveStyleFont(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyleFont_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurveStyleFont *ret = new IfcCurveStyleFont(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyleFont_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurveStyleFont *ret = new IfcCurveStyleFont(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurveStyleFont *IfcCurveStyleFont_Factory::generate() {
  return static_cast< IfcCurveStyleFont * > (create(m_model->getNewId()));
}

IfcCurveStyleFont *IfcCurveStyleFont_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurveStyleFont * > (it->second);
  }
  else {
    return NULL;
  }
}

