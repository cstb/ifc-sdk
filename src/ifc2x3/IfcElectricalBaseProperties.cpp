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


#include <ifc2x3/IfcElectricalBaseProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElectricalBaseProperties::IfcElectricalBaseProperties(Step::Id id, Step::SPFData *args) : 
    IfcEnergyProperties(id, args)
{
    m_ElectricCurrentType = IfcElectricCurrentEnum_UNSET;
    m_InputVoltage = Step::getUnset(m_InputVoltage);
    m_InputFrequency = Step::getUnset(m_InputFrequency);
    m_FullLoadCurrent = Step::getUnset(m_FullLoadCurrent);
    m_MinimumCircuitCurrent = Step::getUnset(m_MinimumCircuitCurrent);
    m_MaximumPowerInput = Step::getUnset(m_MaximumPowerInput);
    m_RatedPowerInput = Step::getUnset(m_RatedPowerInput);
    m_InputPhase = Step::getUnset(m_InputPhase);
}

IfcElectricalBaseProperties::~IfcElectricalBaseProperties()
{}

bool IfcElectricalBaseProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElectricalBaseProperties(this);
}


IfcElectricCurrentEnum IfcElectricalBaseProperties::getElectricCurrentType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElectricCurrentType;
    }
    else 
    {
        return IfcElectricCurrentEnum_UNSET;
    }    
}

IfcElectricCurrentEnum IfcElectricalBaseProperties::getElectricCurrentType() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getElectricCurrentType();
}

void IfcElectricalBaseProperties::setElectricCurrentType(IfcElectricCurrentEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectricCurrentType = value;
}

void IfcElectricalBaseProperties::unsetElectricCurrentType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectricCurrentType = IfcElectricCurrentEnum_UNSET;
}

bool IfcElectricalBaseProperties::testElectricCurrentType() const
{
    return Step::isUnset(getElectricCurrentType()) == false;
}


IfcElectricVoltageMeasure IfcElectricalBaseProperties::getInputVoltage()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InputVoltage;
    }
    else 
    {
        return Step::getUnset(m_InputVoltage);
    }    
}

IfcElectricVoltageMeasure IfcElectricalBaseProperties::getInputVoltage() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getInputVoltage();
}

void IfcElectricalBaseProperties::setInputVoltage(IfcElectricVoltageMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InputVoltage = value;
}

void IfcElectricalBaseProperties::unsetInputVoltage()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InputVoltage = Step::getUnset(getInputVoltage());
}

bool IfcElectricalBaseProperties::testInputVoltage() const
{
    return Step::isUnset(getInputVoltage()) == false;
}


IfcFrequencyMeasure IfcElectricalBaseProperties::getInputFrequency()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InputFrequency;
    }
    else 
    {
        return Step::getUnset(m_InputFrequency);
    }    
}

IfcFrequencyMeasure IfcElectricalBaseProperties::getInputFrequency() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getInputFrequency();
}

void IfcElectricalBaseProperties::setInputFrequency(IfcFrequencyMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InputFrequency = value;
}

void IfcElectricalBaseProperties::unsetInputFrequency()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InputFrequency = Step::getUnset(getInputFrequency());
}

bool IfcElectricalBaseProperties::testInputFrequency() const
{
    return Step::isUnset(getInputFrequency()) == false;
}


IfcElectricCurrentMeasure IfcElectricalBaseProperties::getFullLoadCurrent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FullLoadCurrent;
    }
    else 
    {
        return Step::getUnset(m_FullLoadCurrent);
    }    
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getFullLoadCurrent() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getFullLoadCurrent();
}

void IfcElectricalBaseProperties::setFullLoadCurrent(IfcElectricCurrentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FullLoadCurrent = value;
}

void IfcElectricalBaseProperties::unsetFullLoadCurrent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FullLoadCurrent = Step::getUnset(getFullLoadCurrent());
}

bool IfcElectricalBaseProperties::testFullLoadCurrent() const
{
    return Step::isUnset(getFullLoadCurrent()) == false;
}


IfcElectricCurrentMeasure IfcElectricalBaseProperties::getMinimumCircuitCurrent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinimumCircuitCurrent;
    }
    else 
    {
        return Step::getUnset(m_MinimumCircuitCurrent);
    }    
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getMinimumCircuitCurrent() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getMinimumCircuitCurrent();
}

void IfcElectricalBaseProperties::setMinimumCircuitCurrent(IfcElectricCurrentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumCircuitCurrent = value;
}

void IfcElectricalBaseProperties::unsetMinimumCircuitCurrent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumCircuitCurrent = Step::getUnset(getMinimumCircuitCurrent());
}

