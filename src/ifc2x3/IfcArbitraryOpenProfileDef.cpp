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


#include <ifc2x3/IfcArbitraryOpenProfileDef.h>

#include <ifc2x3/IfcBoundedCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcArbitraryOpenProfileDef::IfcArbitraryOpenProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcProfileDef(id, args)
{
    m_Curve = NULL;
}

IfcArbitraryOpenProfileDef::~IfcArbitraryOpenProfileDef()
{}

bool IfcArbitraryOpenProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcArbitraryOpenProfileDef(this);
}


IfcBoundedCurve *IfcArbitraryOpenProfileDef::getCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Curve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBoundedCurve *IfcArbitraryOpenProfileDef::getCurve() const
{
    return const_cast<IfcArbitraryOpenProfileDef *>(this)->getCurve();
}

void IfcArbitraryOpenProfileDef::setCurve(const Step::RefPtr< IfcBoundedCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Curve = value;
}

void IfcArbitraryOpenProfileDef::unsetCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Curve = Step::getUnset(getCurve());
}

bool IfcArbitraryOpenProfileDef::testCurve() const
{
    return Step::isUnset(getCurve()) == false;
}

bool IfcArbitraryOpenProfileDef::init()
{
    if (IfcProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Curve = NULL;
    }
    else
    {
        m_Curve = static_cast< IfcBoundedCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcArbitraryOpenProfileDef::copy(const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop)
{
    IfcProfileDef::copy(obj, copyop);
    setCurve((IfcBoundedCurve*)copyop(obj.m_Curve.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcArbitraryOpenProfileDef, IfcProfileDef)
