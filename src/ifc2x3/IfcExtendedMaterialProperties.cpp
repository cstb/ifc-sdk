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


#include <ifc2x3/IfcExtendedMaterialProperties.h>

#include <ifc2x3/IfcProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcExtendedMaterialProperties::IfcExtendedMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_ExtendedProperties.setUnset(true);
    m_Description = Step::getUnset(m_Description);
    m_Name = Step::getUnset(m_Name);
}

IfcExtendedMaterialProperties::~IfcExtendedMaterialProperties()
{}

bool IfcExtendedMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcExtendedMaterialProperties(this);
}


Set_IfcProperty_1_n &IfcExtendedMaterialProperties::getExtendedProperties()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ExtendedProperties;
    }
    else 
    {
        m_ExtendedProperties.setUnset(true);
        return m_ExtendedProperties;
    }    
}

const Set_IfcProperty_1_n &IfcExtendedMaterialProperties::getExtendedProperties() const
{
    return const_cast<IfcExtendedMaterialProperties *>(this)->getExtendedProperties();
}

void IfcExtendedMaterialProperties::setExtendedProperties(const Set_IfcProperty_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ExtendedProperties = value;
}

void IfcExtendedMaterialProperties::unsetExtendedProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ExtendedProperties.clear();
    m_ExtendedProperties.setUnset(true);
}

bool IfcExtendedMaterialProperties::testExtendedProperties() const
{
    return m_ExtendedProperties.isUnset() == false;
}


IfcText IfcExtendedMaterialProperties::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcExtendedMaterialProperties::getDescription() const
{
    return const_cast<IfcExtendedMaterialProperties *>(this)->getDescription();
}

void IfcExtendedMaterialProperties::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcExtendedMaterialProperties::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcExtendedMaterialProperties::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}


IfcLabel IfcExtendedMaterialProperties::getName()
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

const IfcLabel IfcExtendedMaterialProperties::getName() const
{
    return const_cast<IfcExtendedMaterialProperties *>(this)->getName();
}

void IfcExtendedMaterialProperties::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcExtendedMaterialProperties::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcExtendedMaterialProperties::testName() const
{
    return Step::isUnset(getName()) == false;
}

bool IfcExtendedMaterialProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ExtendedProperties.setUnset(true);
    }
    else
    {
        m_ExtendedProperties.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ExtendedProperties.insert(static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
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
    return true;
}

void IfcExtendedMaterialProperties::copy(const IfcExtendedMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    Set_IfcProperty_1_n::const_iterator it_m_ExtendedProperties;
    for (it_m_ExtendedProperties = obj.m_ExtendedProperties.begin(); it_m_ExtendedProperties != obj.m_ExtendedProperties.end(); ++it_m_ExtendedProperties)
    {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_ExtendedProperties).get()));
        m_ExtendedProperties.insert(copyTarget);
    }
    
    setDescription(obj.m_Description);
    setName(obj.m_Name);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcExtendedMaterialProperties, IfcMaterialProperties)
