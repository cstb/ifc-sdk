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
#include <ifc2x3/IfcPresentationStyleAssignment.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPresentationStyleSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPresentationStyleAssignment::IfcPresentationStyleAssignment(Step::SPFData *args) : Step::BaseObject(args) {
  m_styles.setUnset(true);
}


IfcPresentationStyleAssignment::~IfcPresentationStyleAssignment() {
}

bool IfcPresentationStyleAssignment::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPresentationStyleAssignment(this);
}

const char *IfcPresentationStyleAssignment::type() {
  return "IfcPresentationStyleAssignment";
}

Step::ClassType IfcPresentationStyleAssignment::getClassType() {
  return IfcPresentationStyleAssignment::s_type;
}

Step::ClassType IfcPresentationStyleAssignment::getType() const {
  return IfcPresentationStyleAssignment::s_type;
}

bool IfcPresentationStyleAssignment::isOfType(Step::ClassType t) {
  return IfcPresentationStyleAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcPresentationStyleSelect > > &IfcPresentationStyleAssignment::getStyles() {
  if (Step::BaseObject::inited()) {
    return m_styles;
  }
  else {
    m_styles.setUnset(true);
    return m_styles;
  }
}

void IfcPresentationStyleAssignment::setStyles(const Step::StepSet< Step::RefPtr< IfcPresentationStyleSelect > > &value) {
  m_styles = value;
}

void IfcPresentationStyleAssignment::release() {
  m_styles.clear();
}

bool IfcPresentationStyleAssignment::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_styles.setUnset(true);
  }
  else {
    m_styles.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcPresentationStyleSelect > attr2;
        attr2 = new IfcPresentationStyleSelect;
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
            if (type2 == "IFCNULLSTYLE") {
              IfcNullStyle tmp_attr2;
              if (str1 == ".NULL.") {
                tmp_attr2 = IfcNullStyle_NULL;
              }
              attr2->setIfcNullStyle(tmp_attr2);
            }
          }
        }
        m_styles.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationStyleAssignment::s_type = new Step::ClassType_class("IfcPresentationStyleAssignment");
IfcPresentationStyleAssignment_Factory::IfcPresentationStyleAssignment_Factory() {
}

IfcPresentationStyleAssignment_Factory::~IfcPresentationStyleAssignment_Factory() {
  clear(true);
}

void IfcPresentationStyleAssignment_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPresentationStyleAssignment_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPresentationStyleAssignment_Factory::end() {
  return m_idMap.end();
}

IfcPresentationStyleAssignment *IfcPresentationStyleAssignment_Factory::get(Step::StepId id) {
  IfcPresentationStyleAssignment *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPresentationStyleAssignment * > (it->second);
  }
  else {
    LOG_ERROR("IfcPresentationStyleAssignment_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPresentationStyleAssignment * > (create(id));
  }
}

Step::BaseObject *IfcPresentationStyleAssignment_Factory::create(Step::StepId id) {
  IfcPresentationStyleAssignment *ret = new IfcPresentationStyleAssignment(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPresentationStyleAssignment_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPresentationStyleAssignment *ret = new IfcPresentationStyleAssignment(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPresentationStyleAssignment_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPresentationStyleAssignment *ret = new IfcPresentationStyleAssignment(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPresentationStyleAssignment *IfcPresentationStyleAssignment_Factory::generate() {
  return static_cast< IfcPresentationStyleAssignment * > (create(m_model->getNewId()));
}

IfcPresentationStyleAssignment *IfcPresentationStyleAssignment_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPresentationStyleAssignment * > (it->second);
  }
  else {
    return NULL;
  }
}

