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


#include <ifc2x3/IfcTwoDirectionRepeatFactor.h>

#include <ifc2x3/IfcVector.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTwoDirectionRepeatFactor::IfcTwoDirectionRepeatFactor(Step::Id id, Step::SPFData *args) : 
    IfcOneDirectionRepeatFactor(id, args)
{
    m_SecondRepeatFactor = NULL;
}

IfcTwoDirectionRepeatFactor::~IfcTwoDirectionRepeatFactor()
{}

bool IfcTwoDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTwoDirectionRepeatFactor(this);
}


IfcVector *IfcTwoDirectionRepeatFactor::getSecondRepeatFactor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SecondRepeatFactor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVector *IfcTwoDirectionRepeatFactor::getSecondRepeatFactor() const
{
    return const_cast<IfcTwoDirectionRepeatFactor *>(this)->getSecondRepeatFactor();
}

void IfcTwoDirectionRepeatFactor::setSecondRepeatFactor(const Step::RefPtr< IfcVector > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondRepeatFactor = value;
}

void IfcTwoDirectionRepeatFactor::unsetSecondRepeatFactor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondRepeatFactor = Step::getUnset(getSecondRepeatFactor());
}

bool IfcTwoDirectionRepeatFactor::testSecondRepeatFactor() const
{
    return Step::isUnset(getSecondRepeatFactor()) == false;
}

bool IfcTwoDirectionRepeatFactor::init()
{
    if (IfcOneDirectionRepeatFactor::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SecondRepeatFactor = NULL;
    }
    else
    {
        m_SecondRepeatFactor = static_cast< IfcVector * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcTwoDirectionRepeatFactor::copy(const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop)
{
    IfcOneDirectionRepeatFactor::copy(obj, copyop);
    setSecondRepeatFactor((IfcVector*)copyop(obj.m_SecondRepeatFactor.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTwoDirectionRepeatFactor, IfcOneDirectionRepeatFactor)
