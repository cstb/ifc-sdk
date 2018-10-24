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


#include <ifc2x3/IfcEdgeFeature.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEdgeFeature::IfcEdgeFeature(Step::Id id, Step::SPFData *args) : 
    IfcFeatureElementSubtraction(id, args)
{
    m_FeatureLength = Step::getUnset(m_FeatureLength);
}

IfcEdgeFeature::~IfcEdgeFeature()
{}

bool IfcEdgeFeature::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEdgeFeature(this);
}


IfcPositiveLengthMeasure IfcEdgeFeature::getFeatureLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FeatureLength;
    }
    else 
    {
        return Step::getUnset(m_FeatureLength);
    }    
}

IfcPositiveLengthMeasure IfcEdgeFeature::getFeatureLength() const
{
    return const_cast<IfcEdgeFeature *>(this)->getFeatureLength();
}

void IfcEdgeFeature::setFeatureLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FeatureLength = value;
}

void IfcEdgeFeature::unsetFeatureLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FeatureLength = Step::getUnset(getFeatureLength());
}

bool IfcEdgeFeature::testFeatureLength() const
{
    return Step::isUnset(getFeatureLength()) == false;
}

bool IfcEdgeFeature::init()
{
    if (IfcFeatureElementSubtraction::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FeatureLength = Step::getUnset(m_FeatureLength);
    }
    else
    {
        m_FeatureLength = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcEdgeFeature::copy(const IfcEdgeFeature &obj, const CopyOp &copyop)
{
    IfcFeatureElementSubtraction::copy(obj, copyop);
    setFeatureLength(obj.m_FeatureLength);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEdgeFeature, IfcFeatureElementSubtraction)
