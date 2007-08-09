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
#include <ifc2x3/IfcConstructionMaterialResource.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConstructionMaterialResource::IfcConstructionMaterialResource(Step::SPFData *args) : IfcConstructionResource(args) {
  m_suppliers.setUnset(true);
  m_usageRatio = getUnset(m_usageRatio);
}


IfcConstructionMaterialResource::~IfcConstructionMaterialResource() {
}

bool IfcConstructionMaterialResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstructionMaterialResource(this);
}

const char *IfcConstructionMaterialResource::type() {
  return "IfcConstructionMaterialResource";
}

Step::ClassType IfcConstructionMaterialResource::getClassType() {
  return IfcConstructionMaterialResource::s_type;
}

Step::ClassType IfcConstructionMaterialResource::getType() const {
  return IfcConstructionMaterialResource::s_type;
}

bool IfcConstructionMaterialResource::isOfType(Step::ClassType t) {
  return IfcConstructionMaterialResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcActorSelect > > &IfcConstructionMaterialResource::getSuppliers() {
  if (Step::BaseObject::inited()) {
    return m_suppliers;
  }
  else {
    m_suppliers.setUnset(true);
    return m_suppliers;
  }
}

void IfcConstructionMaterialResource::setSuppliers(const Step::StepSet< Step::RefPtr< IfcActorSelect > > &value) {
  m_suppliers = value;
}

IfcRatioMeasure IfcConstructionMaterialResource::getUsageRatio() {
  if (Step::BaseObject::inited()) {
    return m_usageRatio;
  }
  else {
    return getUnset(m_usageRatio);
  }
}

void IfcConstructionMaterialResource::setUsageRatio(IfcRatioMeasure value) {
  m_usageRatio = value;
}

void IfcConstructionMaterialResource::release() {
  IfcConstructionResource::release();
  m_suppliers.clear();
}

bool IfcConstructionMaterialResource::init() {
  bool status = IfcConstructionResource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_suppliers.setUnset(true);
  }
  else {
    m_suppliers.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcActorSelect > attr2;
        attr2 = new IfcActorSelect;
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
        m_suppliers.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_usageRatio = getUnset(m_usageRatio);
  }
  else {
    m_usageRatio = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionMaterialResource::s_type = new Step::ClassType_class("IfcConstructionMaterialResource");
IfcConstructionMaterialResource_Factory::IfcConstructionMaterialResource_Factory() {
}

IfcConstructionMaterialResource_Factory::~IfcConstructionMaterialResource_Factory() {
  clear(true);
}

void IfcConstructionMaterialResource_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstructionMaterialResource_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstructionMaterialResource_Factory::end() {
  return m_idMap.end();
}

IfcConstructionMaterialResource *IfcConstructionMaterialResource_Factory::get(Step::StepId id) {
  IfcConstructionMaterialResource *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConstructionMaterialResource * > (it->second);
  }
  else {
    LOG_ERROR("IfcConstructionMaterialResource_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConstructionMaterialResource * > (create(id));
  }
}

Step::BaseObject *IfcConstructionMaterialResource_Factory::create(Step::StepId id) {
  IfcConstructionMaterialResource *ret = new IfcConstructionMaterialResource(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConstructionMaterialResource_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConstructionMaterialResource *ret = new IfcConstructionMaterialResource(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConstructionMaterialResource_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConstructionMaterialResource *ret = new IfcConstructionMaterialResource(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConstructionMaterialResource *IfcConstructionMaterialResource_Factory::generate() {
  return static_cast< IfcConstructionMaterialResource * > (create(m_model->getNewId()));
}

IfcConstructionMaterialResource *IfcConstructionMaterialResource_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConstructionMaterialResource * > (it->second);
  }
  else {
    return NULL;
  }
}

