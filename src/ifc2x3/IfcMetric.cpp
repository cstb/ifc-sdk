// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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

#include <ifc2x3/IfcMetricValueSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMetric::IfcMetric(Step::Id id, Step::SPFData *args) : 
    IfcConstraint(id, args)
{
    m_Benchmark = IfcBenchmarkEnum_UNSET;
    m_ValueSource = Step::getUnset(m_ValueSource);
    m_DataValue = NULL;
}

IfcMetric::~IfcMetric()
{}

bool IfcMetric::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMetric(this);
}


IfcBenchmarkEnum IfcMetric::getBenchmark()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Benchmark;
    }
    else 
    {
        return IfcBenchmarkEnum_UNSET;
    }    
}

IfcBenchmarkEnum IfcMetric::getBenchmark() const
{
    return const_cast<IfcMetric *>(this)->getBenchmark();
}

void IfcMetric::setBenchmark(IfcBenchmarkEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Benchmark = value;
}

void IfcMetric::unsetBenchmark()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Benchmark = IfcBenchmarkEnum_UNSET;
}

bool IfcMetric::testBenchmark() const
{
    return Step::isUnset(getBenchmark()) == false;
}


IfcLabel IfcMetric::getValueSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ValueSource;
    }
    else 
    {
        return Step::getUnset(m_ValueSource);
    }    
}

const IfcLabel IfcMetric::getValueSource() const
{
    return const_cast<IfcMetric *>(this)->getValueSource();
}

void IfcMetric::setValueSource(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValueSource = value;
}

void IfcMetric::unsetValueSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValueSource = Step::getUnset(getValueSource());
}

bool IfcMetric::testValueSource() const
{
    return Step::isUnset(getValueSource()) == false;
}


IfcMetricValueSelect *IfcMetric::getDataValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DataValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMetricValueSelect *IfcMetric::getDataValue() const
{
    return const_cast<IfcMetric *>(this)->getDataValue();
}

void IfcMetric::setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DataValue = value;
}

void IfcMetric::unsetDataValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DataValue = Step::getUnset(getDataValue());
}

bool IfcMetric::testDataValue() const
{
    return Step::isUnset(getDataValue()) == false;
}

bool IfcMetric::init()
{
    if (IfcConstraint::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Benchmark = IfcBenchmarkEnum_UNSET;
    }
    else
    {
        if (arg == ".GREATERTHAN.")
        {
            m_Benchmark = IfcBenchmarkEnum_GREATERTHAN;
        }
        else if (arg == ".GREATERTHANOREQUALTO.")
        {
            m_Benchmark = IfcBenchmarkEnum_GREATERTHANOREQUALTO;
        }
        else if (arg == ".LESSTHAN.")
        {
            m_Benchmark = IfcBenchmarkEnum_LESSTHAN;
        }
        else if (arg == ".LESSTHANOREQUALTO.")
        {
            m_Benchmark = IfcBenchmarkEnum_LESSTHANOREQUALTO;
        }
        else if (arg == ".EQUALTO.")
        {
            m_Benchmark = IfcBenchmarkEnum_EQUALTO;
        }
        else if (arg == ".NOTEQUALTO.")
        {
            m_Benchmark = IfcBenchmarkEnum_NOTEQUALTO;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ValueSource = Step::getUnset(m_ValueSource);
    }
    else
    {
        m_ValueSource = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DataValue = NULL;
    }
    else
    {
        m_DataValue = new IfcMetricValueSelect;
        if (arg[0] == '#') {
            m_DataValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCTEXT")
                {
                    IfcText tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_DataValue->setIfcText(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcMetric::copy(const IfcMetric &obj, const CopyOp &copyop)
{
    IfcConstraint::copy(obj, copyop);
    setBenchmark(obj.m_Benchmark);
    setValueSource(obj.m_ValueSource);
    setDataValue((IfcMetricValueSelect*)copyop(obj.m_DataValue.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMetric, IfcConstraint)
