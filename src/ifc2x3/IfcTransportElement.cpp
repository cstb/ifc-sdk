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


#include <ifc2x3/IfcTransportElement.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTransportElement::IfcTransportElement(Step::Id id, Step::SPFData *args) : 
    IfcElement(id, args)
{
    m_OperationType = IfcTransportElementTypeEnum_UNSET;
    m_CapacityByWeight = Step::getUnset(m_CapacityByWeight);
    m_CapacityByNumber = Step::getUnset(m_CapacityByNumber);
}

IfcTransportElement::~IfcTransportElement()
{}

bool IfcTransportElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTransportElement(this);
}


IfcTransportElementTypeEnum IfcTransportElement::getOperationType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OperationType;
    }
    else 
    {
        return IfcTransportElementTypeEnum_UNSET;
    }    
}

IfcTransportElementTypeEnum IfcTransportElement::getOperationType() const
{
    return const_cast<IfcTransportElement *>(this)->getOperationType();
}

void IfcTransportElement::setOperationType(IfcTransportElementTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = value;
}

void IfcTransportElement::unsetOperationType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = IfcTransportElementTypeEnum_UNSET;
}

bool IfcTransportElement::testOperationType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOperationType()) == false;
}


IfcMassMeasure IfcTransportElement::getCapacityByWeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CapacityByWeight;
    }
    else 
    {
        return Step::getUnset(m_CapacityByWeight);
    }    
}

IfcMassMeasure IfcTransportElement::getCapacityByWeight() const
{
    return const_cast<IfcTransportElement *>(this)->getCapacityByWeight();
}

void IfcTransportElement::setCapacityByWeight(IfcMassMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CapacityByWeight = value;
}

void IfcTransportElement::unsetCapacityByWeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CapacityByWeight = Step::getUnset(getCapacityByWeight());
}

bool IfcTransportElement::testCapacityByWeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCapacityByWeight()) == false;
}


IfcCountMeasure IfcTransportElement::getCapacityByNumber()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CapacityByNumber;
    }
    else 
    {
        return Step::getUnset(m_CapacityByNumber);
    }    
}

IfcCountMeasure IfcTransportElement::getCapacityByNumber() const
{
    return const_cast<IfcTransportElement *>(this)->getCapacityByNumber();
}

void IfcTransportElement::setCapacityByNumber(IfcCountMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CapacityByNumber = value;
}

void IfcTransportElement::unsetCapacityByNumber()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CapacityByNumber = Step::getUnset(getCapacityByNumber());
}

bool IfcTransportElement::testCapacityByNumber() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCapacityByNumber()) == false;
}

bool IfcTransportElement::init()
{
    if (IfcElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OperationType = IfcTransportElementTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ELEVATOR.")
        {
            m_OperationType = IfcTransportElementTypeEnum_ELEVATOR;
        }
        else if (arg == ".ESCALATOR.")
        {
            m_OperationType = IfcTransportElementTypeEnum_ESCALATOR;
        }
        else if (arg == ".MOVINGWALKWAY.")
        {
            m_OperationType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_OperationType = IfcTransportElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_OperationType = IfcTransportElementTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CapacityByWeight = Step::getUnset(m_CapacityByWeight);
    }
    else
    {
        m_CapacityByWeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CapacityByNumber = Step::getUnset(m_CapacityByNumber);
    }
    else
    {
        m_CapacityByNumber = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcTransportElement::copy(const IfcTransportElement &obj, const CopyOp &copyop)
{
    IfcElement::copy(obj, copyop);
    setOperationType(obj.m_OperationType);
    setCapacityByWeight(obj.m_CapacityByWeight);
    setCapacityByNumber(obj.m_CapacityByNumber);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTransportElement, IfcElement)
