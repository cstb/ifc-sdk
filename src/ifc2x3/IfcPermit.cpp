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


#include <ifc2x3/IfcPermit.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPermit::IfcPermit(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_PermitID = Step::getUnset(m_PermitID);
}

IfcPermit::~IfcPermit()
{}

bool IfcPermit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPermit(this);
}


IfcIdentifier IfcPermit::getPermitID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PermitID;
    }
    else 
    {
        return Step::getUnset(m_PermitID);
    }    
}

const IfcIdentifier IfcPermit::getPermitID() const
{
    return const_cast<IfcPermit *>(this)->getPermitID();
}

void IfcPermit::setPermitID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PermitID = value;
}

void IfcPermit::unsetPermitID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PermitID = Step::getUnset(getPermitID());
}

bool IfcPermit::testPermitID() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPermitID()) == false;
}

bool IfcPermit::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PermitID = Step::getUnset(m_PermitID);
    }
    else
    {
        m_PermitID = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcPermit::copy(const IfcPermit &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setPermitID(obj.m_PermitID);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPermit, IfcControl)
