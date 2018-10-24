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


#include <ifc2x3/IfcRelAssociates.h>

#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcPropertyDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelAssociates_RelatedObjects_type::Inverted_IfcRelAssociates_RelatedObjects_type()
{

}

void Inverted_IfcRelAssociates_RelatedObjects_type::setOwner(IfcRelAssociates *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelAssociates_RelatedObjects_type::insert(const Step::RefPtr< IfcRoot > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcRoot *inverse = const_cast< IfcRoot * > (value.get());
    Set_IfcRoot_1_n::insert(value);
    if (dynamic_cast< IfcObjectDefinition * > (inverse) != NULL) 
    {
        ((IfcObjectDefinition *) (inverse))->m_HasAssociations.insert(mOwner);
    }
    if (dynamic_cast< IfcPropertyDefinition * > (inverse) != NULL) 
    {
        ((IfcPropertyDefinition *) (inverse))->m_HasAssociations.insert(mOwner);
    }
}


Inverted_IfcRelAssociates_RelatedObjects_type::size_type Inverted_IfcRelAssociates_RelatedObjects_type::erase(const Step::RefPtr< IfcRoot > &value)
{
    IfcRoot *inverse = const_cast< IfcRoot * > (value.get());
    if (dynamic_cast< IfcObjectDefinition * > (inverse) != NULL) 
    {
        ((IfcObjectDefinition *) (inverse))->m_HasAssociations.erase(mOwner);
    }
    if (dynamic_cast< IfcPropertyDefinition * > (inverse) != NULL) 
    {
        ((IfcPropertyDefinition *) (inverse))->m_HasAssociations.erase(mOwner);
    }
    return Set_IfcRoot_1_n::erase(value);
}

void Inverted_IfcRelAssociates_RelatedObjects_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelAssociates::IfcRelAssociates(Step::Id id, Step::SPFData *args) : 
    IfcRelationship(id, args)
{
    m_RelatedObjects.setUnset(true);
    m_RelatedObjects.setOwner(this);
}

IfcRelAssociates::~IfcRelAssociates()
{}

bool IfcRelAssociates::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssociates(this);
}

Set_IfcRoot_1_n &IfcRelAssociates::getRelatedObjects()
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

const Set_IfcRoot_1_n &IfcRelAssociates::getRelatedObjects() const
{
    return const_cast< IfcRelAssociates * > (this)->getRelatedObjects();
}

void IfcRelAssociates::unsetRelatedObjects()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedObjects.clear();
    m_RelatedObjects.setUnset(true);
}

bool IfcRelAssociates::testRelatedObjects() const
{
    return m_RelatedObjects.isUnset() == false;
}

bool IfcRelAssociates::init()
{
    if (IfcRelationship::init() == false)
    {
        return false;
    }
    std::string arg;
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
                m_RelatedObjects.insert(static_cast< IfcRoot * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcRelAssociates::copy(const IfcRelAssociates &obj, const CopyOp &copyop)
{
    IfcRelationship::copy(obj, copyop);
    Set_IfcRoot_1_n::const_iterator it_m_RelatedObjects;
    for (it_m_RelatedObjects = obj.m_RelatedObjects.begin(); it_m_RelatedObjects != obj.m_RelatedObjects.end(); ++it_m_RelatedObjects)
    {
        Step::RefPtr< IfcRoot > copyTarget = (IfcRoot *) (copyop((*it_m_RelatedObjects).get()));
        m_RelatedObjects.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssociates, IfcRelationship)
