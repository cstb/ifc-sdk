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


#include <ifc2x3/IfcAddress.h>

#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAddress::IfcAddress(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Purpose = IfcAddressTypeEnum_UNSET;
    m_Description = Step::getUnset(m_Description);
    m_UserDefinedPurpose = Step::getUnset(m_UserDefinedPurpose);
}

IfcAddress::~IfcAddress()
{}

bool IfcAddress::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAddress(this);
}


IfcAddressTypeEnum IfcAddress::getPurpose()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Purpose;
    }
    else 
    {
        return IfcAddressTypeEnum_UNSET;
    }    
}

IfcAddressTypeEnum IfcAddress::getPurpose() const
{
    return const_cast<IfcAddress *>(this)->getPurpose();
}

void IfcAddress::setPurpose(IfcAddressTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = value;
}

void IfcAddress::unsetPurpose()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = IfcAddressTypeEnum_UNSET;
}

bool IfcAddress::testPurpose() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPurpose()) == false;
}


IfcText IfcAddress::getDescription()
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

const IfcText IfcAddress::getDescription() const
{
    return const_cast<IfcAddress *>(this)->getDescription();
}

void IfcAddress::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcAddress::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcAddress::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}


IfcLabel IfcAddress::getUserDefinedPurpose()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedPurpose;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedPurpose);
    }    
}

const IfcLabel IfcAddress::getUserDefinedPurpose() const
{
    return const_cast<IfcAddress *>(this)->getUserDefinedPurpose();
}

void IfcAddress::setUserDefinedPurpose(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedPurpose = value;
}

void IfcAddress::unsetUserDefinedPurpose()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedPurpose = Step::getUnset(getUserDefinedPurpose());
}

bool IfcAddress::testUserDefinedPurpose() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUserDefinedPurpose()) == false;
}

Inverse_Set_IfcOrganization_0_n &IfcAddress::getOfOrganization()
{
    if (Step::BaseObject::inited())
    {
        return m_OfOrganization;
    }
 
    m_OfOrganization.setUnset(true);
    return m_OfOrganization;
}

const Inverse_Set_IfcOrganization_0_n &IfcAddress::getOfOrganization() const
{
    return  const_cast< IfcAddress * > (this)->getOfOrganization();
}

bool IfcAddress::testOfOrganization() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_OfOrganization.isUnset() == false;
}

Inverse_Set_IfcPerson_0_n &IfcAddress::getOfPerson()
{
    if (Step::BaseObject::inited())
    {
        return m_OfPerson;
    }
 
    m_OfPerson.setUnset(true);
    return m_OfPerson;
}

const Inverse_Set_IfcPerson_0_n &IfcAddress::getOfPerson() const
{
    return  const_cast< IfcAddress * > (this)->getOfPerson();
}

bool IfcAddress::testOfPerson() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_OfPerson.isUnset() == false;
}

bool IfcAddress::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Purpose = IfcAddressTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".OFFICE.")
        {
            m_Purpose = IfcAddressTypeEnum_OFFICE;
        }
        else if (arg == ".SITE.")
        {
            m_Purpose = IfcAddressTypeEnum_SITE;
        }
        else if (arg == ".HOME.")
        {
            m_Purpose = IfcAddressTypeEnum_HOME;
        }
        else if (arg == ".DISTRIBUTIONPOINT.")
        {
            m_Purpose = IfcAddressTypeEnum_DISTRIBUTIONPOINT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_Purpose = IfcAddressTypeEnum_USERDEFINED;
        }
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
        m_UserDefinedPurpose = Step::getUnset(m_UserDefinedPurpose);
    }
    else
    {
        m_UserDefinedPurpose = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcOrganization::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_OfOrganization.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_OfOrganization.insert(static_cast< IfcOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPerson::getClassType(), 7);
    if (inverses)
    {
        unsigned int i;
        m_OfPerson.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_OfPerson.insert(static_cast< IfcPerson * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAddress::copy(const IfcAddress &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setPurpose(obj.m_Purpose);
    setDescription(obj.m_Description);
    setUserDefinedPurpose(obj.m_UserDefinedPurpose);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAddress, Step::BaseEntity)
