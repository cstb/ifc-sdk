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
#include <ifc2x3/IfcTrimmedCurve.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcTrimmingSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTrimmedCurve::IfcTrimmedCurve(Step::SPFData *args) : IfcBoundedCurve(args) {
  m_basisCurve = NULL;
  m_trim1.setUnset(true);
  m_trim2.setUnset(true);
  m_senseAgreement = getUnset(m_senseAgreement);
  m_masterRepresentation = IfcTrimmingPreference_UNSET;
}


IfcTrimmedCurve::~IfcTrimmedCurve() {
}

bool IfcTrimmedCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTrimmedCurve(this);
}

const char *IfcTrimmedCurve::type() {
  return "IfcTrimmedCurve";
}

Step::ClassType IfcTrimmedCurve::getClassType() {
  return IfcTrimmedCurve::s_type;
}

Step::ClassType IfcTrimmedCurve::getType() const {
  return IfcTrimmedCurve::s_type;
}

bool IfcTrimmedCurve::isOfType(Step::ClassType t) {
  return IfcTrimmedCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

IfcCurve *IfcTrimmedCurve::getBasisCurve() {
  if (Step::BaseObject::inited()) {
    return m_basisCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcTrimmedCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
  m_basisCurve = value;
}

Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &IfcTrimmedCurve::getTrim1() {
  if (Step::BaseObject::inited()) {
    return m_trim1;
  }
  else {
    m_trim1.setUnset(true);
    return m_trim1;
  }
}

void IfcTrimmedCurve::setTrim1(const Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &value) {
  m_trim1 = value;
}

Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &IfcTrimmedCurve::getTrim2() {
  if (Step::BaseObject::inited()) {
    return m_trim2;
  }
  else {
    m_trim2.setUnset(true);
    return m_trim2;
  }
}

void IfcTrimmedCurve::setTrim2(const Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &value) {
  m_trim2 = value;
}

Bool IfcTrimmedCurve::getSenseAgreement() {
  if (Step::BaseObject::inited()) {
    return m_senseAgreement;
  }
  else {
    return getUnset(m_senseAgreement);
  }
}

void IfcTrimmedCurve::setSenseAgreement(Bool value) {
  m_senseAgreement = value;
}

IfcTrimmingPreference IfcTrimmedCurve::getMasterRepresentation() {
  if (Step::BaseObject::inited()) {
    return m_masterRepresentation;
  }
  else {
    return IfcTrimmingPreference_UNSET;
  }
}

void IfcTrimmedCurve::setMasterRepresentation(IfcTrimmingPreference value) {
  m_masterRepresentation = value;
}

void IfcTrimmedCurve::release() {
  IfcBoundedCurve::release();
  m_basisCurve.release();
  m_trim1.clear();
  m_trim2.clear();
}

bool IfcTrimmedCurve::init() {
  bool status = IfcBoundedCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_basisCurve = NULL;
  }
  else {
    m_basisCurve = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_trim1.setUnset(true);
  }
  else {
    m_trim1.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcTrimmingSelect > attr2;
        attr2 = new IfcTrimmingSelect;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
            if (type2 == "IFCPARAMETERVALUE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcParameterValue(tmp_attr2);
            }
          }
        }
        m_trim1.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_trim2.setUnset(true);
  }
  else {
    m_trim2.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcTrimmingSelect > attr2;
        attr2 = new IfcTrimmingSelect;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
            if (type2 == "IFCPARAMETERVALUE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcParameterValue(tmp_attr2);
            }
          }
        }
        m_trim2.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_senseAgreement = getUnset(m_senseAgreement);
  }
  else {
    m_senseAgreement = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_masterRepresentation = IfcTrimmingPreference_UNSET;
  }
  else {
    if (arg == ".CARTESIAN.") {
      m_masterRepresentation = IfcTrimmingPreference_CARTESIAN;
    }
    else if (arg == ".PARAMETER.") {
      m_masterRepresentation = IfcTrimmingPreference_PARAMETER;
    }
    else if (arg == ".UNSPECIFIED.") {
      m_masterRepresentation = IfcTrimmingPreference_UNSPECIFIED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTrimmedCurve::s_type = new Step::ClassType_class("IfcTrimmedCurve");
IfcTrimmedCurve_Factory::IfcTrimmedCurve_Factory() {
}

IfcTrimmedCurve_Factory::~IfcTrimmedCurve_Factory() {
  clear(true);
}

void IfcTrimmedCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTrimmedCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTrimmedCurve_Factory::end() {
  return m_idMap.end();
}

IfcTrimmedCurve *IfcTrimmedCurve_Factory::get(Step::StepId id) {
  IfcTrimmedCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTrimmedCurve * > (it->second);
  }
  else {
    LOG_ERROR("IfcTrimmedCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTrimmedCurve * > (create(id));
  }
}

Step::BaseObject *IfcTrimmedCurve_Factory::create(Step::StepId id) {
  IfcTrimmedCurve *ret = new IfcTrimmedCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTrimmedCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTrimmedCurve *ret = new IfcTrimmedCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTrimmedCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTrimmedCurve *ret = new IfcTrimmedCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTrimmedCurve *IfcTrimmedCurve_Factory::generate() {
  return static_cast< IfcTrimmedCurve * > (create(m_model->getNewId()));
}

IfcTrimmedCurve *IfcTrimmedCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTrimmedCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

