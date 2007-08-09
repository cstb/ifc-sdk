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
#include <ifc2x3/IfcMetric.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMetricValueSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMetric::IfcMetric(Step::SPFData *args) : IfcConstraint(args) {
  m_benchmark = IfcBenchmarkEnum_UNSET;
  m_valueSource = getUnset(m_valueSource);
  m_dataValue = NULL;
}


IfcMetric::~IfcMetric() {
}

bool IfcMetric::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMetric(this);
}

const char *IfcMetric::type() {
  return "IfcMetric";
}

Step::ClassType IfcMetric::getClassType() {
  return IfcMetric::s_type;
}

Step::ClassType IfcMetric::getType() const {
  return IfcMetric::s_type;
}

bool IfcMetric::isOfType(Step::ClassType t) {
  return IfcMetric::s_type == t ? true : IfcConstraint::isOfType(t);
}

IfcBenchmarkEnum IfcMetric::getBenchmark() {
  if (Step::BaseObject::inited()) {
    return m_benchmark;
  }
  else {
    return IfcBenchmarkEnum_UNSET;
  }
}

void IfcMetric::setBenchmark(IfcBenchmarkEnum value) {
  m_benchmark = value;
}

IfcLabel IfcMetric::getValueSource() {
  if (Step::BaseObject::inited()) {
    return m_valueSource;
  }
  else {
    return getUnset(m_valueSource);
  }
}

void IfcMetric::setValueSource(const IfcLabel &value) {
  m_valueSource = value;
}

IfcMetricValueSelect *IfcMetric::getDataValue() {
  if (Step::BaseObject::inited()) {
    return m_dataValue.get();
  }
  else {
    return NULL;
  }
}

void IfcMetric::setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value) {
  m_dataValue = value;
}

void IfcMetric::release() {
  IfcConstraint::release();
}

bool IfcMetric::init() {
  bool status = IfcConstraint::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_benchmark = IfcBenchmarkEnum_UNSET;
  }
  else {
    if (arg == ".GREATERTHAN.") {
      m_benchmark = IfcBenchmarkEnum_GREATERTHAN;
    }
    else if (arg == ".GREATERTHANOREQUALTO.") {
      m_benchmark = IfcBenchmarkEnum_GREATERTHANOREQUALTO;
    }
    else if (arg == ".LESSTHAN.") {
      m_benchmark = IfcBenchmarkEnum_LESSTHAN;
    }
    else if (arg == ".LESSTHANOREQUALTO.") {
      m_benchmark = IfcBenchmarkEnum_LESSTHANOREQUALTO;
    }
    else if (arg == ".EQUALTO.") {
      m_benchmark = IfcBenchmarkEnum_EQUALTO;
    }
    else if (arg == ".NOTEQUALTO.") {
      m_benchmark = IfcBenchmarkEnum_NOTEQUALTO;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_valueSource = getUnset(m_valueSource);
  }
  else {
    m_valueSource = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dataValue = NULL;
  }
  else {
    m_dataValue = new IfcMetricValueSelect;
    if (arg[0] == '#') {
      m_dataValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCTEXT") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_dataValue->setIfcText(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMetric::s_type = new Step::ClassType_class("IfcMetric");
IfcMetric_Factory::IfcMetric_Factory() {
}

IfcMetric_Factory::~IfcMetric_Factory() {
  clear(true);
}

void IfcMetric_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMetric_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMetric_Factory::end() {
  return m_idMap.end();
}

IfcMetric *IfcMetric_Factory::get(Step::StepId id) {
  IfcMetric *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMetric * > (it->second);
  }
  else {
    LOG_ERROR("IfcMetric_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMetric * > (create(id));
  }
}

Step::BaseObject *IfcMetric_Factory::create(Step::StepId id) {
  IfcMetric *ret = new IfcMetric(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMetric_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMetric *ret = new IfcMetric(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMetric_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMetric *ret = new IfcMetric(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMetric *IfcMetric_Factory::generate() {
  return static_cast< IfcMetric * > (create(m_model->getNewId()));
}

IfcMetric *IfcMetric_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMetric * > (it->second);
  }
  else {
    return NULL;
  }
}

