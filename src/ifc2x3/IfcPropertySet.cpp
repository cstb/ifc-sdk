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


#include <ifc2x3/IfcPropertySet.h>

#include <ifc2x3/IfcProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertySet::IfcPropertySet(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_HasProperties.setUnset(true);
}

IfcPropertySet::~IfcPropertySet()
{}

bool IfcPropertySet::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertySet(this);
}


Set_IfcProperty_1_n &IfcPropertySet::getHasProperties()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HasProperties;
    }
    else 
    {
        m_HasProperties.setUnset(true);
        return m_HasProperties;
    }    
}

const Set_IfcProperty_1_n &IfcPropertySet::getHasProperties() const
{
    return const_cast<IfcPropertySet *>(this)->getHasProperties();
}

void IfcPropertySet::setHasProperties(const Set_IfcProperty_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HasProperties = value;
}

void IfcPropertySet::unsetHasProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HasProperties.clear();
    m_HasProperties.setUnset(true);
}

bool IfcPropertySet::testHasProperties() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasProperties.isUnset() == false;
}

bool IfcPropertySet::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HasProperties.setUnset(true);
    }
    else
    {
        m_HasProperties.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_HasProperties.insert(static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcPropertySet::copy(const IfcPropertySet &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    Set_IfcProperty_1_n::const_iterator it_m_HasProperties;
    for (it_m_HasProperties = obj.m_HasProperties.begin(); it_m_HasProperties != obj.m_HasProperties.end(); ++it_m_HasProperties)
    {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_HasProperties).get()));
        m_HasProperties.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertySet, IfcPropertySetDefinition)