bool IfcElectricalBaseProperties::testMinimumCircuitCurrent() const
{
    return Step::isUnset(getMinimumCircuitCurrent()) == false;
}


IfcPowerMeasure IfcElectricalBaseProperties::getMaximumPowerInput()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaximumPowerInput;
    }
    else 
    {
        return Step::getUnset(m_MaximumPowerInput);
    }    
}

IfcPowerMeasure IfcElectricalBaseProperties::getMaximumPowerInput() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getMaximumPowerInput();
}

void IfcElectricalBaseProperties::setMaximumPowerInput(IfcPowerMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumPowerInput = value;
}

void IfcElectricalBaseProperties::unsetMaximumPowerInput()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumPowerInput = Step::getUnset(getMaximumPowerInput());
}

bool IfcElectricalBaseProperties::testMaximumPowerInput() const
{
    return Step::isUnset(getMaximumPowerInput()) == false;
}


IfcPowerMeasure IfcElectricalBaseProperties::getRatedPowerInput()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RatedPowerInput;
    }
    else 
    {
        return Step::getUnset(m_RatedPowerInput);
    }    
}

IfcPowerMeasure IfcElectricalBaseProperties::getRatedPowerInput() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getRatedPowerInput();
}

void IfcElectricalBaseProperties::setRatedPowerInput(IfcPowerMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RatedPowerInput = value;
}

void IfcElectricalBaseProperties::unsetRatedPowerInput()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RatedPowerInput = Step::getUnset(getRatedPowerInput());
}

bool IfcElectricalBaseProperties::testRatedPowerInput() const
{
    return Step::isUnset(getRatedPowerInput()) == false;
}


Step::Integer IfcElectricalBaseProperties::getInputPhase()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InputPhase;
    }
    else 
    {
        return Step::getUnset(m_InputPhase);
    }    
}

Step::Integer IfcElectricalBaseProperties::getInputPhase() const
{
    return const_cast<IfcElectricalBaseProperties *>(this)->getInputPhase();
}

void IfcElectricalBaseProperties::setInputPhase(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InputPhase = value;
}

void IfcElectricalBaseProperties::unsetInputPhase()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InputPhase = Step::getUnset(getInputPhase());
}

bool IfcElectricalBaseProperties::testInputPhase() const
{
    return Step::isUnset(getInputPhase()) == false;
}

bool IfcElectricalBaseProperties::init()
{
    if (IfcEnergyProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElectricCurrentType = IfcElectricCurrentEnum_UNSET;
    }
    else
    {
        if (arg == ".ALTERNATING.")
        {
            m_ElectricCurrentType = IfcElectricCurrentEnum_ALTERNATING;
        }
        else if (arg == ".DIRECT.")
        {
            m_ElectricCurrentType = IfcElectricCurrentEnum_DIRECT;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ElectricCurrentType = IfcElectricCurrentEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InputVoltage = Step::getUnset(m_InputVoltage);
    }
    else
    {
        m_InputVoltage = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InputFrequency = Step::getUnset(m_InputFrequency);
    }
    else
    {
        m_InputFrequency = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FullLoadCurrent = Step::getUnset(m_FullLoadCurrent);
    }
    else
    {
        m_FullLoadCurrent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinimumCircuitCurrent = Step::getUnset(m_MinimumCircuitCurrent);
    }
    else
    {
        m_MinimumCircuitCurrent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaximumPowerInput = Step::getUnset(m_MaximumPowerInput);
    }
    else
    {
        m_MaximumPowerInput = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RatedPowerInput = Step::getUnset(m_RatedPowerInput);
    }
    else
    {
        m_RatedPowerInput = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InputPhase = Step::getUnset(m_InputPhase);
    }
    else
    {
        m_InputPhase = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcElectricalBaseProperties::copy(const IfcElectricalBaseProperties &obj, const CopyOp &copyop)
{
    IfcEnergyProperties::copy(obj, copyop);
    setElectricCurrentType(obj.m_ElectricCurrentType);
    setInputVoltage(obj.m_InputVoltage);
    setInputFrequency(obj.m_InputFrequency);
    setFullLoadCurrent(obj.m_FullLoadCurrent);
    setMinimumCircuitCurrent(obj.m_MinimumCircuitCurrent);
    setMaximumPowerInput(obj.m_MaximumPowerInput);
    setRatedPowerInput(obj.m_RatedPowerInput);
    setInputPhase(obj.m_InputPhase);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElectricalBaseProperties, IfcEnergyProperties)
