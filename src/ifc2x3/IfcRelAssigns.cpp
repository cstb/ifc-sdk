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


#include <ifc2x3/IfcRelAssigns.h>

#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcObjectDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelAssigns_RelatedObjects_type::Inverted_IfcRelAssigns_RelatedObjects_type()
{

}

void Inverted_IfcRelAssigns_RelatedObjects_type::setOwner(IfcRelAssigns *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelAssigns_RelatedObjects_type::insert(const Step::RefPtr< IfcObjectDefinition > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    Set_IfcObjectDefinition_1_n::insert(value);
    inverse->m_HasAssignments.insert(mOwner);
}


Inverted_IfcRelAssigns_RelatedObjects_type::size_type Inverted_IfcRelAssigns_RelatedObjects_type::erase(const Step::RefPtr< IfcObjectDefinition > &value)
{
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    inverse->m_HasAssignments.erase(mOwner);
    return Set_IfcObjectDefinition_1_n::erase(value);
}

void Inverted_IfcRelAssigns_RelatedObjects_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelAssigns::IfcRelAssigns(Step::Id id, Step::SPFData *args) : 
    IfcRelationship(id, args)
{
    m_RelatedObjectsType = IfcObjectTypeEnum_UNSET;
    m_RelatedObjects.setUnset(true);
    m_RelatedObjects.setOwner(this);
}

IfcRelAssigns::~IfcRelAssigns()
{}

bool IfcRelAssigns::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssigns(this);
}


IfcObjectTypeEnum IfcRelAssigns::getRelatedObjectsType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatedObjectsType;
    }
    else 
    {
        return IfcObjectTypeEnum_UNSET;
    }    
}

IfcObjectTypeEnum IfcRelAssigns::getRelatedObjectsType() const
{
    return const_cast<IfcRelAssigns *>(this)->getRelatedObjectsType();
}

void IfcRelAssigns::setRelatedObjectsType(IfcObjectTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedObjectsType = value;
}

void IfcRelAssigns::unsetRelatedObjectsType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedObjectsType = IfcObjectTypeEnum_UNSET;
}

bool IfcRelAssigns::testRelatedObjectsType() const
{
    return Step::isUnset(getRelatedObjectsType()) == false;
}

Set_IfcObjectDefinition_1_n &IfcRelAssigns::getRelatedObjects()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedObjects;
    }
    else
    {
        m_RelatedObjects.setUnset(true);
        return m_RelatedObjects;
    }
}

const Set_IfcObjectDefinition_1_n &IfcRelAssigns::getRelatedObjects() const
{
    return const_cast< IfcRelAssigns * > (this)->getRelatedObjects();
}

void IfcRelAssigns::unsetRelatedObjects()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedObjects.clear();
    m_RelatedObjects.setUnset(true);
}

bool IfcRelAssigns::testRelatedObjects() const
{
    return m_RelatedObjects.isUnset() == false;
}

bool IfcRelAssigns::init()
{
    if (IfcRelationship::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedObjectsType = IfcObjectTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".PRODUCT.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_PRODUCT;
        }
        else if (arg == ".PROCESS.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_PROCESS;
        }
        else if (arg == ".CONTROL.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_CONTROL;
        }
        else if (arg == ".RESOURCE.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_RESOURCE;
        }
        else if (arg == ".ACTOR.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_ACTOR;
        }
        else if (arg == ".GROUP.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_GROUP;
        }
        else if (arg == ".PROJECT.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_PROJECT;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_RelatedObjectsType = IfcObjectTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedObjects.setUnset(true);
    }
    else
    {
        m_RelatedObjects.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedObjects.insert(static_cast< IfcObjectDefinition * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcRelAssigns::copy(const IfcRelAssigns &obj, const CopyOp &copyop)
{
    IfcRelationship::copy(obj, copyop);
    setRelatedObjectsType(obj.m_RelatedObjectsType);
    Set_IfcObjectDefinition_1_n::const_iterator it_m_RelatedObjects;
    for (it_m_RelatedObjects = obj.m_RelatedObjects.begin(); it_m_RelatedObjects != obj.m_RelatedObjects.end(); ++it_m_RelatedObjects)
    {
        Step::RefPtr< IfcObjectDefinition > copyTarget = (IfcObjectDefinition *) (copyop((*it_m_RelatedObjects).get()));
        m_RelatedObjects.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssigns, IfcRelationship)
