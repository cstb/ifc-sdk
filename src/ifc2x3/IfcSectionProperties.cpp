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


#include <ifc2x3/IfcSectionProperties.h>

#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSectionProperties::IfcSectionProperties(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_SectionType = IfcSectionTypeEnum_UNSET;
    m_StartProfile = NULL;
    m_EndProfile = NULL;
}

IfcSectionProperties::~IfcSectionProperties()
{}

bool IfcSectionProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSectionProperties(this);
}


IfcSectionTypeEnum IfcSectionProperties::getSectionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SectionType;
    }
    else 
    {
        return IfcSectionTypeEnum_UNSET;
    }    
}

IfcSectionTypeEnum IfcSectionProperties::getSectionType() const
{
    return const_cast<IfcSectionProperties *>(this)->getSectionType();
}

void IfcSectionProperties::setSectionType(IfcSectionTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SectionType = value;
}

void IfcSectionProperties::unsetSectionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SectionType = IfcSectionTypeEnum_UNSET;
}

bool IfcSectionProperties::testSectionType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSectionType()) == false;
}


IfcProfileDef *IfcSectionProperties::getStartProfile()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StartProfile.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcSectionProperties::getStartProfile() const
{
    return const_cast<IfcSectionProperties *>(this)->getStartProfile();
}

void IfcSectionProperties::setStartProfile(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartProfile = value;
}

void IfcSectionProperties::unsetStartProfile()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartProfile = Step::getUnset(getStartProfile());
}

bool IfcSectionProperties::testStartProfile() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStartProfile()) == false;
}


IfcProfileDef *IfcSectionProperties::getEndProfile()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EndProfile.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcSectionProperties::getEndProfile() const
{
    return const_cast<IfcSectionProperties *>(this)->getEndProfile();
}

void IfcSectionProperties::setEndProfile(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndProfile = value;
}

void IfcSectionProperties::unsetEndProfile()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndProfile = Step::getUnset(getEndProfile());
}

bool IfcSectionProperties::testEndProfile() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEndProfile()) == false;
}

bool IfcSectionProperties::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SectionType = IfcSectionTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".UNIFORM.")
        {
            m_SectionType = IfcSectionTypeEnum_UNIFORM;
        }
        else if (arg == ".TAPERED.")
        {
            m_SectionType = IfcSectionTypeEnum_TAPERED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StartProfile = NULL;
    }
    else
    {
        m_StartProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EndProfile = NULL;
    }
    else
    {
        m_EndProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSectionProperties::copy(const IfcSectionProperties &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setSectionType(obj.m_SectionType);
    setStartProfile((IfcProfileDef*)copyop(obj.m_StartProfile.get()));
    setEndProfile((IfcProfileDef*)copyop(obj.m_EndProfile.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSectionProperties, Step::BaseEntity)
