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


#include <ifc2x3/IfcFilterType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFilterType::IfcFilterType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTreatmentDeviceType(id, args)
{
    m_PredefinedType = IfcFilterTypeEnum_UNSET;
}

IfcFilterType::~IfcFilterType()
{}

bool IfcFilterType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFilterType(this);
}


IfcFilterTypeEnum IfcFilterType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcFilterTypeEnum_UNSET;
    }    
}

IfcFilterTypeEnum IfcFilterType::getPredefinedType() const
{
    return const_cast<IfcFilterType *>(this)->getPredefinedType();
}

void IfcFilterType::setPredefinedType(IfcFilterTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcFilterType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcFilterTypeEnum_UNSET;
}

bool IfcFilterType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcFilterType::init()
{
    if (IfcFlowTreatmentDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcFilterTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".AIRPARTICLEFILTER.")
        {
            m_PredefinedType = IfcFilterTypeEnum_AIRPARTICLEFILTER;
        }
        else if (arg == ".ODORFILTER.")
        {
            m_PredefinedType = IfcFilterTypeEnum_ODORFILTER;
        }
        else if (arg == ".OILFILTER.")
        {
            m_PredefinedType = IfcFilterTypeEnum_OILFILTER;
        }
        else if (arg == ".STRAINER.")
        {
            m_PredefinedType = IfcFilterTypeEnum_STRAINER;
        }
        else if (arg == ".WATERFILTER.")
        {
            m_PredefinedType = IfcFilterTypeEnum_WATERFILTER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcFilterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcFilterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFilterType::copy(const IfcFilterType &obj, const CopyOp &copyop)
{
    IfcFlowTreatmentDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFilterType, IfcFlowTreatmentDeviceType)
