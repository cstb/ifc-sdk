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


#include <ifc2x3/IfcLibraryInformation.h>

#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/IfcLibraryReference.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcLibraryInformation_LibraryReference_type::Inverted_IfcLibraryInformation_LibraryReference_type()
{

}

void Inverted_IfcLibraryInformation_LibraryReference_type::setOwner(IfcLibraryInformation *owner)
{
    mOwner = owner;
}

void Inverted_IfcLibraryInformation_LibraryReference_type::insert(const Step::RefPtr< IfcLibraryReference > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcLibraryReference *inverse = const_cast< IfcLibraryReference * > (value.get());
    Set_IfcLibraryReference_1_n::insert(value);
    inverse->m_ReferenceIntoLibrary.insert(mOwner);
}


Inverted_IfcLibraryInformation_LibraryReference_type::size_type Inverted_IfcLibraryInformation_LibraryReference_type::erase(const Step::RefPtr< IfcLibraryReference > &value)
{
    IfcLibraryReference *inverse = const_cast< IfcLibraryReference * > (value.get());
    inverse->m_ReferenceIntoLibrary.erase(mOwner);
    return Set_IfcLibraryReference_1_n::erase(value);
}

void Inverted_IfcLibraryInformation_LibraryReference_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcLibraryInformation::IfcLibraryInformation(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Version = Step::getUnset(m_Version);
    m_Publisher = NULL;
    m_VersionDate = NULL;
    m_LibraryReference.setUnset(true);
    m_LibraryReference.setOwner(this);
}

IfcLibraryInformation::~IfcLibraryInformation()
{}

bool IfcLibraryInformation::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLibraryInformation(this);
}


IfcLabel IfcLibraryInformation::getName()
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

const IfcLabel IfcLibraryInformation::getName() const
{
    return const_cast<IfcLibraryInformation *>(this)->getName();
}

void IfcLibraryInformation::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcLibraryInformation::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcLibraryInformation::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcLabel IfcLibraryInformation::getVersion()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Version;
    }
    else 
    {
        return Step::getUnset(m_Version);
    }    
}

const IfcLabel IfcLibraryInformation::getVersion() const
{
    return const_cast<IfcLibraryInformation *>(this)->getVersion();
}

void IfcLibraryInformation::setVersion(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Version = value;
}

void IfcLibraryInformation::unsetVersion()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Version = Step::getUnset(getVersion());
}

bool IfcLibraryInformation::testVersion() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVersion()) == false;
}


IfcOrganization *IfcLibraryInformation::getPublisher()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Publisher.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcOrganization *IfcLibraryInformation::getPublisher() const
{
    return const_cast<IfcLibraryInformation *>(this)->getPublisher();
}

void IfcLibraryInformation::setPublisher(const Step::RefPtr< IfcOrganization > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Publisher = value;
}

void IfcLibraryInformation::unsetPublisher()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Publisher = Step::getUnset(getPublisher());
}

bool IfcLibraryInformation::testPublisher() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPublisher()) == false;
}


IfcCalendarDate *IfcLibraryInformation::getVersionDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VersionDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcLibraryInformation::getVersionDate() const
{
    return const_cast<IfcLibraryInformation *>(this)->getVersionDate();
}

void IfcLibraryInformation::setVersionDate(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VersionDate = value;
}

void IfcLibraryInformation::unsetVersionDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VersionDate = Step::getUnset(getVersionDate());
}

bool IfcLibraryInformation::testVersionDate() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVersionDate()) == false;
}

Set_IfcLibraryReference_1_n &IfcLibraryInformation::getLibraryReference()
{
    if (Step::BaseObject::inited())
    {
        return m_LibraryReference;
    }
    else
    {
        m_LibraryReference.setUnset(true);
        return m_LibraryReference;
    }
}

const Set_IfcLibraryReference_1_n &IfcLibraryInformation::getLibraryReference() const
{
    return const_cast< IfcLibraryInformation * > (this)->getLibraryReference();
}

void IfcLibraryInformation::unsetLibraryReference()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LibraryReference.clear();
    m_LibraryReference.setUnset(true);
}

bool IfcLibraryInformation::testLibraryReference() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_LibraryReference.isUnset() == false;
}

bool IfcLibraryInformation::init()
{
    std::string arg;
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
        m_Version = Step::getUnset(m_Version);
    }
    else
    {
        m_Version = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Publisher = NULL;
    }
    else
    {
        m_Publisher = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VersionDate = NULL;
    }
    else
    {
        m_VersionDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LibraryReference.setUnset(true);
    }
    else
    {
        m_LibraryReference.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_LibraryReference.insert(static_cast< IfcLibraryReference * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcLibraryInformation::copy(const IfcLibraryInformation &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setVersion(obj.m_Version);
    setPublisher((IfcOrganization*)copyop(obj.m_Publisher.get()));
    setVersionDate((IfcCalendarDate*)copyop(obj.m_VersionDate.get()));
    Set_IfcLibraryReference_1_n::const_iterator it_m_LibraryReference;
    for (it_m_LibraryReference = obj.m_LibraryReference.begin(); it_m_LibraryReference != obj.m_LibraryReference.end(); ++it_m_LibraryReference)
    {
        Step::RefPtr< IfcLibraryReference > copyTarget = (IfcLibraryReference *) (copyop((*it_m_LibraryReference).get()));
        m_LibraryReference.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLibraryInformation, Step::BaseEntity)
