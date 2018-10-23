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


#include <ifc2x3/IfcRelDecomposes.h>

#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcObjectDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelDecomposes_RelatedObjects_type::Inverted_IfcRelDecomposes_RelatedObjects_type()
{

}

void Inverted_IfcRelDecomposes_RelatedObjects_type::setOwner(IfcRelDecomposes *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelDecomposes_RelatedObjects_type::insert(const Step::RefPtr< IfcObjectDefinition > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    Set_IfcObjectDefinition_1_n::insert(value);
    inverse->m_Decomposes.insert(mOwner);
}


Inverted_IfcRelDecomposes_RelatedObjects_type::size_type Inverted_IfcRelDecomposes_RelatedObjects_type::erase(const Step::RefPtr< IfcObjectDefinition > &value)
{
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    inverse->m_Decomposes.erase(mOwner);
    return Set_IfcObjectDefinition_1_n::erase(value);
}

void Inverted_IfcRelDecomposes_RelatedObjects_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelDecomposes::IfcRelDecomposes(Step::Id id, Step::SPFData *args) : 
    IfcRelationship(id, args)
{
    m_RelatedObjects.setUnset(true);
    m_RelatedObjects.setOwner(this);
    m_RelatingObject = NULL;
}

IfcRelDecomposes::~IfcRelDecomposes()
{}

bool IfcRelDecomposes::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelDecomposes(this);
}

Set_IfcObjectDefinition_1_n &IfcRelDecomposes::getRelatedObjects()
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

const Set_IfcObjectDefinition_1_n &IfcRelDecomposes::getRelatedObjects() const
{
    return const_cast< IfcRelDecomposes * > (this)->getRelatedObjects();
}

void IfcRelDecomposes::unsetRelatedObjects()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedObjects.clear();
    m_RelatedObjects.setUnset(true);
}

bool IfcRelDecomposes::testRelatedObjects() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RelatedObjects.isUnset() == false;
}

IfcObjectDefinition *IfcRelDecomposes::getRelatingObject()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingObject.get();
    }
    else
    {
        return NULL;
    }
}

const IfcObjectDefinition *IfcRelDecomposes::getRelatingObject() const
{
    return const_cast< IfcRelDecomposes * > (this)->getRelatingObject();
}

void IfcRelDecomposes::setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingObject.valid())
    {
        m_RelatingObject->m_IsDecomposedBy.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsDecomposedBy.insert(this);
    }
    m_RelatingObject = value;
}

void IfcRelDecomposes::unsetRelatingObject()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingObject = Step::getUnset(getRelatingObject());
}

bool IfcRelDecomposes::testRelatingObject() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingObject()) == false;
}

bool IfcRelDecomposes::init()
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
                m_RelatedObjects.insert(static_cast< IfcObjectDefinition * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_RelatingObject = NULL;
    }
    else
    {
        m_RelatingObject = static_cast< IfcObjectDefinition * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelDecomposes::copy(const IfcRelDecomposes &obj, const CopyOp &copyop)
{
    IfcRelationship::copy(obj, copyop);
    Set_IfcObjectDefinition_1_n::const_iterator it_m_RelatedObjects;
    for (it_m_RelatedObjects = obj.m_RelatedObjects.begin(); it_m_RelatedObjects != obj.m_RelatedObjects.end(); ++it_m_RelatedObjects)
    {
        Step::RefPtr< IfcObjectDefinition > copyTarget = (IfcObjectDefinition *) (copyop((*it_m_RelatedObjects).get()));
        m_RelatedObjects.insert(copyTarget);
    }
    
    setRelatingObject((IfcObjectDefinition*)copyop(obj.m_RelatingObject.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelDecomposes, IfcRelationship)
