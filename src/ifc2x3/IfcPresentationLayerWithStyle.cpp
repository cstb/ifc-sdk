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
#include <ifc2x3/IfcPresentationLayerWithStyle.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPresentationStyleSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPresentationLayerWithStyle::IfcPresentationLayerWithStyle(Step::SPFData *args) : IfcPresentationLayerAssignment(args) {
  m_layerOn = getUnset(m_layerOn);
  m_layerFrozen = getUnset(m_layerFrozen);
  m_layerBlocked = getUnset(m_layerBlocked);
  m_layerStyles.setUnset(true);
}


IfcPresentationLayerWithStyle::~IfcPresentationLayerWithStyle() {
}

bool IfcPresentationLayerWithStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPresentationLayerWithStyle(this);
}

const char *IfcPresentationLayerWithStyle::type() {
  return "IfcPresentationLayerWithStyle";
}

Step::ClassType IfcPresentationLayerWithStyle::getClassType() {
  return IfcPresentationLayerWithStyle::s_type;
}

Step::ClassType IfcPresentationLayerWithStyle::getType() const {
  return IfcPresentationLayerWithStyle::s_type;
}

bool IfcPresentationLayerWithStyle::isOfType(Step::ClassType t) {
  return IfcPresentationLayerWithStyle::s_type == t ? true : IfcPresentationLayerAssignment::isOfType(t);
}

Logical IfcPresentationLayerWithStyle::getLayerOn() {
  if (Step::BaseObject::inited()) {
    return m_layerOn;
  }
  else {
    return getUnset(m_layerOn);
  }
}

void IfcPresentationLayerWithStyle::setLayerOn(Logical value) {
  m_layerOn = value;
}

Logical IfcPresentationLayerWithStyle::getLayerFrozen() {
  if (Step::BaseObject::inited()) {
    return m_layerFrozen;
  }
  else {
    return getUnset(m_layerFrozen);
  }
}

void IfcPresentationLayerWithStyle::setLayerFrozen(Logical value) {
  m_layerFrozen = value;
}

Logical IfcPresentationLayerWithStyle::getLayerBlocked() {
  if (Step::BaseObject::inited()) {
    return m_layerBlocked;
  }
  else {
    return getUnset(m_layerBlocked);
  }
}

void IfcPresentationLayerWithStyle::setLayerBlocked(Logical value) {
  m_layerBlocked = value;
}

Step::StepSet< Step::RefPtr< IfcPresentationStyleSelect > > &IfcPresentationLayerWithStyle::getLayerStyles() {
  if (Step::BaseObject::inited()) {
    return m_layerStyles;
  }
  else {
    m_layerStyles.setUnset(true);
    return m_layerStyles;
  }
}

void IfcPresentationLayerWithStyle::setLayerStyles(const Step::StepSet< Step::RefPtr< IfcPresentationStyleSelect > > &value) {
  m_layerStyles = value;
}

void IfcPresentationLayerWithStyle::release() {
  IfcPresentationLayerAssignment::release();
  m_layerStyles.clear();
}

bool IfcPresentationLayerWithStyle::init() {
  bool status = IfcPresentationLayerAssignment::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerOn = getUnset(m_layerOn);
  }
  else {
    m_layerOn = Step::spfToLogical(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerFrozen = getUnset(m_layerFrozen);
  }
  else {
    m_layerFrozen = Step::spfToLogical(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerBlocked = getUnset(m_layerBlocked);
  }
  else {
    m_layerBlocked = Step::spfToLogical(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_layerStyles.setUnset(true);
  }
  else {
    m_layerStyles.setUnset(false);
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
        m_layerStyles.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationLayerWithStyle::s_type = new Step::ClassType_class("IfcPresentationLayerWithStyle");
IfcPresentationLayerWithStyle_Factory::IfcPresentationLayerWithStyle_Factory() {
}

IfcPresentationLayerWithStyle_Factory::~IfcPresentationLayerWithStyle_Factory() {
  clear(true);
}

void IfcPresentationLayerWithStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPresentationLayerWithStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPresentationLayerWithStyle_Factory::end() {
  return m_idMap.end();
}

IfcPresentationLayerWithStyle *IfcPresentationLayerWithStyle_Factory::get(Step::StepId id) {
  IfcPresentationLayerWithStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPresentationLayerWithStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcPresentationLayerWithStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPresentationLayerWithStyle * > (create(id));
  }
}

Step::BaseObject *IfcPresentationLayerWithStyle_Factory::create(Step::StepId id) {
  IfcPresentationLayerWithStyle *ret = new IfcPresentationLayerWithStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPresentationLayerWithStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPresentationLayerWithStyle *ret = new IfcPresentationLayerWithStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPresentationLayerWithStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPresentationLayerWithStyle *ret = new IfcPresentationLayerWithStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPresentationLayerWithStyle *IfcPresentationLayerWithStyle_Factory::generate() {
  return static_cast< IfcPresentationLayerWithStyle * > (create(m_model->getNewId()));
}

IfcPresentationLayerWithStyle *IfcPresentationLayerWithStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPresentationLayerWithStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

