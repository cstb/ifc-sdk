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


#include <ifc2x3/IfcDimensionalExponents.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDimensionalExponents::IfcDimensionalExponents(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_LengthExponent = Step::getUnset(m_LengthExponent);
    m_MassExponent = Step::getUnset(m_MassExponent);
    m_TimeExponent = Step::getUnset(m_TimeExponent);
    m_ElectricCurrentExponent = Step::getUnset(m_ElectricCurrentExponent);
    m_ThermodynamicTemperatureExponent = Step::getUnset(m_ThermodynamicTemperatureExponent);
    m_AmountOfSubstanceExponent = Step::getUnset(m_AmountOfSubstanceExponent);
    m_LuminousIntensityExponent = Step::getUnset(m_LuminousIntensityExponent);
}

IfcDimensionalExponents::~IfcDimensionalExponents()
{}

bool IfcDimensionalExponents::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDimensionalExponents(this);
}


Step::Integer IfcDimensionalExponents::getLengthExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LengthExponent;
    }
    else 
    {
        return Step::getUnset(m_LengthExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getLengthExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getLengthExponent();
}

void IfcDimensionalExponents::setLengthExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LengthExponent = value;
}

void IfcDimensionalExponents::unsetLengthExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LengthExponent = Step::getUnset(getLengthExponent());
}

bool IfcDimensionalExponents::testLengthExponent() const
{
    return Step::isUnset(getLengthExponent()) == false;
}


Step::Integer IfcDimensionalExponents::getMassExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MassExponent;
    }
    else 
    {
        return Step::getUnset(m_MassExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getMassExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getMassExponent();
}

void IfcDimensionalExponents::setMassExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MassExponent = value;
}

void IfcDimensionalExponents::unsetMassExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MassExponent = Step::getUnset(getMassExponent());
}

bool IfcDimensionalExponents::testMassExponent() const
{
    return Step::isUnset(getMassExponent()) == false;
}


Step::Integer IfcDimensionalExponents::getTimeExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeExponent;
    }
    else 
    {
        return Step::getUnset(m_TimeExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getTimeExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getTimeExponent();
}

void IfcDimensionalExponents::setTimeExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeExponent = value;
}

void IfcDimensionalExponents::unsetTimeExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeExponent = Step::getUnset(getTimeExponent());
}

bool IfcDimensionalExponents::testTimeExponent() const
{
    return Step::isUnset(getTimeExponent()) == false;
}


Step::Integer IfcDimensionalExponents::getElectricCurrentExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElectricCurrentExponent;
    }
    else 
    {
        return Step::getUnset(m_ElectricCurrentExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getElectricCurrentExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getElectricCurrentExponent();
}

void IfcDimensionalExponents::setElectricCurrentExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectricCurrentExponent = value;
}

void IfcDimensionalExponents::unsetElectricCurrentExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectricCurrentExponent = Step::getUnset(getElectricCurrentExponent());
}

bool IfcDimensionalExponents::testElectricCurrentExponent() const
{
    return Step::isUnset(getElectricCurrentExponent()) == false;
}


Step::Integer IfcDimensionalExponents::getThermodynamicTemperatureExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermodynamicTemperatureExponent;
    }
    else 
    {
        return Step::getUnset(m_ThermodynamicTemperatureExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getThermodynamicTemperatureExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getThermodynamicTemperatureExponent();
}

void IfcDimensionalExponents::setThermodynamicTemperatureExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermodynamicTemperatureExponent = value;
}

void IfcDimensionalExponents::unsetThermodynamicTemperatureExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermodynamicTemperatureExponent = Step::getUnset(getThermodynamicTemperatureExponent());
}

bool IfcDimensionalExponents::testThermodynamicTemperatureExponent() const
{
    return Step::isUnset(getThermodynamicTemperatureExponent()) == false;
}


Step::Integer IfcDimensionalExponents::getAmountOfSubstanceExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AmountOfSubstanceExponent;
    }
    else 
    {
        return Step::getUnset(m_AmountOfSubstanceExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getAmountOfSubstanceExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getAmountOfSubstanceExponent();
}

void IfcDimensionalExponents::setAmountOfSubstanceExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AmountOfSubstanceExponent = value;
}

void IfcDimensionalExponents::unsetAmountOfSubstanceExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AmountOfSubstanceExponent = Step::getUnset(getAmountOfSubstanceExponent());
}

bool IfcDimensionalExponents::testAmountOfSubstanceExponent() const
{
    return Step::isUnset(getAmountOfSubstanceExponent()) == false;
}


Step::Integer IfcDimensionalExponents::getLuminousIntensityExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LuminousIntensityExponent;
    }
    else 
    {
        return Step::getUnset(m_LuminousIntensityExponent);
    }    
}

Step::Integer IfcDimensionalExponents::getLuminousIntensityExponent() const
{
    return const_cast<IfcDimensionalExponents *>(this)->getLuminousIntensityExponent();
}

void IfcDimensionalExponents::setLuminousIntensityExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LuminousIntensityExponent = value;
}

void IfcDimensionalExponents::unsetLuminousIntensityExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LuminousIntensityExponent = Step::getUnset(getLuminousIntensityExponent());
}

bool IfcDimensionalExponents::testLuminousIntensityExponent() const
{
    return Step::isUnset(getLuminousIntensityExponent()) == false;
}

bool IfcDimensionalExponents::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LengthExponent = Step::getUnset(m_LengthExponent);
    }
    else
    {
        m_LengthExponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MassExponent = Step::getUnset(m_MassExponent);
    }
    else
    {
        m_MassExponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeExponent = Step::getUnset(m_TimeExponent);
    }
    else
    {
        m_TimeExponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElectricCurrentExponent = Step::getUnset(m_ElectricCurrentExponent);
    }
    else
    {
        m_ElectricCurrentExponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermodynamicTemperatureExponent = Step::getUnset(m_ThermodynamicTemperatureExponent);
    }
    else
    {
        m_ThermodynamicTemperatureExponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AmountOfSubstanceExponent = Step::getUnset(m_AmountOfSubstanceExponent);
    }
    else
    {
        m_AmountOfSubstanceExponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LuminousIntensityExponent = Step::getUnset(m_LuminousIntensityExponent);
    }
    else
    {
        m_LuminousIntensityExponent = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcDimensionalExponents::copy(const IfcDimensionalExponents &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setLengthExponent(obj.m_LengthExponent);
    setMassExponent(obj.m_MassExponent);
    setTimeExponent(obj.m_TimeExponent);
    setElectricCurrentExponent(obj.m_ElectricCurrentExponent);
    setThermodynamicTemperatureExponent(obj.m_ThermodynamicTemperatureExponent);
    setAmountOfSubstanceExponent(obj.m_AmountOfSubstanceExponent);
    setLuminousIntensityExponent(obj.m_LuminousIntensityExponent);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDimensionalExponents, Step::BaseEntity)
