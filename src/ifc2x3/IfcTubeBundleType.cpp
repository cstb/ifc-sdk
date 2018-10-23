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


#include <ifc2x3/IfcTubeBundleType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTubeBundleType::IfcTubeBundleType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcTubeBundleTypeEnum_UNSET;
}

IfcTubeBundleType::~IfcTubeBundleType()
{}

bool IfcTubeBundleType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTubeBundleType(this);
}


IfcTubeBundleTypeEnum IfcTubeBundleType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcTubeBundleTypeEnum_UNSET;
    }    
}

IfcTubeBundleTypeEnum IfcTubeBundleType::getPredefinedType() const
{
    return const_cast<IfcTubeBundleType *>(this)->getPredefinedType();
}

void IfcTubeBundleType::setPredefinedType(IfcTubeBundleTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcTubeBundleType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcTubeBundleTypeEnum_UNSET;
}

bool IfcTubeBundleType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcTubeBundleType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcTubeBundleTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FINNED.")
        {
            m_PredefinedType = IfcTubeBundleTypeEnum_FINNED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcTubeBundleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcTubeBundleTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTubeBundleType::copy(const IfcTubeBundleType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTubeBundleType, IfcEnergyConversionDeviceType)
