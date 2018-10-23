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


#include <ifc2x3/IfcPostalAddress.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPostalAddress::IfcPostalAddress(Step::Id id, Step::SPFData *args) : 
    IfcAddress(id, args)
{
    m_InternalLocation = Step::getUnset(m_InternalLocation);
    m_AddressLines.setUnset(true);
    m_PostalBox = Step::getUnset(m_PostalBox);
    m_Town = Step::getUnset(m_Town);
    m_Region = Step::getUnset(m_Region);
    m_PostalCode = Step::getUnset(m_PostalCode);
    m_Country = Step::getUnset(m_Country);
}

IfcPostalAddress::~IfcPostalAddress()
{}

bool IfcPostalAddress::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPostalAddress(this);
}


IfcLabel IfcPostalAddress::getInternalLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InternalLocation;
    }
    else 
    {
        return Step::getUnset(m_InternalLocation);
    }    
}

const IfcLabel IfcPostalAddress::getInternalLocation() const
{
    return const_cast<IfcPostalAddress *>(this)->getInternalLocation();
}

void IfcPostalAddress::setInternalLocation(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InternalLocation = value;
}

void IfcPostalAddress::unsetInternalLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InternalLocation = Step::getUnset(getInternalLocation());
}

bool IfcPostalAddress::testInternalLocation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getInternalLocation()) == false;
}


List_IfcLabel_1_n &IfcPostalAddress::getAddressLines()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AddressLines;
    }
    else 
    {
        m_AddressLines.setUnset(true);
        return m_AddressLines;
    }    
}

const List_IfcLabel_1_n &IfcPostalAddress::getAddressLines() const
{
    return const_cast<IfcPostalAddress *>(this)->getAddressLines();
}

void IfcPostalAddress::setAddressLines(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AddressLines = value;
}

void IfcPostalAddress::unsetAddressLines()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AddressLines.clear();
    m_AddressLines.setUnset(true);
}

bool IfcPostalAddress::testAddressLines() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_AddressLines.isUnset() == false;
}


IfcLabel IfcPostalAddress::getPostalBox()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PostalBox;
    }
    else 
    {
        return Step::getUnset(m_PostalBox);
    }    
}

const IfcLabel IfcPostalAddress::getPostalBox() const
{
    return const_cast<IfcPostalAddress *>(this)->getPostalBox();
}

void IfcPostalAddress::setPostalBox(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PostalBox = value;
}

void IfcPostalAddress::unsetPostalBox()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PostalBox = Step::getUnset(getPostalBox());
}

bool IfcPostalAddress::testPostalBox() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPostalBox()) == false;
}


IfcLabel IfcPostalAddress::getTown()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Town;
    }
    else 
    {
        return Step::getUnset(m_Town);
    }    
}

const IfcLabel IfcPostalAddress::getTown() const
{
    return const_cast<IfcPostalAddress *>(this)->getTown();
}

void IfcPostalAddress::setTown(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Town = value;
}

void IfcPostalAddress::unsetTown()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Town = Step::getUnset(getTown());
}

bool IfcPostalAddress::testTown() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTown()) == false;
}


IfcLabel IfcPostalAddress::getRegion()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Region;
    }
    else 
    {
        return Step::getUnset(m_Region);
    }    
}

const IfcLabel IfcPostalAddress::getRegion() const
{
    return const_cast<IfcPostalAddress *>(this)->getRegion();
}

void IfcPostalAddress::setRegion(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Region = value;
}

void IfcPostalAddress::unsetRegion()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Region = Step::getUnset(getRegion());
}

bool IfcPostalAddress::testRegion() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRegion()) == false;
}


IfcLabel IfcPostalAddress::getPostalCode()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PostalCode;
    }
    else 
    {
        return Step::getUnset(m_PostalCode);
    }    
}

const IfcLabel IfcPostalAddress::getPostalCode() const
{
    return const_cast<IfcPostalAddress *>(this)->getPostalCode();
}

void IfcPostalAddress::setPostalCode(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PostalCode = value;
}

void IfcPostalAddress::unsetPostalCode()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PostalCode = Step::getUnset(getPostalCode());
}

bool IfcPostalAddress::testPostalCode() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPostalCode()) == false;
}


IfcLabel IfcPostalAddress::getCountry()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Country;
    }
    else 
    {
        return Step::getUnset(m_Country);
    }    
}

const IfcLabel IfcPostalAddress::getCountry() const
{
    return const_cast<IfcPostalAddress *>(this)->getCountry();
}

void IfcPostalAddress::setCountry(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Country = value;
}

void IfcPostalAddress::unsetCountry()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Country = Step::getUnset(getCountry());
}

bool IfcPostalAddress::testCountry() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCountry()) == false;
}

bool IfcPostalAddress::init()
{
    if (IfcAddress::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InternalLocation = Step::getUnset(m_InternalLocation);
    }
    else
    {
        m_InternalLocation = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AddressLines.setUnset(true);
    }
    else
    {
        m_AddressLines.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_AddressLines.push_back(Step::String::fromSPF(str1)
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
        m_PostalBox = Step::getUnset(m_PostalBox);
    }
    else
    {
        m_PostalBox = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Town = Step::getUnset(m_Town);
    }
    else
    {
        m_Town = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Region = Step::getUnset(m_Region);
    }
    else
    {
        m_Region = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PostalCode = Step::getUnset(m_PostalCode);
    }
    else
    {
        m_PostalCode = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Country = Step::getUnset(m_Country);
    }
    else
    {
        m_Country = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcPostalAddress::copy(const IfcPostalAddress &obj, const CopyOp &copyop)
{
    IfcAddress::copy(obj, copyop);
    setInternalLocation(obj.m_InternalLocation);
    List_IfcLabel_1_n::const_iterator it_m_AddressLines;
    for (it_m_AddressLines = obj.m_AddressLines.begin(); it_m_AddressLines != obj.m_AddressLines.end(); ++it_m_AddressLines)
    {
        IfcLabel copyTarget = (*it_m_AddressLines);
        m_AddressLines.push_back(copyTarget);
    }
    
    setPostalBox(obj.m_PostalBox);
    setTown(obj.m_Town);
    setRegion(obj.m_Region);
    setPostalCode(obj.m_PostalCode);
    setCountry(obj.m_Country);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPostalAddress, IfcAddress)
