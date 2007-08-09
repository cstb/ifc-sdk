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
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelReferencedInSpatialStructure::IfcRelReferencedInSpatialStructure(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatedElements.setUnset(true);
  m_relatingStructure = NULL;
}


IfcRelReferencedInSpatialStructure::~IfcRelReferencedInSpatialStructure() {
}

bool IfcRelReferencedInSpatialStructure::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelReferencedInSpatialStructure(this);
}

const char *IfcRelReferencedInSpatialStructure::type() {
  return "IfcRelReferencedInSpatialStructure";
}

Step::ClassType IfcRelReferencedInSpatialStructure::getClassType() {
  return IfcRelReferencedInSpatialStructure::s_type;
}

Step::ClassType IfcRelReferencedInSpatialStructure::getType() const {
  return IfcRelReferencedInSpatialStructure::s_type;
}

bool IfcRelReferencedInSpatialStructure::isOfType(Step::ClassType t) {
  return IfcRelReferencedInSpatialStructure::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProduct > > &IfcRelReferencedInSpatialStructure::getRelatedElements() {
  if (Step::BaseObject::inited()) {
    return m_relatedElements;
  }
  else {
    m_relatedElements.setUnset(true);
    return m_relatedElements;
  }
}

void IfcRelReferencedInSpatialStructure::setRelatedElements(const Step::StepSet< Step::RefPtr< IfcProduct > > &value) {
  m_relatedElements = value;
}

IfcSpatialStructureElement *IfcRelReferencedInSpatialStructure::getRelatingStructure() {
  if (Step::BaseObject::inited()) {
    return m_relatingStructure.get();
  }
  else {
    return NULL;
  }
}

void IfcRelReferencedInSpatialStructure::setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value) {
  m_relatingStructure = value;
}

void IfcRelReferencedInSpatialStructure::release() {
  IfcRelConnects::release();
  m_relatedElements.clear();
  m_relatingStructure.release();
}

bool IfcRelReferencedInSpatialStructure::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedElements.setUnset(true);
  }
  else {
    m_relatedElements.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProduct > attr2;
        attr2 = static_cast< IfcProduct * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedElements.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingStructure = NULL;
  }
  else {
    m_relatingStructure = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelReferencedInSpatialStructure::s_type = new Step::ClassType_class("IfcRelReferencedInSpatialStructure");
IfcRelReferencedInSpatialStructure_Factory::IfcRelReferencedInSpatialStructure_Factory() {
}

IfcRelReferencedInSpatialStructure_Factory::~IfcRelReferencedInSpatialStructure_Factory() {
  clear(true);
}

void IfcRelReferencedInSpatialStructure_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelReferencedInSpatialStructure_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelReferencedInSpatialStructure_Factory::end() {
  return m_idMap.end();
}

IfcRelReferencedInSpatialStructure *IfcRelReferencedInSpatialStructure_Factory::get(Step::StepId id) {
  IfcRelReferencedInSpatialStructure *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelReferencedInSpatialStructure * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelReferencedInSpatialStructure_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelReferencedInSpatialStructure * > (create(id));
  }
}

Step::BaseObject *IfcRelReferencedInSpatialStructure_Factory::create(Step::StepId id) {
  IfcRelReferencedInSpatialStructure *ret = new IfcRelReferencedInSpatialStructure(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelReferencedInSpatialStructure_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelReferencedInSpatialStructure *ret = new IfcRelReferencedInSpatialStructure(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelReferencedInSpatialStructure_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelReferencedInSpatialStructure *ret = new IfcRelReferencedInSpatialStructure(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelReferencedInSpatialStructure *IfcRelReferencedInSpatialStructure_Factory::generate() {
  return static_cast< IfcRelReferencedInSpatialStructure * > (create(m_model->getNewId()));
}

IfcRelReferencedInSpatialStructure *IfcRelReferencedInSpatialStructure_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelReferencedInSpatialStructure * > (it->second);
  }
  else {
    return NULL;
  }
}

