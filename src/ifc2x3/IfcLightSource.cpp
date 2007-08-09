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
#include <ifc2x3/IfcLightSource.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcLightSource::IfcLightSource(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_name = getUnset(m_name);
  m_lightColour = NULL;
  m_ambientIntensity = getUnset(m_ambientIntensity);
  m_intensity = getUnset(m_intensity);
}


IfcLightSource::~IfcLightSource() {
}

bool IfcLightSource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightSource(this);
}

const char *IfcLightSource::type() {
  return "IfcLightSource";
}

Step::ClassType IfcLightSource::getClassType() {
  return IfcLightSource::s_type;
}

Step::ClassType IfcLightSource::getType() const {
  return IfcLightSource::s_type;
}

bool IfcLightSource::isOfType(Step::ClassType t) {
  return IfcLightSource::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcLabel IfcLightSource::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcLightSource::setName(const IfcLabel &value) {
  m_name = value;
}

IfcColourRgb *IfcLightSource::getLightColour() {
  if (Step::BaseObject::inited()) {
    return m_lightColour.get();
  }
  else {
    return NULL;
  }
}

void IfcLightSource::setLightColour(const Step::RefPtr< IfcColourRgb > &value) {
  m_lightColour = value;
}

IfcNormalisedRatioMeasure IfcLightSource::getAmbientIntensity() {
  if (Step::BaseObject::inited()) {
    return m_ambientIntensity;
  }
  else {
    return getUnset(m_ambientIntensity);
  }
}

void IfcLightSource::setAmbientIntensity(IfcNormalisedRatioMeasure value) {
  m_ambientIntensity = value;
}

IfcNormalisedRatioMeasure IfcLightSource::getIntensity() {
  if (Step::BaseObject::inited()) {
    return m_intensity;
  }
  else {
    return getUnset(m_intensity);
  }
}

void IfcLightSource::setIntensity(IfcNormalisedRatioMeasure value) {
  m_intensity = value;
}

void IfcLightSource::release() {
  IfcGeometricRepresentationItem::release();
  m_lightColour.release();
}

bool IfcLightSource::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lightColour = NULL;
  }
  else {
    m_lightColour = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ambientIntensity = getUnset(m_ambientIntensity);
  }
  else {
    m_ambientIntensity = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_intensity = getUnset(m_intensity);
  }
  else {
    m_intensity = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSource::s_type = new Step::ClassType_class("IfcLightSource");
