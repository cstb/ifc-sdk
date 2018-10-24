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


#include <ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadSingleDisplacementDistortion::IfcStructuralLoadSingleDisplacementDistortion(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadSingleDisplacement(id, args)
{
    m_Distortion = Step::getUnset(m_Distortion);
}

IfcStructuralLoadSingleDisplacementDistortion::~IfcStructuralLoadSingleDisplacementDistortion()
{}

bool IfcStructuralLoadSingleDisplacementDistortion::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadSingleDisplacementDistortion(this);
}


IfcCurvatureMeasure IfcStructuralLoadSingleDisplacementDistortion::getDistortion()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Distortion;
    }
    else 
    {
        return Step::getUnset(m_Distortion);
    }    
}

IfcCurvatureMeasure IfcStructuralLoadSingleDisplacementDistortion::getDistortion() const
{
    return const_cast<IfcStructuralLoadSingleDisplacementDistortion *>(this)->getDistortion();
}

void IfcStructuralLoadSingleDisplacementDistortion::setDistortion(IfcCurvatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Distortion = value;
}

void IfcStructuralLoadSingleDisplacementDistortion::unsetDistortion()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Distortion = Step::getUnset(getDistortion());
}

bool IfcStructuralLoadSingleDisplacementDistortion::testDistortion() const
{
    return Step::isUnset(getDistortion()) == false;
}

bool IfcStructuralLoadSingleDisplacementDistortion::init()
{
    if (IfcStructuralLoadSingleDisplacement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Distortion = Step::getUnset(m_Distortion);
    }
    else
    {
        m_Distortion = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadSingleDisplacementDistortion::copy(const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop)
{
    IfcStructuralLoadSingleDisplacement::copy(obj, copyop);
    setDistortion(obj.m_Distortion);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadSingleDisplacementDistortion, IfcStructuralLoadSingleDisplacement)
