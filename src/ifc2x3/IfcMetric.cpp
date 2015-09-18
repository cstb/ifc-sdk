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



#include <ifc2x3/IfcMetric.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcMetricValueSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMetric::IfcMetric(Step::Id id, Step::SPFData *args) : IfcConstraint(id, args) {
    m_benchmark = IfcBenchmarkEnum_UNSET;
    m_valueSource = Step::getUnset(m_valueSource);
    m_dataValue = NULL;
}

IfcMetric::~IfcMetric() {
}

bool IfcMetric::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMetric(this);
}

const std::string &IfcMetric::type() const {
    return IfcMetric::s_type.getName();
}

const Step::ClassType &IfcMetric::getClassType() {
    return IfcMetric::s_type;
}

const Step::ClassType &IfcMetric::getType() const {
    return IfcMetric::s_type;
}

bool IfcMetric::isOfType(const Step::ClassType &t) const {
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

const IfcBenchmarkEnum IfcMetric::getBenchmark() const {
    IfcMetric * deConstObject = const_cast< IfcMetric * > (this);
    return deConstObject->getBenchmark();
}

void IfcMetric::setBenchmark(IfcBenchmarkEnum value) {
    m_benchmark = value;
}

void IfcMetric::unsetBenchmark() {
    m_benchmark = IfcBenchmarkEnum_UNSET;
}

bool IfcMetric::testBenchmark() const {
    return getBenchmark() != IfcBenchmarkEnum_UNSET;
}

IfcLabel IfcMetric::getValueSource() {
    if (Step::BaseObject::inited()) {
        return m_valueSource;
    }
    else {
        return Step::getUnset(m_valueSource);
    }
}

const IfcLabel IfcMetric::getValueSource() const {
    IfcMetric * deConstObject = const_cast< IfcMetric * > (this);
    return deConstObject->getValueSource();
}

void IfcMetric::setValueSource(const IfcLabel &value) {
    m_valueSource = value;
}

void IfcMetric::unsetValueSource() {
    m_valueSource = Step::getUnset(getValueSource());
}

bool IfcMetric::testValueSource() const {
    return !Step::isUnset(getValueSource());
}

IfcMetricValueSelect *IfcMetric::getDataValue() {
    if (Step::BaseObject::inited()) {
        return m_dataValue.get();
    }
    else {
        return NULL;
    }
}

const IfcMetricValueSelect *IfcMetric::getDataValue() const {
    IfcMetric * deConstObject = const_cast< IfcMetric * > (this);
    return deConstObject->getDataValue();
}

void IfcMetric::setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value) {
    m_dataValue = value;
}

void IfcMetric::unsetDataValue() {
    m_dataValue = Step::getUnset(getDataValue());
}

bool IfcMetric::testDataValue() const {
    return !Step::isUnset(getDataValue());
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
        m_valueSource = Step::getUnset(m_valueSource);
    }
    else {
        m_valueSource = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dataValue = NULL;
    }
    else {
        m_dataValue = new IfcMetricValueSelect;
        if (arg[0] == '#') {
            m_dataValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCTEXT") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_dataValue->setIfcText(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcMetric::copy(const IfcMetric &obj, const CopyOp &copyop) {
    IfcConstraint::copy(obj, copyop);
    setBenchmark(obj.m_benchmark);
    setValueSource(obj.m_valueSource);
    m_dataValue = new IfcMetricValueSelect;
    m_dataValue->copy(*(obj.m_dataValue.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMetric::s_type("IfcMetric");
