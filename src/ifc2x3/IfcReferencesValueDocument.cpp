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


#include <ifc2x3/IfcReferencesValueDocument.h>

#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcAppliedValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcReferencesValueDocument_ReferencingValues_type::Inverted_IfcReferencesValueDocument_ReferencingValues_type()
{

}

void Inverted_IfcReferencesValueDocument_ReferencingValues_type::setOwner(IfcReferencesValueDocument *owner)
{
    mOwner = owner;
}

void Inverted_IfcReferencesValueDocument_ReferencingValues_type::insert(const Step::RefPtr< IfcAppliedValue > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    Set_IfcAppliedValue_1_n::insert(value);
    inverse->m_ValuesReferenced.insert(mOwner);
}


Inverted_IfcReferencesValueDocument_ReferencingValues_type::size_type Inverted_IfcReferencesValueDocument_ReferencingValues_type::erase(const Step::RefPtr< IfcAppliedValue > &value)
{
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    inverse->m_ValuesReferenced.erase(mOwner);
    return Set_IfcAppliedValue_1_n::erase(value);
}

void Inverted_IfcReferencesValueDocument_ReferencingValues_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcReferencesValueDocument::IfcReferencesValueDocument(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ReferencedDocument = NULL;
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_ReferencingValues.setUnset(true);
    m_ReferencingValues.setOwner(this);
}

IfcReferencesValueDocument::~IfcReferencesValueDocument()
{}

bool IfcReferencesValueDocument::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcReferencesValueDocument(this);
}


IfcDocumentSelect *IfcReferencesValueDocument::getReferencedDocument()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReferencedDocument.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDocumentSelect *IfcReferencesValueDocument::getReferencedDocument() const
{
    return const_cast<IfcReferencesValueDocument *>(this)->getReferencedDocument();
}

void IfcReferencesValueDocument::setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReferencedDocument = value;
}

void IfcReferencesValueDocument::unsetReferencedDocument()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReferencedDocument = Step::getUnset(getReferencedDocument());
}

bool IfcReferencesValueDocument::testReferencedDocument() const
{
    return Step::isUnset(getReferencedDocument()) == false;
}


IfcLabel IfcReferencesValueDocument::getName()
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

const IfcLabel IfcReferencesValueDocument::getName() const
{
    return const_cast<IfcReferencesValueDocument *>(this)->getName();
}

void IfcReferencesValueDocument::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcReferencesValueDocument::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcReferencesValueDocument::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcReferencesValueDocument::getDescription()
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

const IfcText IfcReferencesValueDocument::getDescription() const
{
    return const_cast<IfcReferencesValueDocument *>(this)->getDescription();
}

void IfcReferencesValueDocument::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcReferencesValueDocument::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcReferencesValueDocument::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

Set_IfcAppliedValue_1_n &IfcReferencesValueDocument::getReferencingValues()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencingValues;
    }
    else
    {
        m_ReferencingValues.setUnset(true);
        return m_ReferencingValues;
    }
}

const Set_IfcAppliedValue_1_n &IfcReferencesValueDocument::getReferencingValues() const
{
    return const_cast< IfcReferencesValueDocument * > (this)->getReferencingValues();
}

void IfcReferencesValueDocument::unsetReferencingValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReferencingValues.clear();
    m_ReferencingValues.setUnset(true);
}

bool IfcReferencesValueDocument::testReferencingValues() const
{
    return m_ReferencingValues.isUnset() == false;
}

bool IfcReferencesValueDocument::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReferencedDocument = NULL;
    }
    else
    {
        m_ReferencedDocument = new IfcDocumentSelect;
        if (arg[0] == '#') {
            m_ReferencedDocument->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_ReferencingValues.setUnset(true);
    }
    else
    {
        m_ReferencingValues.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ReferencingValues.insert(static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcReferencesValueDocument::copy(const IfcReferencesValueDocument &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setReferencedDocument((IfcDocumentSelect*)copyop(obj.m_ReferencedDocument.get()));
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    Set_IfcAppliedValue_1_n::const_iterator it_m_ReferencingValues;
    for (it_m_ReferencingValues = obj.m_ReferencingValues.begin(); it_m_ReferencingValues != obj.m_ReferencingValues.end(); ++it_m_ReferencingValues)
    {
        Step::RefPtr< IfcAppliedValue > copyTarget = (IfcAppliedValue *) (copyop((*it_m_ReferencingValues).get()));
        m_ReferencingValues.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcReferencesValueDocument, Step::BaseEntity)
