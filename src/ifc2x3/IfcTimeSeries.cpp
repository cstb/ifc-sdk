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
#include <ifc2x3/IfcTimeSeries.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcTimeSeries::IfcTimeSeries(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_startTime = NULL;
  m_endTime = NULL;
  m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
  m_dataOrigin = IfcDataOriginEnum_UNSET;
  m_userDefinedDataOrigin = getUnset(m_userDefinedDataOrigin);
  m_unit = NULL;
  m_documentedBy.setUnset(true);
}


IfcTimeSeries::~IfcTimeSeries() {
}

bool IfcTimeSeries::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTimeSeries(this);
}

const char *IfcTimeSeries::type() {
  return "IfcTimeSeries";
}

Step::ClassType IfcTimeSeries::getClassType() {
  return IfcTimeSeries::s_type;
}

Step::ClassType IfcTimeSeries::getType() const {
  return IfcTimeSeries::s_type;
}

bool IfcTimeSeries::isOfType(Step::ClassType t) {
  return IfcTimeSeries::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcTimeSeries::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcTimeSeries::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcTimeSeries::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcTimeSeries::setDescription(const IfcText &value) {
  m_description = value;
}

IfcDateTimeSelect *IfcTimeSeries::getStartTime() {
  if (Step::BaseObject::inited()) {
    return m_startTime.get();
  }
  else {
    return NULL;
  }
}

void IfcTimeSeries::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_startTime = value;
}

IfcDateTimeSelect *IfcTimeSeries::getEndTime() {
  if (Step::BaseObject::inited()) {
    return m_endTime.get();
  }
  else {
    return NULL;
  }
}

void IfcTimeSeries::setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_endTime = value;
}

IfcTimeSeriesDataTypeEnum IfcTimeSeries::getTimeSeriesDataType() {
  if (Step::BaseObject::inited()) {
    return m_timeSeriesDataType;
  }
  else {
    return IfcTimeSeriesDataTypeEnum_UNSET;
  }
}

void IfcTimeSeries::setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value) {
  m_timeSeriesDataType = value;
}

IfcDataOriginEnum IfcTimeSeries::getDataOrigin() {
  if (Step::BaseObject::inited()) {
    return m_dataOrigin;
  }
  else {
    return IfcDataOriginEnum_UNSET;
  }
}

void IfcTimeSeries::setDataOrigin(IfcDataOriginEnum value) {
  m_dataOrigin = value;
}

IfcLabel IfcTimeSeries::getUserDefinedDataOrigin() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedDataOrigin;
  }
  else {
    return getUnset(m_userDefinedDataOrigin);
  }
}

void IfcTimeSeries::setUserDefinedDataOrigin(const IfcLabel &value) {
  m_userDefinedDataOrigin = value;
}

IfcUnit *IfcTimeSeries::getUnit() {
  if (Step::BaseObject::inited()) {
    return m_unit.get();
  }
  else {
    return NULL;
  }
}

void IfcTimeSeries::setUnit(const Step::RefPtr< IfcUnit > &value) {
  m_unit = value;
}

Step::StepSet< Step::RefPtr< IfcTimeSeriesReferenceRelationship > > &IfcTimeSeries::getDocumentedBy() {
  if (Step::BaseObject::inited()) {
    return m_documentedBy;
  }
  else {
    m_documentedBy.setUnset(true);
    return m_documentedBy;
  }
}

void IfcTimeSeries::setDocumentedBy(const Step::StepSet< Step::RefPtr< IfcTimeSeriesReferenceRelationship > > &value) {
  m_documentedBy = value;
}

void IfcTimeSeries::release() {
}

bool IfcTimeSeries::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_startTime = NULL;
  }
  else {
    m_startTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_startTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_endTime = NULL;
  }
  else {
    m_endTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_endTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
  }
  else {
    if (arg == ".CONTINUOUS.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_CONTINUOUS;
    }
    else if (arg == ".DISCRETE.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_DISCRETE;
    }
    else if (arg == ".DISCRETEBINARY.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_DISCRETEBINARY;
    }
    else if (arg == ".PIECEWISEBINARY.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_PIECEWISEBINARY;
    }
    else if (arg == ".PIECEWISECONSTANT.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_PIECEWISECONSTANT;
    }
    else if (arg == ".PIECEWISECONTINUOUS.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_PIECEWISECONTINUOUS;
    }
    else if (arg == ".NOTDEFINED.") {
      m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dataOrigin = IfcDataOriginEnum_UNSET;
  }
  else {
    if (arg == ".MEASURED.") {
      m_dataOrigin = IfcDataOriginEnum_MEASURED;
    }
    else if (arg == ".PREDICTED.") {
      m_dataOrigin = IfcDataOriginEnum_PREDICTED;
    }
    else if (arg == ".SIMULATED.") {
      m_dataOrigin = IfcDataOriginEnum_SIMULATED;
    }
    else if (arg == ".USERDEFINED.") {
      m_dataOrigin = IfcDataOriginEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_dataOrigin = IfcDataOriginEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedDataOrigin = getUnset(m_userDefinedDataOrigin);
  }
  else {
    m_userDefinedDataOrigin = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unit = NULL;
  }
  else {
    m_unit = new IfcUnit;
    if (arg[0] == '#') {
      m_unit->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  inverses = m_args->getInverses(IfcTimeSeriesReferenceRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_documentedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_documentedBy.insert(static_cast< IfcTimeSeriesReferenceRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTimeSeries::s_type = new Step::ClassType_class("IfcTimeSeries");
