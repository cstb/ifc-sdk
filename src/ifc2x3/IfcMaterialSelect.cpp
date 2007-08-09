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
#include <ifc2x3/IfcMaterialSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/IfcMaterialLayerSetUsage.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcMaterialSelect::IfcMaterialSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcMaterialSelect::IfcMaterialSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcMaterialSelect::~IfcMaterialSelect() {
  deleteUnion();
}

bool IfcMaterialSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialSelect(this);
}

bool IfcMaterialSelect::init() {
  return false;
}

const char *IfcMaterialSelect::type() {
  return "IfcMaterialSelect";
}

Step::ClassType IfcMaterialSelect::getClassType() {
  return IfcMaterialSelect::s_type;
}

Step::ClassType IfcMaterialSelect::getType() const {
  return IfcMaterialSelect::s_type;
}

bool IfcMaterialSelect::isOfType(Step::ClassType t) {
  return IfcMaterialSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcMaterialSelect::currentTypeName() {
  switch(m_type) {
  case IFCMATERIAL:
    return "IfcMaterial";
    break;
  case IFCMATERIALLIST:
    return "IfcMaterialList";
    break;
  case IFCMATERIALLAYERSETUSAGE:
    return "IfcMaterialLayerSetUsage";
    break;
  case IFCMATERIALLAYERSET:
    return "IfcMaterialLayerSet";
    break;
  case IFCMATERIALLAYER:
    return "IfcMaterialLayer";
    break;
  default:
    return "UNSET";
  }
}

IfcMaterialSelect::IfcMaterialSelect_select IfcMaterialSelect::currentType() {
  return m_type;
}

void IfcMaterialSelect::deleteUnion() {
  switch(m_type) {
  case IFCMATERIAL:
    m_IfcMaterialSelect_union.m_IfcMaterial->unref();
    break;
  case IFCMATERIALLIST:
    m_IfcMaterialSelect_union.m_IfcMaterialList->unref();
    break;
  case IFCMATERIALLAYERSETUSAGE:
    m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage->unref();
    break;
  case IFCMATERIALLAYERSET:
    m_IfcMaterialSelect_union.m_IfcMaterialLayerSet->unref();
    break;
  case IFCMATERIALLAYER:
    m_IfcMaterialSelect_union.m_IfcMaterialLayer->unref();
    break;
    }
  m_type = UNSET;
}

IfcMaterial *IfcMaterialSelect::getIfcMaterial() {
  return m_IfcMaterialSelect_union.m_IfcMaterial;
}

void IfcMaterialSelect::setIfcMaterial(IfcMaterial *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMaterialSelect_union.m_IfcMaterial = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIAL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIAL;
}

IfcMaterialList *IfcMaterialSelect::getIfcMaterialList() {
  return m_IfcMaterialSelect_union.m_IfcMaterialList;
}

void IfcMaterialSelect::setIfcMaterialList(IfcMaterialList *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMaterialSelect_union.m_IfcMaterialList = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIALLIST;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIALLIST;
}

IfcMaterialLayerSetUsage *IfcMaterialSelect::getIfcMaterialLayerSetUsage() {
  return m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage;
}

void IfcMaterialSelect::setIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIALLAYERSETUSAGE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIALLAYERSETUSAGE;
}

IfcMaterialLayerSet *IfcMaterialSelect::getIfcMaterialLayerSet() {
  return m_IfcMaterialSelect_union.m_IfcMaterialLayerSet;
}

void IfcMaterialSelect::setIfcMaterialLayerSet(IfcMaterialLayerSet *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMaterialSelect_union.m_IfcMaterialLayerSet = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIALLAYERSET;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIALLAYERSET;
}

IfcMaterialLayer *IfcMaterialSelect::getIfcMaterialLayer() {
  return m_IfcMaterialSelect_union.m_IfcMaterialLayer;
}

void IfcMaterialSelect::setIfcMaterialLayer(IfcMaterialLayer *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMaterialSelect_union.m_IfcMaterialLayer = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIALLAYER;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIALLAYER;
}

void IfcMaterialSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcMaterial::getClassType())) {
    setIfcMaterial(static_cast< IfcMaterial* > (v));
  }
  else if (v->isOfType(IfcMaterialList::getClassType())) {
    setIfcMaterialList(static_cast< IfcMaterialList* > (v));
  }
  else if (v->isOfType(IfcMaterialLayerSetUsage::getClassType())) {
    setIfcMaterialLayerSetUsage(static_cast< IfcMaterialLayerSetUsage* > (v));
  }
  else if (v->isOfType(IfcMaterialLayerSet::getClassType())) {
    setIfcMaterialLayerSet(static_cast< IfcMaterialLayerSet* > (v));
  }
  else if (v->isOfType(IfcMaterialLayer::getClassType())) {
    setIfcMaterialLayer(static_cast< IfcMaterialLayer* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialSelect::s_type = new Step::ClassType_class("IfcMaterialSelect");
