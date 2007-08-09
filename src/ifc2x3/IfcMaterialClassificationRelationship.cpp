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
#include <ifc2x3/IfcMaterialClassificationRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_materialClassifications.setUnset(true);
  m_classifiedMaterial = NULL;
}


IfcMaterialClassificationRelationship::~IfcMaterialClassificationRelationship() {
}

bool IfcMaterialClassificationRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialClassificationRelationship(this);
}

const char *IfcMaterialClassificationRelationship::type() {
  return "IfcMaterialClassificationRelationship";
}

Step::ClassType IfcMaterialClassificationRelationship::getClassType() {
  return IfcMaterialClassificationRelationship::s_type;
}

Step::ClassType IfcMaterialClassificationRelationship::getType() const {
  return IfcMaterialClassificationRelationship::s_type;
}

bool IfcMaterialClassificationRelationship::isOfType(Step::ClassType t) {
  return IfcMaterialClassificationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcClassificationNotationSelect > > &IfcMaterialClassificationRelationship::getMaterialClassifications() {
  if (Step::BaseObject::inited()) {
    return m_materialClassifications;
  }
  else {
    m_materialClassifications.setUnset(true);
    return m_materialClassifications;
  }
}

void IfcMaterialClassificationRelationship::setMaterialClassifications(const Step::StepSet< Step::RefPtr< IfcClassificationNotationSelect > > &value) {
  m_materialClassifications = value;
}

IfcMaterial *IfcMaterialClassificationRelationship::getClassifiedMaterial() {
  if (Step::BaseObject::inited()) {
    return m_classifiedMaterial.get();
  }
  else {
    return NULL;
  }
}

void IfcMaterialClassificationRelationship::setClassifiedMaterial(const Step::RefPtr< IfcMaterial > &value) {
  m_classifiedMaterial = value;
}

void IfcMaterialClassificationRelationship::release() {
  m_materialClassifications.clear();
  m_classifiedMaterial.release();
}

bool IfcMaterialClassificationRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_materialClassifications.setUnset(true);
  }
  else {
    m_materialClassifications.setUnset(false);
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
        m_materialClassifications.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_classifiedMaterial = NULL;
  }
  else {
    m_classifiedMaterial = static_cast< IfcMaterial * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialClassificationRelationship::s_type = new Step::ClassType_class("IfcMaterialClassificationRelationship");
IfcMaterialClassificationRelationship_Factory::IfcMaterialClassificationRelationship_Factory() {
}

IfcMaterialClassificationRelationship_Factory::~IfcMaterialClassificationRelationship_Factory() {
  clear(true);
}

void IfcMaterialClassificationRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialClassificationRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialClassificationRelationship_Factory::end() {
  return m_idMap.end();
}

IfcMaterialClassificationRelationship *IfcMaterialClassificationRelationship_Factory::get(Step::StepId id) {
  IfcMaterialClassificationRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterialClassificationRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterialClassificationRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterialClassificationRelationship * > (create(id));
  }
}

Step::BaseObject *IfcMaterialClassificationRelationship_Factory::create(Step::StepId id) {
  IfcMaterialClassificationRelationship *ret = new IfcMaterialClassificationRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialClassificationRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterialClassificationRelationship *ret = new IfcMaterialClassificationRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialClassificationRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterialClassificationRelationship *ret = new IfcMaterialClassificationRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterialClassificationRelationship *IfcMaterialClassificationRelationship_Factory::generate() {
  return static_cast< IfcMaterialClassificationRelationship * > (create(m_model->getNewId()));
}

IfcMaterialClassificationRelationship *IfcMaterialClassificationRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterialClassificationRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

