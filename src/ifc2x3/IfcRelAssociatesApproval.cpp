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


#include <ifc2x3/IfcRelAssociatesApproval.h>

#include <ifc2x3/IfcApproval.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssociatesApproval::IfcRelAssociatesApproval(Step::Id id, Step::SPFData *args) : 
    IfcRelAssociates(id, args)
{
    m_RelatingApproval = NULL;
}

IfcRelAssociatesApproval::~IfcRelAssociatesApproval()
{}

bool IfcRelAssociatesApproval::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssociatesApproval(this);
}


IfcApproval *IfcRelAssociatesApproval::getRelatingApproval()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingApproval.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcApproval *IfcRelAssociatesApproval::getRelatingApproval() const
{
    return const_cast<IfcRelAssociatesApproval *>(this)->getRelatingApproval();
}

void IfcRelAssociatesApproval::setRelatingApproval(const Step::RefPtr< IfcApproval > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingApproval = value;
}

void IfcRelAssociatesApproval::unsetRelatingApproval()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingApproval = Step::getUnset(getRelatingApproval());
}

bool IfcRelAssociatesApproval::testRelatingApproval() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingApproval()) == false;
}

bool IfcRelAssociatesApproval::init()
{
    if (IfcRelAssociates::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingApproval = NULL;
    }
    else
    {
        m_RelatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssociatesApproval::copy(const IfcRelAssociatesApproval &obj, const CopyOp &copyop)
{
    IfcRelAssociates::copy(obj, copyop);
    setRelatingApproval((IfcApproval*)copyop(obj.m_RelatingApproval.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssociatesApproval, IfcRelAssociates)
