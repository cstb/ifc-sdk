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
#include <ifc2x3/IfcStyledItem.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPresentationStyleAssignment.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStyledItem::IfcStyledItem(Step::SPFData *args) : IfcRepresentationItem(args) {
  m_item = NULL;
  m_styles.setUnset(true);
  m_name = getUnset(m_name);
}


IfcStyledItem::~IfcStyledItem() {
}

bool IfcStyledItem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStyledItem(this);
}

const char *IfcStyledItem::type() {
  return "IfcStyledItem";
}

Step::ClassType IfcStyledItem::getClassType() {
  return IfcStyledItem::s_type;
}

Step::ClassType IfcStyledItem::getType() const {
  return IfcStyledItem::s_type;
}

bool IfcStyledItem::isOfType(Step::ClassType t) {
  return IfcStyledItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

IfcRepresentationItem *IfcStyledItem::getItem() {
  if (Step::BaseObject::inited()) {
    return m_item.get();
  }
  else {
    return NULL;
  }
}

void IfcStyledItem::setItem(const Step::RefPtr< IfcRepresentationItem > &value) {
  m_item = value;
}

Step::StepSet< Step::RefPtr< IfcPresentationStyleAssignment > > &IfcStyledItem::getStyles() {
  if (Step::BaseObject::inited()) {
    return m_styles;
  }
  else {
    m_styles.setUnset(true);
    return m_styles;
  }
}

void IfcStyledItem::setStyles(const Step::StepSet< Step::RefPtr< IfcPresentationStyleAssignment > > &value) {
  m_styles = value;
}

IfcLabel IfcStyledItem::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcStyledItem::setName(const IfcLabel &value) {
  m_name = value;
}

void IfcStyledItem::release() {
  IfcRepresentationItem::release();
  m_item.release();
  m_styles.clear();
}

bool IfcStyledItem::init() {
  bool status = IfcRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_item = NULL;
  }
  else {
    m_item = static_cast< IfcRepresentationItem * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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
        Step::RefPtr< IfcPresentationStyleAssignment > attr2;
        attr2 = static_cast< IfcPresentationStyleAssignment * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_styles.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStyledItem::s_type = new Step::ClassType_class("IfcStyledItem");
IfcStyledItem_Factory::IfcStyledItem_Factory() {
}

IfcStyledItem_Factory::~IfcStyledItem_Factory() {
  clear(true);
}

void IfcStyledItem_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStyledItem_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStyledItem_Factory::end() {
  return m_idMap.end();
}

IfcStyledItem *IfcStyledItem_Factory::get(Step::StepId id) {
  IfcStyledItem *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStyledItem * > (it->second);
  }
  else {
    LOG_ERROR("IfcStyledItem_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStyledItem * > (create(id));
  }
}

Step::BaseObject *IfcStyledItem_Factory::create(Step::StepId id) {
  IfcStyledItem *ret = new IfcStyledItem(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStyledItem_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStyledItem *ret = new IfcStyledItem(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStyledItem_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStyledItem *ret = new IfcStyledItem(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStyledItem *IfcStyledItem_Factory::generate() {
  return static_cast< IfcStyledItem * > (create(m_model->getNewId()));
}

IfcStyledItem *IfcStyledItem_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStyledItem * > (it->second);
  }
  else {
    return NULL;
  }
}

