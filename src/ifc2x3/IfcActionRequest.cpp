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


#include <ifc2x3/IfcActionRequest.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcActionRequest::IfcActionRequest(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_RequestID = Step::getUnset(m_RequestID);
}

IfcActionRequest::~IfcActionRequest()
{}

bool IfcActionRequest::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcActionRequest(this);
}


IfcIdentifier IfcActionRequest::getRequestID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RequestID;
    }
    else 
    {
        return Step::getUnset(m_RequestID);
    }    
}

const IfcIdentifier IfcActionRequest::getRequestID() const
{
    return const_cast<IfcActionRequest *>(this)->getRequestID();
}

void IfcActionRequest::setRequestID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RequestID = value;
}

void IfcActionRequest::unsetRequestID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RequestID = Step::getUnset(getRequestID());
}

bool IfcActionRequest::testRequestID() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRequestID()) == false;
}

bool IfcActionRequest::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RequestID = Step::getUnset(m_RequestID);
    }
    else
    {
        m_RequestID = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcActionRequest::copy(const IfcActionRequest &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setRequestID(obj.m_RequestID);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcActionRequest, IfcControl)
