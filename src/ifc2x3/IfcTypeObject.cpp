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
#include <ifc2x3/IfcTypeObject.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcRelDefinesByType.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTypeObject::IfcTypeObject(Step::SPFData *args) : IfcObjectDefinition(args) {
  m_applicableOccurrence = getUnset(m_applicableOccurrence);
  m_hasPropertySets.setUnset(true);
  m_objectTypeOf.setUnset(true);
}


IfcTypeObject::~IfcTypeObject() {
}

bool IfcTypeObject::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTypeObject(this);
}

const char *IfcTypeObject::type() {
  return "IfcTypeObject";
}

Step::ClassType IfcTypeObject::getClassType() {
  return IfcTypeObject::s_type;
}

Step::ClassType IfcTypeObject::getType() const {
  return IfcTypeObject::s_type;
}

bool IfcTypeObject::isOfType(Step::ClassType t) {
  return IfcTypeObject::s_type == t ? true : IfcObjectDefinition::isOfType(t);
}

IfcLabel IfcTypeObject::getApplicableOccurrence() {
  if (Step::BaseObject::inited()) {
    return m_applicableOccurrence;
  }
  else {
    return getUnset(m_applicableOccurrence);
  }
}

void IfcTypeObject::setApplicableOccurrence(const IfcLabel &value) {
  m_applicableOccurrence = value;
}

Step::StepSet< Step::RefPtr< IfcPropertySetDefinition > > &IfcTypeObject::getHasPropertySets() {
  if (Step::BaseObject::inited()) {
    return m_hasPropertySets;
  }
  else {
    m_hasPropertySets.setUnset(true);
    return m_hasPropertySets;
  }
}

void IfcTypeObject::setHasPropertySets(const Step::StepSet< Step::RefPtr< IfcPropertySetDefinition > > &value) {
  m_hasPropertySets = value;
}

Step::StepSet< Step::RefPtr< IfcRelDefinesByType > > &IfcTypeObject::getObjectTypeOf() {
  if (Step::BaseObject::inited()) {
    return m_objectTypeOf;
  }
  else {
    m_objectTypeOf.setUnset(true);
    return m_objectTypeOf;
  }
}

void IfcTypeObject::setObjectTypeOf(const Step::StepSet< Step::RefPtr< IfcRelDefinesByType > > &value) {
  m_objectTypeOf = value;
}

void IfcTypeObject::release() {
  IfcObjectDefinition::release();
  m_hasPropertySets.clear();
}

bool IfcTypeObject::init() {
  bool status = IfcObjectDefinition::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicableOccurrence = getUnset(m_applicableOccurrence);
  }
  else {
    m_applicableOccurrence = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hasPropertySets.setUnset(true);
  }
  else {
    m_hasPropertySets.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcPropertySetDefinition > attr2;
        attr2 = static_cast< IfcPropertySetDefinition * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_hasPropertySets.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  inverses = m_args->getInverses(IfcRelDefinesByType::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_objectTypeOf.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_objectTypeOf.insert(static_cast< IfcRelDefinesByType * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTypeObject::s_type = new Step::ClassType_class("IfcTypeObject");
IfcTypeObject_Factory::IfcTypeObject_Factory() {
}

IfcTypeObject_Factory::~IfcTypeObject_Factory() {
  clear(true);
}

void IfcTypeObject_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTypeObject_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTypeObject_Factory::end() {
  return m_idMap.end();
}

IfcTypeObject *IfcTypeObject_Factory::get(Step::StepId id) {
  IfcTypeObject *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTypeObject * > (it->second);
  }
  else {
    LOG_ERROR("IfcTypeObject_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTypeObject * > (create(id));
  }
}

Step::BaseObject *IfcTypeObject_Factory::create(Step::StepId id) {
  IfcTypeObject *ret = new IfcTypeObject(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTypeObject_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTypeObject *ret = new IfcTypeObject(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTypeObject_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTypeObject *ret = new IfcTypeObject(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTypeObject *IfcTypeObject_Factory::generate() {
  return static_cast< IfcTypeObject * > (create(m_model->getNewId()));
}

IfcTypeObject *IfcTypeObject_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTypeObject * > (it->second);
  }
  else {
    return NULL;
  }
}

