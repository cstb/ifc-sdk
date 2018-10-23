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


#include <ifc2x3/IfcUnitAssignment.h>

#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcUnitAssignment::IfcUnitAssignment(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Units.setUnset(true);
}

IfcUnitAssignment::~IfcUnitAssignment()
{}

bool IfcUnitAssignment::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcUnitAssignment(this);
}


Set_IfcUnit_1_n &IfcUnitAssignment::getUnits()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Units;
    }
    else 
    {
        m_Units.setUnset(true);
        return m_Units;
    }    
}

const Set_IfcUnit_1_n &IfcUnitAssignment::getUnits() const
{
    return const_cast<IfcUnitAssignment *>(this)->getUnits();
}

void IfcUnitAssignment::setUnits(const Set_IfcUnit_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Units = value;
}

void IfcUnitAssignment::unsetUnits()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Units.clear();
    m_Units.setUnset(true);
}

bool IfcUnitAssignment::testUnits() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Units.isUnset() == false;
}

bool IfcUnitAssignment::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Units.setUnset(true);
    }
    else
    {
        m_Units.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcUnit > attr2 = new IfcUnit();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_Units.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcUnitAssignment::copy(const IfcUnitAssignment &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcUnit_1_n::const_iterator it_m_Units;
    for (it_m_Units = obj.m_Units.begin(); it_m_Units != obj.m_Units.end(); ++it_m_Units)
    {
        Step::RefPtr< IfcUnit > copyTarget = new IfcUnit;
        copyTarget->copy(*((*it_m_Units).get()), copyop);
        m_Units.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcUnitAssignment, Step::BaseEntity)
