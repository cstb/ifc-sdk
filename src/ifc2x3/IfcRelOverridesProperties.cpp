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


#include <ifc2x3/IfcRelOverridesProperties.h>

#include <ifc2x3/IfcProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelOverridesProperties::IfcRelOverridesProperties(Step::Id id, Step::SPFData *args) : 
    IfcRelDefinesByProperties(id, args)
{
    m_OverridingProperties.setUnset(true);
}

IfcRelOverridesProperties::~IfcRelOverridesProperties()
{}

bool IfcRelOverridesProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelOverridesProperties(this);
}


Set_IfcProperty_1_n &IfcRelOverridesProperties::getOverridingProperties()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OverridingProperties;
    }
    else 
    {
        m_OverridingProperties.setUnset(true);
        return m_OverridingProperties;
    }    
}

const Set_IfcProperty_1_n &IfcRelOverridesProperties::getOverridingProperties() const
{
    return const_cast<IfcRelOverridesProperties *>(this)->getOverridingProperties();
}

void IfcRelOverridesProperties::setOverridingProperties(const Set_IfcProperty_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverridingProperties = value;
}

void IfcRelOverridesProperties::unsetOverridingProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverridingProperties.clear();
    m_OverridingProperties.setUnset(true);
}

bool IfcRelOverridesProperties::testOverridingProperties() const
{
    return m_OverridingProperties.isUnset() == false;
}

bool IfcRelOverridesProperties::init()
{
    if (IfcRelDefinesByProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OverridingProperties.setUnset(true);
    }
    else
    {
        m_OverridingProperties.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_OverridingProperties.insert(static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcRelOverridesProperties::copy(const IfcRelOverridesProperties &obj, const CopyOp &copyop)
{
    IfcRelDefinesByProperties::copy(obj, copyop);
    Set_IfcProperty_1_n::const_iterator it_m_OverridingProperties;
    for (it_m_OverridingProperties = obj.m_OverridingProperties.begin(); it_m_OverridingProperties != obj.m_OverridingProperties.end(); ++it_m_OverridingProperties)
    {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_OverridingProperties).get()));
        m_OverridingProperties.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelOverridesProperties, IfcRelDefinesByProperties)
