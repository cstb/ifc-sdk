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


#include <ifc2x3/IfcReinforcementDefinitionProperties.h>

#include <ifc2x3/IfcSectionReinforcementProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcReinforcementDefinitionProperties::IfcReinforcementDefinitionProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_DefinitionType = Step::getUnset(m_DefinitionType);
    m_ReinforcementSectionDefinitions.setUnset(true);
}

IfcReinforcementDefinitionProperties::~IfcReinforcementDefinitionProperties()
{}

bool IfcReinforcementDefinitionProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcReinforcementDefinitionProperties(this);
}


IfcLabel IfcReinforcementDefinitionProperties::getDefinitionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DefinitionType;
    }
    else 
    {
        return Step::getUnset(m_DefinitionType);
    }    
}

const IfcLabel IfcReinforcementDefinitionProperties::getDefinitionType() const
{
    return const_cast<IfcReinforcementDefinitionProperties *>(this)->getDefinitionType();
}

void IfcReinforcementDefinitionProperties::setDefinitionType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DefinitionType = value;
}

void IfcReinforcementDefinitionProperties::unsetDefinitionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DefinitionType = Step::getUnset(getDefinitionType());
}

bool IfcReinforcementDefinitionProperties::testDefinitionType() const
{
    return Step::isUnset(getDefinitionType()) == false;
}


List_IfcSectionReinforcementProperties_1_n &IfcReinforcementDefinitionProperties::getReinforcementSectionDefinitions()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReinforcementSectionDefinitions;
    }
    else 
    {
        m_ReinforcementSectionDefinitions.setUnset(true);
        return m_ReinforcementSectionDefinitions;
    }    
}

const List_IfcSectionReinforcementProperties_1_n &IfcReinforcementDefinitionProperties::getReinforcementSectionDefinitions() const
{
    return const_cast<IfcReinforcementDefinitionProperties *>(this)->getReinforcementSectionDefinitions();
}

void IfcReinforcementDefinitionProperties::setReinforcementSectionDefinitions(const List_IfcSectionReinforcementProperties_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReinforcementSectionDefinitions = value;
}

void IfcReinforcementDefinitionProperties::unsetReinforcementSectionDefinitions()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReinforcementSectionDefinitions.clear();
    m_ReinforcementSectionDefinitions.setUnset(true);
}

bool IfcReinforcementDefinitionProperties::testReinforcementSectionDefinitions() const
{
    return m_ReinforcementSectionDefinitions.isUnset() == false;
}

bool IfcReinforcementDefinitionProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DefinitionType = Step::getUnset(m_DefinitionType);
    }
    else
    {
        m_DefinitionType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReinforcementSectionDefinitions.setUnset(true);
    }
    else
    {
        m_ReinforcementSectionDefinitions.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ReinforcementSectionDefinitions.push_back(static_cast< IfcSectionReinforcementProperties * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcReinforcementDefinitionProperties::copy(const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setDefinitionType(obj.m_DefinitionType);
    List_IfcSectionReinforcementProperties_1_n::const_iterator it_m_ReinforcementSectionDefinitions;
    for (it_m_ReinforcementSectionDefinitions = obj.m_ReinforcementSectionDefinitions.begin(); it_m_ReinforcementSectionDefinitions != obj.m_ReinforcementSectionDefinitions.end(); ++it_m_ReinforcementSectionDefinitions)
    {
        Step::RefPtr< IfcSectionReinforcementProperties > copyTarget = (IfcSectionReinforcementProperties *) (copyop((*it_m_ReinforcementSectionDefinitions).get()));
        m_ReinforcementSectionDefinitions.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcReinforcementDefinitionProperties, IfcPropertySetDefinition)
