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


#include <ifc2x3/IfcLightIntensityDistribution.h>

#include <ifc2x3/IfcLightDistributionData.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLightIntensityDistribution::IfcLightIntensityDistribution(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_LightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
    m_DistributionData.setUnset(true);
}

IfcLightIntensityDistribution::~IfcLightIntensityDistribution()
{}

bool IfcLightIntensityDistribution::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLightIntensityDistribution(this);
}


IfcLightDistributionCurveEnum IfcLightIntensityDistribution::getLightDistributionCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LightDistributionCurve;
    }
    else 
    {
        return IfcLightDistributionCurveEnum_UNSET;
    }    
}

IfcLightDistributionCurveEnum IfcLightIntensityDistribution::getLightDistributionCurve() const
{
    return const_cast<IfcLightIntensityDistribution *>(this)->getLightDistributionCurve();
}

void IfcLightIntensityDistribution::setLightDistributionCurve(IfcLightDistributionCurveEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightDistributionCurve = value;
}

void IfcLightIntensityDistribution::unsetLightDistributionCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
}

bool IfcLightIntensityDistribution::testLightDistributionCurve() const
{
    return Step::isUnset(getLightDistributionCurve()) == false;
}


List_IfcLightDistributionData_1_n &IfcLightIntensityDistribution::getDistributionData()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DistributionData;
    }
    else 
    {
        m_DistributionData.setUnset(true);
        return m_DistributionData;
    }    
}

const List_IfcLightDistributionData_1_n &IfcLightIntensityDistribution::getDistributionData() const
{
    return const_cast<IfcLightIntensityDistribution *>(this)->getDistributionData();
}

void IfcLightIntensityDistribution::setDistributionData(const List_IfcLightDistributionData_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DistributionData = value;
}

void IfcLightIntensityDistribution::unsetDistributionData()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DistributionData.clear();
    m_DistributionData.setUnset(true);
}

bool IfcLightIntensityDistribution::testDistributionData() const
{
    return m_DistributionData.isUnset() == false;
}

bool IfcLightIntensityDistribution::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
    }
    else
    {
        if (arg == ".TYPE_A.")
        {
            m_LightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_A;
        }
        else if (arg == ".TYPE_B.")
        {
            m_LightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_B;
        }
        else if (arg == ".TYPE_C.")
        {
            m_LightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_C;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_LightDistributionCurve = IfcLightDistributionCurveEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DistributionData.setUnset(true);
    }
    else
    {
        m_DistributionData.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_DistributionData.push_back(static_cast< IfcLightDistributionData * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcLightIntensityDistribution::copy(const IfcLightIntensityDistribution &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setLightDistributionCurve(obj.m_LightDistributionCurve);
    List_IfcLightDistributionData_1_n::const_iterator it_m_DistributionData;
    for (it_m_DistributionData = obj.m_DistributionData.begin(); it_m_DistributionData != obj.m_DistributionData.end(); ++it_m_DistributionData)
    {
        Step::RefPtr< IfcLightDistributionData > copyTarget = (IfcLightDistributionData *) (copyop((*it_m_DistributionData).get()));
        m_DistributionData.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLightIntensityDistribution, Step::BaseEntity)
