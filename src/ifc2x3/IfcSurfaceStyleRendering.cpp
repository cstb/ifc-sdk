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
#include <ifc2x3/IfcSurfaceStyleRendering.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcSpecularHighlightSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceStyleRendering::IfcSurfaceStyleRendering(Step::SPFData *args) : IfcSurfaceStyleShading(args) {
  m_transparency = getUnset(m_transparency);
  m_diffuseColour = NULL;
  m_transmissionColour = NULL;
  m_diffuseTransmissionColour = NULL;
  m_reflectionColour = NULL;
  m_specularColour = NULL;
  m_specularHighlight = NULL;
  m_reflectanceMethod = IfcReflectanceMethodEnum_UNSET;
}


IfcSurfaceStyleRendering::~IfcSurfaceStyleRendering() {
}

bool IfcSurfaceStyleRendering::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyleRendering(this);
}

const char *IfcSurfaceStyleRendering::type() {
  return "IfcSurfaceStyleRendering";
}

Step::ClassType IfcSurfaceStyleRendering::getClassType() {
  return IfcSurfaceStyleRendering::s_type;
}

Step::ClassType IfcSurfaceStyleRendering::getType() const {
  return IfcSurfaceStyleRendering::s_type;
}

bool IfcSurfaceStyleRendering::isOfType(Step::ClassType t) {
  return IfcSurfaceStyleRendering::s_type == t ? true : IfcSurfaceStyleShading::isOfType(t);
}

IfcNormalisedRatioMeasure IfcSurfaceStyleRendering::getTransparency() {
  if (Step::BaseObject::inited()) {
    return m_transparency;
  }
  else {
    return getUnset(m_transparency);
  }
}

void IfcSurfaceStyleRendering::setTransparency(IfcNormalisedRatioMeasure value) {
  m_transparency = value;
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseColour() {
  if (Step::BaseObject::inited()) {
    return m_diffuseColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleRendering::setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value) {
  m_diffuseColour = value;
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getTransmissionColour() {
  if (Step::BaseObject::inited()) {
    return m_transmissionColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleRendering::setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value) {
  m_transmissionColour = value;
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseTransmissionColour() {
  if (Step::BaseObject::inited()) {
    return m_diffuseTransmissionColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleRendering::setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value) {
  m_diffuseTransmissionColour = value;
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getReflectionColour() {
  if (Step::BaseObject::inited()) {
    return m_reflectionColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleRendering::setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value) {
  m_reflectionColour = value;
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getSpecularColour() {
  if (Step::BaseObject::inited()) {
    return m_specularColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleRendering::setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value) {
  m_specularColour = value;
}

IfcSpecularHighlightSelect *IfcSurfaceStyleRendering::getSpecularHighlight() {
  if (Step::BaseObject::inited()) {
    return m_specularHighlight.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleRendering::setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value) {
  m_specularHighlight = value;
}

IfcReflectanceMethodEnum IfcSurfaceStyleRendering::getReflectanceMethod() {
  if (Step::BaseObject::inited()) {
    return m_reflectanceMethod;
  }
  else {
    return IfcReflectanceMethodEnum_UNSET;
  }
}

void IfcSurfaceStyleRendering::setReflectanceMethod(IfcReflectanceMethodEnum value) {
  m_reflectanceMethod = value;
}

void IfcSurfaceStyleRendering::release() {
  IfcSurfaceStyleShading::release();
}

bool IfcSurfaceStyleRendering::init() {
  bool status = IfcSurfaceStyleShading::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transparency = getUnset(m_transparency);
  }
  else {
    m_transparency = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_diffuseColour = NULL;
  }
  else {
    m_diffuseColour = new IfcColourOrFactor;
    if (arg[0] == '#') {
      m_diffuseColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_diffuseColour->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transmissionColour = NULL;
  }
  else {
    m_transmissionColour = new IfcColourOrFactor;
    if (arg[0] == '#') {
      m_transmissionColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_transmissionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_diffuseTransmissionColour = NULL;
  }
  else {
    m_diffuseTransmissionColour = new IfcColourOrFactor;
    if (arg[0] == '#') {
      m_diffuseTransmissionColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_diffuseTransmissionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_reflectionColour = NULL;
  }
  else {
    m_reflectionColour = new IfcColourOrFactor;
    if (arg[0] == '#') {
      m_reflectionColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_reflectionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_specularColour = NULL;
  }
  else {
    m_specularColour = new IfcColourOrFactor;
    if (arg[0] == '#') {
      m_specularColour->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_specularColour->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_specularHighlight = NULL;
  }
  else {
    m_specularHighlight = new IfcSpecularHighlightSelect;
    if (arg[0] == '#') {
      m_specularHighlight->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCSPECULAREXPONENT") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_specularHighlight->setIfcSpecularExponent(tmp_attr1);
        }
        if (type1 == "IFCSPECULARROUGHNESS") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_specularHighlight->setIfcSpecularRoughness(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_reflectanceMethod = IfcReflectanceMethodEnum_UNSET;
  }
  else {
    if (arg == ".BLINN.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_BLINN;
    }
    else if (arg == ".FLAT.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_FLAT;
    }
    else if (arg == ".GLASS.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_GLASS;
    }
    else if (arg == ".MATT.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_MATT;
    }
    else if (arg == ".METAL.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_METAL;
    }
    else if (arg == ".MIRROR.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_MIRROR;
    }
    else if (arg == ".PHONG.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_PHONG;
    }
    else if (arg == ".PLASTIC.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_PLASTIC;
    }
    else if (arg == ".STRAUSS.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_STRAUSS;
    }
    else if (arg == ".NOTDEFINED.") {
      m_reflectanceMethod = IfcReflectanceMethodEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleRendering::s_type = new Step::ClassType_class("IfcSurfaceStyleRendering");
IfcSurfaceStyleRendering_Factory::IfcSurfaceStyleRendering_Factory() {
}

IfcSurfaceStyleRendering_Factory::~IfcSurfaceStyleRendering_Factory() {
  clear(true);
}

void IfcSurfaceStyleRendering_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleRendering_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleRendering_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceStyleRendering *IfcSurfaceStyleRendering_Factory::get(Step::StepId id) {
  IfcSurfaceStyleRendering *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceStyleRendering * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceStyleRendering_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceStyleRendering * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceStyleRendering_Factory::create(Step::StepId id) {
  IfcSurfaceStyleRendering *ret = new IfcSurfaceStyleRendering(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleRendering_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceStyleRendering *ret = new IfcSurfaceStyleRendering(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleRendering_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceStyleRendering *ret = new IfcSurfaceStyleRendering(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceStyleRendering *IfcSurfaceStyleRendering_Factory::generate() {
  return static_cast< IfcSurfaceStyleRendering * > (create(m_model->getNewId()));
}

IfcSurfaceStyleRendering *IfcSurfaceStyleRendering_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceStyleRendering * > (it->second);
  }
  else {
    return NULL;
  }
}

