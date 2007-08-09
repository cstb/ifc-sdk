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
#include <ifc2x3/IfcBuilding.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPostalAddress.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBuilding::IfcBuilding(Step::SPFData *args) : IfcSpatialStructureElement(args) {
  m_elevationOfRefHeight = getUnset(m_elevationOfRefHeight);
  m_elevationOfTerrain = getUnset(m_elevationOfTerrain);
  m_buildingAddress = NULL;
}


IfcBuilding::~IfcBuilding() {
}

bool IfcBuilding::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBuilding(this);
}

const char *IfcBuilding::type() {
  return "IfcBuilding";
}

Step::ClassType IfcBuilding::getClassType() {
  return IfcBuilding::s_type;
}

Step::ClassType IfcBuilding::getType() const {
  return IfcBuilding::s_type;
}

bool IfcBuilding::isOfType(Step::ClassType t) {
  return IfcBuilding::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcLengthMeasure IfcBuilding::getElevationOfRefHeight() {
  if (Step::BaseObject::inited()) {
    return m_elevationOfRefHeight;
  }
  else {
    return getUnset(m_elevationOfRefHeight);
  }
}

void IfcBuilding::setElevationOfRefHeight(IfcLengthMeasure value) {
  m_elevationOfRefHeight = value;
}

IfcLengthMeasure IfcBuilding::getElevationOfTerrain() {
  if (Step::BaseObject::inited()) {
    return m_elevationOfTerrain;
  }
  else {
    return getUnset(m_elevationOfTerrain);
  }
}

void IfcBuilding::setElevationOfTerrain(IfcLengthMeasure value) {
  m_elevationOfTerrain = value;
}

IfcPostalAddress *IfcBuilding::getBuildingAddress() {
  if (Step::BaseObject::inited()) {
    return m_buildingAddress.get();
  }
  else {
    return NULL;
  }
}

void IfcBuilding::setBuildingAddress(const Step::RefPtr< IfcPostalAddress > &value) {
  m_buildingAddress = value;
}

void IfcBuilding::release() {
  IfcSpatialStructureElement::release();
  m_buildingAddress.release();
}

bool IfcBuilding::init() {
  bool status = IfcSpatialStructureElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elevationOfRefHeight = getUnset(m_elevationOfRefHeight);
  }
  else {
    m_elevationOfRefHeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elevationOfTerrain = getUnset(m_elevationOfTerrain);
  }
  else {
    m_elevationOfTerrain = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_buildingAddress = NULL;
  }
  else {
    m_buildingAddress = static_cast< IfcPostalAddress * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuilding::s_type = new Step::ClassType_class("IfcBuilding");
IfcBuilding_Factory::IfcBuilding_Factory() {
}

IfcBuilding_Factory::~IfcBuilding_Factory() {
  clear(true);
}

void IfcBuilding_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuilding_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuilding_Factory::end() {
  return m_idMap.end();
}

IfcBuilding *IfcBuilding_Factory::get(Step::StepId id) {
  IfcBuilding *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBuilding * > (it->second);
  }
  else {
    LOG_ERROR("IfcBuilding_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBuilding * > (create(id));
  }
}

Step::BaseObject *IfcBuilding_Factory::create(Step::StepId id) {
  IfcBuilding *ret = new IfcBuilding(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBuilding_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBuilding *ret = new IfcBuilding(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBuilding_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBuilding *ret = new IfcBuilding(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBuilding *IfcBuilding_Factory::generate() {
  return static_cast< IfcBuilding * > (create(m_model->getNewId()));
}

IfcBuilding *IfcBuilding_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBuilding * > (it->second);
  }
  else {
    return NULL;
  }
}

