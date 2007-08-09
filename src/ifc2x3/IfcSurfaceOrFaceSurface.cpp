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
#include <ifc2x3/IfcSurfaceOrFaceSurface.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcFaceBasedSurfaceModel.h>
#include <ifc2x3/IfcFaceSurface.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcSurfaceOrFaceSurface::~IfcSurfaceOrFaceSurface() {
  deleteUnion();
}

bool IfcSurfaceOrFaceSurface::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceOrFaceSurface(this);
}

bool IfcSurfaceOrFaceSurface::init() {
  return false;
}

const char *IfcSurfaceOrFaceSurface::type() {
  return "IfcSurfaceOrFaceSurface";
}

Step::ClassType IfcSurfaceOrFaceSurface::getClassType() {
  return IfcSurfaceOrFaceSurface::s_type;
}

Step::ClassType IfcSurfaceOrFaceSurface::getType() const {
  return IfcSurfaceOrFaceSurface::s_type;
}

bool IfcSurfaceOrFaceSurface::isOfType(Step::ClassType t) {
  return IfcSurfaceOrFaceSurface::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcSurfaceOrFaceSurface::currentTypeName() {
  switch(m_type) {
  case IFCSURFACE:
    return "IfcSurface";
    break;
  case IFCFACESURFACE:
    return "IfcFaceSurface";
    break;
  case IFCFACEBASEDSURFACEMODEL:
    return "IfcFaceBasedSurfaceModel";
    break;
  default:
    return "UNSET";
  }
}

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface_select IfcSurfaceOrFaceSurface::currentType() {
  return m_type;
}

void IfcSurfaceOrFaceSurface::deleteUnion() {
  switch(m_type) {
  case IFCSURFACE:
    m_IfcSurfaceOrFaceSurface_union.m_IfcSurface->unref();
    break;
  case IFCFACESURFACE:
    m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface->unref();
    break;
  case IFCFACEBASEDSURFACEMODEL:
    m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel->unref();
    break;
    }
  m_type = UNSET;
}

IfcSurface *IfcSurfaceOrFaceSurface::getIfcSurface() {
  return m_IfcSurfaceOrFaceSurface_union.m_IfcSurface;
}

void IfcSurfaceOrFaceSurface::setIfcSurface(IfcSurface *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceOrFaceSurface_union.m_IfcSurface = value;
  if (value) {
    value->ref();
    m_type = IFCSURFACE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSURFACE;
}

IfcFaceSurface *IfcSurfaceOrFaceSurface::getIfcFaceSurface() {
  return m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface;
}

void IfcSurfaceOrFaceSurface::setIfcFaceSurface(IfcFaceSurface *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface = value;
  if (value) {
    value->ref();
    m_type = IFCFACESURFACE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCFACESURFACE;
}

IfcFaceBasedSurfaceModel *IfcSurfaceOrFaceSurface::getIfcFaceBasedSurfaceModel() {
  return m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel;
}

void IfcSurfaceOrFaceSurface::setIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel = value;
  if (value) {
    value->ref();
    m_type = IFCFACEBASEDSURFACEMODEL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCFACEBASEDSURFACEMODEL;
}

void IfcSurfaceOrFaceSurface::set(Step::BaseObject *v) {
  if (v->isOfType(IfcSurface::getClassType())) {
    setIfcSurface(static_cast< IfcSurface* > (v));
  }
  else if (v->isOfType(IfcFaceSurface::getClassType())) {
    setIfcFaceSurface(static_cast< IfcFaceSurface* > (v));
  }
  else if (v->isOfType(IfcFaceBasedSurfaceModel::getClassType())) {
    setIfcFaceBasedSurfaceModel(static_cast< IfcFaceBasedSurfaceModel* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOrFaceSurface::s_type = new Step::ClassType_class("IfcSurfaceOrFaceSurface");
