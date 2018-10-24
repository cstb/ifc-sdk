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


#include <ifc2x3/IfcProcedure.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProcedure::IfcProcedure(Step::Id id, Step::SPFData *args) : 
    IfcProcess(id, args)
{
    m_ProcedureID = Step::getUnset(m_ProcedureID);
    m_ProcedureType = IfcProcedureTypeEnum_UNSET;
    m_UserDefinedProcedureType = Step::getUnset(m_UserDefinedProcedureType);
}

IfcProcedure::~IfcProcedure()
{}

bool IfcProcedure::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProcedure(this);
}


IfcIdentifier IfcProcedure::getProcedureID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProcedureID;
    }
    else 
    {
        return Step::getUnset(m_ProcedureID);
    }    
}

const IfcIdentifier IfcProcedure::getProcedureID() const
{
    return const_cast<IfcProcedure *>(this)->getProcedureID();
}

void IfcProcedure::setProcedureID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProcedureID = value;
}

void IfcProcedure::unsetProcedureID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProcedureID = Step::getUnset(getProcedureID());
}

bool IfcProcedure::testProcedureID() const
{
    return Step::isUnset(getProcedureID()) == false;
}


IfcProcedureTypeEnum IfcProcedure::getProcedureType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProcedureType;
    }
    else 
    {
        return IfcProcedureTypeEnum_UNSET;
    }    
}

IfcProcedureTypeEnum IfcProcedure::getProcedureType() const
{
    return const_cast<IfcProcedure *>(this)->getProcedureType();
}

void IfcProcedure::setProcedureType(IfcProcedureTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProcedureType = value;
}

void IfcProcedure::unsetProcedureType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProcedureType = IfcProcedureTypeEnum_UNSET;
}

bool IfcProcedure::testProcedureType() const
{
    return Step::isUnset(getProcedureType()) == false;
}


IfcLabel IfcProcedure::getUserDefinedProcedureType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedProcedureType;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedProcedureType);
    }    
}

const IfcLabel IfcProcedure::getUserDefinedProcedureType() const
{
    return const_cast<IfcProcedure *>(this)->getUserDefinedProcedureType();
}

void IfcProcedure::setUserDefinedProcedureType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedProcedureType = value;
}

void IfcProcedure::unsetUserDefinedProcedureType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedProcedureType = Step::getUnset(getUserDefinedProcedureType());
}

bool IfcProcedure::testUserDefinedProcedureType() const
{
    return Step::isUnset(getUserDefinedProcedureType()) == false;
}

bool IfcProcedure::init()
{
    if (IfcProcess::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProcedureID = Step::getUnset(m_ProcedureID);
    }
    else
    {
        m_ProcedureID = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProcedureType = IfcProcedureTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ADVICE_CAUTION.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_ADVICE_CAUTION;
        }
        else if (arg == ".ADVICE_NOTE.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_ADVICE_NOTE;
        }
        else if (arg == ".ADVICE_WARNING.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_ADVICE_WARNING;
        }
        else if (arg == ".CALIBRATION.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_CALIBRATION;
        }
        else if (arg == ".DIAGNOSTIC.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_DIAGNOSTIC;
        }
        else if (arg == ".SHUTDOWN.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_SHUTDOWN;
        }
        else if (arg == ".STARTUP.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_STARTUP;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ProcedureType = IfcProcedureTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedProcedureType = Step::getUnset(m_UserDefinedProcedureType);
    }
    else
    {
        m_UserDefinedProcedureType = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcProcedure::copy(const IfcProcedure &obj, const CopyOp &copyop)
{
    IfcProcess::copy(obj, copyop);
    setProcedureID(obj.m_ProcedureID);
    setProcedureType(obj.m_ProcedureType);
    setUserDefinedProcedureType(obj.m_UserDefinedProcedureType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProcedure, IfcProcess)
