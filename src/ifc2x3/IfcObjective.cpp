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



#include <ifc2x3/IfcObjective.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcMetric.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcObjective::IfcObjective(Step::Id id, Step::SPFData *args) : IfcConstraint(id, args) {
    m_benchmarkValues = NULL;
    m_resultValues = NULL;
    m_objectiveQualifier = IfcObjectiveEnum_UNSET;
    m_userDefinedQualifier = Step::getUnset(m_userDefinedQualifier);
}

IfcObjective::~IfcObjective() {
}

bool IfcObjective::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcObjective(this);
}

const std::string &IfcObjective::type() const {
    return IfcObjective::s_type.getName();
}

const Step::ClassType &IfcObjective::getClassType() {
    return IfcObjective::s_type;
}

const Step::ClassType &IfcObjective::getType() const {
    return IfcObjective::s_type;
}

bool IfcObjective::isOfType(const Step::ClassType &t) const {
    return IfcObjective::s_type == t ? true : IfcConstraint::isOfType(t);
}

IfcMetric *IfcObjective::getBenchmarkValues() {
    if (Step::BaseObject::inited()) {
        return m_benchmarkValues.get();
    }
    else {
        return NULL;
    }
}

const IfcMetric *IfcObjective::getBenchmarkValues() const {
    IfcObjective * deConstObject = const_cast< IfcObjective * > (this);
    return deConstObject->getBenchmarkValues();
}

void IfcObjective::setBenchmarkValues(const Step::RefPtr< IfcMetric > &value) {
    m_benchmarkValues = value;
}

void IfcObjective::unsetBenchmarkValues() {
    m_benchmarkValues = Step::getUnset(getBenchmarkValues());
}

bool IfcObjective::testBenchmarkValues() const {
    return !Step::isUnset(getBenchmarkValues());
}

IfcMetric *IfcObjective::getResultValues() {
    if (Step::BaseObject::inited()) {
        return m_resultValues.get();
    }
    else {
        return NULL;
    }
}

const IfcMetric *IfcObjective::getResultValues() const {
    IfcObjective * deConstObject = const_cast< IfcObjective * > (this);
    return deConstObject->getResultValues();
}

void IfcObjective::setResultValues(const Step::RefPtr< IfcMetric > &value) {
    m_resultValues = value;
}

void IfcObjective::unsetResultValues() {
    m_resultValues = Step::getUnset(getResultValues());
}

bool IfcObjective::testResultValues() const {
    return !Step::isUnset(getResultValues());
}

IfcObjectiveEnum IfcObjective::getObjectiveQualifier() {
    if (Step::BaseObject::inited()) {
        return m_objectiveQualifier;
    }
    else {
        return IfcObjectiveEnum_UNSET;
    }
}

const IfcObjectiveEnum IfcObjective::getObjectiveQualifier() const {
    IfcObjective * deConstObject = const_cast< IfcObjective * > (this);
    return deConstObject->getObjectiveQualifier();
}

void IfcObjective::setObjectiveQualifier(IfcObjectiveEnum value) {
    m_objectiveQualifier = value;
}

void IfcObjective::unsetObjectiveQualifier() {
    m_objectiveQualifier = IfcObjectiveEnum_UNSET;
}

bool IfcObjective::testObjectiveQualifier() const {
    return getObjectiveQualifier() != IfcObjectiveEnum_UNSET;
}

IfcLabel IfcObjective::getUserDefinedQualifier() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedQualifier;
    }
    else {
        return Step::getUnset(m_userDefinedQualifier);
    }
}

const IfcLabel IfcObjective::getUserDefinedQualifier() const {
    IfcObjective * deConstObject = const_cast< IfcObjective * > (this);
    return deConstObject->getUserDefinedQualifier();
}

void IfcObjective::setUserDefinedQualifier(const IfcLabel &value) {
    m_userDefinedQualifier = value;
}

void IfcObjective::unsetUserDefinedQualifier() {
    m_userDefinedQualifier = Step::getUnset(getUserDefinedQualifier());
}

bool IfcObjective::testUserDefinedQualifier() const {
    return !Step::isUnset(getUserDefinedQualifier());
}

bool IfcObjective::init() {
    bool status = IfcConstraint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_benchmarkValues = NULL;
    }
    else {
        m_benchmarkValues = static_cast< IfcMetric * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resultValues = NULL;
    }
    else {
        m_resultValues = static_cast< IfcMetric * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_objectiveQualifier = IfcObjectiveEnum_UNSET;
    }
    else {
        if (arg == ".CODECOMPLIANCE.") {
            m_objectiveQualifier = IfcObjectiveEnum_CODECOMPLIANCE;
        }
        else if (arg == ".DESIGNINTENT.") {
            m_objectiveQualifier = IfcObjectiveEnum_DESIGNINTENT;
        }
        else if (arg == ".HEALTHANDSAFETY.") {
            m_objectiveQualifier = IfcObjectiveEnum_HEALTHANDSAFETY;
        }
        else if (arg == ".REQUIREMENT.") {
            m_objectiveQualifier = IfcObjectiveEnum_REQUIREMENT;
        }
        else if (arg == ".SPECIFICATION.") {
            m_objectiveQualifier = IfcObjectiveEnum_SPECIFICATION;
        }
        else if (arg == ".TRIGGERCONDITION.") {
            m_objectiveQualifier = IfcObjectiveEnum_TRIGGERCONDITION;
        }
        else if (arg == ".USERDEFINED.") {
            m_objectiveQualifier = IfcObjectiveEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_objectiveQualifier = IfcObjectiveEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedQualifier = Step::getUnset(m_userDefinedQualifier);
    }
    else {
        m_userDefinedQualifier = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcObjective::copy(const IfcObjective &obj, const CopyOp &copyop) {
    IfcConstraint::copy(obj, copyop);
    setBenchmarkValues((IfcMetric*)copyop(obj.m_benchmarkValues.get()));
    setResultValues((IfcMetric*)copyop(obj.m_resultValues.get()));
    setObjectiveQualifier(obj.m_objectiveQualifier);
    setUserDefinedQualifier(obj.m_userDefinedQualifier);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcObjective::s_type("IfcObjective");
