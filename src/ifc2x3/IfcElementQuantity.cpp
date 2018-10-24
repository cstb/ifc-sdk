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


#include <ifc2x3/IfcElementQuantity.h>

#include <ifc2x3/IfcPhysicalQuantity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElementQuantity::IfcElementQuantity(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_MethodOfMeasurement = Step::getUnset(m_MethodOfMeasurement);
    m_Quantities.setUnset(true);
}

IfcElementQuantity::~IfcElementQuantity()
{}

bool IfcElementQuantity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElementQuantity(this);
}


IfcLabel IfcElementQuantity::getMethodOfMeasurement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MethodOfMeasurement;
    }
    else 
    {
        return Step::getUnset(m_MethodOfMeasurement);
    }    
}

const IfcLabel IfcElementQuantity::getMethodOfMeasurement() const
{
    return const_cast<IfcElementQuantity *>(this)->getMethodOfMeasurement();
}

void IfcElementQuantity::setMethodOfMeasurement(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MethodOfMeasurement = value;
}

void IfcElementQuantity::unsetMethodOfMeasurement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MethodOfMeasurement = Step::getUnset(getMethodOfMeasurement());
}

bool IfcElementQuantity::testMethodOfMeasurement() const
{
    return Step::isUnset(getMethodOfMeasurement()) == false;
}


Set_IfcPhysicalQuantity_1_n &IfcElementQuantity::getQuantities()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Quantities;
    }
    else 
    {
        m_Quantities.setUnset(true);
        return m_Quantities;
    }    
}

const Set_IfcPhysicalQuantity_1_n &IfcElementQuantity::getQuantities() const
{
    return const_cast<IfcElementQuantity *>(this)->getQuantities();
}

void IfcElementQuantity::setQuantities(const Set_IfcPhysicalQuantity_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Quantities = value;
}

void IfcElementQuantity::unsetQuantities()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Quantities.clear();
    m_Quantities.setUnset(true);
}

bool IfcElementQuantity::testQuantities() const
{
    return m_Quantities.isUnset() == false;
}

bool IfcElementQuantity::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MethodOfMeasurement = Step::getUnset(m_MethodOfMeasurement);
    }
    else
    {
        m_MethodOfMeasurement = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Quantities.setUnset(true);
    }
    else
    {
        m_Quantities.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Quantities.insert(static_cast< IfcPhysicalQuantity * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcElementQuantity::copy(const IfcElementQuantity &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setMethodOfMeasurement(obj.m_MethodOfMeasurement);
    Set_IfcPhysicalQuantity_1_n::const_iterator it_m_Quantities;
    for (it_m_Quantities = obj.m_Quantities.begin(); it_m_Quantities != obj.m_Quantities.end(); ++it_m_Quantities)
    {
        Step::RefPtr< IfcPhysicalQuantity > copyTarget = (IfcPhysicalQuantity *) (copyop((*it_m_Quantities).get()));
        m_Quantities.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElementQuantity, IfcPropertySetDefinition)
