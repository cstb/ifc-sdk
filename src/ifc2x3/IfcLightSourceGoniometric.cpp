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
#include <ifc2x3/IfcLightSourceGoniometric.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcLightDistributionDataSourceSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLightSourceGoniometric::IfcLightSourceGoniometric(Step::SPFData *args) : IfcLightSource(args) {
  m_position = NULL;
  m_colourAppearance = NULL;
  m_colourTemperature = getUnset(m_colourTemperature);
  m_luminousFlux = getUnset(m_luminousFlux);
  m_lightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
  m_lightDistributionDataSource = NULL;
}


IfcLightSourceGoniometric::~IfcLightSourceGoniometric() {
}

bool IfcLightSourceGoniometric::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightSourceGoniometric(this);
}

const char *IfcLightSourceGoniometric::type() {
  return "IfcLightSourceGoniometric";
}

Step::ClassType IfcLightSourceGoniometric::getClassType() {
  return IfcLightSourceGoniometric::s_type;
}

Step::ClassType IfcLightSourceGoniometric::getType() const {
  return IfcLightSourceGoniometric::s_type;
}

bool IfcLightSourceGoniometric::isOfType(Step::ClassType t) {
  return IfcLightSourceGoniometric::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcAxis2Placement3D *IfcLightSourceGoniometric::getPosition() {
  if (Step::BaseObject::inited()) {
    return m_position.get();
  }
  else {
    return NULL;
  }
}

void IfcLightSourceGoniometric::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
  m_position = value;
}

IfcColourRgb *IfcLightSourceGoniometric::getColourAppearance() {
  if (Step::BaseObject::inited()) {
    return m_colourAppearance.get();
  }
  else {
    return NULL;
  }
}

void IfcLightSourceGoniometric::setColourAppearance(const Step::RefPtr< IfcColourRgb > &value) {
  m_colourAppearance = value;
}

IfcThermodynamicTemperatureMeasure IfcLightSourceGoniometric::getColourTemperature() {
  if (Step::BaseObject::inited()) {
    return m_colourTemperature;
  }
  else {
    return getUnset(m_colourTemperature);
  }
}

void IfcLightSourceGoniometric::setColourTemperature(IfcThermodynamicTemperatureMeasure value) {
  m_colourTemperature = value;
}

IfcLuminousFluxMeasure IfcLightSourceGoniometric::getLuminousFlux() {
  if (Step::BaseObject::inited()) {
    return m_luminousFlux;
  }
  else {
    return getUnset(m_luminousFlux);
  }
}

void IfcLightSourceGoniometric::setLuminousFlux(IfcLuminousFluxMeasure value) {
  m_luminousFlux = value;
}

IfcLightEmissionSourceEnum IfcLightSourceGoniometric::getLightEmissionSource() {
  if (Step::BaseObject::inited()) {
    return m_lightEmissionSource;
  }
  else {
    return IfcLightEmissionSourceEnum_UNSET;
  }
}

void IfcLightSourceGoniometric::setLightEmissionSource(IfcLightEmissionSourceEnum value) {
  m_lightEmissionSource = value;
}

IfcLightDistributionDataSourceSelect *IfcLightSourceGoniometric::getLightDistributionDataSource() {
  if (Step::BaseObject::inited()) {
    return m_lightDistributionDataSource.get();
  }
  else {
    return NULL;
  }
}

void IfcLightSourceGoniometric::setLightDistributionDataSource(const Step::RefPtr< IfcLightDistributionDataSourceSelect > &value) {
  m_lightDistributionDataSource = value;
}

void IfcLightSourceGoniometric::release() {
  IfcLightSource::release();
  m_position.release();
  m_colourAppearance.release();
}

bool IfcLightSourceGoniometric::init() {
  bool status = IfcLightSource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_position = NULL;
  }
  else {
    m_position = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_colourAppearance = NULL;
  }
  else {
    m_colourAppearance = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_colourTemperature = getUnset(m_colourTemperature);
  }
  else {
    m_colourTemperature = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_luminousFlux = getUnset(m_luminousFlux);
  }
  else {
    m_luminousFlux = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
  }
  else {
    if (arg == ".COMPACTFLUORESCENT.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_COMPACTFLUORESCENT;
    }
    else if (arg == ".FLUORESCENT.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_FLUORESCENT;
    }
    else if (arg == ".HIGHPRESSUREMERCURY.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_HIGHPRESSUREMERCURY;
    }
    else if (arg == ".HIGHPRESSURESODIUM.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_HIGHPRESSURESODIUM;
    }
    else if (arg == ".LIGHTEMITTINGDIODE.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_LIGHTEMITTINGDIODE;
    }
    else if (arg == ".LOWPRESSURESODIUM.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_LOWPRESSURESODIUM;
    }
    else if (arg == ".LOWVOLTAGEHALOGEN.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_LOWVOLTAGEHALOGEN;
    }
    else if (arg == ".MAINVOLTAGEHALOGEN.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_MAINVOLTAGEHALOGEN;
    }
    else if (arg == ".METALHALIDE.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_METALHALIDE;
    }
    else if (arg == ".TUNGSTENFILAMENT.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_TUNGSTENFILAMENT;
    }
    else if (arg == ".NOTDEFINED.") {
      m_lightEmissionSource = IfcLightEmissionSourceEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lightDistributionDataSource = NULL;
  }
  else {
    m_lightDistributionDataSource = new IfcLightDistributionDataSourceSelect;
    if (arg[0] == '#') {
      m_lightDistributionDataSource->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceGoniometric::s_type = new Step::ClassType_class("IfcLightSourceGoniometric");
IfcLightSourceGoniometric_Factory::IfcLightSourceGoniometric_Factory() {
}

IfcLightSourceGoniometric_Factory::~IfcLightSourceGoniometric_Factory() {
  clear(true);
}

void IfcLightSourceGoniometric_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightSourceGoniometric_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightSourceGoniometric_Factory::end() {
  return m_idMap.end();
}

IfcLightSourceGoniometric *IfcLightSourceGoniometric_Factory::get(Step::StepId id) {
  IfcLightSourceGoniometric *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLightSourceGoniometric * > (it->second);
  }
  else {
    LOG_ERROR("IfcLightSourceGoniometric_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLightSourceGoniometric * > (create(id));
  }
}

Step::BaseObject *IfcLightSourceGoniometric_Factory::create(Step::StepId id) {
  IfcLightSourceGoniometric *ret = new IfcLightSourceGoniometric(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLightSourceGoniometric_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLightSourceGoniometric *ret = new IfcLightSourceGoniometric(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLightSourceGoniometric_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLightSourceGoniometric *ret = new IfcLightSourceGoniometric(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLightSourceGoniometric *IfcLightSourceGoniometric_Factory::generate() {
  return static_cast< IfcLightSourceGoniometric * > (create(m_model->getNewId()));
}

IfcLightSourceGoniometric *IfcLightSourceGoniometric_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLightSourceGoniometric * > (it->second);
  }
  else {
    return NULL;
  }
}

