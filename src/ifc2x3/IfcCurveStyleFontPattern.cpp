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
#include <ifc2x3/IfcCurveStyleFontPattern.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurveStyleFontPattern::IfcCurveStyleFontPattern(Step::SPFData *args) : Step::BaseObject(args) {
  m_visibleSegmentLength = getUnset(m_visibleSegmentLength);
  m_invisibleSegmentLength = getUnset(m_invisibleSegmentLength);
}


IfcCurveStyleFontPattern::~IfcCurveStyleFontPattern() {
}

bool IfcCurveStyleFontPattern::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveStyleFontPattern(this);
}

const char *IfcCurveStyleFontPattern::type() {
  return "IfcCurveStyleFontPattern";
}

Step::ClassType IfcCurveStyleFontPattern::getClassType() {
  return IfcCurveStyleFontPattern::s_type;
}

Step::ClassType IfcCurveStyleFontPattern::getType() const {
  return IfcCurveStyleFontPattern::s_type;
}

bool IfcCurveStyleFontPattern::isOfType(Step::ClassType t) {
  return IfcCurveStyleFontPattern::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLengthMeasure IfcCurveStyleFontPattern::getVisibleSegmentLength() {
  if (Step::BaseObject::inited()) {
    return m_visibleSegmentLength;
  }
  else {
    return getUnset(m_visibleSegmentLength);
  }
}

void IfcCurveStyleFontPattern::setVisibleSegmentLength(IfcLengthMeasure value) {
  m_visibleSegmentLength = value;
}

IfcPositiveLengthMeasure IfcCurveStyleFontPattern::getInvisibleSegmentLength() {
  if (Step::BaseObject::inited()) {
    return m_invisibleSegmentLength;
  }
  else {
    return getUnset(m_invisibleSegmentLength);
  }
}

void IfcCurveStyleFontPattern::setInvisibleSegmentLength(IfcPositiveLengthMeasure value) {
  m_invisibleSegmentLength = value;
}

void IfcCurveStyleFontPattern::release() {
}

bool IfcCurveStyleFontPattern::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_visibleSegmentLength = getUnset(m_visibleSegmentLength);
  }
  else {
    m_visibleSegmentLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_invisibleSegmentLength = getUnset(m_invisibleSegmentLength);
  }
  else {
    m_invisibleSegmentLength = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyleFontPattern::s_type = new Step::ClassType_class("IfcCurveStyleFontPattern");
IfcCurveStyleFontPattern_Factory::IfcCurveStyleFontPattern_Factory() {
}

IfcCurveStyleFontPattern_Factory::~IfcCurveStyleFontPattern_Factory() {
  clear(true);
}

void IfcCurveStyleFontPattern_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyleFontPattern_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveStyleFontPattern_Factory::end() {
  return m_idMap.end();
}

IfcCurveStyleFontPattern *IfcCurveStyleFontPattern_Factory::get(Step::StepId id) {
  IfcCurveStyleFontPattern *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurveStyleFontPattern * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurveStyleFontPattern_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurveStyleFontPattern * > (create(id));
  }
}

Step::BaseObject *IfcCurveStyleFontPattern_Factory::create(Step::StepId id) {
  IfcCurveStyleFontPattern *ret = new IfcCurveStyleFontPattern(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyleFontPattern_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurveStyleFontPattern *ret = new IfcCurveStyleFontPattern(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurveStyleFontPattern_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurveStyleFontPattern *ret = new IfcCurveStyleFontPattern(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurveStyleFontPattern *IfcCurveStyleFontPattern_Factory::generate() {
  return static_cast< IfcCurveStyleFontPattern * > (create(m_model->getNewId()));
}

IfcCurveStyleFontPattern *IfcCurveStyleFontPattern_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurveStyleFontPattern * > (it->second);
  }
  else {
    return NULL;
  }
}

