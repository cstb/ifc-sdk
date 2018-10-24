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


#include <ifc2x3/IfcThermalMaterialProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcThermalMaterialProperties::IfcThermalMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_SpecificHeatCapacity = Step::getUnset(m_SpecificHeatCapacity);
    m_BoilingPoint = Step::getUnset(m_BoilingPoint);
    m_FreezingPoint = Step::getUnset(m_FreezingPoint);
    m_ThermalConductivity = Step::getUnset(m_ThermalConductivity);
}

IfcThermalMaterialProperties::~IfcThermalMaterialProperties()
{}

bool IfcThermalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcThermalMaterialProperties(this);
}


IfcSpecificHeatCapacityMeasure IfcThermalMaterialProperties::getSpecificHeatCapacity()
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

IfcSpecificHeatCapacityMeasure IfcThermalMaterialProperties::getSpecificHeatCapacity() const
{
    return const_cast<IfcThermalMaterialProperties *>(this)->getSpecificHeatCapacity();
}

void IfcThermalMaterialProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecificHeatCapacity = value;
}

void IfcThermalMaterialProperties::unsetSpecificHeatCapacity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecificHeatCapacity = Step::getUnset(getSpecificHeatCapacity());
}

bool IfcThermalMaterialProperties::testSpecificHeatCapacity() const
{
    return Step::isUnset(getSpecificHeatCapacity()) == false;
}


IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getBoilingPoint()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BoilingPoint;
    }
    else 
    {
        return Step::getUnset(m_BoilingPoint);
    }    
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getBoilingPoint() const
{
    return const_cast<IfcThermalMaterialProperties *>(this)->getBoilingPoint();
}

void IfcThermalMaterialProperties::setBoilingPoint(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoilingPoint = value;
}

void IfcThermalMaterialProperties::unsetBoilingPoint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoilingPoint = Step::getUnset(getBoilingPoint());
}

bool IfcThermalMaterialProperties::testBoilingPoint() const
{
    return Step::isUnset(getBoilingPoint()) == false;
}


IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getFreezingPoint()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FreezingPoint;
    }
    else 
    {
        return Step::getUnset(m_FreezingPoint);
    }    
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getFreezingPoint() const
{
    return const_cast<IfcThermalMaterialProperties *>(this)->getFreezingPoint();
}

void IfcThermalMaterialProperties::setFreezingPoint(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FreezingPoint = value;
}

void IfcThermalMaterialProperties::unsetFreezingPoint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FreezingPoint = Step::getUnset(getFreezingPoint());
}

bool IfcThermalMaterialProperties::testFreezingPoint() const
{
    return Step::isUnset(getFreezingPoint()) == false;
}


IfcThermalConductivityMeasure IfcThermalMaterialProperties::getThermalConductivity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalConductivity;
    }
    else 
    {
        return Step::getUnset(m_ThermalConductivity);
    }    
}

IfcThermalConductivityMeasure IfcThermalMaterialProperties::getThermalConductivity() const
{
    return const_cast<IfcThermalMaterialProperties *>(this)->getThermalConductivity();
}

void IfcThermalMaterialProperties::setThermalConductivity(IfcThermalConductivityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalConductivity = value;
}

void IfcThermalMaterialProperties::unsetThermalConductivity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalConductivity = Step::getUnset(getThermalConductivity());
}

bool IfcThermalMaterialProperties::testThermalConductivity() const
{
    return Step::isUnset(getThermalConductivity()) == false;
}

bool IfcThermalMaterialProperties::init()
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
        m_BoilingPoint = Step::getUnset(m_BoilingPoint);
    }
    else
    {
        m_BoilingPoint = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FreezingPoint = Step::getUnset(m_FreezingPoint);
    }
    else
    {
        m_FreezingPoint = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalConductivity = Step::getUnset(m_ThermalConductivity);
    }
    else
    {
        m_ThermalConductivity = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcThermalMaterialProperties::copy(const IfcThermalMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setSpecificHeatCapacity(obj.m_SpecificHeatCapacity);
    setBoilingPoint(obj.m_BoilingPoint);
    setFreezingPoint(obj.m_FreezingPoint);
    setThermalConductivity(obj.m_ThermalConductivity);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcThermalMaterialProperties, IfcMaterialProperties)
