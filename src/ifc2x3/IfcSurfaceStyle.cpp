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
#include <ifc2x3/IfcSurfaceStyle.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurfaceStyleElementSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceStyle::IfcSurfaceStyle(Step::SPFData *args) : IfcPresentationStyle(args) {
  m_side = IfcSurfaceSide_UNSET;
  m_styles.setUnset(true);
}


IfcSurfaceStyle::~IfcSurfaceStyle() {
}

bool IfcSurfaceStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyle(this);
}

const char *IfcSurfaceStyle::type() {
  return "IfcSurfaceStyle";
}

Step::ClassType IfcSurfaceStyle::getClassType() {
  return IfcSurfaceStyle::s_type;
}

Step::ClassType IfcSurfaceStyle::getType() const {
  return IfcSurfaceStyle::s_type;
}

bool IfcSurfaceStyle::isOfType(Step::ClassType t) {
  return IfcSurfaceStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcSurfaceSide IfcSurfaceStyle::getSide() {
  if (Step::BaseObject::inited()) {
    return m_side;
  }
  else {
    return IfcSurfaceSide_UNSET;
  }
}

void IfcSurfaceStyle::setSide(IfcSurfaceSide value) {
  m_side = value;
}

Step::StepSet< Step::RefPtr< IfcSurfaceStyleElementSelect > > &IfcSurfaceStyle::getStyles() {
  if (Step::BaseObject::inited()) {
    return m_styles;
  }
  else {
    m_styles.setUnset(true);
    return m_styles;
  }
}

void IfcSurfaceStyle::setStyles(const Step::StepSet< Step::RefPtr< IfcSurfaceStyleElementSelect > > &value) {
  m_styles = value;
}

void IfcSurfaceStyle::release() {
  IfcPresentationStyle::release();
  m_styles.clear();
}

bool IfcSurfaceStyle::init() {
  bool status = IfcPresentationStyle::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_side = IfcSurfaceSide_UNSET;
  }
  else {
    if (arg == ".POSITIVE.") {
      m_side = IfcSurfaceSide_POSITIVE;
    }
    else if (arg == ".NEGATIVE.") {
      m_side = IfcSurfaceSide_NEGATIVE;
    }
    else if (arg == ".BOTH.") {
      m_side = IfcSurfaceSide_BOTH;
    }
  }
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
        Step::RefPtr< IfcSurfaceStyleElementSelect > attr2;
        attr2 = new IfcSurfaceStyleElementSelect;
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
        m_styles.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyle::s_type = new Step::ClassType_class("IfcSurfaceStyle");
IfcSurfaceStyle_Factory::IfcSurfaceStyle_Factory() {
}

IfcSurfaceStyle_Factory::~IfcSurfaceStyle_Factory() {
  clear(true);
}

void IfcSurfaceStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyle_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceStyle *IfcSurfaceStyle_Factory::get(Step::StepId id) {
  IfcSurfaceStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceStyle * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceStyle_Factory::create(Step::StepId id) {
  IfcSurfaceStyle *ret = new IfcSurfaceStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceStyle *ret = new IfcSurfaceStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceStyle *ret = new IfcSurfaceStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceStyle *IfcSurfaceStyle_Factory::generate() {
  return static_cast< IfcSurfaceStyle * > (create(m_model->getNewId()));
}

IfcSurfaceStyle *IfcSurfaceStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

