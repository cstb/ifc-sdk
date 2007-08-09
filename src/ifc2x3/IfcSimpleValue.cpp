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
#include <ifc2x3/IfcSimpleValue.h>

#include <Step/BaseObject.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcSimpleValue::IfcSimpleValue() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcSimpleValue::IfcSimpleValue(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcSimpleValue::~IfcSimpleValue() {
  deleteUnion();
}

bool IfcSimpleValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSimpleValue(this);
}

bool IfcSimpleValue::init() {
  return false;
}

const char *IfcSimpleValue::type() {
  return "IfcSimpleValue";
}

Step::ClassType IfcSimpleValue::getClassType() {
  return IfcSimpleValue::s_type;
}

Step::ClassType IfcSimpleValue::getType() const {
  return IfcSimpleValue::s_type;
}

bool IfcSimpleValue::isOfType(Step::ClassType t) {
  return IfcSimpleValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcSimpleValue::currentTypeName() {
  switch(m_type) {
  case IFCINTEGER:
    return "IfcInteger";
    break;
  case IFCREAL:
    return "IfcReal";
    break;
  case IFCBOOLEAN:
    return "IfcBoolean";
    break;
  case IFCIDENTIFIER:
    return "IfcIdentifier";
    break;
  case IFCTEXT:
    return "IfcText";
    break;
  case IFCLABEL:
    return "IfcLabel";
    break;
  case IFCLOGICAL:
    return "IfcLogical";
    break;
  default:
    return "UNSET";
  }
}

IfcSimpleValue::IfcSimpleValue_select IfcSimpleValue::currentType() {
  return m_type;
}

void IfcSimpleValue::deleteUnion() {
  switch(m_type) {
  case IFCIDENTIFIER:
    delete m_IfcSimpleValue_union.m_IfcIdentifier;
    break;
  case IFCTEXT:
    delete m_IfcSimpleValue_union.m_IfcText;
    break;
  case IFCLABEL:
    delete m_IfcSimpleValue_union.m_IfcLabel;
    break;
    }
  m_type = UNSET;
}

IfcInteger IfcSimpleValue::getIfcInteger() {
  return m_IfcSimpleValue_union.m_IfcInteger;
}

void IfcSimpleValue::setIfcInteger(IfcInteger value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcInteger = value;
  m_type = IFCINTEGER;
}

IfcReal IfcSimpleValue::getIfcReal() {
  return m_IfcSimpleValue_union.m_IfcReal;
}

void IfcSimpleValue::setIfcReal(IfcReal value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcReal = value;
  m_type = IFCREAL;
}

IfcBoolean IfcSimpleValue::getIfcBoolean() {
  return m_IfcSimpleValue_union.m_IfcBoolean;
}

void IfcSimpleValue::setIfcBoolean(IfcBoolean value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcBoolean = value;
  m_type = IFCBOOLEAN;
}

IfcIdentifier IfcSimpleValue::getIfcIdentifier() {
  return *m_IfcSimpleValue_union.m_IfcIdentifier;
}

void IfcSimpleValue::setIfcIdentifier(const IfcIdentifier &value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcIdentifier = new IfcIdentifier(value);
  m_type = IFCIDENTIFIER;
}

IfcText IfcSimpleValue::getIfcText() {
  return *m_IfcSimpleValue_union.m_IfcText;
}

void IfcSimpleValue::setIfcText(const IfcText &value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcText = new IfcText(value);
  m_type = IFCTEXT;
}

IfcLabel IfcSimpleValue::getIfcLabel() {
  return *m_IfcSimpleValue_union.m_IfcLabel;
}

void IfcSimpleValue::setIfcLabel(const IfcLabel &value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcLabel = new IfcLabel(value);
  m_type = IFCLABEL;
}

IfcLogical IfcSimpleValue::getIfcLogical() {
  return m_IfcSimpleValue_union.m_IfcLogical;
}

void IfcSimpleValue::setIfcLogical(IfcLogical value) {
  deleteUnion();
  m_IfcSimpleValue_union.m_IfcLogical = value;
  m_type = IFCLOGICAL;
}

void IfcSimpleValue::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcSimpleValue::s_type = new Step::ClassType_class("IfcSimpleValue");
