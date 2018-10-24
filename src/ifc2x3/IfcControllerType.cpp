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


#include <ifc2x3/IfcControllerType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcControllerType::IfcControllerType(Step::Id id, Step::SPFData *args) : 
    IfcDistributionControlElementType(id, args)
{
    m_PredefinedType = IfcControllerTypeEnum_UNSET;
}

IfcControllerType::~IfcControllerType()
{}

bool IfcControllerType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcControllerType(this);
}


IfcControllerTypeEnum IfcControllerType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcControllerTypeEnum_UNSET;
    }    
}

IfcControllerTypeEnum IfcControllerType::getPredefinedType() const
{
    return const_cast<IfcControllerType *>(this)->getPredefinedType();
}

void IfcControllerType::setPredefinedType(IfcControllerTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcControllerType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcControllerTypeEnum_UNSET;
}

bool IfcControllerType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcControllerType::init()
{
    if (IfcDistributionControlElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcControllerTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FLOATING.")
        {
            m_PredefinedType = IfcControllerTypeEnum_FLOATING;
        }
        else if (arg == ".PROPORTIONAL.")
        {
            m_PredefinedType = IfcControllerTypeEnum_PROPORTIONAL;
        }
        else if (arg == ".PROPORTIONALINTEGRAL.")
        {
            m_PredefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRAL;
        }
        else if (arg == ".PROPORTIONALINTEGRALDERIVATIVE.")
        {
            m_PredefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRALDERIVATIVE;
        }
        else if (arg == ".TIMEDTWOPOSITION.")
        {
            m_PredefinedType = IfcControllerTypeEnum_TIMEDTWOPOSITION;
        }
        else if (arg == ".TWOPOSITION.")
        {
            m_PredefinedType = IfcControllerTypeEnum_TWOPOSITION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcControllerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcControllerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcControllerType::copy(const IfcControllerType &obj, const CopyOp &copyop)
{
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcControllerType, IfcDistributionControlElementType)
