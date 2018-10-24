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


#include <ifc2x3/IfcValveType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcValveType::IfcValveType(Step::Id id, Step::SPFData *args) : 
    IfcFlowControllerType(id, args)
{
    m_PredefinedType = IfcValveTypeEnum_UNSET;
}

IfcValveType::~IfcValveType()
{}

bool IfcValveType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcValveType(this);
}


IfcValveTypeEnum IfcValveType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcValveTypeEnum_UNSET;
    }    
}

IfcValveTypeEnum IfcValveType::getPredefinedType() const
{
    return const_cast<IfcValveType *>(this)->getPredefinedType();
}

void IfcValveType::setPredefinedType(IfcValveTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcValveType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcValveTypeEnum_UNSET;
}

bool IfcValveType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcValveType::init()
{
    if (IfcFlowControllerType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcValveTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".AIRRELEASE.")
        {
            m_PredefinedType = IfcValveTypeEnum_AIRRELEASE;
        }
        else if (arg == ".ANTIVACUUM.")
        {
            m_PredefinedType = IfcValveTypeEnum_ANTIVACUUM;
        }
        else if (arg == ".CHANGEOVER.")
        {
            m_PredefinedType = IfcValveTypeEnum_CHANGEOVER;
        }
        else if (arg == ".CHECK.")
        {
            m_PredefinedType = IfcValveTypeEnum_CHECK;
        }
        else if (arg == ".COMMISSIONING.")
        {
            m_PredefinedType = IfcValveTypeEnum_COMMISSIONING;
        }
        else if (arg == ".DIVERTING.")
        {
            m_PredefinedType = IfcValveTypeEnum_DIVERTING;
        }
        else if (arg == ".DRAWOFFCOCK.")
        {
            m_PredefinedType = IfcValveTypeEnum_DRAWOFFCOCK;
        }
        else if (arg == ".DOUBLECHECK.")
        {
            m_PredefinedType = IfcValveTypeEnum_DOUBLECHECK;
        }
        else if (arg == ".DOUBLEREGULATING.")
        {
            m_PredefinedType = IfcValveTypeEnum_DOUBLEREGULATING;
        }
        else if (arg == ".FAUCET.")
        {
            m_PredefinedType = IfcValveTypeEnum_FAUCET;
        }
        else if (arg == ".FLUSHING.")
        {
            m_PredefinedType = IfcValveTypeEnum_FLUSHING;
        }
        else if (arg == ".GASCOCK.")
        {
            m_PredefinedType = IfcValveTypeEnum_GASCOCK;
        }
        else if (arg == ".GASTAP.")
        {
            m_PredefinedType = IfcValveTypeEnum_GASTAP;
        }
        else if (arg == ".ISOLATING.")
        {
            m_PredefinedType = IfcValveTypeEnum_ISOLATING;
        }
        else if (arg == ".MIXING.")
        {
            m_PredefinedType = IfcValveTypeEnum_MIXING;
        }
        else if (arg == ".PRESSUREREDUCING.")
        {
            m_PredefinedType = IfcValveTypeEnum_PRESSUREREDUCING;
        }
        else if (arg == ".PRESSURERELIEF.")
        {
            m_PredefinedType = IfcValveTypeEnum_PRESSURERELIEF;
        }
        else if (arg == ".REGULATING.")
        {
            m_PredefinedType = IfcValveTypeEnum_REGULATING;
        }
        else if (arg == ".SAFETYCUTOFF.")
        {
            m_PredefinedType = IfcValveTypeEnum_SAFETYCUTOFF;
        }
        else if (arg == ".STEAMTRAP.")
        {
            m_PredefinedType = IfcValveTypeEnum_STEAMTRAP;
        }
        else if (arg == ".STOPCOCK.")
        {
            m_PredefinedType = IfcValveTypeEnum_STOPCOCK;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcValveTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcValveTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcValveType::copy(const IfcValveType &obj, const CopyOp &copyop)
{
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcValveType, IfcFlowControllerType)
