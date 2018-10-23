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


#include <ifc2x3/IfcDocumentInformation.h>

#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcDocumentElectronicFormat.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcDocumentInformation_DocumentReferences_type::Inverted_IfcDocumentInformation_DocumentReferences_type()
{

}

void Inverted_IfcDocumentInformation_DocumentReferences_type::setOwner(IfcDocumentInformation *owner)
{
    mOwner = owner;
}

void Inverted_IfcDocumentInformation_DocumentReferences_type::insert(const Step::RefPtr< IfcDocumentReference > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcDocumentReference *inverse = const_cast< IfcDocumentReference * > (value.get());
    Set_IfcDocumentReference_1_n::insert(value);
    inverse->m_ReferenceToDocument.insert(mOwner);
}


Inverted_IfcDocumentInformation_DocumentReferences_type::size_type Inverted_IfcDocumentInformation_DocumentReferences_type::erase(const Step::RefPtr< IfcDocumentReference > &value)
{
    IfcDocumentReference *inverse = const_cast< IfcDocumentReference * > (value.get());
    inverse->m_ReferenceToDocument.erase(mOwner);
    return Set_IfcDocumentReference_1_n::erase(value);
}

void Inverted_IfcDocumentInformation_DocumentReferences_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcDocumentInformation::IfcDocumentInformation(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_DocumentId = Step::getUnset(m_DocumentId);
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_Purpose = Step::getUnset(m_Purpose);
    m_IntendedUse = Step::getUnset(m_IntendedUse);
    m_Scope = Step::getUnset(m_Scope);
    m_Revision = Step::getUnset(m_Revision);
    m_DocumentOwner = NULL;
    m_Editors.setUnset(true);
    m_CreationTime = NULL;
    m_LastRevisionTime = NULL;
    m_ElectronicFormat = NULL;
    m_ValidFrom = NULL;
    m_ValidUntil = NULL;
    m_Confidentiality = IfcDocumentConfidentialityEnum_UNSET;
    m_Status = IfcDocumentStatusEnum_UNSET;
    m_DocumentReferences.setUnset(true);
    m_DocumentReferences.setOwner(this);
}

IfcDocumentInformation::~IfcDocumentInformation()
{}

bool IfcDocumentInformation::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDocumentInformation(this);
}


IfcIdentifier IfcDocumentInformation::getDocumentId()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DocumentId;
    }
    else 
    {
        return Step::getUnset(m_DocumentId);
    }    
}

const IfcIdentifier IfcDocumentInformation::getDocumentId() const
{
    return const_cast<IfcDocumentInformation *>(this)->getDocumentId();
}

void IfcDocumentInformation::setDocumentId(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DocumentId = value;
}

void IfcDocumentInformation::unsetDocumentId()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DocumentId = Step::getUnset(getDocumentId());
}

bool IfcDocumentInformation::testDocumentId() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDocumentId()) == false;
}


IfcLabel IfcDocumentInformation::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcDocumentInformation::getName() const
{
    return const_cast<IfcDocumentInformation *>(this)->getName();
}

void IfcDocumentInformation::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcDocumentInformation::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcDocumentInformation::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcDocumentInformation::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcDocumentInformation::getDescription() const
{
    return const_cast<IfcDocumentInformation *>(this)->getDescription();
}

void IfcDocumentInformation::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcDocumentInformation::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcDocumentInformation::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}


IfcText IfcDocumentInformation::getPurpose()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Purpose;
    }
    else 
    {
        return Step::getUnset(m_Purpose);
    }    
}

const IfcText IfcDocumentInformation::getPurpose() const
{
    return const_cast<IfcDocumentInformation *>(this)->getPurpose();
}

void IfcDocumentInformation::setPurpose(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = value;
}

void IfcDocumentInformation::unsetPurpose()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = Step::getUnset(getPurpose());
}

bool IfcDocumentInformation::testPurpose() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPurpose()) == false;
}


IfcText IfcDocumentInformation::getIntendedUse()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IntendedUse;
    }
    else 
    {
        return Step::getUnset(m_IntendedUse);
    }    
}

const IfcText IfcDocumentInformation::getIntendedUse() const
{
    return const_cast<IfcDocumentInformation *>(this)->getIntendedUse();
}

void IfcDocumentInformation::setIntendedUse(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IntendedUse = value;
}

void IfcDocumentInformation::unsetIntendedUse()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IntendedUse = Step::getUnset(getIntendedUse());
}

