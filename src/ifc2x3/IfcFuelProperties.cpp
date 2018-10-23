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


#include <ifc2x3/IfcFuelProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFuelProperties::IfcFuelProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_CombustionTemperature = Step::getUnset(m_CombustionTemperature);
    m_CarbonContent = Step::getUnset(m_CarbonContent);
    m_LowerHeatingValue = Step::getUnset(m_LowerHeatingValue);
    m_HigherHeatingValue = Step::getUnset(m_HigherHeatingValue);
}

IfcFuelProperties::~IfcFuelProperties()
{}

bool IfcFuelProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFuelProperties(this);
}


IfcThermodynamicTemperatureMeasure IfcFuelProperties::getCombustionTemperature()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CombustionTemperature;
    }
    else 
    {
        return Step::getUnset(m_CombustionTemperature);
    }    
}

IfcThermodynamicTemperatureMeasure IfcFuelProperties::getCombustionTemperature() const
{
    return const_cast<IfcFuelProperties *>(this)->getCombustionTemperature();
}

void IfcFuelProperties::setCombustionTemperature(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CombustionTemperature = value;
}

void IfcFuelProperties::unsetCombustionTemperature()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CombustionTemperature = Step::getUnset(getCombustionTemperature());
}

bool IfcFuelProperties::testCombustionTemperature() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCombustionTemperature()) == false;
}


IfcPositiveRatioMeasure IfcFuelProperties::getCarbonContent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CarbonContent;
    }
    else 
    {
        return Step::getUnset(m_CarbonContent);
    }    
}

IfcPositiveRatioMeasure IfcFuelProperties::getCarbonContent() const
{
    return const_cast<IfcFuelProperties *>(this)->getCarbonContent();
}

void IfcFuelProperties::setCarbonContent(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CarbonContent = value;
}

void IfcFuelProperties::unsetCarbonContent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CarbonContent = Step::getUnset(getCarbonContent());
}

bool IfcFuelProperties::testCarbonContent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCarbonContent()) == false;
}


IfcHeatingValueMeasure IfcFuelProperties::getLowerHeatingValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LowerHeatingValue;
    }
    else 
    {
        return Step::getUnset(m_LowerHeatingValue);
    }    
}

IfcHeatingValueMeasure IfcFuelProperties::getLowerHeatingValue() const
{
    return const_cast<IfcFuelProperties *>(this)->getLowerHeatingValue();
}

void IfcFuelProperties::setLowerHeatingValue(IfcHeatingValueMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerHeatingValue = value;
}

void IfcFuelProperties::unsetLowerHeatingValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerHeatingValue = Step::getUnset(getLowerHeatingValue());
}

bool IfcFuelProperties::testLowerHeatingValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLowerHeatingValue()) == false;
}


IfcHeatingValueMeasure IfcFuelProperties::getHigherHeatingValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HigherHeatingValue;
    }
    else 
    {
        return Step::getUnset(m_HigherHeatingValue);
    }    
}

IfcHeatingValueMeasure IfcFuelProperties::getHigherHeatingValue() const
{
    return const_cast<IfcFuelProperties *>(this)->getHigherHeatingValue();
}

void IfcFuelProperties::setHigherHeatingValue(IfcHeatingValueMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HigherHeatingValue = value;
}

void IfcFuelProperties::unsetHigherHeatingValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HigherHeatingValue = Step::getUnset(getHigherHeatingValue());
}

bool IfcFuelProperties::testHigherHeatingValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getHigherHeatingValue()) == false;
}

bool IfcFuelProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CombustionTemperature = Step::getUnset(m_CombustionTemperature);
    }
    else
    {
        m_CombustionTemperature = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CarbonContent = Step::getUnset(m_CarbonContent);
    }
    else
    {
        m_CarbonContent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LowerHeatingValue = Step::getUnset(m_LowerHeatingValue);
    }
    else
    {
        m_LowerHeatingValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HigherHeatingValue = Step::getUnset(m_HigherHeatingValue);
    }
    else
    {
        m_HigherHeatingValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcFuelProperties::copy(const IfcFuelProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setCombustionTemperature(obj.m_CombustionTemperature);
    setCarbonContent(obj.m_CarbonContent);
    setLowerHeatingValue(obj.m_LowerHeatingValue);
    setHigherHeatingValue(obj.m_HigherHeatingValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFuelProperties, IfcMaterialProperties)
