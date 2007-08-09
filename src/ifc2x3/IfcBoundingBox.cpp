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
#include <ifc2x3/IfcBoundingBox.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoundingBox::IfcBoundingBox(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_corner = NULL;
  m_xDim = getUnset(m_xDim);
  m_yDim = getUnset(m_yDim);
  m_zDim = getUnset(m_zDim);
}


IfcBoundingBox::~IfcBoundingBox() {
}

bool IfcBoundingBox::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoundingBox(this);
}

const char *IfcBoundingBox::type() {
  return "IfcBoundingBox";
}

Step::ClassType IfcBoundingBox::getClassType() {
  return IfcBoundingBox::s_type;
}

Step::ClassType IfcBoundingBox::getType() const {
  return IfcBoundingBox::s_type;
}

bool IfcBoundingBox::isOfType(Step::ClassType t) {
  return IfcBoundingBox::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCartesianPoint *IfcBoundingBox::getCorner() {
  if (Step::BaseObject::inited()) {
    return m_corner.get();
  }
  else {
    return NULL;
  }
}

void IfcBoundingBox::setCorner(const Step::RefPtr< IfcCartesianPoint > &value) {
  m_corner = value;
}

IfcPositiveLengthMeasure IfcBoundingBox::getXDim() {
  if (Step::BaseObject::inited()) {
    return m_xDim;
  }
  else {
    return getUnset(m_xDim);
  }
}

void IfcBoundingBox::setXDim(IfcPositiveLengthMeasure value) {
  m_xDim = value;
}

IfcPositiveLengthMeasure IfcBoundingBox::getYDim() {
  if (Step::BaseObject::inited()) {
    return m_yDim;
  }
  else {
    return getUnset(m_yDim);
  }
}

void IfcBoundingBox::setYDim(IfcPositiveLengthMeasure value) {
  m_yDim = value;
}

IfcPositiveLengthMeasure IfcBoundingBox::getZDim() {
  if (Step::BaseObject::inited()) {
    return m_zDim;
  }
  else {
    return getUnset(m_zDim);
  }
}

void IfcBoundingBox::setZDim(IfcPositiveLengthMeasure value) {
  m_zDim = value;
}

void IfcBoundingBox::release() {
  IfcGeometricRepresentationItem::release();
  m_corner.release();
}

bool IfcBoundingBox::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_corner = NULL;
  }
  else {
    m_corner = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_xDim = getUnset(m_xDim);
  }
  else {
    m_xDim = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yDim = getUnset(m_yDim);
  }
  else {
    m_yDim = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_zDim = getUnset(m_zDim);
  }
  else {
    m_zDim = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundingBox::s_type = new Step::ClassType_class("IfcBoundingBox");
IfcBoundingBox_Factory::IfcBoundingBox_Factory() {
}

IfcBoundingBox_Factory::~IfcBoundingBox_Factory() {
  clear(true);
}

void IfcBoundingBox_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundingBox_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundingBox_Factory::end() {
  return m_idMap.end();
}

IfcBoundingBox *IfcBoundingBox_Factory::get(Step::StepId id) {
  IfcBoundingBox *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoundingBox * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoundingBox_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoundingBox * > (create(id));
  }
}

Step::BaseObject *IfcBoundingBox_Factory::create(Step::StepId id) {
  IfcBoundingBox *ret = new IfcBoundingBox(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoundingBox_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoundingBox *ret = new IfcBoundingBox(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoundingBox_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoundingBox *ret = new IfcBoundingBox(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoundingBox *IfcBoundingBox_Factory::generate() {
  return static_cast< IfcBoundingBox * > (create(m_model->getNewId()));
}

IfcBoundingBox *IfcBoundingBox_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoundingBox * > (it->second);
  }
  else {
    return NULL;
  }
}

