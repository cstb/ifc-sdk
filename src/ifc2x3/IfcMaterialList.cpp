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
#include <ifc2x3/IfcMaterialList.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMaterialList::IfcMaterialList(Step::SPFData *args) : Step::BaseObject(args) {
  m_materials.setUnset(true);
}


IfcMaterialList::~IfcMaterialList() {
}

bool IfcMaterialList::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialList(this);
}

const char *IfcMaterialList::type() {
  return "IfcMaterialList";
}

Step::ClassType IfcMaterialList::getClassType() {
  return IfcMaterialList::s_type;
}

Step::ClassType IfcMaterialList::getType() const {
  return IfcMaterialList::s_type;
}

bool IfcMaterialList::isOfType(Step::ClassType t) {
  return IfcMaterialList::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcMaterial > > &IfcMaterialList::getMaterials() {
  if (Step::BaseObject::inited()) {
    return m_materials;
  }
  else {
    m_materials.setUnset(true);
    return m_materials;
  }
}

void IfcMaterialList::setMaterials(const Step::StepList< Step::RefPtr< IfcMaterial > > &value) {
  m_materials = value;
}

void IfcMaterialList::release() {
  m_materials.clear();
}

bool IfcMaterialList::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_materials.setUnset(true);
  }
  else {
    m_materials.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcMaterial > attr2;
        attr2 = static_cast< IfcMaterial * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_materials.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialList::s_type = new Step::ClassType_class("IfcMaterialList");
IfcMaterialList_Factory::IfcMaterialList_Factory() {
}

IfcMaterialList_Factory::~IfcMaterialList_Factory() {
  clear(true);
}

void IfcMaterialList_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialList_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMaterialList_Factory::end() {
  return m_idMap.end();
}

IfcMaterialList *IfcMaterialList_Factory::get(Step::StepId id) {
  IfcMaterialList *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMaterialList * > (it->second);
  }
  else {
    LOG_ERROR("IfcMaterialList_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMaterialList * > (create(id));
  }
}

Step::BaseObject *IfcMaterialList_Factory::create(Step::StepId id) {
  IfcMaterialList *ret = new IfcMaterialList(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialList_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMaterialList *ret = new IfcMaterialList(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMaterialList_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMaterialList *ret = new IfcMaterialList(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMaterialList *IfcMaterialList_Factory::generate() {
  return static_cast< IfcMaterialList * > (create(m_model->getNewId()));
}

IfcMaterialList *IfcMaterialList_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMaterialList * > (it->second);
  }
  else {
    return NULL;
  }
}

