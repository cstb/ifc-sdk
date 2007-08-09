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
#include <ifc2x3/IfcCartesianTransformationOperator.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcCartesianTransformationOperator::IfcCartesianTransformationOperator(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_axis1 = NULL;
  m_axis2 = NULL;
  m_localOrigin = NULL;
  m_scale = getUnset(m_scale);
}


IfcCartesianTransformationOperator::~IfcCartesianTransformationOperator() {
}

bool IfcCartesianTransformationOperator::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator(this);
}

const char *IfcCartesianTransformationOperator::type() {
  return "IfcCartesianTransformationOperator";
}

Step::ClassType IfcCartesianTransformationOperator::getClassType() {
  return IfcCartesianTransformationOperator::s_type;
}

Step::ClassType IfcCartesianTransformationOperator::getType() const {
  return IfcCartesianTransformationOperator::s_type;
}

bool IfcCartesianTransformationOperator::isOfType(Step::ClassType t) {
  return IfcCartesianTransformationOperator::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDirection *IfcCartesianTransformationOperator::getAxis1() {
  if (Step::BaseObject::inited()) {
    return m_axis1.get();
  }
  else {
    return NULL;
  }
}

void IfcCartesianTransformationOperator::setAxis1(const Step::RefPtr< IfcDirection > &value) {
  m_axis1 = value;
}

IfcDirection *IfcCartesianTransformationOperator::getAxis2() {
  if (Step::BaseObject::inited()) {
    return m_axis2.get();
  }
  else {
    return NULL;
  }
}

void IfcCartesianTransformationOperator::setAxis2(const Step::RefPtr< IfcDirection > &value) {
  m_axis2 = value;
}

IfcCartesianPoint *IfcCartesianTransformationOperator::getLocalOrigin() {
  if (Step::BaseObject::inited()) {
    return m_localOrigin.get();
  }
  else {
    return NULL;
  }
}

void IfcCartesianTransformationOperator::setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value) {
  m_localOrigin = value;
}

Real IfcCartesianTransformationOperator::getScale() {
  if (Step::BaseObject::inited()) {
    return m_scale;
  }
  else {
    return getUnset(m_scale);
  }
}

void IfcCartesianTransformationOperator::setScale(Real value) {
  m_scale = value;
}

void IfcCartesianTransformationOperator::release() {
  IfcGeometricRepresentationItem::release();
  m_axis1.release();
  m_axis2.release();
  m_localOrigin.release();
}

bool IfcCartesianTransformationOperator::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axis1 = NULL;
  }
  else {
    m_axis1 = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axis2 = NULL;
  }
  else {
    m_axis2 = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_localOrigin = NULL;
  }
  else {
    m_localOrigin = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_scale = getUnset(m_scale);
  }
  else {
    m_scale = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator::s_type = new Step::ClassType_class("IfcCartesianTransformationOperator");
