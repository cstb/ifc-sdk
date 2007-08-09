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
#include <ifc2x3/IfcFillAreaStyle.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcFillStyleSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFillAreaStyle::IfcFillAreaStyle(Step::SPFData *args) : IfcPresentationStyle(args) {
  m_fillStyles.setUnset(true);
}


IfcFillAreaStyle::~IfcFillAreaStyle() {
}

bool IfcFillAreaStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFillAreaStyle(this);
}

const char *IfcFillAreaStyle::type() {
  return "IfcFillAreaStyle";
}

Step::ClassType IfcFillAreaStyle::getClassType() {
  return IfcFillAreaStyle::s_type;
}

Step::ClassType IfcFillAreaStyle::getType() const {
  return IfcFillAreaStyle::s_type;
}

bool IfcFillAreaStyle::isOfType(Step::ClassType t) {
  return IfcFillAreaStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcFillStyleSelect > > &IfcFillAreaStyle::getFillStyles() {
  if (Step::BaseObject::inited()) {
    return m_fillStyles;
  }
  else {
    m_fillStyles.setUnset(true);
    return m_fillStyles;
  }
}

void IfcFillAreaStyle::setFillStyles(const Step::StepSet< Step::RefPtr< IfcFillStyleSelect > > &value) {
  m_fillStyles = value;
}

void IfcFillAreaStyle::release() {
  IfcPresentationStyle::release();
  m_fillStyles.clear();
}

bool IfcFillAreaStyle::init() {
  bool status = IfcPresentationStyle::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fillStyles.setUnset(true);
  }
  else {
    m_fillStyles.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcFillStyleSelect > attr2;
        attr2 = new IfcFillStyleSelect;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
          }
        }
        m_fillStyles.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyle::s_type = new Step::ClassType_class("IfcFillAreaStyle");
IfcFillAreaStyle_Factory::IfcFillAreaStyle_Factory() {
}

IfcFillAreaStyle_Factory::~IfcFillAreaStyle_Factory() {
  clear(true);
}

void IfcFillAreaStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyle_Factory::end() {
  return m_idMap.end();
}

IfcFillAreaStyle *IfcFillAreaStyle_Factory::get(Step::StepId id) {
  IfcFillAreaStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFillAreaStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcFillAreaStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFillAreaStyle * > (create(id));
  }
}

Step::BaseObject *IfcFillAreaStyle_Factory::create(Step::StepId id) {
  IfcFillAreaStyle *ret = new IfcFillAreaStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFillAreaStyle *ret = new IfcFillAreaStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFillAreaStyle *ret = new IfcFillAreaStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFillAreaStyle *IfcFillAreaStyle_Factory::generate() {
  return static_cast< IfcFillAreaStyle * > (create(m_model->getNewId()));
}

IfcFillAreaStyle *IfcFillAreaStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFillAreaStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

