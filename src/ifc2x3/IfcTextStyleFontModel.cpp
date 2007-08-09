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
#include <ifc2x3/IfcTextStyleFontModel.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextStyleFontModel::IfcTextStyleFontModel(Step::SPFData *args) : IfcPreDefinedTextFont(args) {
  m_fontFamily.setUnset(true);
  m_fontStyle = getUnset(m_fontStyle);
  m_fontVariant = getUnset(m_fontVariant);
  m_fontWeight = getUnset(m_fontWeight);
  m_fontSize = NULL;
}


IfcTextStyleFontModel::~IfcTextStyleFontModel() {
}

bool IfcTextStyleFontModel::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextStyleFontModel(this);
}

const char *IfcTextStyleFontModel::type() {
  return "IfcTextStyleFontModel";
}

Step::ClassType IfcTextStyleFontModel::getClassType() {
  return IfcTextStyleFontModel::s_type;
}

Step::ClassType IfcTextStyleFontModel::getType() const {
  return IfcTextStyleFontModel::s_type;
}

bool IfcTextStyleFontModel::isOfType(Step::ClassType t) {
  return IfcTextStyleFontModel::s_type == t ? true : IfcPreDefinedTextFont::isOfType(t);
}

Step::StepList< IfcTextFontName > &IfcTextStyleFontModel::getFontFamily() {
  if (Step::BaseObject::inited()) {
    return m_fontFamily;
  }
  else {
    m_fontFamily.setUnset(true);
    return m_fontFamily;
  }
}

void IfcTextStyleFontModel::setFontFamily(const Step::StepList< IfcTextFontName > &value) {
  m_fontFamily = value;
}

IfcFontStyle IfcTextStyleFontModel::getFontStyle() {
  if (Step::BaseObject::inited()) {
    return m_fontStyle;
  }
  else {
    return getUnset(m_fontStyle);
  }
}

void IfcTextStyleFontModel::setFontStyle(const IfcFontStyle &value) {
  m_fontStyle = value;
}

IfcFontVariant IfcTextStyleFontModel::getFontVariant() {
  if (Step::BaseObject::inited()) {
    return m_fontVariant;
  }
  else {
    return getUnset(m_fontVariant);
  }
}

void IfcTextStyleFontModel::setFontVariant(const IfcFontVariant &value) {
  m_fontVariant = value;
}

IfcFontWeight IfcTextStyleFontModel::getFontWeight() {
  if (Step::BaseObject::inited()) {
    return m_fontWeight;
  }
  else {
    return getUnset(m_fontWeight);
  }
}

void IfcTextStyleFontModel::setFontWeight(const IfcFontWeight &value) {
  m_fontWeight = value;
}

IfcSizeSelect *IfcTextStyleFontModel::getFontSize() {
  if (Step::BaseObject::inited()) {
    return m_fontSize.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleFontModel::setFontSize(const Step::RefPtr< IfcSizeSelect > &value) {
  m_fontSize = value;
}

void IfcTextStyleFontModel::release() {
  IfcPreDefinedTextFont::release();
  m_fontFamily.clear();
}

bool IfcTextStyleFontModel::init() {
  bool status = IfcPreDefinedTextFont::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fontFamily.setUnset(true);
  }
  else {
    m_fontFamily.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcTextFontName attr2;
        attr2 = Step::spfToString(str1);
        m_fontFamily.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fontStyle = getUnset(m_fontStyle);
  }
  else {
    m_fontStyle = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fontVariant = getUnset(m_fontVariant);
  }
  else {
    m_fontVariant = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fontWeight = getUnset(m_fontWeight);
  }
  else {
    m_fontWeight = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fontSize = NULL;
  }
  else {
    m_fontSize = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_fontSize->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_fontSize->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_fontSize->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_fontSize->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_fontSize->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_fontSize->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_fontSize->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleFontModel::s_type = new Step::ClassType_class("IfcTextStyleFontModel");
IfcTextStyleFontModel_Factory::IfcTextStyleFontModel_Factory() {
}

IfcTextStyleFontModel_Factory::~IfcTextStyleFontModel_Factory() {
  clear(true);
}

void IfcTextStyleFontModel_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleFontModel_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleFontModel_Factory::end() {
  return m_idMap.end();
}

IfcTextStyleFontModel *IfcTextStyleFontModel_Factory::get(Step::StepId id) {
  IfcTextStyleFontModel *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextStyleFontModel * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextStyleFontModel_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextStyleFontModel * > (create(id));
  }
}

Step::BaseObject *IfcTextStyleFontModel_Factory::create(Step::StepId id) {
  IfcTextStyleFontModel *ret = new IfcTextStyleFontModel(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleFontModel_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextStyleFontModel *ret = new IfcTextStyleFontModel(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleFontModel_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextStyleFontModel *ret = new IfcTextStyleFontModel(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextStyleFontModel *IfcTextStyleFontModel_Factory::generate() {
  return static_cast< IfcTextStyleFontModel * > (create(m_model->getNewId()));
}

IfcTextStyleFontModel *IfcTextStyleFontModel_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextStyleFontModel * > (it->second);
  }
  else {
    return NULL;
  }
}

