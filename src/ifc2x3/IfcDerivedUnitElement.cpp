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


#include <ifc2x3/IfcDerivedUnitElement.h>

#include <ifc2x3/IfcNamedUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDerivedUnitElement::IfcDerivedUnitElement(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Unit = NULL;
    m_Exponent = Step::getUnset(m_Exponent);
}

IfcDerivedUnitElement::~IfcDerivedUnitElement()
{}

bool IfcDerivedUnitElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDerivedUnitElement(this);
}


IfcNamedUnit *IfcDerivedUnitElement::getUnit()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Unit.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcNamedUnit *IfcDerivedUnitElement::getUnit() const
{
    return const_cast<IfcDerivedUnitElement *>(this)->getUnit();
}

void IfcDerivedUnitElement::setUnit(const Step::RefPtr< IfcNamedUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = value;
}

void IfcDerivedUnitElement::unsetUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = Step::getUnset(getUnit());
}

bool IfcDerivedUnitElement::testUnit() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUnit()) == false;
}


Step::Integer IfcDerivedUnitElement::getExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Exponent;
    }
    else 
    {
        return Step::getUnset(m_Exponent);
    }    
}

Step::Integer IfcDerivedUnitElement::getExponent() const
{
    return const_cast<IfcDerivedUnitElement *>(this)->getExponent();
}

void IfcDerivedUnitElement::setExponent(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Exponent = value;
}

void IfcDerivedUnitElement::unsetExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Exponent = Step::getUnset(getExponent());
}

bool IfcDerivedUnitElement::testExponent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getExponent()) == false;
}

bool IfcDerivedUnitElement::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Unit = NULL;
    }
    else
    {
        m_Unit = static_cast< IfcNamedUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Exponent = Step::getUnset(m_Exponent);
    }
    else
    {
        m_Exponent = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcDerivedUnitElement::copy(const IfcDerivedUnitElement &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setUnit((IfcNamedUnit*)copyop(obj.m_Unit.get()));
    setExponent(obj.m_Exponent);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDerivedUnitElement, Step::BaseEntity)
