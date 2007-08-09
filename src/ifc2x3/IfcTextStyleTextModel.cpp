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
#include <ifc2x3/IfcTextStyleTextModel.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextStyleTextModel::IfcTextStyleTextModel(Step::SPFData *args) : Step::BaseObject(args) {
  m_textIndent = NULL;
  m_textAlign = getUnset(m_textAlign);
  m_textDecoration = getUnset(m_textDecoration);
  m_letterSpacing = NULL;
  m_wordSpacing = NULL;
  m_textTransform = getUnset(m_textTransform);
  m_lineHeight = NULL;
}


IfcTextStyleTextModel::~IfcTextStyleTextModel() {
}

bool IfcTextStyleTextModel::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextStyleTextModel(this);
}

const char *IfcTextStyleTextModel::type() {
  return "IfcTextStyleTextModel";
}

Step::ClassType IfcTextStyleTextModel::getClassType() {
  return IfcTextStyleTextModel::s_type;
}

Step::ClassType IfcTextStyleTextModel::getType() const {
  return IfcTextStyleTextModel::s_type;
}

bool IfcTextStyleTextModel::isOfType(Step::ClassType t) {
  return IfcTextStyleTextModel::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcSizeSelect *IfcTextStyleTextModel::getTextIndent() {
  if (Step::BaseObject::inited()) {
    return m_textIndent.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleTextModel::setTextIndent(const Step::RefPtr< IfcSizeSelect > &value) {
  m_textIndent = value;
}

IfcTextAlignment IfcTextStyleTextModel::getTextAlign() {
  if (Step::BaseObject::inited()) {
    return m_textAlign;
  }
  else {
    return getUnset(m_textAlign);
  }
}

void IfcTextStyleTextModel::setTextAlign(const IfcTextAlignment &value) {
  m_textAlign = value;
}

IfcTextDecoration IfcTextStyleTextModel::getTextDecoration() {
  if (Step::BaseObject::inited()) {
    return m_textDecoration;
  }
  else {
    return getUnset(m_textDecoration);
  }
}

void IfcTextStyleTextModel::setTextDecoration(const IfcTextDecoration &value) {
  m_textDecoration = value;
}

IfcSizeSelect *IfcTextStyleTextModel::getLetterSpacing() {
  if (Step::BaseObject::inited()) {
    return m_letterSpacing.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleTextModel::setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
  m_letterSpacing = value;
}

IfcSizeSelect *IfcTextStyleTextModel::getWordSpacing() {
  if (Step::BaseObject::inited()) {
    return m_wordSpacing.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleTextModel::setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
  m_wordSpacing = value;
}

IfcTextTransformation IfcTextStyleTextModel::getTextTransform() {
  if (Step::BaseObject::inited()) {
    return m_textTransform;
  }
  else {
    return getUnset(m_textTransform);
  }
}

void IfcTextStyleTextModel::setTextTransform(const IfcTextTransformation &value) {
  m_textTransform = value;
}

IfcSizeSelect *IfcTextStyleTextModel::getLineHeight() {
  if (Step::BaseObject::inited()) {
    return m_lineHeight.get();
  }
  else {
    return NULL;
  }
}

void IfcTextStyleTextModel::setLineHeight(const Step::RefPtr< IfcSizeSelect > &value) {
  m_lineHeight = value;
}

void IfcTextStyleTextModel::release() {
}

bool IfcTextStyleTextModel::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textIndent = NULL;
  }
  else {
    m_textIndent = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_textIndent->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_textIndent->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_textIndent->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_textIndent->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_textIndent->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_textIndent->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_textIndent->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textAlign = getUnset(m_textAlign);
  }
  else {
    m_textAlign = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textDecoration = getUnset(m_textDecoration);
  }
  else {
    m_textDecoration = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_letterSpacing = NULL;
  }
  else {
    m_letterSpacing = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_letterSpacing->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_letterSpacing->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_letterSpacing->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_letterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_letterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_letterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_letterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_wordSpacing = NULL;
  }
  else {
    m_wordSpacing = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_wordSpacing->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_wordSpacing->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_wordSpacing->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_wordSpacing->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_wordSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_wordSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_wordSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textTransform = getUnset(m_textTransform);
  }
  else {
    m_textTransform = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lineHeight = NULL;
  }
  else {
    m_lineHeight = new IfcSizeSelect;
    if (arg[0] == '#') {
      m_lineHeight->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_lineHeight->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lineHeight->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_lineHeight->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lineHeight->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lineHeight->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lineHeight->setIfcPositiveRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleTextModel::s_type = new Step::ClassType_class("IfcTextStyleTextModel");
IfcTextStyleTextModel_Factory::IfcTextStyleTextModel_Factory() {
}

IfcTextStyleTextModel_Factory::~IfcTextStyleTextModel_Factory() {
  clear(true);
}

void IfcTextStyleTextModel_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleTextModel_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextStyleTextModel_Factory::end() {
  return m_idMap.end();
}

IfcTextStyleTextModel *IfcTextStyleTextModel_Factory::get(Step::StepId id) {
  IfcTextStyleTextModel *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextStyleTextModel * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextStyleTextModel_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextStyleTextModel * > (create(id));
  }
}

Step::BaseObject *IfcTextStyleTextModel_Factory::create(Step::StepId id) {
  IfcTextStyleTextModel *ret = new IfcTextStyleTextModel(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleTextModel_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextStyleTextModel *ret = new IfcTextStyleTextModel(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextStyleTextModel_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextStyleTextModel *ret = new IfcTextStyleTextModel(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextStyleTextModel *IfcTextStyleTextModel_Factory::generate() {
  return static_cast< IfcTextStyleTextModel * > (create(m_model->getNewId()));
}

IfcTextStyleTextModel *IfcTextStyleTextModel_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextStyleTextModel * > (it->second);
  }
  else {
    return NULL;
  }
}

