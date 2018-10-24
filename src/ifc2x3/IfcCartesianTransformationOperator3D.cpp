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


#include <ifc2x3/IfcCartesianTransformationOperator3D.h>

#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCartesianTransformationOperator3D::IfcCartesianTransformationOperator3D(Step::Id id, Step::SPFData *args) : 
    IfcCartesianTransformationOperator(id, args)
{
    m_Axis3 = NULL;
}

IfcCartesianTransformationOperator3D::~IfcCartesianTransformationOperator3D()
{}

bool IfcCartesianTransformationOperator3D::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCartesianTransformationOperator3D(this);
}


IfcDirection *IfcCartesianTransformationOperator3D::getAxis3()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Axis3.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcCartesianTransformationOperator3D::getAxis3() const
{
    return const_cast<IfcCartesianTransformationOperator3D *>(this)->getAxis3();
}

void IfcCartesianTransformationOperator3D::setAxis3(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis3 = value;
}

void IfcCartesianTransformationOperator3D::unsetAxis3()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis3 = Step::getUnset(getAxis3());
}

bool IfcCartesianTransformationOperator3D::testAxis3() const
{
    return Step::isUnset(getAxis3()) == false;
}

bool IfcCartesianTransformationOperator3D::init()
{
    if (IfcCartesianTransformationOperator::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Axis3 = NULL;
    }
    else
    {
        m_Axis3 = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcCartesianTransformationOperator3D::copy(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop)
{
    IfcCartesianTransformationOperator::copy(obj, copyop);
    setAxis3((IfcDirection*)copyop(obj.m_Axis3.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCartesianTransformationOperator3D, IfcCartesianTransformationOperator)
