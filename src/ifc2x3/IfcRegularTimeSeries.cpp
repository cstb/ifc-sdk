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



#include <ifc2x3/IfcRegularTimeSeries.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeriesValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRegularTimeSeries::IfcRegularTimeSeries(Step::Id id, Step::SPFData *args) : IfcTimeSeries(id, args) {
    m_timeStep = Step::getUnset(m_timeStep);
}

IfcRegularTimeSeries::~IfcRegularTimeSeries() {
}

bool IfcRegularTimeSeries::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRegularTimeSeries(this);
}

const std::string &IfcRegularTimeSeries::type() const {
    return IfcRegularTimeSeries::s_type.getName();
}

const Step::ClassType &IfcRegularTimeSeries::getClassType() {
    return IfcRegularTimeSeries::s_type;
}

const Step::ClassType &IfcRegularTimeSeries::getType() const {
    return IfcRegularTimeSeries::s_type;
}

bool IfcRegularTimeSeries::isOfType(const Step::ClassType &t) const {
    return IfcRegularTimeSeries::s_type == t ? true : IfcTimeSeries::isOfType(t);
}

IfcTimeMeasure IfcRegularTimeSeries::getTimeStep() {
    if (Step::BaseObject::inited()) {
        return m_timeStep;
    }
    else {
        return Step::getUnset(m_timeStep);
    }
}

const IfcTimeMeasure IfcRegularTimeSeries::getTimeStep() const {
    IfcRegularTimeSeries * deConstObject = const_cast< IfcRegularTimeSeries * > (this);
    return deConstObject->getTimeStep();
}

void IfcRegularTimeSeries::setTimeStep(IfcTimeMeasure value) {
    m_timeStep = value;
}

void IfcRegularTimeSeries::unsetTimeStep() {
    m_timeStep = Step::getUnset(getTimeStep());
}

bool IfcRegularTimeSeries::testTimeStep() const {
    return !Step::isUnset(getTimeStep());
}

List_IfcTimeSeriesValue_1_n &IfcRegularTimeSeries::getValues() {
    if (Step::BaseObject::inited()) {
        return m_values;
    }
    else {
        m_values.setUnset(true);
        return m_values;
    }
}

const List_IfcTimeSeriesValue_1_n &IfcRegularTimeSeries::getValues() const {
    IfcRegularTimeSeries * deConstObject = const_cast< IfcRegularTimeSeries * > (this);
    return deConstObject->getValues();
}

void IfcRegularTimeSeries::setValues(const List_IfcTimeSeriesValue_1_n &value) {
    m_values = value;
}

void IfcRegularTimeSeries::unsetValues() {
    m_values.clear();
    m_values.setUnset(true);
}

bool IfcRegularTimeSeries::testValues() const {
    return !m_values.isUnset();
}

bool IfcRegularTimeSeries::init() {
    bool status = IfcTimeSeries::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeStep = Step::getUnset(m_timeStep);
    }
    else {
        m_timeStep = Step::spfToReal(arg);
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
                Step::RefPtr< IfcTimeSeriesValue > attr2;
                attr2 = static_cast< IfcTimeSeriesValue * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_values.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRegularTimeSeries::copy(const IfcRegularTimeSeries &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcTimeSeriesValue >, 1 >::const_iterator it_m_values;
    IfcTimeSeries::copy(obj, copyop);
    setTimeStep(obj.m_timeStep);
    for (it_m_values = obj.m_values.begin(); it_m_values != obj.m_values.end(); ++it_m_values) {
        Step::RefPtr< IfcTimeSeriesValue > copyTarget = (IfcTimeSeriesValue *) (copyop((*it_m_values).get()));
        m_values.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRegularTimeSeries::s_type("IfcRegularTimeSeries");
