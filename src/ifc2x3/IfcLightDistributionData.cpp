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


#include <ifc2x3/IfcLightDistributionData.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLightDistributionData::IfcLightDistributionData(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_MainPlaneAngle = Step::getUnset(m_MainPlaneAngle);
    m_SecondaryPlaneAngle.setUnset(true);
    m_LuminousIntensity.setUnset(true);
}

IfcLightDistributionData::~IfcLightDistributionData()
{}

bool IfcLightDistributionData::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLightDistributionData(this);
}


IfcPlaneAngleMeasure IfcLightDistributionData::getMainPlaneAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MainPlaneAngle;
    }
    else 
    {
        return Step::getUnset(m_MainPlaneAngle);
    }    
}

IfcPlaneAngleMeasure IfcLightDistributionData::getMainPlaneAngle() const
{
    return const_cast<IfcLightDistributionData *>(this)->getMainPlaneAngle();
}

void IfcLightDistributionData::setMainPlaneAngle(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MainPlaneAngle = value;
}

void IfcLightDistributionData::unsetMainPlaneAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MainPlaneAngle = Step::getUnset(getMainPlaneAngle());
}

bool IfcLightDistributionData::testMainPlaneAngle() const
{
    return Step::isUnset(getMainPlaneAngle()) == false;
}


List_IfcPlaneAngleMeasure_1_n &IfcLightDistributionData::getSecondaryPlaneAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SecondaryPlaneAngle;
    }
    else 
    {
        m_SecondaryPlaneAngle.setUnset(true);
        return m_SecondaryPlaneAngle;
    }    
}

const List_IfcPlaneAngleMeasure_1_n &IfcLightDistributionData::getSecondaryPlaneAngle() const
{
    return const_cast<IfcLightDistributionData *>(this)->getSecondaryPlaneAngle();
}

void IfcLightDistributionData::setSecondaryPlaneAngle(const List_IfcPlaneAngleMeasure_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondaryPlaneAngle = value;
}

void IfcLightDistributionData::unsetSecondaryPlaneAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondaryPlaneAngle.clear();
    m_SecondaryPlaneAngle.setUnset(true);
}

bool IfcLightDistributionData::testSecondaryPlaneAngle() const
{
    return m_SecondaryPlaneAngle.isUnset() == false;
}


List_IfcLuminousIntensityDistributionMeasure_1_n &IfcLightDistributionData::getLuminousIntensity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LuminousIntensity;
    }
    else 
    {
        m_LuminousIntensity.setUnset(true);
        return m_LuminousIntensity;
    }    
}

const List_IfcLuminousIntensityDistributionMeasure_1_n &IfcLightDistributionData::getLuminousIntensity() const
{
    return const_cast<IfcLightDistributionData *>(this)->getLuminousIntensity();
}

void IfcLightDistributionData::setLuminousIntensity(const List_IfcLuminousIntensityDistributionMeasure_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LuminousIntensity = value;
}

void IfcLightDistributionData::unsetLuminousIntensity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LuminousIntensity.clear();
    m_LuminousIntensity.setUnset(true);
}

bool IfcLightDistributionData::testLuminousIntensity() const
{
    return m_LuminousIntensity.isUnset() == false;
}

bool IfcLightDistributionData::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MainPlaneAngle = Step::getUnset(m_MainPlaneAngle);
    }
    else
    {
        m_MainPlaneAngle = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SecondaryPlaneAngle.setUnset(true);
    }
    else
    {
        m_SecondaryPlaneAngle.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_SecondaryPlaneAngle.push_back(Step::spfToReal(str1)

);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LuminousIntensity.setUnset(true);
    }
    else
    {
        m_LuminousIntensity.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_LuminousIntensity.push_back(Step::spfToReal(str1)

);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcLightDistributionData::copy(const IfcLightDistributionData &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setMainPlaneAngle(obj.m_MainPlaneAngle);
    List_IfcPlaneAngleMeasure_1_n::const_iterator it_m_SecondaryPlaneAngle;
    for (it_m_SecondaryPlaneAngle = obj.m_SecondaryPlaneAngle.begin(); it_m_SecondaryPlaneAngle != obj.m_SecondaryPlaneAngle.end(); ++it_m_SecondaryPlaneAngle)
    {
        IfcPlaneAngleMeasure copyTarget = (*it_m_SecondaryPlaneAngle);
        m_SecondaryPlaneAngle.push_back(copyTarget);
    }
    
    List_IfcLuminousIntensityDistributionMeasure_1_n::const_iterator it_m_LuminousIntensity;
    for (it_m_LuminousIntensity = obj.m_LuminousIntensity.begin(); it_m_LuminousIntensity != obj.m_LuminousIntensity.end(); ++it_m_LuminousIntensity)
    {
        IfcLuminousIntensityDistributionMeasure copyTarget = (*it_m_LuminousIntensity);
        m_LuminousIntensity.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLightDistributionData, Step::BaseEntity)
