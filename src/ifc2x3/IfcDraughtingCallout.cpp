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
#include <ifc2x3/IfcDraughtingCallout.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDraughtingCalloutElement.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDraughtingCallout::IfcDraughtingCallout(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_contents.setUnset(true);
  m_isRelatedFromCallout.setUnset(true);
  m_isRelatedToCallout.setUnset(true);
}


IfcDraughtingCallout::~IfcDraughtingCallout() {
}

bool IfcDraughtingCallout::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDraughtingCallout(this);
}

const char *IfcDraughtingCallout::type() {
  return "IfcDraughtingCallout";
}

Step::ClassType IfcDraughtingCallout::getClassType() {
  return IfcDraughtingCallout::s_type;
}

Step::ClassType IfcDraughtingCallout::getType() const {
  return IfcDraughtingCallout::s_type;
}

bool IfcDraughtingCallout::isOfType(Step::ClassType t) {
  return IfcDraughtingCallout::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcDraughtingCalloutElement > > &IfcDraughtingCallout::getContents() {
  if (Step::BaseObject::inited()) {
    return m_contents;
  }
  else {
    m_contents.setUnset(true);
    return m_contents;
  }
}

void IfcDraughtingCallout::setContents(const Step::StepSet< Step::RefPtr< IfcDraughtingCalloutElement > > &value) {
  m_contents = value;
}

Step::StepSet< Step::RefPtr< IfcDraughtingCalloutRelationship > > &IfcDraughtingCallout::getIsRelatedFromCallout() {
  if (Step::BaseObject::inited()) {
    return m_isRelatedFromCallout;
  }
  else {
    m_isRelatedFromCallout.setUnset(true);
    return m_isRelatedFromCallout;
  }
}

void IfcDraughtingCallout::setIsRelatedFromCallout(const Step::StepSet< Step::RefPtr< IfcDraughtingCalloutRelationship > > &value) {
  m_isRelatedFromCallout = value;
}

Step::StepSet< Step::RefPtr< IfcDraughtingCalloutRelationship > > &IfcDraughtingCallout::getIsRelatedToCallout() {
  if (Step::BaseObject::inited()) {
    return m_isRelatedToCallout;
  }
  else {
    m_isRelatedToCallout.setUnset(true);
    return m_isRelatedToCallout;
  }
}

void IfcDraughtingCallout::setIsRelatedToCallout(const Step::StepSet< Step::RefPtr< IfcDraughtingCalloutRelationship > > &value) {
  m_isRelatedToCallout = value;
}

void IfcDraughtingCallout::release() {
  IfcGeometricRepresentationItem::release();
  m_contents.clear();
}

bool IfcDraughtingCallout::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_contents.setUnset(true);
  }
  else {
    m_contents.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcDraughtingCalloutElement > attr2;
        attr2 = new IfcDraughtingCalloutElement;
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
        m_contents.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_isRelatedFromCallout.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isRelatedFromCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_isRelatedToCallout.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isRelatedToCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingCallout::s_type = new Step::ClassType_class("IfcDraughtingCallout");
IfcDraughtingCallout_Factory::IfcDraughtingCallout_Factory() {
}

IfcDraughtingCallout_Factory::~IfcDraughtingCallout_Factory() {
  clear(true);
}

void IfcDraughtingCallout_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDraughtingCallout_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDraughtingCallout_Factory::end() {
  return m_idMap.end();
}

IfcDraughtingCallout *IfcDraughtingCallout_Factory::get(Step::StepId id) {
  IfcDraughtingCallout *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDraughtingCallout * > (it->second);
  }
  else {
    LOG_ERROR("IfcDraughtingCallout_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDraughtingCallout * > (create(id));
  }
}

Step::BaseObject *IfcDraughtingCallout_Factory::create(Step::StepId id) {
  IfcDraughtingCallout *ret = new IfcDraughtingCallout(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDraughtingCallout_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDraughtingCallout *ret = new IfcDraughtingCallout(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDraughtingCallout_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDraughtingCallout *ret = new IfcDraughtingCallout(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDraughtingCallout *IfcDraughtingCallout_Factory::generate() {
  return static_cast< IfcDraughtingCallout * > (create(m_model->getNewId()));
}

IfcDraughtingCallout *IfcDraughtingCallout_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDraughtingCallout * > (it->second);
  }
  else {
    return NULL;
  }
}

