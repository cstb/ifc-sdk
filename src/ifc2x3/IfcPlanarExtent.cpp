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
#include <ifc2x3/IfcPlanarExtent.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPlanarExtent::IfcPlanarExtent(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_sizeInX = getUnset(m_sizeInX);
  m_sizeInY = getUnset(m_sizeInY);
}


IfcPlanarExtent::~IfcPlanarExtent() {
}

bool IfcPlanarExtent::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPlanarExtent(this);
}

const char *IfcPlanarExtent::type() {
  return "IfcPlanarExtent";
}

Step::ClassType IfcPlanarExtent::getClassType() {
  return IfcPlanarExtent::s_type;
}

Step::ClassType IfcPlanarExtent::getType() const {
  return IfcPlanarExtent::s_type;
}

bool IfcPlanarExtent::isOfType(Step::ClassType t) {
  return IfcPlanarExtent::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcLengthMeasure IfcPlanarExtent::getSizeInX() {
  if (Step::BaseObject::inited()) {
    return m_sizeInX;
  }
  else {
    return getUnset(m_sizeInX);
  }
}

void IfcPlanarExtent::setSizeInX(IfcLengthMeasure value) {
  m_sizeInX = value;
}

IfcLengthMeasure IfcPlanarExtent::getSizeInY() {
  if (Step::BaseObject::inited()) {
    return m_sizeInY;
  }
  else {
    return getUnset(m_sizeInY);
  }
}

void IfcPlanarExtent::setSizeInY(IfcLengthMeasure value) {
  m_sizeInY = value;
}

void IfcPlanarExtent::release() {
  IfcGeometricRepresentationItem::release();
}

bool IfcPlanarExtent::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sizeInX = getUnset(m_sizeInX);
  }
  else {
    m_sizeInX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sizeInY = getUnset(m_sizeInY);
  }
  else {
    m_sizeInY = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlanarExtent::s_type = new Step::ClassType_class("IfcPlanarExtent");
IfcPlanarExtent_Factory::IfcPlanarExtent_Factory() {
}

IfcPlanarExtent_Factory::~IfcPlanarExtent_Factory() {
  clear(true);
}

void IfcPlanarExtent_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPlanarExtent_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPlanarExtent_Factory::end() {
  return m_idMap.end();
}

IfcPlanarExtent *IfcPlanarExtent_Factory::get(Step::StepId id) {
  IfcPlanarExtent *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPlanarExtent * > (it->second);
  }
  else {
    LOG_ERROR("IfcPlanarExtent_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPlanarExtent * > (create(id));
  }
}

Step::BaseObject *IfcPlanarExtent_Factory::create(Step::StepId id) {
  IfcPlanarExtent *ret = new IfcPlanarExtent(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPlanarExtent_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPlanarExtent *ret = new IfcPlanarExtent(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPlanarExtent_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPlanarExtent *ret = new IfcPlanarExtent(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPlanarExtent *IfcPlanarExtent_Factory::generate() {
  return static_cast< IfcPlanarExtent * > (create(m_model->getNewId()));
}

IfcPlanarExtent *IfcPlanarExtent_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPlanarExtent * > (it->second);
  }
  else {
    return NULL;
  }
}

