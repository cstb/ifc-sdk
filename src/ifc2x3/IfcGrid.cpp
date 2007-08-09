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
#include <ifc2x3/IfcGrid.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGrid::IfcGrid(Step::SPFData *args) : IfcProduct(args) {
  m_uAxes.setUnset(true);
  m_vAxes.setUnset(true);
  m_wAxes.setUnset(true);
  m_containedInStructure.setUnset(true);
}


IfcGrid::~IfcGrid() {
}

bool IfcGrid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGrid(this);
}

const char *IfcGrid::type() {
  return "IfcGrid";
}

Step::ClassType IfcGrid::getClassType() {
  return IfcGrid::s_type;
}

Step::ClassType IfcGrid::getType() const {
  return IfcGrid::s_type;
}

bool IfcGrid::isOfType(Step::ClassType t) {
  return IfcGrid::s_type == t ? true : IfcProduct::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcGridAxis > > &IfcGrid::getUAxes() {
  if (Step::BaseObject::inited()) {
    return m_uAxes;
  }
  else {
    m_uAxes.setUnset(true);
    return m_uAxes;
  }
}

void IfcGrid::setUAxes(const Step::StepList< Step::RefPtr< IfcGridAxis > > &value) {
  m_uAxes = value;
}

Step::StepList< Step::RefPtr< IfcGridAxis > > &IfcGrid::getVAxes() {
  if (Step::BaseObject::inited()) {
    return m_vAxes;
  }
  else {
    m_vAxes.setUnset(true);
    return m_vAxes;
  }
}

void IfcGrid::setVAxes(const Step::StepList< Step::RefPtr< IfcGridAxis > > &value) {
  m_vAxes = value;
}

Step::StepList< Step::RefPtr< IfcGridAxis > > &IfcGrid::getWAxes() {
  if (Step::BaseObject::inited()) {
    return m_wAxes;
  }
  else {
    m_wAxes.setUnset(true);
    return m_wAxes;
  }
}

void IfcGrid::setWAxes(const Step::StepList< Step::RefPtr< IfcGridAxis > > &value) {
  m_wAxes = value;
}

Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &IfcGrid::getContainedInStructure() {
  if (Step::BaseObject::inited()) {
    return m_containedInStructure;
  }
  else {
    m_containedInStructure.setUnset(true);
    return m_containedInStructure;
  }
}

void IfcGrid::setContainedInStructure(const Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &value) {
  m_containedInStructure = value;
}

void IfcGrid::release() {
  IfcProduct::release();
  m_uAxes.clear();
  m_vAxes.clear();
  m_wAxes.clear();
}

bool IfcGrid::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_uAxes.setUnset(true);
  }
  else {
    m_uAxes.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcGridAxis > attr2;
        attr2 = static_cast< IfcGridAxis * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_uAxes.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_vAxes.setUnset(true);
  }
  else {
    m_vAxes.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcGridAxis > attr2;
        attr2 = static_cast< IfcGridAxis * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_vAxes.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_wAxes.setUnset(true);
  }
  else {
    m_wAxes.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcGridAxis > attr2;
        attr2 = static_cast< IfcGridAxis * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_wAxes.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_containedInStructure.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGrid::s_type = new Step::ClassType_class("IfcGrid");
IfcGrid_Factory::IfcGrid_Factory() {
}

IfcGrid_Factory::~IfcGrid_Factory() {
  clear(true);
}

void IfcGrid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGrid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGrid_Factory::end() {
  return m_idMap.end();
}

IfcGrid *IfcGrid_Factory::get(Step::StepId id) {
  IfcGrid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGrid * > (it->second);
  }
  else {
    LOG_ERROR("IfcGrid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGrid * > (create(id));
  }
}

Step::BaseObject *IfcGrid_Factory::create(Step::StepId id) {
  IfcGrid *ret = new IfcGrid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGrid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGrid *ret = new IfcGrid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGrid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGrid *ret = new IfcGrid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGrid *IfcGrid_Factory::generate() {
  return static_cast< IfcGrid * > (create(m_model->getNewId()));
}

IfcGrid *IfcGrid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGrid * > (it->second);
  }
  else {
    return NULL;
  }
}

