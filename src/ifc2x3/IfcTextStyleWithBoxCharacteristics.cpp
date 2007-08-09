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
#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextStyleWithBoxCharacteristics::IfcTextStyleWithBoxCharacteristics(Step::SPFData *args) : Step::BaseObject(args) {
  m_boxHeight = getUnset(m_boxHeight);
  m_boxWidth = getUnset(m_boxWidth);
  m_boxSlantAngle = getUnset(m_boxSlantAngle);
  m_boxRotateAngle = getUnset(m_boxRotateAngle);
  m_characterSpacing = NULL;
}


IfcTextStyleWithBoxCharacteristics::~IfcTextStyleWithBoxCharacteristics() {
}

bool IfcTextStyleWithBoxCharacteristics::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextStyleWithBoxCharacteristics(this);
}

const char *IfcTextStyleWithBoxCharacteristics::type() {
  return "IfcTextStyleWithBoxCharacteristics";
}

Step::ClassType IfcTextStyleWithBoxCharacteristics::getClassType() {
  return IfcTextStyleWithBoxCharacteristics::s_type;
}

Step::ClassType IfcTextStyleWithBoxCharacteristics::getType() const {
  return IfcTextStyleWithBoxCharacteristics::s_type;
}

bool IfcTextStyleWithBoxCharacteristics::isOfType(Step::ClassType t) {
  return IfcTextStyleWithBoxCharacteristics::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxHeight() {
  if (Step::BaseObject::inited()) {
    return m_boxHeight;
  }
  else {
    return getUnset(m_boxHeight);
  }
}

void IfcTextStyleWithBoxCharacteristics::setBoxHeight(IfcPositiveLengthMeasure value) {
  m_boxHeight = value;
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxWidth() {
  if (Step::BaseObject::inited()) {
    return m_boxWidth;
  }
  else {
    return getUnset(m_boxWidth);
  }
}

void IfcTextStyleWithBoxCharacteristics::setBoxWidth(IfcPositiveLengthMeasure value) {
  m_boxWidth = value;
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxSlantAngle() {
  if (Step::BaseObject::inited()) {
    return m_boxSlantAngle;
  }
  else {
    return getUnset(m_boxSlantAngle);
  }
}

void IfcTextStyleWithBoxCharacteristics::setBoxSlantAngle(IfcPlaneAngleMeasure value) {
  m_boxSlantAngle = value;
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxRotateAngle() {
  if (Step::BaseObject::inited()) {
    return m_boxRotateAngle;
  }
  else {
    return getUnset(m_boxRotateAngle);
  }
}

void IfcTextStyleWithBoxCharacteristics::setBoxRotateAngle(IfcPlaneAngleMeasure value) {
  m_boxRotateAngle = value;
}

IfcSizeSelect *IfcTextStyleWithBoxCharacteristics::getCharacterSpacing() {
  if (Step::BaseObject::inited()) {
    return m_characterSpacing.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleWithBoxCharacteristics::setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
  m_characterSpacing = value;
}

void IfcTextStyleWithBoxCharacteristics::release() {
}

bool IfcTextStyleWithBoxCharacteristics::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_boxHeight = getUnset(m_boxHeight);
  }
  else {
    m_boxHeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_boxWidth = getUnset(m_boxWidth);
  }
  else {
    m_boxWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_boxSlantAngle = getUnset(m_boxSlantAngle);
  }
  else {
    m_boxSlantAngle = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_boxRotateAngle = getUnset(m_boxRotateAngle);
  }
  else {
    m_boxRotateAngle = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_characterSpacing = NULL;
  }
  else {
    m_characterSpacing = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_characterSpacing->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_characterSpacing->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_characterSpacing->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_characterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_characterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_characterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_characterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleWithBoxCharacteristics::s_type = new Step::ClassType_class("IfcTextStyleWithBoxCharacteristics");
IfcTextStyleWithBoxCharacteristics_Factory::IfcTextStyleWithBoxCharacteristics_Factory() {
}

IfcTextStyleWithBoxCharacteristics_Factory::~IfcTextStyleWithBoxCharacteristics_Factory() {
  clear(true);
}

void IfcTextStyleWithBoxCharacteristics_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleWithBoxCharacteristics_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleWithBoxCharacteristics_Factory::end() {
  return m_idMap.end();
}

IfcTextStyleWithBoxCharacteristics *IfcTextStyleWithBoxCharacteristics_Factory::get(Step::StepId id) {
  IfcTextStyleWithBoxCharacteristics *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextStyleWithBoxCharacteristics * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextStyleWithBoxCharacteristics_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextStyleWithBoxCharacteristics * > (create(id));
  }
}

Step::BaseObject *IfcTextStyleWithBoxCharacteristics_Factory::create(Step::StepId id) {
  IfcTextStyleWithBoxCharacteristics *ret = new IfcTextStyleWithBoxCharacteristics(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleWithBoxCharacteristics_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextStyleWithBoxCharacteristics *ret = new IfcTextStyleWithBoxCharacteristics(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleWithBoxCharacteristics_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextStyleWithBoxCharacteristics *ret = new IfcTextStyleWithBoxCharacteristics(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextStyleWithBoxCharacteristics *IfcTextStyleWithBoxCharacteristics_Factory::generate() {
  return static_cast< IfcTextStyleWithBoxCharacteristics * > (create(m_model->getNewId()));
}

IfcTextStyleWithBoxCharacteristics *IfcTextStyleWithBoxCharacteristics_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextStyleWithBoxCharacteristics * > (it->second);
  }
  else {
    return NULL;
  }
}

