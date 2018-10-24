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


#include <ifc2x3/IfcEnergyProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEnergyProperties::IfcEnergyProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_EnergySequence = IfcEnergySequenceEnum_UNSET;
    m_UserDefinedEnergySequence = Step::getUnset(m_UserDefinedEnergySequence);
}

IfcEnergyProperties::~IfcEnergyProperties()
{}

bool IfcEnergyProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEnergyProperties(this);
}


IfcEnergySequenceEnum IfcEnergyProperties::getEnergySequence()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EnergySequence;
    }
    else 
    {
        return IfcEnergySequenceEnum_UNSET;
    }    
}

IfcEnergySequenceEnum IfcEnergyProperties::getEnergySequence() const
{
    return const_cast<IfcEnergyProperties *>(this)->getEnergySequence();
}

void IfcEnergyProperties::setEnergySequence(IfcEnergySequenceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EnergySequence = value;
}

void IfcEnergyProperties::unsetEnergySequence()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EnergySequence = IfcEnergySequenceEnum_UNSET;
}

bool IfcEnergyProperties::testEnergySequence() const
{
    return Step::isUnset(getEnergySequence()) == false;
}


IfcLabel IfcEnergyProperties::getUserDefinedEnergySequence()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedEnergySequence;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedEnergySequence);
    }    
}

const IfcLabel IfcEnergyProperties::getUserDefinedEnergySequence() const
{
    return const_cast<IfcEnergyProperties *>(this)->getUserDefinedEnergySequence();
}

void IfcEnergyProperties::setUserDefinedEnergySequence(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedEnergySequence = value;
}

void IfcEnergyProperties::unsetUserDefinedEnergySequence()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedEnergySequence = Step::getUnset(getUserDefinedEnergySequence());
}

bool IfcEnergyProperties::testUserDefinedEnergySequence() const
{
    return Step::isUnset(getUserDefinedEnergySequence()) == false;
}

bool IfcEnergyProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EnergySequence = IfcEnergySequenceEnum_UNSET;
    }
    else
    {
        if (arg == ".PRIMARY.")
        {
            m_EnergySequence = IfcEnergySequenceEnum_PRIMARY;
        }
        else if (arg == ".SECONDARY.")
        {
            m_EnergySequence = IfcEnergySequenceEnum_SECONDARY;
        }
        else if (arg == ".TERTIARY.")
        {
            m_EnergySequence = IfcEnergySequenceEnum_TERTIARY;
        }
        else if (arg == ".AUXILIARY.")
        {
            m_EnergySequence = IfcEnergySequenceEnum_AUXILIARY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_EnergySequence = IfcEnergySequenceEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_EnergySequence = IfcEnergySequenceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedEnergySequence = Step::getUnset(m_UserDefinedEnergySequence);
    }
    else
    {
        m_UserDefinedEnergySequence = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcEnergyProperties::copy(const IfcEnergyProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setEnergySequence(obj.m_EnergySequence);
    setUserDefinedEnergySequence(obj.m_UserDefinedEnergySequence);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEnergyProperties, IfcPropertySetDefinition)
