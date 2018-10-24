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


#include <ifc2x3/IfcArbitraryClosedProfileDef.h>

#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcArbitraryClosedProfileDef::IfcArbitraryClosedProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcProfileDef(id, args)
{
    m_OuterCurve = NULL;
}

IfcArbitraryClosedProfileDef::~IfcArbitraryClosedProfileDef()
{}

bool IfcArbitraryClosedProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcArbitraryClosedProfileDef(this);
}


IfcCurve *IfcArbitraryClosedProfileDef::getOuterCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OuterCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcArbitraryClosedProfileDef::getOuterCurve() const
{
    return const_cast<IfcArbitraryClosedProfileDef *>(this)->getOuterCurve();
}

void IfcArbitraryClosedProfileDef::setOuterCurve(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterCurve = value;
}

void IfcArbitraryClosedProfileDef::unsetOuterCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterCurve = Step::getUnset(getOuterCurve());
}

bool IfcArbitraryClosedProfileDef::testOuterCurve() const
{
    return Step::isUnset(getOuterCurve()) == false;
}

bool IfcArbitraryClosedProfileDef::init()
{
    if (IfcProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OuterCurve = NULL;
    }
    else
    {
        m_OuterCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcArbitraryClosedProfileDef::copy(const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop)
{
    IfcProfileDef::copy(obj, copyop);
    setOuterCurve((IfcCurve*)copyop(obj.m_OuterCurve.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcArbitraryClosedProfileDef, IfcProfileDef)
