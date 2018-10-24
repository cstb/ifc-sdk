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


#include <ifc2x3/IfcElectricDistributionPoint.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElectricDistributionPoint::IfcElectricDistributionPoint(Step::Id id, Step::SPFData *args) : 
    IfcFlowController(id, args)
{
    m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
    m_UserDefinedFunction = Step::getUnset(m_UserDefinedFunction);
}

IfcElectricDistributionPoint::~IfcElectricDistributionPoint()
{}

bool IfcElectricDistributionPoint::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElectricDistributionPoint(this);
}


IfcElectricDistributionPointFunctionEnum IfcElectricDistributionPoint::getDistributionPointFunction()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DistributionPointFunction;
    }
    else 
    {
        return IfcElectricDistributionPointFunctionEnum_UNSET;
    }    
}

IfcElectricDistributionPointFunctionEnum IfcElectricDistributionPoint::getDistributionPointFunction() const
{
    return const_cast<IfcElectricDistributionPoint *>(this)->getDistributionPointFunction();
}

void IfcElectricDistributionPoint::setDistributionPointFunction(IfcElectricDistributionPointFunctionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DistributionPointFunction = value;
}

void IfcElectricDistributionPoint::unsetDistributionPointFunction()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
}

bool IfcElectricDistributionPoint::testDistributionPointFunction() const
{
    return Step::isUnset(getDistributionPointFunction()) == false;
}


IfcLabel IfcElectricDistributionPoint::getUserDefinedFunction()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedFunction;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedFunction);
    }    
}

const IfcLabel IfcElectricDistributionPoint::getUserDefinedFunction() const
{
    return const_cast<IfcElectricDistributionPoint *>(this)->getUserDefinedFunction();
}

void IfcElectricDistributionPoint::setUserDefinedFunction(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedFunction = value;
}

void IfcElectricDistributionPoint::unsetUserDefinedFunction()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedFunction = Step::getUnset(getUserDefinedFunction());
}

bool IfcElectricDistributionPoint::testUserDefinedFunction() const
{
    return Step::isUnset(getUserDefinedFunction()) == false;
}

bool IfcElectricDistributionPoint::init()
{
    if (IfcFlowController::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
    }
    else
    {
        if (arg == ".ALARMPANEL.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_ALARMPANEL;
        }
        else if (arg == ".CONSUMERUNIT.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_CONSUMERUNIT;
        }
        else if (arg == ".CONTROLPANEL.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_CONTROLPANEL;
        }
        else if (arg == ".DISTRIBUTIONBOARD.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_DISTRIBUTIONBOARD;
        }
        else if (arg == ".GASDETECTORPANEL.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_GASDETECTORPANEL;
        }
        else if (arg == ".INDICATORPANEL.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_INDICATORPANEL;
        }
        else if (arg == ".MIMICPANEL.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_MIMICPANEL;
        }
        else if (arg == ".MOTORCONTROLCENTRE.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_MOTORCONTROLCENTRE;
        }
        else if (arg == ".SWITCHBOARD.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_SWITCHBOARD;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_DistributionPointFunction = IfcElectricDistributionPointFunctionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedFunction = Step::getUnset(m_UserDefinedFunction);
    }
    else
    {
        m_UserDefinedFunction = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcElectricDistributionPoint::copy(const IfcElectricDistributionPoint &obj, const CopyOp &copyop)
{
    IfcFlowController::copy(obj, copyop);
    setDistributionPointFunction(obj.m_DistributionPointFunction);
    setUserDefinedFunction(obj.m_UserDefinedFunction);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElectricDistributionPoint, IfcFlowController)
