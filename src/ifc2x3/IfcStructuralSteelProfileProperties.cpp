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


#include <ifc2x3/IfcStructuralSteelProfileProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralSteelProfileProperties::IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args) : 
    IfcStructuralProfileProperties(id, args)
{
    m_ShearAreaZ = Step::getUnset(m_ShearAreaZ);
    m_ShearAreaY = Step::getUnset(m_ShearAreaY);
    m_PlasticShapeFactorY = Step::getUnset(m_PlasticShapeFactorY);
    m_PlasticShapeFactorZ = Step::getUnset(m_PlasticShapeFactorZ);
}

IfcStructuralSteelProfileProperties::~IfcStructuralSteelProfileProperties()
{}

bool IfcStructuralSteelProfileProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralSteelProfileProperties(this);
}


IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearAreaZ;
    }
    else 
    {
        return Step::getUnset(m_ShearAreaZ);
    }    
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaZ() const
{
    return const_cast<IfcStructuralSteelProfileProperties *>(this)->getShearAreaZ();
}

void IfcStructuralSteelProfileProperties::setShearAreaZ(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearAreaZ = value;
}

void IfcStructuralSteelProfileProperties::unsetShearAreaZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearAreaZ = Step::getUnset(getShearAreaZ());
}

bool IfcStructuralSteelProfileProperties::testShearAreaZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShearAreaZ()) == false;
}


IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearAreaY;
    }
    else 
    {
        return Step::getUnset(m_ShearAreaY);
    }    
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaY() const
{
    return const_cast<IfcStructuralSteelProfileProperties *>(this)->getShearAreaY();
}

void IfcStructuralSteelProfileProperties::setShearAreaY(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearAreaY = value;
}

void IfcStructuralSteelProfileProperties::unsetShearAreaY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearAreaY = Step::getUnset(getShearAreaY());
}

bool IfcStructuralSteelProfileProperties::testShearAreaY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShearAreaY()) == false;
}


IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlasticShapeFactorY;
    }
    else 
    {
        return Step::getUnset(m_PlasticShapeFactorY);
    }    
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorY() const
{
    return const_cast<IfcStructuralSteelProfileProperties *>(this)->getPlasticShapeFactorY();
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorY(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlasticShapeFactorY = value;
}

void IfcStructuralSteelProfileProperties::unsetPlasticShapeFactorY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlasticShapeFactorY = Step::getUnset(getPlasticShapeFactorY());
}

bool IfcStructuralSteelProfileProperties::testPlasticShapeFactorY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPlasticShapeFactorY()) == false;
}


IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlasticShapeFactorZ;
    }
    else 
    {
        return Step::getUnset(m_PlasticShapeFactorZ);
    }    
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorZ() const
{
    return const_cast<IfcStructuralSteelProfileProperties *>(this)->getPlasticShapeFactorZ();
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorZ(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlasticShapeFactorZ = value;
}

void IfcStructuralSteelProfileProperties::unsetPlasticShapeFactorZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlasticShapeFactorZ = Step::getUnset(getPlasticShapeFactorZ());
}

bool IfcStructuralSteelProfileProperties::testPlasticShapeFactorZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPlasticShapeFactorZ()) == false;
}

bool IfcStructuralSteelProfileProperties::init()
{
    if (IfcStructuralProfileProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearAreaZ = Step::getUnset(m_ShearAreaZ);
    }
    else
    {
        m_ShearAreaZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearAreaY = Step::getUnset(m_ShearAreaY);
    }
    else
    {
        m_ShearAreaY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlasticShapeFactorY = Step::getUnset(m_PlasticShapeFactorY);
    }
    else
    {
        m_PlasticShapeFactorY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlasticShapeFactorZ = Step::getUnset(m_PlasticShapeFactorZ);
    }
    else
    {
        m_PlasticShapeFactorZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralSteelProfileProperties::copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop)
{
    IfcStructuralProfileProperties::copy(obj, copyop);
    setShearAreaZ(obj.m_ShearAreaZ);
    setShearAreaY(obj.m_ShearAreaY);
    setPlasticShapeFactorY(obj.m_PlasticShapeFactorY);
    setPlasticShapeFactorZ(obj.m_PlasticShapeFactorZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralSteelProfileProperties, IfcStructuralProfileProperties)