bool IfcDocumentInformation::testIntendedUse() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIntendedUse()) == false;
}


IfcText IfcDocumentInformation::getScope()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Scope;
    }
    else 
    {
        return Step::getUnset(m_Scope);
    }    
}

const IfcText IfcDocumentInformation::getScope() const
{
    return const_cast<IfcDocumentInformation *>(this)->getScope();
}

void IfcDocumentInformation::setScope(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scope = value;
}

void IfcDocumentInformation::unsetScope()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scope = Step::getUnset(getScope());
}

bool IfcDocumentInformation::testScope() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getScope()) == false;
}


IfcLabel IfcDocumentInformation::getRevision()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Revision;
    }
    else 
    {
        return Step::getUnset(m_Revision);
    }    
}

const IfcLabel IfcDocumentInformation::getRevision() const
{
    return const_cast<IfcDocumentInformation *>(this)->getRevision();
}

void IfcDocumentInformation::setRevision(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Revision = value;
}

void IfcDocumentInformation::unsetRevision()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Revision = Step::getUnset(getRevision());
}

bool IfcDocumentInformation::testRevision() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRevision()) == false;
}


IfcActorSelect *IfcDocumentInformation::getDocumentOwner()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DocumentOwner.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcDocumentInformation::getDocumentOwner() const
{
    return const_cast<IfcDocumentInformation *>(this)->getDocumentOwner();
}

void IfcDocumentInformation::setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DocumentOwner = value;
}

void IfcDocumentInformation::unsetDocumentOwner()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DocumentOwner = Step::getUnset(getDocumentOwner());
}

bool IfcDocumentInformation::testDocumentOwner() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDocumentOwner()) == false;
}


Set_IfcActorSelect_1_n &IfcDocumentInformation::getEditors()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Editors;
    }
    else 
    {
        m_Editors.setUnset(true);
        return m_Editors;
    }    
}

const Set_IfcActorSelect_1_n &IfcDocumentInformation::getEditors() const
{
    return const_cast<IfcDocumentInformation *>(this)->getEditors();
}

void IfcDocumentInformation::setEditors(const Set_IfcActorSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Editors = value;
}

void IfcDocumentInformation::unsetEditors()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Editors.clear();
    m_Editors.setUnset(true);
}

bool IfcDocumentInformation::testEditors() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Editors.isUnset() == false;
}


IfcDateAndTime *IfcDocumentInformation::getCreationTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CreationTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateAndTime *IfcDocumentInformation::getCreationTime() const
{
    return const_cast<IfcDocumentInformation *>(this)->getCreationTime();
}

void IfcDocumentInformation::setCreationTime(const Step::RefPtr< IfcDateAndTime > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationTime = value;
}

void IfcDocumentInformation::unsetCreationTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationTime = Step::getUnset(getCreationTime());
}

bool IfcDocumentInformation::testCreationTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCreationTime()) == false;
}


IfcDateAndTime *IfcDocumentInformation::getLastRevisionTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LastRevisionTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateAndTime *IfcDocumentInformation::getLastRevisionTime() const
{
    return const_cast<IfcDocumentInformation *>(this)->getLastRevisionTime();
}

void IfcDocumentInformation::setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastRevisionTime = value;
}

void IfcDocumentInformation::unsetLastRevisionTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastRevisionTime = Step::getUnset(getLastRevisionTime());
}

bool IfcDocumentInformation::testLastRevisionTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLastRevisionTime()) == false;
}


IfcDocumentElectronicFormat *IfcDocumentInformation::getElectronicFormat()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElectronicFormat.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDocumentElectronicFormat *IfcDocumentInformation::getElectronicFormat() const
{
    return const_cast<IfcDocumentInformation *>(this)->getElectronicFormat();
}

void IfcDocumentInformation::setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectronicFormat = value;
}

void IfcDocumentInformation::unsetElectronicFormat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectronicFormat = Step::getUnset(getElectronicFormat());
}

bool IfcDocumentInformation::testElectronicFormat() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getElectronicFormat()) == false;
}


IfcCalendarDate *IfcDocumentInformation::getValidFrom()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ValidFrom.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcDocumentInformation::getValidFrom() const
{
    return const_cast<IfcDocumentInformation *>(this)->getValidFrom();
}

void IfcDocumentInformation::setValidFrom(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValidFrom = value;
}

void IfcDocumentInformation::unsetValidFrom()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValidFrom = Step::getUnset(getValidFrom());
}

