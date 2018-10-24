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


#include <ifc2x3/IfcConversionBasedUnit.h>

#include <ifc2x3/IfcMeasureWithUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConversionBasedUnit::IfcConversionBasedUnit(Step::Id id, Step::SPFData *args) : 
    IfcNamedUnit(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_ConversionFactor = NULL;
}

IfcConversionBasedUnit::~IfcConversionBasedUnit()
{}

bool IfcConversionBasedUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConversionBasedUnit(this);
}


IfcLabel IfcConversionBasedUnit::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcConversionBasedUnit::getName() const
{
    return const_cast<IfcConversionBasedUnit *>(this)->getName();
}

void IfcConversionBasedUnit::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcConversionBasedUnit::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcConversionBasedUnit::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConversionFactor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor() const
{
    return const_cast<IfcConversionBasedUnit *>(this)->getConversionFactor();
}

void IfcConversionBasedUnit::setConversionFactor(const Step::RefPtr< IfcMeasureWithUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConversionFactor = value;
}

void IfcConversionBasedUnit::unsetConversionFactor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConversionFactor = Step::getUnset(getConversionFactor());
}

bool IfcConversionBasedUnit::testConversionFactor() const
{
    return Step::isUnset(getConversionFactor()) == false;
}

bool IfcConversionBasedUnit::init()
{
    if (IfcNamedUnit::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConversionFactor = NULL;
    }
    else
    {
        m_ConversionFactor = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcConversionBasedUnit::copy(const IfcConversionBasedUnit &obj, const CopyOp &copyop)
{
    IfcNamedUnit::copy(obj, copyop);
    setName(obj.m_Name);
    setConversionFactor((IfcMeasureWithUnit*)copyop(obj.m_ConversionFactor.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConversionBasedUnit, IfcNamedUnit)
