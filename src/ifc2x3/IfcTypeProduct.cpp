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
#include <ifc2x3/IfcTypeProduct.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTypeProduct::IfcTypeProduct(Step::SPFData *args) : IfcTypeObject(args) {
  m_representationMaps.setUnset(true);
  m_tag = getUnset(m_tag);
}


IfcTypeProduct::~IfcTypeProduct() {
}

bool IfcTypeProduct::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTypeProduct(this);
}

const char *IfcTypeProduct::type() {
  return "IfcTypeProduct";
}

Step::ClassType IfcTypeProduct::getClassType() {
  return IfcTypeProduct::s_type;
}

Step::ClassType IfcTypeProduct::getType() const {
  return IfcTypeProduct::s_type;
}

bool IfcTypeProduct::isOfType(Step::ClassType t) {
  return IfcTypeProduct::s_type == t ? true : IfcTypeObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcRepresentationMap > > &IfcTypeProduct::getRepresentationMaps() {
  if (Step::BaseObject::inited()) {
    return m_representationMaps;
  }
  else {
    m_representationMaps.setUnset(true);
    return m_representationMaps;
  }
}

void IfcTypeProduct::setRepresentationMaps(const Step::StepList< Step::RefPtr< IfcRepresentationMap > > &value) {
  m_representationMaps = value;
}

IfcLabel IfcTypeProduct::getTag() {
  if (Step::BaseObject::inited()) {
    return m_tag;
  }
  else {
    return getUnset(m_tag);
  }
}

void IfcTypeProduct::setTag(const IfcLabel &value) {
  m_tag = value;
}

void IfcTypeProduct::release() {
  IfcTypeObject::release();
  m_representationMaps.clear();
}

bool IfcTypeProduct::init() {
  bool status = IfcTypeObject::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_representationMaps.setUnset(true);
  }
  else {
    m_representationMaps.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRepresentationMap > attr2;
        attr2 = static_cast< IfcRepresentationMap * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_representationMaps.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tag = getUnset(m_tag);
  }
  else {
    m_tag = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTypeProduct::s_type = new Step::ClassType_class("IfcTypeProduct");
IfcTypeProduct_Factory::IfcTypeProduct_Factory() {
}

IfcTypeProduct_Factory::~IfcTypeProduct_Factory() {
  clear(true);
}

void IfcTypeProduct_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTypeProduct_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTypeProduct_Factory::end() {
  return m_idMap.end();
}

IfcTypeProduct *IfcTypeProduct_Factory::get(Step::StepId id) {
  IfcTypeProduct *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTypeProduct * > (it->second);
  }
  else {
    LOG_ERROR("IfcTypeProduct_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTypeProduct * > (create(id));
  }
}

Step::BaseObject *IfcTypeProduct_Factory::create(Step::StepId id) {
  IfcTypeProduct *ret = new IfcTypeProduct(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTypeProduct_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTypeProduct *ret = new IfcTypeProduct(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTypeProduct_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTypeProduct *ret = new IfcTypeProduct(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTypeProduct *IfcTypeProduct_Factory::generate() {
  return static_cast< IfcTypeProduct * > (create(m_model->getNewId()));
}

IfcTypeProduct *IfcTypeProduct_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTypeProduct * > (it->second);
  }
  else {
    return NULL;
  }
}