bool IfcDocumentInformation::testValidFrom() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getValidFrom()) == false;
}


IfcCalendarDate *IfcDocumentInformation::getValidUntil()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ValidUntil.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcDocumentInformation::getValidUntil() const
{
    return const_cast<IfcDocumentInformation *>(this)->getValidUntil();
}

void IfcDocumentInformation::setValidUntil(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValidUntil = value;
}

void IfcDocumentInformation::unsetValidUntil()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValidUntil = Step::getUnset(getValidUntil());
}

bool IfcDocumentInformation::testValidUntil() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getValidUntil()) == false;
}


IfcDocumentConfidentialityEnum IfcDocumentInformation::getConfidentiality()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Confidentiality;
    }
    else 
    {
        return IfcDocumentConfidentialityEnum_UNSET;
    }    
}

IfcDocumentConfidentialityEnum IfcDocumentInformation::getConfidentiality() const
{
    return const_cast<IfcDocumentInformation *>(this)->getConfidentiality();
}

void IfcDocumentInformation::setConfidentiality(IfcDocumentConfidentialityEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Confidentiality = value;
}

void IfcDocumentInformation::unsetConfidentiality()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Confidentiality = IfcDocumentConfidentialityEnum_UNSET;
}

bool IfcDocumentInformation::testConfidentiality() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConfidentiality()) == false;
}


IfcDocumentStatusEnum IfcDocumentInformation::getStatus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Status;
    }
    else 
    {
        return IfcDocumentStatusEnum_UNSET;
    }    
}

IfcDocumentStatusEnum IfcDocumentInformation::getStatus() const
{
    return const_cast<IfcDocumentInformation *>(this)->getStatus();
}

void IfcDocumentInformation::setStatus(IfcDocumentStatusEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = value;
}

void IfcDocumentInformation::unsetStatus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = IfcDocumentStatusEnum_UNSET;
}

bool IfcDocumentInformation::testStatus() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStatus()) == false;
}

Set_IfcDocumentReference_1_n &IfcDocumentInformation::getDocumentReferences()
{
    if (Step::BaseObject::inited())
    {
        return m_DocumentReferences;
    }
    else
    {
        m_DocumentReferences.setUnset(true);
        return m_DocumentReferences;
    }
}

const Set_IfcDocumentReference_1_n &IfcDocumentInformation::getDocumentReferences() const
{
    return const_cast< IfcDocumentInformation * > (this)->getDocumentReferences();
}

void IfcDocumentInformation::unsetDocumentReferences()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DocumentReferences.clear();
    m_DocumentReferences.setUnset(true);
}

bool IfcDocumentInformation::testDocumentReferences() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_DocumentReferences.isUnset() == false;
}

Inverse_Set_IfcDocumentInformationRelationship_0_1 &IfcDocumentInformation::getIsPointer()
{
    if (Step::BaseObject::inited())
    {
        return m_IsPointer;
    }
 
    m_IsPointer.setUnset(true);
    return m_IsPointer;
}

const Inverse_Set_IfcDocumentInformationRelationship_0_1 &IfcDocumentInformation::getIsPointer() const
{
    return  const_cast< IfcDocumentInformation * > (this)->getIsPointer();
}

bool IfcDocumentInformation::testIsPointer() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsPointer.isUnset() == false;
}

Inverse_Set_IfcDocumentInformationRelationship_0_n &IfcDocumentInformation::getIsPointedTo()
{
    if (Step::BaseObject::inited())
    {
        return m_IsPointedTo;
    }
 
    m_IsPointedTo.setUnset(true);
    return m_IsPointedTo;
}

const Inverse_Set_IfcDocumentInformationRelationship_0_n &IfcDocumentInformation::getIsPointedTo() const
{
    return  const_cast< IfcDocumentInformation * > (this)->getIsPointedTo();
}

bool IfcDocumentInformation::testIsPointedTo() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsPointedTo.isUnset() == false;
}

