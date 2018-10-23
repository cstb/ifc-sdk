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


#include <ifc2x3/IfcProductsOfCombustionProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProductsOfCombustionProperties::IfcProductsOfCombustionProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_SpecificHeatCapacity = Step::getUnset(m_SpecificHeatCapacity);
    m_N20Content = Step::getUnset(m_N20Content);
    m_COContent = Step::getUnset(m_COContent);
    m_CO2Content = Step::getUnset(m_CO2Content);
}

IfcProductsOfCombustionProperties::~IfcProductsOfCombustionProperties()
{}

bool IfcProductsOfCombustionProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProductsOfCombustionProperties(this);
}


IfcSpecificHeatCapacityMeasure IfcProductsOfCombustionProperties::getSpecificHeatCapacity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SpecificHeatCapacity;
    }
    else 
    {
        return Step::getUnset(m_SpecificHeatCapacity);
    }    
}

IfcSpecificHeatCapacityMeasure IfcProductsOfCombustionProperties::getSpecificHeatCapacity() const
{
    return const_cast<IfcProductsOfCombustionProperties *>(this)->getSpecificHeatCapacity();
}

void IfcProductsOfCombustionProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecificHeatCapacity = value;
}

void IfcProductsOfCombustionProperties::unsetSpecificHeatCapacity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecificHeatCapacity = Step::getUnset(getSpecificHeatCapacity());
}

bool IfcProductsOfCombustionProperties::testSpecificHeatCapacity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSpecificHeatCapacity()) == false;
}


IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getN20Content()
{
    if (Step::BaseObject::inited()) 
    {
        return m_N20Content;
    }
    else 
    {
        return Step::getUnset(m_N20Content);
    }    
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getN20Content() const
{
    return const_cast<IfcProductsOfCombustionProperties *>(this)->getN20Content();
}

void IfcProductsOfCombustionProperties::setN20Content(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_N20Content = value;
}

void IfcProductsOfCombustionProperties::unsetN20Content()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_N20Content = Step::getUnset(getN20Content());
}

bool IfcProductsOfCombustionProperties::testN20Content() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getN20Content()) == false;
}


IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCOContent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_COContent;
    }
    else 
    {
        return Step::getUnset(m_COContent);
    }    
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCOContent() const
{
    return const_cast<IfcProductsOfCombustionProperties *>(this)->getCOContent();
}

void IfcProductsOfCombustionProperties::setCOContent(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_COContent = value;
}

void IfcProductsOfCombustionProperties::unsetCOContent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_COContent = Step::getUnset(getCOContent());
}

bool IfcProductsOfCombustionProperties::testCOContent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCOContent()) == false;
}


IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCO2Content()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CO2Content;
    }
    else 
    {
        return Step::getUnset(m_CO2Content);
    }    
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCO2Content() const
{
    return const_cast<IfcProductsOfCombustionProperties *>(this)->getCO2Content();
}

void IfcProductsOfCombustionProperties::setCO2Content(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CO2Content = value;
}

void IfcProductsOfCombustionProperties::unsetCO2Content()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CO2Content = Step::getUnset(getCO2Content());
}

bool IfcProductsOfCombustionProperties::testCO2Content() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCO2Content()) == false;
}

bool IfcProductsOfCombustionProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SpecificHeatCapacity = Step::getUnset(m_SpecificHeatCapacity);
    }
    else
    {
        m_SpecificHeatCapacity = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_N20Content = Step::getUnset(m_N20Content);
    }
    else
    {
        m_N20Content = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_COContent = Step::getUnset(m_COContent);
    }
    else
    {
        m_COContent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CO2Content = Step::getUnset(m_CO2Content);
    }
    else
    {
        m_CO2Content = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcProductsOfCombustionProperties::copy(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setSpecificHeatCapacity(obj.m_SpecificHeatCapacity);
    setN20Content(obj.m_N20Content);
    setCOContent(obj.m_COContent);
    setCO2Content(obj.m_CO2Content);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProductsOfCombustionProperties, IfcMaterialProperties)
