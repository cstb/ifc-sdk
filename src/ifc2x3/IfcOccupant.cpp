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


#include <ifc2x3/IfcOccupant.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOccupant::IfcOccupant(Step::Id id, Step::SPFData *args) : 
    IfcActor(id, args)
{
    m_PredefinedType = IfcOccupantTypeEnum_UNSET;
}

IfcOccupant::~IfcOccupant()
{}

bool IfcOccupant::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOccupant(this);
}


IfcOccupantTypeEnum IfcOccupant::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcOccupantTypeEnum_UNSET;
    }    
}

IfcOccupantTypeEnum IfcOccupant::getPredefinedType() const
{
    return const_cast<IfcOccupant *>(this)->getPredefinedType();
}

void IfcOccupant::setPredefinedType(IfcOccupantTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcOccupant::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcOccupantTypeEnum_UNSET;
}

bool IfcOccupant::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcOccupant::init()
{
    if (IfcActor::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcOccupantTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ASSIGNEE.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_ASSIGNEE;
        }
        else if (arg == ".ASSIGNOR.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_ASSIGNOR;
        }
        else if (arg == ".LESSEE.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_LESSEE;
        }
        else if (arg == ".LESSOR.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_LESSOR;
        }
        else if (arg == ".LETTINGAGENT.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_LETTINGAGENT;
        }
        else if (arg == ".OWNER.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_OWNER;
        }
        else if (arg == ".TENANT.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_TENANT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcOccupantTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcOccupant::copy(const IfcOccupant &obj, const CopyOp &copyop)
{
    IfcActor::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOccupant, IfcActor)
