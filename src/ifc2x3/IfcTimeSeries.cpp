// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcTimeSeries.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcTimeSeries::IfcTimeSeries(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_startTime = NULL;
    m_endTime = NULL;
    m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
    m_dataOrigin = IfcDataOriginEnum_UNSET;
    m_userDefinedDataOrigin = Step::getUnset(m_userDefinedDataOrigin);
    m_unit = NULL;
}

IfcTimeSeries::~IfcTimeSeries() {
}

bool IfcTimeSeries::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTimeSeries(this);
}

const std::string &IfcTimeSeries::type() const {
    return IfcTimeSeries::s_type.getName();
}

const Step::ClassType &IfcTimeSeries::getClassType() {
    return IfcTimeSeries::s_type;
}

const Step::ClassType &IfcTimeSeries::getType() const {
    return IfcTimeSeries::s_type;
}

bool IfcTimeSeries::isOfType(const Step::ClassType &t) const {
    return IfcTimeSeries::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcTimeSeries::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcTimeSeries::getName() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getName();
}

void IfcTimeSeries::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcTimeSeries::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcTimeSeries::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcTimeSeries::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcTimeSeries::getDescription() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getDescription();
}

void IfcTimeSeries::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcTimeSeries::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcTimeSeries::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcDateTimeSelect *IfcTimeSeries::getStartTime() {
    if (Step::BaseObject::inited()) {
        return m_startTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcTimeSeries::getStartTime() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getStartTime();
}

void IfcTimeSeries::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_startTime = value;
}

void IfcTimeSeries::unsetStartTime() {
    m_startTime = Step::getUnset(getStartTime());
}

bool IfcTimeSeries::testStartTime() const {
    return !Step::isUnset(getStartTime());
}

IfcDateTimeSelect *IfcTimeSeries::getEndTime() {
    if (Step::BaseObject::inited()) {
        return m_endTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcTimeSeries::getEndTime() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getEndTime();
}

void IfcTimeSeries::setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_endTime = value;
}

void IfcTimeSeries::unsetEndTime() {
    m_endTime = Step::getUnset(getEndTime());
}

bool IfcTimeSeries::testEndTime() const {
    return !Step::isUnset(getEndTime());
}

IfcTimeSeriesDataTypeEnum IfcTimeSeries::getTimeSeriesDataType() {
    if (Step::BaseObject::inited()) {
        return m_timeSeriesDataType;
    }
    else {
        return IfcTimeSeriesDataTypeEnum_UNSET;
    }
}

const IfcTimeSeriesDataTypeEnum IfcTimeSeries::getTimeSeriesDataType() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getTimeSeriesDataType();
}

void IfcTimeSeries::setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value) {
    m_timeSeriesDataType = value;
}

void IfcTimeSeries::unsetTimeSeriesDataType() {
    m_timeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
}

bool IfcTimeSeries::testTimeSeriesDataType() const {
    return getTimeSeriesDataType() != IfcTimeSeriesDataTypeEnum_UNSET;
}

IfcDataOriginEnum IfcTimeSeries::getDataOrigin() {
    if (Step::BaseObject::inited()) {
        return m_dataOrigin;
    }
    else {
        return IfcDataOriginEnum_UNSET;
    }
}

const IfcDataOriginEnum IfcTimeSeries::getDataOrigin() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getDataOrigin();
}

void IfcTimeSeries::setDataOrigin(IfcDataOriginEnum value) {
    m_dataOrigin = value;
}

void IfcTimeSeries::unsetDataOrigin() {
    m_dataOrigin = IfcDataOriginEnum_UNSET;
}

bool IfcTimeSeries::testDataOrigin() const {
    return getDataOrigin() != IfcDataOriginEnum_UNSET;
}

IfcLabel IfcTimeSeries::getUserDefinedDataOrigin() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedDataOrigin;
    }
    else {
        return Step::getUnset(m_userDefinedDataOrigin);
    }
}

const IfcLabel IfcTimeSeries::getUserDefinedDataOrigin() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getUserDefinedDataOrigin();
}

void IfcTimeSeries::setUserDefinedDataOrigin(const IfcLabel &value) {
    m_userDefinedDataOrigin = value;
}

void IfcTimeSeries::unsetUserDefinedDataOrigin() {
    m_userDefinedDataOrigin = Step::getUnset(getUserDefinedDataOrigin());
}

bool IfcTimeSeries::testUserDefinedDataOrigin() const {
    return !Step::isUnset(getUserDefinedDataOrigin());
}

IfcUnit *IfcTimeSeries::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

const IfcUnit *IfcTimeSeries::getUnit() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getUnit();
}

void IfcTimeSeries::setUnit(const Step::RefPtr< IfcUnit > &value) {
    m_unit = value;
}

void IfcTimeSeries::unsetUnit() {
    m_unit = Step::getUnset(getUnit());
}

bool IfcTimeSeries::testUnit() const {
    return !Step::isUnset(getUnit());
}

Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &IfcTimeSeries::getDocumentedBy() {
    if (Step::BaseObject::inited()) {
        return m_documentedBy;
    }
    else {
        m_documentedBy.setUnset(true);
        return m_documentedBy;
    }
}

const Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &IfcTimeSeries::getDocumentedBy() const {
    IfcTimeSeries * deConstObject = const_cast< IfcTimeSeries * > (this);
    return deConstObject->getDocumentedBy();
}

bool IfcTimeSeries::testDocumentedBy() const {
    return !m_documentedBy.isUnset();
}

bool IfcTimeSeries::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startTime = NULL;
    }
    else {
        m_startTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_startTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
            m_endTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
        m_userDefinedDataOrigin = Step::getUnset(m_userDefinedDataOrigin);
    }
    else {
        m_userDefinedDataOrigin = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unit = NULL;
    }
    else {
        m_unit = new IfcUnit;
        if (arg[0] == '#') {
            m_unit->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
            m_documentedBy.insert(static_cast< IfcTimeSeriesReferenceRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTimeSeries::copy(const IfcTimeSeries &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    m_startTime = new IfcDateTimeSelect;
    m_startTime->copy(*(obj.m_startTime.get()), copyop);
    m_endTime = new IfcDateTimeSelect;
    m_endTime->copy(*(obj.m_endTime.get()), copyop);
    setTimeSeriesDataType(obj.m_timeSeriesDataType);
    setDataOrigin(obj.m_dataOrigin);
    setUserDefinedDataOrigin(obj.m_userDefinedDataOrigin);
    m_unit = new IfcUnit;
    m_unit->copy(*(obj.m_unit.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTimeSeries::s_type("IfcTimeSeries");
