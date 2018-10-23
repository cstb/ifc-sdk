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


#include <ifc2x3/IfcSpaceHeaterType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSpaceHeaterType::IfcSpaceHeaterType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcSpaceHeaterTypeEnum_UNSET;
}

IfcSpaceHeaterType::~IfcSpaceHeaterType()
{}

bool IfcSpaceHeaterType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpaceHeaterType(this);
}


IfcSpaceHeaterTypeEnum IfcSpaceHeaterType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSpaceHeaterTypeEnum_UNSET;
    }    
}

IfcSpaceHeaterTypeEnum IfcSpaceHeaterType::getPredefinedType() const
{
    return const_cast<IfcSpaceHeaterType *>(this)->getPredefinedType();
}

void IfcSpaceHeaterType::setPredefinedType(IfcSpaceHeaterTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSpaceHeaterType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSpaceHeaterTypeEnum_UNSET;
}

bool IfcSpaceHeaterType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSpaceHeaterType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSpaceHeaterTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".SECTIONALRADIATOR.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_SECTIONALRADIATOR;
        }
        else if (arg == ".PANELRADIATOR.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_PANELRADIATOR;
        }
        else if (arg == ".TUBULARRADIATOR.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_TUBULARRADIATOR;
        }
        else if (arg == ".CONVECTOR.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_CONVECTOR;
        }
        else if (arg == ".BASEBOARDHEATER.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_BASEBOARDHEATER;
        }
        else if (arg == ".FINNEDTUBEUNIT.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_FINNEDTUBEUNIT;
        }
        else if (arg == ".UNITHEATER.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_UNITHEATER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSpaceHeaterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceHeaterType::copy(const IfcSpaceHeaterType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSpaceHeaterType, IfcEnergyConversionDeviceType)
