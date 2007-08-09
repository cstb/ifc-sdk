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
#include <ifc2x3/IfcSurfaceTexture.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcSurfaceTexture::IfcSurfaceTexture(Step::SPFData *args) : Step::BaseObject(args) {
  m_repeatS = getUnset(m_repeatS);
  m_repeatT = getUnset(m_repeatT);
  m_textureType = IfcSurfaceTextureEnum_UNSET;
  m_textureTransform = NULL;
}


IfcSurfaceTexture::~IfcSurfaceTexture() {
}

bool IfcSurfaceTexture::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceTexture(this);
}

const char *IfcSurfaceTexture::type() {
  return "IfcSurfaceTexture";
}

Step::ClassType IfcSurfaceTexture::getClassType() {
  return IfcSurfaceTexture::s_type;
}

Step::ClassType IfcSurfaceTexture::getType() const {
  return IfcSurfaceTexture::s_type;
}

bool IfcSurfaceTexture::isOfType(Step::ClassType t) {
  return IfcSurfaceTexture::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Bool IfcSurfaceTexture::getRepeatS() {
  if (Step::BaseObject::inited()) {
    return m_repeatS;
  }
  else {
    return getUnset(m_repeatS);
  }
}

void IfcSurfaceTexture::setRepeatS(Bool value) {
  m_repeatS = value;
}

Bool IfcSurfaceTexture::getRepeatT() {
  if (Step::BaseObject::inited()) {
    return m_repeatT;
  }
  else {
    return getUnset(m_repeatT);
  }
}

void IfcSurfaceTexture::setRepeatT(Bool value) {
  m_repeatT = value;
}

IfcSurfaceTextureEnum IfcSurfaceTexture::getTextureType() {
  if (Step::BaseObject::inited()) {
    return m_textureType;
  }
  else {
    return IfcSurfaceTextureEnum_UNSET;
  }
}

void IfcSurfaceTexture::setTextureType(IfcSurfaceTextureEnum value) {
  m_textureType = value;
}

IfcCartesianTransformationOperator2D *IfcSurfaceTexture::getTextureTransform() {
  if (Step::BaseObject::inited()) {
    return m_textureTransform.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceTexture::setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
  m_textureTransform = value;
}

void IfcSurfaceTexture::release() {
  m_textureTransform.release();
}

bool IfcSurfaceTexture::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_repeatS = getUnset(m_repeatS);
  }
  else {
    m_repeatS = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_repeatT = getUnset(m_repeatT);
  }
  else {
    m_repeatT = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textureType = IfcSurfaceTextureEnum_UNSET;
  }
  else {
    if (arg == ".BUMP.") {
      m_textureType = IfcSurfaceTextureEnum_BUMP;
    }
    else if (arg == ".OPACITY.") {
      m_textureType = IfcSurfaceTextureEnum_OPACITY;
    }
    else if (arg == ".REFLECTION.") {
      m_textureType = IfcSurfaceTextureEnum_REFLECTION;
    }
    else if (arg == ".SELFILLUMINATION.") {
      m_textureType = IfcSurfaceTextureEnum_SELFILLUMINATION;
    }
    else if (arg == ".SHININESS.") {
      m_textureType = IfcSurfaceTextureEnum_SHININESS;
    }
    else if (arg == ".SPECULAR.") {
      m_textureType = IfcSurfaceTextureEnum_SPECULAR;
    }
    else if (arg == ".TEXTURE.") {
      m_textureType = IfcSurfaceTextureEnum_TEXTURE;
    }
    else if (arg == ".TRANSPARENCYMAP.") {
      m_textureType = IfcSurfaceTextureEnum_TRANSPARENCYMAP;
    }
    else if (arg == ".NOTDEFINED.") {
      m_textureType = IfcSurfaceTextureEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textureTransform = NULL;
  }
  else {
    m_textureTransform = static_cast< IfcCartesianTransformationOperator2D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceTexture::s_type = new Step::ClassType_class("IfcSurfaceTexture");
