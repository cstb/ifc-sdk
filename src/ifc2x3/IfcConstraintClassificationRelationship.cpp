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
#include <ifc2x3/IfcConstraintClassificationRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConstraintClassificationRelationship::IfcConstraintClassificationRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_classifiedConstraint = NULL;
  m_relatedClassifications.setUnset(true);
}


IfcConstraintClassificationRelationship::~IfcConstraintClassificationRelationship() {
}

bool IfcConstraintClassificationRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstraintClassificationRelationship(this);
}

const char *IfcConstraintClassificationRelationship::type() {
  return "IfcConstraintClassificationRelationship";
}

Step::ClassType IfcConstraintClassificationRelationship::getClassType() {
  return IfcConstraintClassificationRelationship::s_type;
}

Step::ClassType IfcConstraintClassificationRelationship::getType() const {
  return IfcConstraintClassificationRelationship::s_type;
}

bool IfcConstraintClassificationRelationship::isOfType(Step::ClassType t) {
  return IfcConstraintClassificationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcConstraint *IfcConstraintClassificationRelationship::getClassifiedConstraint() {
  if (Step::BaseObject::inited()) {
    return m_classifiedConstraint.get();
  }
  else {
    return NULL;
  }
}

void IfcConstraintClassificationRelationship::setClassifiedConstraint(const Step::RefPtr< IfcConstraint > &value) {
  m_classifiedConstraint = value;
}

Step::StepSet< Step::RefPtr< IfcClassificationNotationSelect > > &IfcConstraintClassificationRelationship::getRelatedClassifications() {
  if (Step::BaseObject::inited()) {
    return m_relatedClassifications;
  }
  else {
    m_relatedClassifications.setUnset(true);
    return m_relatedClassifications;
  }
}

void IfcConstraintClassificationRelationship::setRelatedClassifications(const Step::StepSet< Step::RefPtr< IfcClassificationNotationSelect > > &value) {
  m_relatedClassifications = value;
}

void IfcConstraintClassificationRelationship::release() {
  m_classifiedConstraint.release();
  m_relatedClassifications.clear();
}

bool IfcConstraintClassificationRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_classifiedConstraint = NULL;
  }
  else {
    m_classifiedConstraint = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedClassifications.setUnset(true);
  }
  else {
    m_relatedClassifications.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcClassificationNotationSelect > attr2;
        attr2 = new IfcClassificationNotationSelect;
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
        m_relatedClassifications.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintClassificationRelationship::s_type = new Step::ClassType_class("IfcConstraintClassificationRelationship");
IfcConstraintClassificationRelationship_Factory::IfcConstraintClassificationRelationship_Factory() {
}

IfcConstraintClassificationRelationship_Factory::~IfcConstraintClassificationRelationship_Factory() {
  clear(true);
}

void IfcConstraintClassificationRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstraintClassificationRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstraintClassificationRelationship_Factory::end() {
  return m_idMap.end();
}

IfcConstraintClassificationRelationship *IfcConstraintClassificationRelationship_Factory::get(Step::StepId id) {
  IfcConstraintClassificationRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConstraintClassificationRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcConstraintClassificationRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConstraintClassificationRelationship * > (create(id));
  }
}

Step::BaseObject *IfcConstraintClassificationRelationship_Factory::create(Step::StepId id) {
  IfcConstraintClassificationRelationship *ret = new IfcConstraintClassificationRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConstraintClassificationRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConstraintClassificationRelationship *ret = new IfcConstraintClassificationRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConstraintClassificationRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConstraintClassificationRelationship *ret = new IfcConstraintClassificationRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConstraintClassificationRelationship *IfcConstraintClassificationRelationship_Factory::generate() {
  return static_cast< IfcConstraintClassificationRelationship * > (create(m_model->getNewId()));
}

IfcConstraintClassificationRelationship *IfcConstraintClassificationRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConstraintClassificationRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

