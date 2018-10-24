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


#include <ifc2x3/IfcCurrencyRelationship.h>

#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcLibraryInformation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCurrencyRelationship::IfcCurrencyRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RelatingMonetaryUnit = NULL;
    m_RelatedMonetaryUnit = NULL;
    m_ExchangeRate = Step::getUnset(m_ExchangeRate);
    m_RateDateTime = NULL;
    m_RateSource = NULL;
}

IfcCurrencyRelationship::~IfcCurrencyRelationship()
{}

bool IfcCurrencyRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurrencyRelationship(this);
}


IfcMonetaryUnit *IfcCurrencyRelationship::getRelatingMonetaryUnit()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingMonetaryUnit.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMonetaryUnit *IfcCurrencyRelationship::getRelatingMonetaryUnit() const
{
    return const_cast<IfcCurrencyRelationship *>(this)->getRelatingMonetaryUnit();
}

void IfcCurrencyRelationship::setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingMonetaryUnit = value;
}

void IfcCurrencyRelationship::unsetRelatingMonetaryUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingMonetaryUnit = Step::getUnset(getRelatingMonetaryUnit());
}

bool IfcCurrencyRelationship::testRelatingMonetaryUnit() const
{
    return Step::isUnset(getRelatingMonetaryUnit()) == false;
}


IfcMonetaryUnit *IfcCurrencyRelationship::getRelatedMonetaryUnit()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatedMonetaryUnit.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMonetaryUnit *IfcCurrencyRelationship::getRelatedMonetaryUnit() const
{
    return const_cast<IfcCurrencyRelationship *>(this)->getRelatedMonetaryUnit();
}

void IfcCurrencyRelationship::setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedMonetaryUnit = value;
}

void IfcCurrencyRelationship::unsetRelatedMonetaryUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedMonetaryUnit = Step::getUnset(getRelatedMonetaryUnit());
}

bool IfcCurrencyRelationship::testRelatedMonetaryUnit() const
{
    return Step::isUnset(getRelatedMonetaryUnit()) == false;
}


IfcPositiveRatioMeasure IfcCurrencyRelationship::getExchangeRate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ExchangeRate;
    }
    else 
    {
        return Step::getUnset(m_ExchangeRate);
    }    
}

IfcPositiveRatioMeasure IfcCurrencyRelationship::getExchangeRate() const
{
    return const_cast<IfcCurrencyRelationship *>(this)->getExchangeRate();
}

void IfcCurrencyRelationship::setExchangeRate(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ExchangeRate = value;
}

void IfcCurrencyRelationship::unsetExchangeRate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ExchangeRate = Step::getUnset(getExchangeRate());
}

bool IfcCurrencyRelationship::testExchangeRate() const
{
    return Step::isUnset(getExchangeRate()) == false;
}


IfcDateAndTime *IfcCurrencyRelationship::getRateDateTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RateDateTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateAndTime *IfcCurrencyRelationship::getRateDateTime() const
{
    return const_cast<IfcCurrencyRelationship *>(this)->getRateDateTime();
}

void IfcCurrencyRelationship::setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RateDateTime = value;
}

void IfcCurrencyRelationship::unsetRateDateTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RateDateTime = Step::getUnset(getRateDateTime());
}

bool IfcCurrencyRelationship::testRateDateTime() const
{
    return Step::isUnset(getRateDateTime()) == false;
}


IfcLibraryInformation *IfcCurrencyRelationship::getRateSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RateSource.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcLibraryInformation *IfcCurrencyRelationship::getRateSource() const
{
    return const_cast<IfcCurrencyRelationship *>(this)->getRateSource();
}

void IfcCurrencyRelationship::setRateSource(const Step::RefPtr< IfcLibraryInformation > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RateSource = value;
}

void IfcCurrencyRelationship::unsetRateSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RateSource = Step::getUnset(getRateSource());
}

bool IfcCurrencyRelationship::testRateSource() const
{
    return Step::isUnset(getRateSource()) == false;
}

bool IfcCurrencyRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingMonetaryUnit = NULL;
    }
    else
    {
        m_RelatingMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedMonetaryUnit = NULL;
    }
    else
    {
        m_RelatedMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ExchangeRate = Step::getUnset(m_ExchangeRate);
    }
    else
    {
        m_ExchangeRate = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RateDateTime = NULL;
    }
    else
    {
        m_RateDateTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RateSource = NULL;
    }
    else
    {
        m_RateSource = static_cast< IfcLibraryInformation * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcCurrencyRelationship::copy(const IfcCurrencyRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRelatingMonetaryUnit((IfcMonetaryUnit*)copyop(obj.m_RelatingMonetaryUnit.get()));
    setRelatedMonetaryUnit((IfcMonetaryUnit*)copyop(obj.m_RelatedMonetaryUnit.get()));
    setExchangeRate(obj.m_ExchangeRate);
    setRateDateTime((IfcDateAndTime*)copyop(obj.m_RateDateTime.get()));
    setRateSource((IfcLibraryInformation*)copyop(obj.m_RateSource.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCurrencyRelationship, Step::BaseEntity)
