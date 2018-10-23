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


#include <ifc2x3/IfcStairFlight.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStairFlight::IfcStairFlight(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_NumberOfRiser = Step::getUnset(m_NumberOfRiser);
    m_NumberOfTreads = Step::getUnset(m_NumberOfTreads);
    m_RiserHeight = Step::getUnset(m_RiserHeight);
    m_TreadLength = Step::getUnset(m_TreadLength);
}

IfcStairFlight::~IfcStairFlight()
{}

bool IfcStairFlight::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStairFlight(this);
}


Step::Integer IfcStairFlight::getNumberOfRiser()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NumberOfRiser;
    }
    else 
    {
        return Step::getUnset(m_NumberOfRiser);
    }    
}

Step::Integer IfcStairFlight::getNumberOfRiser() const
{
    return const_cast<IfcStairFlight *>(this)->getNumberOfRiser();
}

void IfcStairFlight::setNumberOfRiser(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NumberOfRiser = value;
}

void IfcStairFlight::unsetNumberOfRiser()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NumberOfRiser = Step::getUnset(getNumberOfRiser());
}

bool IfcStairFlight::testNumberOfRiser() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getNumberOfRiser()) == false;
}


Step::Integer IfcStairFlight::getNumberOfTreads()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NumberOfTreads;
    }
    else 
    {
        return Step::getUnset(m_NumberOfTreads);
    }    
}

Step::Integer IfcStairFlight::getNumberOfTreads() const
{
    return const_cast<IfcStairFlight *>(this)->getNumberOfTreads();
}

void IfcStairFlight::setNumberOfTreads(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NumberOfTreads = value;
}

void IfcStairFlight::unsetNumberOfTreads()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NumberOfTreads = Step::getUnset(getNumberOfTreads());
}

bool IfcStairFlight::testNumberOfTreads() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getNumberOfTreads()) == false;
}


IfcPositiveLengthMeasure IfcStairFlight::getRiserHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RiserHeight;
    }
    else 
    {
        return Step::getUnset(m_RiserHeight);
    }    
}

IfcPositiveLengthMeasure IfcStairFlight::getRiserHeight() const
{
    return const_cast<IfcStairFlight *>(this)->getRiserHeight();
}

void IfcStairFlight::setRiserHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RiserHeight = value;
}

void IfcStairFlight::unsetRiserHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RiserHeight = Step::getUnset(getRiserHeight());
}

bool IfcStairFlight::testRiserHeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRiserHeight()) == false;
}


IfcPositiveLengthMeasure IfcStairFlight::getTreadLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TreadLength;
    }
    else 
    {
        return Step::getUnset(m_TreadLength);
    }    
}

IfcPositiveLengthMeasure IfcStairFlight::getTreadLength() const
{
    return const_cast<IfcStairFlight *>(this)->getTreadLength();
}

void IfcStairFlight::setTreadLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TreadLength = value;
}

void IfcStairFlight::unsetTreadLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TreadLength = Step::getUnset(getTreadLength());
}

bool IfcStairFlight::testTreadLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTreadLength()) == false;
}

bool IfcStairFlight::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NumberOfRiser = Step::getUnset(m_NumberOfRiser);
    }
    else
    {
        m_NumberOfRiser = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NumberOfTreads = Step::getUnset(m_NumberOfTreads);
    }
    else
    {
        m_NumberOfTreads = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RiserHeight = Step::getUnset(m_RiserHeight);
    }
    else
    {
        m_RiserHeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TreadLength = Step::getUnset(m_TreadLength);
    }
    else
    {
        m_TreadLength = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStairFlight::copy(const IfcStairFlight &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setNumberOfRiser(obj.m_NumberOfRiser);
    setNumberOfTreads(obj.m_NumberOfTreads);
    setRiserHeight(obj.m_RiserHeight);
    setTreadLength(obj.m_TreadLength);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStairFlight, IfcBuildingElement)
