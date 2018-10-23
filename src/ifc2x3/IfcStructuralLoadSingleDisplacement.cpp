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


#include <ifc2x3/IfcStructuralLoadSingleDisplacement.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadSingleDisplacement::IfcStructuralLoadSingleDisplacement(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadStatic(id, args)
{
    m_DisplacementX = Step::getUnset(m_DisplacementX);
    m_DisplacementY = Step::getUnset(m_DisplacementY);
    m_DisplacementZ = Step::getUnset(m_DisplacementZ);
    m_RotationalDisplacementRX = Step::getUnset(m_RotationalDisplacementRX);
    m_RotationalDisplacementRY = Step::getUnset(m_RotationalDisplacementRY);
    m_RotationalDisplacementRZ = Step::getUnset(m_RotationalDisplacementRZ);
}

IfcStructuralLoadSingleDisplacement::~IfcStructuralLoadSingleDisplacement()
{}

bool IfcStructuralLoadSingleDisplacement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadSingleDisplacement(this);
}


IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DisplacementX;
    }
    else 
    {
        return Step::getUnset(m_DisplacementX);
    }    
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementX() const
{
    return const_cast<IfcStructuralLoadSingleDisplacement *>(this)->getDisplacementX();
}

void IfcStructuralLoadSingleDisplacement::setDisplacementX(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DisplacementX = value;
}

void IfcStructuralLoadSingleDisplacement::unsetDisplacementX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DisplacementX = Step::getUnset(getDisplacementX());
}

bool IfcStructuralLoadSingleDisplacement::testDisplacementX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDisplacementX()) == false;
}


IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DisplacementY;
    }
    else 
    {
        return Step::getUnset(m_DisplacementY);
    }    
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementY() const
{
    return const_cast<IfcStructuralLoadSingleDisplacement *>(this)->getDisplacementY();
}

void IfcStructuralLoadSingleDisplacement::setDisplacementY(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DisplacementY = value;
}

void IfcStructuralLoadSingleDisplacement::unsetDisplacementY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DisplacementY = Step::getUnset(getDisplacementY());
}

bool IfcStructuralLoadSingleDisplacement::testDisplacementY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDisplacementY()) == false;
}


IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DisplacementZ;
    }
    else 
    {
        return Step::getUnset(m_DisplacementZ);
    }    
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementZ() const
{
    return const_cast<IfcStructuralLoadSingleDisplacement *>(this)->getDisplacementZ();
}

void IfcStructuralLoadSingleDisplacement::setDisplacementZ(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DisplacementZ = value;
}

void IfcStructuralLoadSingleDisplacement::unsetDisplacementZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DisplacementZ = Step::getUnset(getDisplacementZ());
}

bool IfcStructuralLoadSingleDisplacement::testDisplacementZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDisplacementZ()) == false;
}


IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalDisplacementRX;
    }
    else 
    {
        return Step::getUnset(m_RotationalDisplacementRX);
    }    
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRX() const
{
    return const_cast<IfcStructuralLoadSingleDisplacement *>(this)->getRotationalDisplacementRX();
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRX(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalDisplacementRX = value;
}

void IfcStructuralLoadSingleDisplacement::unsetRotationalDisplacementRX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalDisplacementRX = Step::getUnset(getRotationalDisplacementRX());
}

bool IfcStructuralLoadSingleDisplacement::testRotationalDisplacementRX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalDisplacementRX()) == false;
}


IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalDisplacementRY;
    }
    else 
    {
        return Step::getUnset(m_RotationalDisplacementRY);
    }    
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRY() const
{
    return const_cast<IfcStructuralLoadSingleDisplacement *>(this)->getRotationalDisplacementRY();
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRY(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalDisplacementRY = value;
}

void IfcStructuralLoadSingleDisplacement::unsetRotationalDisplacementRY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalDisplacementRY = Step::getUnset(getRotationalDisplacementRY());
}

bool IfcStructuralLoadSingleDisplacement::testRotationalDisplacementRY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalDisplacementRY()) == false;
}


IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalDisplacementRZ;
    }
    else 
    {
        return Step::getUnset(m_RotationalDisplacementRZ);
    }    
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRZ() const
{
    return const_cast<IfcStructuralLoadSingleDisplacement *>(this)->getRotationalDisplacementRZ();
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRZ(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalDisplacementRZ = value;
}

void IfcStructuralLoadSingleDisplacement::unsetRotationalDisplacementRZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalDisplacementRZ = Step::getUnset(getRotationalDisplacementRZ());
}

bool IfcStructuralLoadSingleDisplacement::testRotationalDisplacementRZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalDisplacementRZ()) == false;
}

bool IfcStructuralLoadSingleDisplacement::init()
{
    if (IfcStructuralLoadStatic::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DisplacementX = Step::getUnset(m_DisplacementX);
    }
    else
    {
        m_DisplacementX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DisplacementY = Step::getUnset(m_DisplacementY);
    }
    else
    {
        m_DisplacementY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DisplacementZ = Step::getUnset(m_DisplacementZ);
    }
    else
    {
        m_DisplacementZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalDisplacementRX = Step::getUnset(m_RotationalDisplacementRX);
    }
    else
    {
        m_RotationalDisplacementRX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalDisplacementRY = Step::getUnset(m_RotationalDisplacementRY);
    }
    else
    {
        m_RotationalDisplacementRY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalDisplacementRZ = Step::getUnset(m_RotationalDisplacementRZ);
    }
    else
    {
        m_RotationalDisplacementRZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadSingleDisplacement::copy(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop)
{
    IfcStructuralLoadStatic::copy(obj, copyop);
    setDisplacementX(obj.m_DisplacementX);
    setDisplacementY(obj.m_DisplacementY);
    setDisplacementZ(obj.m_DisplacementZ);
    setRotationalDisplacementRX(obj.m_RotationalDisplacementRX);
    setRotationalDisplacementRY(obj.m_RotationalDisplacementRY);
    setRotationalDisplacementRZ(obj.m_RotationalDisplacementRZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadSingleDisplacement, IfcStructuralLoadStatic)
