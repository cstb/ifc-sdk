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


#include <ifc2x3/IfcCompositeProfileDef.h>

#include <ifc2x3/IfcProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCompositeProfileDef::IfcCompositeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcProfileDef(id, args)
{
    m_Profiles.setUnset(true);
    m_Label = Step::getUnset(m_Label);
}

IfcCompositeProfileDef::~IfcCompositeProfileDef()
{}

bool IfcCompositeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCompositeProfileDef(this);
}


Set_IfcProfileDef_2_n &IfcCompositeProfileDef::getProfiles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Profiles;
    }
    else 
    {
        m_Profiles.setUnset(true);
        return m_Profiles;
    }    
}

const Set_IfcProfileDef_2_n &IfcCompositeProfileDef::getProfiles() const
{
    return const_cast<IfcCompositeProfileDef *>(this)->getProfiles();
}

void IfcCompositeProfileDef::setProfiles(const Set_IfcProfileDef_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Profiles = value;
}

void IfcCompositeProfileDef::unsetProfiles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Profiles.clear();
    m_Profiles.setUnset(true);
}

bool IfcCompositeProfileDef::testProfiles() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Profiles.isUnset() == false;
}


IfcLabel IfcCompositeProfileDef::getLabel()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Label;
    }
    else 
    {
        return Step::getUnset(m_Label);
    }    
}

const IfcLabel IfcCompositeProfileDef::getLabel() const
{
    return const_cast<IfcCompositeProfileDef *>(this)->getLabel();
}

void IfcCompositeProfileDef::setLabel(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Label = value;
}

void IfcCompositeProfileDef::unsetLabel()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Label = Step::getUnset(getLabel());
}

bool IfcCompositeProfileDef::testLabel() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLabel()) == false;
}

bool IfcCompositeProfileDef::init()
{
    if (IfcProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Profiles.setUnset(true);
    }
    else
    {
        m_Profiles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Profiles.insert(static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_Label = Step::getUnset(m_Label);
    }
    else
    {
        m_Label = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcCompositeProfileDef::copy(const IfcCompositeProfileDef &obj, const CopyOp &copyop)
{
    IfcProfileDef::copy(obj, copyop);
    Set_IfcProfileDef_2_n::const_iterator it_m_Profiles;
    for (it_m_Profiles = obj.m_Profiles.begin(); it_m_Profiles != obj.m_Profiles.end(); ++it_m_Profiles)
    {
        Step::RefPtr< IfcProfileDef > copyTarget = (IfcProfileDef *) (copyop((*it_m_Profiles).get()));
        m_Profiles.insert(copyTarget);
    }
    
    setLabel(obj.m_Label);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCompositeProfileDef, IfcProfileDef)
