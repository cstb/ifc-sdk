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


#include <ifc2x3/IfcProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProfileDef::IfcProfileDef(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ProfileType = IfcProfileTypeEnum_UNSET;
    m_ProfileName = Step::getUnset(m_ProfileName);
}

IfcProfileDef::~IfcProfileDef()
{}

bool IfcProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProfileDef(this);
}


IfcProfileTypeEnum IfcProfileDef::getProfileType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProfileType;
    }
    else 
    {
        return IfcProfileTypeEnum_UNSET;
    }    
}

IfcProfileTypeEnum IfcProfileDef::getProfileType() const
{
    return const_cast<IfcProfileDef *>(this)->getProfileType();
}

void IfcProfileDef::setProfileType(IfcProfileTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileType = value;
}

void IfcProfileDef::unsetProfileType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileType = IfcProfileTypeEnum_UNSET;
}

bool IfcProfileDef::testProfileType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProfileType()) == false;
}


IfcLabel IfcProfileDef::getProfileName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProfileName;
    }
    else 
    {
        return Step::getUnset(m_ProfileName);
    }    
}

const IfcLabel IfcProfileDef::getProfileName() const
{
    return const_cast<IfcProfileDef *>(this)->getProfileName();
}

void IfcProfileDef::setProfileName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileName = value;
}

void IfcProfileDef::unsetProfileName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileName = Step::getUnset(getProfileName());
}

bool IfcProfileDef::testProfileName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProfileName()) == false;
}

bool IfcProfileDef::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProfileType = IfcProfileTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CURVE.")
        {
            m_ProfileType = IfcProfileTypeEnum_CURVE;
        }
        else if (arg == ".AREA.")
        {
            m_ProfileType = IfcProfileTypeEnum_AREA;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProfileName = Step::getUnset(m_ProfileName);
    }
    else
    {
        m_ProfileName = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcProfileDef::copy(const IfcProfileDef &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setProfileType(obj.m_ProfileType);
    setProfileName(obj.m_ProfileName);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProfileDef, Step::BaseEntity)
