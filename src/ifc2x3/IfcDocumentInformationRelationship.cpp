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


#include <ifc2x3/IfcDocumentInformationRelationship.h>

#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcDocumentInformation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type()
{

}

void Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::setOwner(IfcDocumentInformationRelationship *owner)
{
    mOwner = owner;
}

void Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::insert(const Step::RefPtr< IfcDocumentInformation > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcDocumentInformation *inverse = const_cast< IfcDocumentInformation * > (value.get());
    Set_IfcDocumentInformation_1_n::insert(value);
    inverse->m_IsPointedTo.insert(mOwner);
}


Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::size_type Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::erase(const Step::RefPtr< IfcDocumentInformation > &value)
{
    IfcDocumentInformation *inverse = const_cast< IfcDocumentInformation * > (value.get());
    inverse->m_IsPointedTo.erase(mOwner);
    return Set_IfcDocumentInformation_1_n::erase(value);
}

void Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcDocumentInformationRelationship::IfcDocumentInformationRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RelationshipType = Step::getUnset(m_RelationshipType);
    m_RelatedDocuments.setUnset(true);
    m_RelatedDocuments.setOwner(this);
    m_RelatingDocument = NULL;
}

IfcDocumentInformationRelationship::~IfcDocumentInformationRelationship()
{}

bool IfcDocumentInformationRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDocumentInformationRelationship(this);
}


IfcLabel IfcDocumentInformationRelationship::getRelationshipType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelationshipType;
    }
    else 
    {
        return Step::getUnset(m_RelationshipType);
    }    
}

const IfcLabel IfcDocumentInformationRelationship::getRelationshipType() const
{
    return const_cast<IfcDocumentInformationRelationship *>(this)->getRelationshipType();
}

void IfcDocumentInformationRelationship::setRelationshipType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelationshipType = value;
}

void IfcDocumentInformationRelationship::unsetRelationshipType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelationshipType = Step::getUnset(getRelationshipType());
}

bool IfcDocumentInformationRelationship::testRelationshipType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelationshipType()) == false;
}

Set_IfcDocumentInformation_1_n &IfcDocumentInformationRelationship::getRelatedDocuments()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedDocuments;
    }
    else
    {
        m_RelatedDocuments.setUnset(true);
        return m_RelatedDocuments;
    }
}

const Set_IfcDocumentInformation_1_n &IfcDocumentInformationRelationship::getRelatedDocuments() const
{
    return const_cast< IfcDocumentInformationRelationship * > (this)->getRelatedDocuments();
}

void IfcDocumentInformationRelationship::unsetRelatedDocuments()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedDocuments.clear();
    m_RelatedDocuments.setUnset(true);
}

bool IfcDocumentInformationRelationship::testRelatedDocuments() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RelatedDocuments.isUnset() == false;
}

IfcDocumentInformation *IfcDocumentInformationRelationship::getRelatingDocument()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingDocument.get();
    }
    else
    {
        return NULL;
    }
}

const IfcDocumentInformation *IfcDocumentInformationRelationship::getRelatingDocument() const
{
    return const_cast< IfcDocumentInformationRelationship * > (this)->getRelatingDocument();
}

void IfcDocumentInformationRelationship::setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingDocument.valid())
    {
        m_RelatingDocument->m_IsPointer.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsPointer.insert(this);
    }
    m_RelatingDocument = value;
}

void IfcDocumentInformationRelationship::unsetRelatingDocument()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingDocument = Step::getUnset(getRelatingDocument());
}

bool IfcDocumentInformationRelationship::testRelatingDocument() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingDocument()) == false;
}

bool IfcDocumentInformationRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelationshipType = Step::getUnset(m_RelationshipType);
    }
    else
    {
        m_RelationshipType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedDocuments.setUnset(true);
    }
    else
    {
        m_RelatedDocuments.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedDocuments.insert(static_cast< IfcDocumentInformation * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_RelatingDocument = NULL;
    }
    else
    {
        m_RelatingDocument = static_cast< IfcDocumentInformation * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcDocumentInformationRelationship::copy(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRelationshipType(obj.m_RelationshipType);
    Set_IfcDocumentInformation_1_n::const_iterator it_m_RelatedDocuments;
    for (it_m_RelatedDocuments = obj.m_RelatedDocuments.begin(); it_m_RelatedDocuments != obj.m_RelatedDocuments.end(); ++it_m_RelatedDocuments)
    {
        Step::RefPtr< IfcDocumentInformation > copyTarget = (IfcDocumentInformation *) (copyop((*it_m_RelatedDocuments).get()));
        m_RelatedDocuments.insert(copyTarget);
    }
    
    setRelatingDocument((IfcDocumentInformation*)copyop(obj.m_RelatingDocument.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDocumentInformationRelationship, Step::BaseEntity)
