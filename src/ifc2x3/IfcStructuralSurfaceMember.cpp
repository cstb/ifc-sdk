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


#include <ifc2x3/IfcStructuralSurfaceMember.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralSurfaceMember::IfcStructuralSurfaceMember(Step::Id id, Step::SPFData *args) : 
    IfcStructuralMember(id, args)
{
    m_PredefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
    m_Thickness = Step::getUnset(m_Thickness);
}

IfcStructuralSurfaceMember::~IfcStructuralSurfaceMember()
{}

bool IfcStructuralSurfaceMember::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralSurfaceMember(this);
}


IfcStructuralSurfaceTypeEnum IfcStructuralSurfaceMember::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcStructuralSurfaceTypeEnum_UNSET;
    }    
}

IfcStructuralSurfaceTypeEnum IfcStructuralSurfaceMember::getPredefinedType() const
{
    return const_cast<IfcStructuralSurfaceMember *>(this)->getPredefinedType();
}

void IfcStructuralSurfaceMember::setPredefinedType(IfcStructuralSurfaceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcStructuralSurfaceMember::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
}

bool IfcStructuralSurfaceMember::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}


IfcPositiveLengthMeasure IfcStructuralSurfaceMember::getThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Thickness;
    }
    else 
    {
        return Step::getUnset(m_Thickness);
    }    
}

IfcPositiveLengthMeasure IfcStructuralSurfaceMember::getThickness() const
{
    return const_cast<IfcStructuralSurfaceMember *>(this)->getThickness();
}

void IfcStructuralSurfaceMember::setThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Thickness = value;
}

void IfcStructuralSurfaceMember::unsetThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Thickness = Step::getUnset(getThickness());
}

bool IfcStructuralSurfaceMember::testThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getThickness()) == false;
}

bool IfcStructuralSurfaceMember::init()
{
    if (IfcStructuralMember::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BENDING_ELEMENT.")
        {
            m_PredefinedType = IfcStructuralSurfaceTypeEnum_BENDING_ELEMENT;
        }
        else if (arg == ".MEMBRANE_ELEMENT.")
        {
            m_PredefinedType = IfcStructuralSurfaceTypeEnum_MEMBRANE_ELEMENT;
        }
        else if (arg == ".SHELL.")
        {
            m_PredefinedType = IfcStructuralSurfaceTypeEnum_SHELL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcStructuralSurfaceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcStructuralSurfaceTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Thickness = Step::getUnset(m_Thickness);
    }
    else
    {
        m_Thickness = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralSurfaceMember::copy(const IfcStructuralSurfaceMember &obj, const CopyOp &copyop)
{
    IfcStructuralMember::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    setThickness(obj.m_Thickness);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralSurfaceMember, IfcStructuralMember)
