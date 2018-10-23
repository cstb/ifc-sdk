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


#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform(Step::Id id, Step::SPFData *args) : 
    IfcCartesianTransformationOperator2D(id, args)
{
    m_Scale2 = Step::getUnset(m_Scale2);
}

IfcCartesianTransformationOperator2DnonUniform::~IfcCartesianTransformationOperator2DnonUniform()
{}

bool IfcCartesianTransformationOperator2DnonUniform::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCartesianTransformationOperator2DnonUniform(this);
}


Step::Real IfcCartesianTransformationOperator2DnonUniform::getScale2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Scale2;
    }
    else 
    {
        return Step::getUnset(m_Scale2);
    }    
}

Step::Real IfcCartesianTransformationOperator2DnonUniform::getScale2() const
{
    return const_cast<IfcCartesianTransformationOperator2DnonUniform *>(this)->getScale2();
}

void IfcCartesianTransformationOperator2DnonUniform::setScale2(Step::Real value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale2 = value;
}

void IfcCartesianTransformationOperator2DnonUniform::unsetScale2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale2 = Step::getUnset(getScale2());
}

bool IfcCartesianTransformationOperator2DnonUniform::testScale2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getScale2()) == false;
}

bool IfcCartesianTransformationOperator2DnonUniform::init()
{
    if (IfcCartesianTransformationOperator2D::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Scale2 = Step::getUnset(m_Scale2);
    }
    else
    {
        m_Scale2 = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCartesianTransformationOperator2DnonUniform::copy(const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop)
{
    IfcCartesianTransformationOperator2D::copy(obj, copyop);
    setScale2(obj.m_Scale2);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCartesianTransformationOperator2DnonUniform, IfcCartesianTransformationOperator2D)
