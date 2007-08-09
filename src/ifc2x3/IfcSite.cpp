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
#include <ifc2x3/IfcSite.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPostalAddress.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSite::IfcSite(Step::SPFData *args) : IfcSpatialStructureElement(args) {
  m_refLatitude.setUnset(true);
  m_refLongitude.setUnset(true);
  m_refElevation = getUnset(m_refElevation);
  m_landTitleNumber = getUnset(m_landTitleNumber);
  m_siteAddress = NULL;
}


IfcSite::~IfcSite() {
}

bool IfcSite::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSite(this);
}

const char *IfcSite::type() {
  return "IfcSite";
}

Step::ClassType IfcSite::getClassType() {
  return IfcSite::s_type;
}

Step::ClassType IfcSite::getType() const {
  return IfcSite::s_type;
}

bool IfcSite::isOfType(Step::ClassType t) {
  return IfcSite::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcCompoundPlaneAngleMeasure &IfcSite::getRefLatitude() {
  if (Step::BaseObject::inited()) {
    return m_refLatitude;
  }
  else {
    m_refLatitude.setUnset(true);
    return m_refLatitude;
  }
}

void IfcSite::setRefLatitude(const IfcCompoundPlaneAngleMeasure &value) {
  m_refLatitude = value;
}

IfcCompoundPlaneAngleMeasure &IfcSite::getRefLongitude() {
  if (Step::BaseObject::inited()) {
    return m_refLongitude;
  }
  else {
    m_refLongitude.setUnset(true);
    return m_refLongitude;
  }
}

void IfcSite::setRefLongitude(const IfcCompoundPlaneAngleMeasure &value) {
  m_refLongitude = value;
}

IfcLengthMeasure IfcSite::getRefElevation() {
  if (Step::BaseObject::inited()) {
    return m_refElevation;
  }
  else {
    return getUnset(m_refElevation);
  }
}

void IfcSite::setRefElevation(IfcLengthMeasure value) {
  m_refElevation = value;
}

IfcLabel IfcSite::getLandTitleNumber() {
  if (Step::BaseObject::inited()) {
    return m_landTitleNumber;
  }
  else {
    return getUnset(m_landTitleNumber);
  }
}

void IfcSite::setLandTitleNumber(const IfcLabel &value) {
  m_landTitleNumber = value;
}

IfcPostalAddress *IfcSite::getSiteAddress() {
  if (Step::BaseObject::inited()) {
    return m_siteAddress.get();
  }
  else {
    return NULL;
  }
}

void IfcSite::setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value) {
  m_siteAddress = value;
}

void IfcSite::release() {
  IfcSpatialStructureElement::release();
  m_refLatitude.clear();
  m_refLongitude.clear();
  m_siteAddress.release();
}

bool IfcSite::init() {
  bool status = IfcSpatialStructureElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_refLatitude.setUnset(true);
  }
  else {
    m_refLatitude.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Integer attr2;
        attr2 = Step::spfToInteger(str1);
        m_refLatitude.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_refLongitude.setUnset(true);
  }
  else {
    m_refLongitude.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Integer attr2;
        attr2 = Step::spfToInteger(str1);
        m_refLongitude.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_refElevation = getUnset(m_refElevation);
  }
  else {
    m_refElevation = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_landTitleNumber = getUnset(m_landTitleNumber);
  }
  else {
    m_landTitleNumber = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_siteAddress = NULL;
  }
  else {
    m_siteAddress = static_cast< IfcPostalAddress * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSite::s_type = new Step::ClassType_class("IfcSite");
IfcSite_Factory::IfcSite_Factory() {
}

IfcSite_Factory::~IfcSite_Factory() {
  clear(true);
}

void IfcSite_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSite_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSite_Factory::end() {
  return m_idMap.end();
}

IfcSite *IfcSite_Factory::get(Step::StepId id) {
  IfcSite *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSite * > (it->second);
  }
  else {
    LOG_ERROR("IfcSite_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSite * > (create(id));
  }
}

Step::BaseObject *IfcSite_Factory::create(Step::StepId id) {
  IfcSite *ret = new IfcSite(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSite_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSite *ret = new IfcSite(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSite_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSite *ret = new IfcSite(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSite *IfcSite_Factory::generate() {
  return static_cast< IfcSite * > (create(m_model->getNewId()));
}

IfcSite *IfcSite_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSite * > (it->second);
  }
  else {
    return NULL;
  }
}

