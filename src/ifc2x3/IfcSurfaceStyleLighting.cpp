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
#include <ifc2x3/IfcSurfaceStyleLighting.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceStyleLighting::IfcSurfaceStyleLighting(Step::SPFData *args) : Step::BaseObject(args) {
  m_diffuseTransmissionColour = NULL;
  m_diffuseReflectionColour = NULL;
  m_transmissionColour = NULL;
  m_reflectanceColour = NULL;
}


IfcSurfaceStyleLighting::~IfcSurfaceStyleLighting() {
}

bool IfcSurfaceStyleLighting::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyleLighting(this);
}

const char *IfcSurfaceStyleLighting::type() {
  return "IfcSurfaceStyleLighting";
}

Step::ClassType IfcSurfaceStyleLighting::getClassType() {
  return IfcSurfaceStyleLighting::s_type;
}

Step::ClassType IfcSurfaceStyleLighting::getType() const {
  return IfcSurfaceStyleLighting::s_type;
}

bool IfcSurfaceStyleLighting::isOfType(Step::ClassType t) {
  return IfcSurfaceStyleLighting::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseTransmissionColour() {
  if (Step::BaseObject::inited()) {
    return m_diffuseTransmissionColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleLighting::setDiffuseTransmissionColour(const Step::RefPtr< IfcColourRgb > &value) {
  m_diffuseTransmissionColour = value;
}

IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseReflectionColour() {
  if (Step::BaseObject::inited()) {
    return m_diffuseReflectionColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleLighting::setDiffuseReflectionColour(const Step::RefPtr< IfcColourRgb > &value) {
  m_diffuseReflectionColour = value;
}

IfcColourRgb *IfcSurfaceStyleLighting::getTransmissionColour() {
  if (Step::BaseObject::inited()) {
    return m_transmissionColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleLighting::setTransmissionColour(const Step::RefPtr< IfcColourRgb > &value) {
  m_transmissionColour = value;
}

IfcColourRgb *IfcSurfaceStyleLighting::getReflectanceColour() {
  if (Step::BaseObject::inited()) {
    return m_reflectanceColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleLighting::setReflectanceColour(const Step::RefPtr< IfcColourRgb > &value) {
  m_reflectanceColour = value;
}

void IfcSurfaceStyleLighting::release() {
  m_diffuseTransmissionColour.release();
  m_diffuseReflectionColour.release();
  m_transmissionColour.release();
  m_reflectanceColour.release();
}

bool IfcSurfaceStyleLighting::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_diffuseTransmissionColour = NULL;
  }
  else {
    m_diffuseTransmissionColour = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_diffuseReflectionColour = NULL;
  }
  else {
    m_diffuseReflectionColour = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transmissionColour = NULL;
  }
  else {
    m_transmissionColour = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_reflectanceColour = NULL;
  }
  else {
    m_reflectanceColour = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleLighting::s_type = new Step::ClassType_class("IfcSurfaceStyleLighting");
IfcSurfaceStyleLighting_Factory::IfcSurfaceStyleLighting_Factory() {
}

IfcSurfaceStyleLighting_Factory::~IfcSurfaceStyleLighting_Factory() {
  clear(true);
}

void IfcSurfaceStyleLighting_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleLighting_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleLighting_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceStyleLighting *IfcSurfaceStyleLighting_Factory::get(Step::StepId id) {
  IfcSurfaceStyleLighting *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceStyleLighting * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceStyleLighting_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceStyleLighting * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceStyleLighting_Factory::create(Step::StepId id) {
  IfcSurfaceStyleLighting *ret = new IfcSurfaceStyleLighting(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleLighting_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceStyleLighting *ret = new IfcSurfaceStyleLighting(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleLighting_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceStyleLighting *ret = new IfcSurfaceStyleLighting(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceStyleLighting *IfcSurfaceStyleLighting_Factory::generate() {
  return static_cast< IfcSurfaceStyleLighting * > (create(m_model->getNewId()));
}

IfcSurfaceStyleLighting *IfcSurfaceStyleLighting_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceStyleLighting * > (it->second);
  }
  else {
    return NULL;
  }
}

