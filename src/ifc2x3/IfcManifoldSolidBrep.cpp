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


#include <ifc2x3/IfcManifoldSolidBrep.h>

#include <ifc2x3/IfcClosedShell.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcManifoldSolidBrep::IfcManifoldSolidBrep(Step::Id id, Step::SPFData *args) : 
    IfcSolidModel(id, args)
{
    m_Outer = NULL;
}

IfcManifoldSolidBrep::~IfcManifoldSolidBrep()
{}

bool IfcManifoldSolidBrep::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcManifoldSolidBrep(this);
}


IfcClosedShell *IfcManifoldSolidBrep::getOuter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Outer.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcClosedShell *IfcManifoldSolidBrep::getOuter() const
{
    return const_cast<IfcManifoldSolidBrep *>(this)->getOuter();
}

void IfcManifoldSolidBrep::setOuter(const Step::RefPtr< IfcClosedShell > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Outer = value;
}

void IfcManifoldSolidBrep::unsetOuter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Outer = Step::getUnset(getOuter());
}

bool IfcManifoldSolidBrep::testOuter() const
{
    return Step::isUnset(getOuter()) == false;
}

bool IfcManifoldSolidBrep::init()
{
    if (IfcSolidModel::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Outer = NULL;
    }
    else
    {
        m_Outer = static_cast< IfcClosedShell * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcManifoldSolidBrep::copy(const IfcManifoldSolidBrep &obj, const CopyOp &copyop)
{
    IfcSolidModel::copy(obj, copyop);
    setOuter((IfcClosedShell*)copyop(obj.m_Outer.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcManifoldSolidBrep, IfcSolidModel)