bool IfcDocumentInformation::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DocumentId = Step::getUnset(m_DocumentId);
    }
    else
    {
        m_DocumentId = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Purpose = Step::getUnset(m_Purpose);
    }
    else
    {
        m_Purpose = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IntendedUse = Step::getUnset(m_IntendedUse);
    }
    else
    {
        m_IntendedUse = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Scope = Step::getUnset(m_Scope);
    }
    else
    {
        m_Scope = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Revision = Step::getUnset(m_Revision);
    }
    else
    {
        m_Revision = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DocumentOwner = NULL;
    }
    else
    {
        m_DocumentOwner = new IfcActorSelect;
        if (arg[0] == '#') {
            m_DocumentOwner->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Editors.setUnset(true);
    }
    else
    {
        m_Editors.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcActorSelect > attr2 = new IfcActorSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_Editors.insert(attr2);
                }
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
        m_CreationTime = NULL;
    }
    else
    {
        m_CreationTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LastRevisionTime = NULL;
    }
    else
    {
        m_LastRevisionTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElectronicFormat = NULL;
    }
    else
    {
        m_ElectronicFormat = static_cast< IfcDocumentElectronicFormat * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ValidFrom = NULL;
    }
    else
    {
        m_ValidFrom = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ValidUntil = NULL;
    }
    else
    {
        m_ValidUntil = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Confidentiality = IfcDocumentConfidentialityEnum_UNSET;
    }
    else
    {
        if (arg == ".PUBLIC.")
        {
            m_Confidentiality = IfcDocumentConfidentialityEnum_PUBLIC;
        }
        else if (arg == ".RESTRICTED.")
        {
            m_Confidentiality = IfcDocumentConfidentialityEnum_RESTRICTED;
        }
        else if (arg == ".CONFIDENTIAL.")
        {
            m_Confidentiality = IfcDocumentConfidentialityEnum_CONFIDENTIAL;
        }
        else if (arg == ".PERSONAL.")
        {
            m_Confidentiality = IfcDocumentConfidentialityEnum_PERSONAL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_Confidentiality = IfcDocumentConfidentialityEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_Confidentiality = IfcDocumentConfidentialityEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Status = IfcDocumentStatusEnum_UNSET;
    }
    else
    {
        if (arg == ".DRAFT.")
        {
            m_Status = IfcDocumentStatusEnum_DRAFT;
        }
        else if (arg == ".FINALDRAFT.")
        {
            m_Status = IfcDocumentStatusEnum_FINALDRAFT;
        }
        else if (arg == ".FINAL.")
        {
            m_Status = IfcDocumentStatusEnum_FINAL;
        }
        else if (arg == ".REVISION.")
        {
            m_Status = IfcDocumentStatusEnum_REVISION;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_Status = IfcDocumentStatusEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DocumentReferences.setUnset(true);
    }
    else
    {
        m_DocumentReferences.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_DocumentReferences.insert(static_cast< IfcDocumentReference * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_IsPointer.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsPointer.insert(static_cast< IfcDocumentInformationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_IsPointedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsPointedTo.insert(static_cast< IfcDocumentInformationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDocumentInformation::copy(const IfcDocumentInformation &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDocumentId(obj.m_DocumentId);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setPurpose(obj.m_Purpose);
    setIntendedUse(obj.m_IntendedUse);
    setScope(obj.m_Scope);
    setRevision(obj.m_Revision);
    setDocumentOwner((IfcActorSelect*)copyop(obj.m_DocumentOwner.get()));
    Set_IfcActorSelect_1_n::const_iterator it_m_Editors;
    for (it_m_Editors = obj.m_Editors.begin(); it_m_Editors != obj.m_Editors.end(); ++it_m_Editors)
    {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_Editors).get()), copyop);
        m_Editors.insert(copyTarget.get());
    }
    
    setCreationTime((IfcDateAndTime*)copyop(obj.m_CreationTime.get()));
    setLastRevisionTime((IfcDateAndTime*)copyop(obj.m_LastRevisionTime.get()));
    setElectronicFormat((IfcDocumentElectronicFormat*)copyop(obj.m_ElectronicFormat.get()));
    setValidFrom((IfcCalendarDate*)copyop(obj.m_ValidFrom.get()));
    setValidUntil((IfcCalendarDate*)copyop(obj.m_ValidUntil.get()));
    setConfidentiality(obj.m_Confidentiality);
    setStatus(obj.m_Status);
    Set_IfcDocumentReference_1_n::const_iterator it_m_DocumentReferences;
    for (it_m_DocumentReferences = obj.m_DocumentReferences.begin(); it_m_DocumentReferences != obj.m_DocumentReferences.end(); ++it_m_DocumentReferences)
    {
        Step::RefPtr< IfcDocumentReference > copyTarget = (IfcDocumentReference *) (copyop((*it_m_DocumentReferences).get()));
        m_DocumentReferences.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDocumentInformation, Step::BaseEntity)
