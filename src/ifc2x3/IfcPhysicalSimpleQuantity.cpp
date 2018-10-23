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


#include <ifc2x3/IfcPhysicalSimpleQuantity.h>

#include <ifc2x3/IfcNamedUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPhysicalSimpleQuantity::IfcPhysicalSimpleQuantity(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalQuantity(id, args)
{
    m_Unit = NULL;
}

IfcPhysicalSimpleQuantity::~IfcPhysicalSimpleQuantity()
{}

bool IfcPhysicalSimpleQuantity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPhysicalSimpleQuantity(this);
}


IfcNamedUnit *IfcPhysicalSimpleQuantity::getUnit()
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

const IfcNamedUnit *IfcPhysicalSimpleQuantity::getUnit() const
{
    return const_cast<IfcPhysicalSimpleQuantity *>(this)->getUnit();
}

void IfcPhysicalSimpleQuantity::setUnit(const Step::RefPtr< IfcNamedUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = value;
}

void IfcPhysicalSimpleQuantity::unsetUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = Step::getUnset(getUnit());
}

bool IfcPhysicalSimpleQuantity::testUnit() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUnit()) == false;
}

bool IfcPhysicalSimpleQuantity::init()
{
    if (IfcPhysicalQuantity::init() == false)
    {
        return false;
    }
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
    return true;
}

void IfcPhysicalSimpleQuantity::copy(const IfcPhysicalSimpleQuantity &obj, const CopyOp &copyop)
{
    IfcPhysicalQuantity::copy(obj, copyop);
    setUnit((IfcNamedUnit*)copyop(obj.m_Unit.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPhysicalSimpleQuantity, IfcPhysicalQuantity)
