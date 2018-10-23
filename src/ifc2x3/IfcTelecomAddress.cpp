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


#include <ifc2x3/IfcTelecomAddress.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTelecomAddress::IfcTelecomAddress(Step::Id id, Step::SPFData *args) : 
    IfcAddress(id, args)
{
    m_TelephoneNumbers.setUnset(true);
    m_FacsimileNumbers.setUnset(true);
    m_PagerNumber = Step::getUnset(m_PagerNumber);
    m_ElectronicMailAddresses.setUnset(true);
    m_WWWHomePageURL = Step::getUnset(m_WWWHomePageURL);
}

IfcTelecomAddress::~IfcTelecomAddress()
{}

bool IfcTelecomAddress::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTelecomAddress(this);
}


List_IfcLabel_1_n &IfcTelecomAddress::getTelephoneNumbers()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TelephoneNumbers;
    }
    else 
    {
        m_TelephoneNumbers.setUnset(true);
        return m_TelephoneNumbers;
    }    
}

const List_IfcLabel_1_n &IfcTelecomAddress::getTelephoneNumbers() const
{
    return const_cast<IfcTelecomAddress *>(this)->getTelephoneNumbers();
}

void IfcTelecomAddress::setTelephoneNumbers(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TelephoneNumbers = value;
}

void IfcTelecomAddress::unsetTelephoneNumbers()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TelephoneNumbers.clear();
    m_TelephoneNumbers.setUnset(true);
}

bool IfcTelecomAddress::testTelephoneNumbers() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_TelephoneNumbers.isUnset() == false;
}


List_IfcLabel_1_n &IfcTelecomAddress::getFacsimileNumbers()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FacsimileNumbers;
    }
    else 
    {
        m_FacsimileNumbers.setUnset(true);
        return m_FacsimileNumbers;
    }    
}

const List_IfcLabel_1_n &IfcTelecomAddress::getFacsimileNumbers() const
{
    return const_cast<IfcTelecomAddress *>(this)->getFacsimileNumbers();
}

void IfcTelecomAddress::setFacsimileNumbers(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FacsimileNumbers = value;
}

void IfcTelecomAddress::unsetFacsimileNumbers()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FacsimileNumbers.clear();
    m_FacsimileNumbers.setUnset(true);
}

bool IfcTelecomAddress::testFacsimileNumbers() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_FacsimileNumbers.isUnset() == false;
}


IfcLabel IfcTelecomAddress::getPagerNumber()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PagerNumber;
    }
    else 
    {
        return Step::getUnset(m_PagerNumber);
    }    
}

const IfcLabel IfcTelecomAddress::getPagerNumber() const
{
    return const_cast<IfcTelecomAddress *>(this)->getPagerNumber();
}

void IfcTelecomAddress::setPagerNumber(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PagerNumber = value;
}

void IfcTelecomAddress::unsetPagerNumber()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PagerNumber = Step::getUnset(getPagerNumber());
}

bool IfcTelecomAddress::testPagerNumber() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPagerNumber()) == false;
}


List_IfcLabel_1_n &IfcTelecomAddress::getElectronicMailAddresses()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElectronicMailAddresses;
    }
    else 
    {
        m_ElectronicMailAddresses.setUnset(true);
        return m_ElectronicMailAddresses;
    }    
}

const List_IfcLabel_1_n &IfcTelecomAddress::getElectronicMailAddresses() const
{
    return const_cast<IfcTelecomAddress *>(this)->getElectronicMailAddresses();
}

void IfcTelecomAddress::setElectronicMailAddresses(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectronicMailAddresses = value;
}

void IfcTelecomAddress::unsetElectronicMailAddresses()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElectronicMailAddresses.clear();
    m_ElectronicMailAddresses.setUnset(true);
}

bool IfcTelecomAddress::testElectronicMailAddresses() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ElectronicMailAddresses.isUnset() == false;
}


IfcLabel IfcTelecomAddress::getWWWHomePageURL()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WWWHomePageURL;
    }
    else 
    {
        return Step::getUnset(m_WWWHomePageURL);
    }    
}

const IfcLabel IfcTelecomAddress::getWWWHomePageURL() const
{
    return const_cast<IfcTelecomAddress *>(this)->getWWWHomePageURL();
}

void IfcTelecomAddress::setWWWHomePageURL(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WWWHomePageURL = value;
}

void IfcTelecomAddress::unsetWWWHomePageURL()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WWWHomePageURL = Step::getUnset(getWWWHomePageURL());
}

bool IfcTelecomAddress::testWWWHomePageURL() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWWWHomePageURL()) == false;
}

bool IfcTelecomAddress::init()
{
    if (IfcAddress::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TelephoneNumbers.setUnset(true);
    }
    else
    {
        m_TelephoneNumbers.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_TelephoneNumbers.push_back(Step::String::fromSPF(str1)
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
        m_FacsimileNumbers.setUnset(true);
    }
    else
    {
        m_FacsimileNumbers.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_FacsimileNumbers.push_back(Step::String::fromSPF(str1)
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
        m_PagerNumber = Step::getUnset(m_PagerNumber);
    }
    else
    {
        m_PagerNumber = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElectronicMailAddresses.setUnset(true);
    }
    else
    {
        m_ElectronicMailAddresses.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ElectronicMailAddresses.push_back(Step::String::fromSPF(str1)
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
        m_WWWHomePageURL = Step::getUnset(m_WWWHomePageURL);
    }
    else
    {
        m_WWWHomePageURL = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcTelecomAddress::copy(const IfcTelecomAddress &obj, const CopyOp &copyop)
{
    IfcAddress::copy(obj, copyop);
    List_IfcLabel_1_n::const_iterator it_m_TelephoneNumbers;
    for (it_m_TelephoneNumbers = obj.m_TelephoneNumbers.begin(); it_m_TelephoneNumbers != obj.m_TelephoneNumbers.end(); ++it_m_TelephoneNumbers)
    {
        IfcLabel copyTarget = (*it_m_TelephoneNumbers);
        m_TelephoneNumbers.push_back(copyTarget);
    }
    
    List_IfcLabel_1_n::const_iterator it_m_FacsimileNumbers;
    for (it_m_FacsimileNumbers = obj.m_FacsimileNumbers.begin(); it_m_FacsimileNumbers != obj.m_FacsimileNumbers.end(); ++it_m_FacsimileNumbers)
    {
        IfcLabel copyTarget = (*it_m_FacsimileNumbers);
        m_FacsimileNumbers.push_back(copyTarget);
    }
    
    setPagerNumber(obj.m_PagerNumber);
    List_IfcLabel_1_n::const_iterator it_m_ElectronicMailAddresses;
    for (it_m_ElectronicMailAddresses = obj.m_ElectronicMailAddresses.begin(); it_m_ElectronicMailAddresses != obj.m_ElectronicMailAddresses.end(); ++it_m_ElectronicMailAddresses)
    {
        IfcLabel copyTarget = (*it_m_ElectronicMailAddresses);
        m_ElectronicMailAddresses.push_back(copyTarget);
    }
    
    setWWWHomePageURL(obj.m_WWWHomePageURL);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTelecomAddress, IfcAddress)
