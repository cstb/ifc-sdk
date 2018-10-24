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


#include <ifc2x3/IfcProfileProperties.h>

#include <ifc2x3/IfcProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProfileProperties::IfcProfileProperties(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ProfileName = Step::getUnset(m_ProfileName);
    m_ProfileDefinition = NULL;
}

IfcProfileProperties::~IfcProfileProperties()
{}

bool IfcProfileProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProfileProperties(this);
}


IfcLabel IfcProfileProperties::getProfileName()
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

const IfcLabel IfcProfileProperties::getProfileName() const
{
    return const_cast<IfcProfileProperties *>(this)->getProfileName();
}

void IfcProfileProperties::setProfileName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileName = value;
}

void IfcProfileProperties::unsetProfileName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileName = Step::getUnset(getProfileName());
}

bool IfcProfileProperties::testProfileName() const
{
    return Step::isUnset(getProfileName()) == false;
}


IfcProfileDef *IfcProfileProperties::getProfileDefinition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProfileDefinition.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcProfileProperties::getProfileDefinition() const
{
    return const_cast<IfcProfileProperties *>(this)->getProfileDefinition();
}

void IfcProfileProperties::setProfileDefinition(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileDefinition = value;
}

void IfcProfileProperties::unsetProfileDefinition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileDefinition = Step::getUnset(getProfileDefinition());
}

bool IfcProfileProperties::testProfileDefinition() const
{
    return Step::isUnset(getProfileDefinition()) == false;
}

bool IfcProfileProperties::init()
{
    std::string arg;
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProfileDefinition = NULL;
    }
    else
    {
        m_ProfileDefinition = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcProfileProperties::copy(const IfcProfileProperties &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setProfileName(obj.m_ProfileName);
    setProfileDefinition((IfcProfileDef*)copyop(obj.m_ProfileDefinition.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProfileProperties, Step::BaseEntity)
