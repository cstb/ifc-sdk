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
#include <ifc2x3/IfcIrregularTimeSeries.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcIrregularTimeSeriesValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcIrregularTimeSeries::IfcIrregularTimeSeries(Step::SPFData *args) : IfcTimeSeries(args) {
  m_values.setUnset(true);
}


IfcIrregularTimeSeries::~IfcIrregularTimeSeries() {
}

bool IfcIrregularTimeSeries::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcIrregularTimeSeries(this);
}

const char *IfcIrregularTimeSeries::type() {
  return "IfcIrregularTimeSeries";
}

Step::ClassType IfcIrregularTimeSeries::getClassType() {
  return IfcIrregularTimeSeries::s_type;
}

Step::ClassType IfcIrregularTimeSeries::getType() const {
  return IfcIrregularTimeSeries::s_type;
}

bool IfcIrregularTimeSeries::isOfType(Step::ClassType t) {
  return IfcIrregularTimeSeries::s_type == t ? true : IfcTimeSeries::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcIrregularTimeSeriesValue > > &IfcIrregularTimeSeries::getValues() {
  if (Step::BaseObject::inited()) {
    return m_values;
  }
  else {
    m_values.setUnset(true);
    return m_values;
  }
}

void IfcIrregularTimeSeries::setValues(const Step::StepList< Step::RefPtr< IfcIrregularTimeSeriesValue > > &value) {
  m_values = value;
}

void IfcIrregularTimeSeries::release() {
  IfcTimeSeries::release();
  m_values.clear();
}

bool IfcIrregularTimeSeries::init() {
  bool status = IfcTimeSeries::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_values.setUnset(true);
  }
  else {
    m_values.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcIrregularTimeSeriesValue > attr2;
        attr2 = static_cast< IfcIrregularTimeSeriesValue * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_values.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcIrregularTimeSeries::s_type = new Step::ClassType_class("IfcIrregularTimeSeries");
IfcIrregularTimeSeries_Factory::IfcIrregularTimeSeries_Factory() {
}

IfcIrregularTimeSeries_Factory::~IfcIrregularTimeSeries_Factory() {
  clear(true);
}

void IfcIrregularTimeSeries_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcIrregularTimeSeries_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcIrregularTimeSeries_Factory::end() {
  return m_idMap.end();
}

IfcIrregularTimeSeries *IfcIrregularTimeSeries_Factory::get(Step::StepId id) {
  IfcIrregularTimeSeries *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcIrregularTimeSeries * > (it->second);
  }
  else {
    LOG_ERROR("IfcIrregularTimeSeries_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcIrregularTimeSeries * > (create(id));
  }
}

Step::BaseObject *IfcIrregularTimeSeries_Factory::create(Step::StepId id) {
  IfcIrregularTimeSeries *ret = new IfcIrregularTimeSeries(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcIrregularTimeSeries_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcIrregularTimeSeries *ret = new IfcIrregularTimeSeries(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcIrregularTimeSeries_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcIrregularTimeSeries *ret = new IfcIrregularTimeSeries(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcIrregularTimeSeries *IfcIrregularTimeSeries_Factory::generate() {
  return static_cast< IfcIrregularTimeSeries * > (create(m_model->getNewId()));
}

IfcIrregularTimeSeries *IfcIrregularTimeSeries_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcIrregularTimeSeries * > (it->second);
  }
  else {
    return NULL;
  }
}

