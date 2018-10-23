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


#include <ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCartesianTransformationOperator3DnonUniform::IfcCartesianTransformationOperator3DnonUniform(Step::Id id, Step::SPFData *args) : 
    IfcCartesianTransformationOperator3D(id, args)
{
    m_Scale2 = Step::getUnset(m_Scale2);
    m_Scale3 = Step::getUnset(m_Scale3);
}

IfcCartesianTransformationOperator3DnonUniform::~IfcCartesianTransformationOperator3DnonUniform()
{}

bool IfcCartesianTransformationOperator3DnonUniform::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCartesianTransformationOperator3DnonUniform(this);
}


Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale2()
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

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale2() const
{
    return const_cast<IfcCartesianTransformationOperator3DnonUniform *>(this)->getScale2();
}

void IfcCartesianTransformationOperator3DnonUniform::setScale2(Step::Real value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale2 = value;
}

void IfcCartesianTransformationOperator3DnonUniform::unsetScale2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale2 = Step::getUnset(getScale2());
}

bool IfcCartesianTransformationOperator3DnonUniform::testScale2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getScale2()) == false;
}


Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale3()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Scale3;
    }
    else 
    {
        return Step::getUnset(m_Scale3);
    }    
}

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale3() const
{
    return const_cast<IfcCartesianTransformationOperator3DnonUniform *>(this)->getScale3();
}

void IfcCartesianTransformationOperator3DnonUniform::setScale3(Step::Real value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale3 = value;
}

void IfcCartesianTransformationOperator3DnonUniform::unsetScale3()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale3 = Step::getUnset(getScale3());
}

bool IfcCartesianTransformationOperator3DnonUniform::testScale3() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getScale3()) == false;
}

bool IfcCartesianTransformationOperator3DnonUniform::init()
{
    if (IfcCartesianTransformationOperator3D::init() == false)
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Scale3 = Step::getUnset(m_Scale3);
    }
    else
    {
        m_Scale3 = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCartesianTransformationOperator3DnonUniform::copy(const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop)
{
    IfcCartesianTransformationOperator3D::copy(obj, copyop);
    setScale2(obj.m_Scale2);
    setScale3(obj.m_Scale3);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCartesianTransformationOperator3DnonUniform, IfcCartesianTransformationOperator3D)
