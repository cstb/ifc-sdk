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


#include <ifc2x3/IfcDamperType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDamperType::IfcDamperType(Step::Id id, Step::SPFData *args) : 
    IfcFlowControllerType(id, args)
{
    m_PredefinedType = IfcDamperTypeEnum_UNSET;
}

IfcDamperType::~IfcDamperType()
{}

bool IfcDamperType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDamperType(this);
}


IfcDamperTypeEnum IfcDamperType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcDamperTypeEnum_UNSET;
    }    
}

IfcDamperTypeEnum IfcDamperType::getPredefinedType() const
{
    return const_cast<IfcDamperType *>(this)->getPredefinedType();
}

void IfcDamperType::setPredefinedType(IfcDamperTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcDamperType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcDamperTypeEnum_UNSET;
}

bool IfcDamperType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcDamperType::init()
{
    if (IfcFlowControllerType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcDamperTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CONTROLDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_CONTROLDAMPER;
        }
        else if (arg == ".FIREDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_FIREDAMPER;
        }
        else if (arg == ".SMOKEDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_SMOKEDAMPER;
        }
        else if (arg == ".FIRESMOKEDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_FIRESMOKEDAMPER;
        }
        else if (arg == ".BACKDRAFTDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_BACKDRAFTDAMPER;
        }
        else if (arg == ".RELIEFDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_RELIEFDAMPER;
        }
        else if (arg == ".BLASTDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_BLASTDAMPER;
        }
        else if (arg == ".GRAVITYDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_GRAVITYDAMPER;
        }
        else if (arg == ".GRAVITYRELIEFDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_GRAVITYRELIEFDAMPER;
        }
        else if (arg == ".BALANCINGDAMPER.")
        {
            m_PredefinedType = IfcDamperTypeEnum_BALANCINGDAMPER;
        }
        else if (arg == ".FUMEHOODEXHAUST.")
        {
            m_PredefinedType = IfcDamperTypeEnum_FUMEHOODEXHAUST;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcDamperTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcDamperTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDamperType::copy(const IfcDamperType &obj, const CopyOp &copyop)
{
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDamperType, IfcFlowControllerType)
