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
#include <ifc2x3/IfcTextStyleSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcTextStyleTextModel.h>
#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcTextStyleSelect::IfcTextStyleSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcTextStyleSelect::IfcTextStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcTextStyleSelect::~IfcTextStyleSelect() {
  deleteUnion();
}

bool IfcTextStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextStyleSelect(this);
}

bool IfcTextStyleSelect::init() {
  return false;
}

const char *IfcTextStyleSelect::type() {
  return "IfcTextStyleSelect";
}

Step::ClassType IfcTextStyleSelect::getClassType() {
  return IfcTextStyleSelect::s_type;
}

Step::ClassType IfcTextStyleSelect::getType() const {
  return IfcTextStyleSelect::s_type;
}

bool IfcTextStyleSelect::isOfType(Step::ClassType t) {
  return IfcTextStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcTextStyleSelect::currentTypeName() {
  switch(m_type) {
  case IFCTEXTSTYLEWITHBOXCHARACTERISTICS:
    return "IfcTextStyleWithBoxCharacteristics";
    break;
  case IFCTEXTSTYLETEXTMODEL:
    return "IfcTextStyleTextModel";
    break;
  default:
    return "UNSET";
  }
}

IfcTextStyleSelect::IfcTextStyleSelect_select IfcTextStyleSelect::currentType() {
  return m_type;
}

void IfcTextStyleSelect::deleteUnion() {
  switch(m_type) {
  case IFCTEXTSTYLEWITHBOXCHARACTERISTICS:
    m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics->unref();
    break;
  case IFCTEXTSTYLETEXTMODEL:
    m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel->unref();
    break;
    }
  m_type = UNSET;
}

IfcTextStyleWithBoxCharacteristics *IfcTextStyleSelect::getIfcTextStyleWithBoxCharacteristics() {
  return m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics;
}

void IfcTextStyleSelect::setIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics = value;
  if (value) {
    value->ref();
    m_type = IFCTEXTSTYLEWITHBOXCHARACTERISTICS;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTEXTSTYLEWITHBOXCHARACTERISTICS;
}

IfcTextStyleTextModel *IfcTextStyleSelect::getIfcTextStyleTextModel() {
  return m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel;
}

void IfcTextStyleSelect::setIfcTextStyleTextModel(IfcTextStyleTextModel *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel = value;
  if (value) {
    value->ref();
    m_type = IFCTEXTSTYLETEXTMODEL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTEXTSTYLETEXTMODEL;
}

void IfcTextStyleSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcTextStyleWithBoxCharacteristics::getClassType())) {
    setIfcTextStyleWithBoxCharacteristics(static_cast< IfcTextStyleWithBoxCharacteristics* > (v));
  }
  else if (v->isOfType(IfcTextStyleTextModel::getClassType())) {
    setIfcTextStyleTextModel(static_cast< IfcTextStyleTextModel* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleSelect::s_type = new Step::ClassType_class("IfcTextStyleSelect");
