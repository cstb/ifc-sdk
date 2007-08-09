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
#include <ifc2x3/IfcSizeSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcSizeSelect::IfcSizeSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcSizeSelect::IfcSizeSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcSizeSelect::~IfcSizeSelect() {
  deleteUnion();
}

bool IfcSizeSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSizeSelect(this);
}

bool IfcSizeSelect::init() {
  return false;
}

const char *IfcSizeSelect::type() {
  return "IfcSizeSelect";
}

Step::ClassType IfcSizeSelect::getClassType() {
  return IfcSizeSelect::s_type;
}

Step::ClassType IfcSizeSelect::getType() const {
  return IfcSizeSelect::s_type;
}

bool IfcSizeSelect::isOfType(Step::ClassType t) {
  return IfcSizeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcSizeSelect::currentTypeName() {
  switch(m_type) {
  case IFCRATIOMEASURE:
    return "IfcRatioMeasure";
    break;
  case IFCLENGTHMEASURE:
    return "IfcLengthMeasure";
    break;
  case IFCDESCRIPTIVEMEASURE:
    return "IfcDescriptiveMeasure";
    break;
  case IFCPOSITIVELENGTHMEASURE:
    return "IfcPositiveLengthMeasure";
    break;
  case IFCNORMALISEDRATIOMEASURE:
    return "IfcNormalisedRatioMeasure";
    break;
  case IFCPOSITIVERATIOMEASURE:
    return "IfcPositiveRatioMeasure";
    break;
  default:
    return "UNSET";
  }
}

IfcSizeSelect::IfcSizeSelect_select IfcSizeSelect::currentType() {
  return m_type;
}

void IfcSizeSelect::deleteUnion() {
  switch(m_type) {
  case IFCDESCRIPTIVEMEASURE:
    delete m_IfcSizeSelect_union.m_IfcDescriptiveMeasure;
    break;
    }
  m_type = UNSET;
}

IfcRatioMeasure IfcSizeSelect::getIfcRatioMeasure() {
  return m_IfcSizeSelect_union.m_IfcRatioMeasure;
}

void IfcSizeSelect::setIfcRatioMeasure(IfcRatioMeasure value) {
  deleteUnion();
  m_IfcSizeSelect_union.m_IfcRatioMeasure = value;
  m_type = IFCRATIOMEASURE;
}

IfcLengthMeasure IfcSizeSelect::getIfcLengthMeasure() {
  return m_IfcSizeSelect_union.m_IfcLengthMeasure;
}

void IfcSizeSelect::setIfcLengthMeasure(IfcLengthMeasure value) {
  deleteUnion();
  m_IfcSizeSelect_union.m_IfcLengthMeasure = value;
  m_type = IFCLENGTHMEASURE;
}

IfcDescriptiveMeasure IfcSizeSelect::getIfcDescriptiveMeasure() {
  return *m_IfcSizeSelect_union.m_IfcDescriptiveMeasure;
}

void IfcSizeSelect::setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value) {
  deleteUnion();
  m_IfcSizeSelect_union.m_IfcDescriptiveMeasure = new IfcDescriptiveMeasure(value);
  m_type = IFCDESCRIPTIVEMEASURE;
}

IfcPositiveLengthMeasure IfcSizeSelect::getIfcPositiveLengthMeasure() {
  return m_IfcSizeSelect_union.m_IfcPositiveLengthMeasure;
}

void IfcSizeSelect::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
  deleteUnion();
  m_IfcSizeSelect_union.m_IfcPositiveLengthMeasure = value;
  m_type = IFCPOSITIVELENGTHMEASURE;
}

IfcNormalisedRatioMeasure IfcSizeSelect::getIfcNormalisedRatioMeasure() {
  return m_IfcSizeSelect_union.m_IfcNormalisedRatioMeasure;
}

void IfcSizeSelect::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
  deleteUnion();
  m_IfcSizeSelect_union.m_IfcNormalisedRatioMeasure = value;
  m_type = IFCNORMALISEDRATIOMEASURE;
}

IfcPositiveRatioMeasure IfcSizeSelect::getIfcPositiveRatioMeasure() {
  return m_IfcSizeSelect_union.m_IfcPositiveRatioMeasure;
}

void IfcSizeSelect::setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value) {
  deleteUnion();
  m_IfcSizeSelect_union.m_IfcPositiveRatioMeasure = value;
  m_type = IFCPOSITIVERATIOMEASURE;
}

void IfcSizeSelect::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcSizeSelect::s_type = new Step::ClassType_class("IfcSizeSelect");
