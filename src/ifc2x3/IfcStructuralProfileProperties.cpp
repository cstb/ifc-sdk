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


#include <ifc2x3/IfcStructuralProfileProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralProfileProperties::IfcStructuralProfileProperties(Step::Id id, Step::SPFData *args) : 
    IfcGeneralProfileProperties(id, args)
{
    m_TorsionalConstantX = Step::getUnset(m_TorsionalConstantX);
    m_MomentOfInertiaYZ = Step::getUnset(m_MomentOfInertiaYZ);
    m_MomentOfInertiaY = Step::getUnset(m_MomentOfInertiaY);
    m_MomentOfInertiaZ = Step::getUnset(m_MomentOfInertiaZ);
    m_WarpingConstant = Step::getUnset(m_WarpingConstant);
    m_ShearCentreZ = Step::getUnset(m_ShearCentreZ);
    m_ShearCentreY = Step::getUnset(m_ShearCentreY);
    m_ShearDeformationAreaZ = Step::getUnset(m_ShearDeformationAreaZ);
    m_ShearDeformationAreaY = Step::getUnset(m_ShearDeformationAreaY);
    m_MaximumSectionModulusY = Step::getUnset(m_MaximumSectionModulusY);
    m_MinimumSectionModulusY = Step::getUnset(m_MinimumSectionModulusY);
    m_MaximumSectionModulusZ = Step::getUnset(m_MaximumSectionModulusZ);
    m_MinimumSectionModulusZ = Step::getUnset(m_MinimumSectionModulusZ);
    m_TorsionalSectionModulus = Step::getUnset(m_TorsionalSectionModulus);
    m_CentreOfGravityInX = Step::getUnset(m_CentreOfGravityInX);
    m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
}

IfcStructuralProfileProperties::~IfcStructuralProfileProperties()
{}

bool IfcStructuralProfileProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralProfileProperties(this);
}


IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getTorsionalConstantX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TorsionalConstantX;
    }
    else 
    {
        return Step::getUnset(m_TorsionalConstantX);
    }    
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getTorsionalConstantX() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getTorsionalConstantX();
}

void IfcStructuralProfileProperties::setTorsionalConstantX(IfcMomentOfInertiaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TorsionalConstantX = value;
}

void IfcStructuralProfileProperties::unsetTorsionalConstantX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TorsionalConstantX = Step::getUnset(getTorsionalConstantX());
}

bool IfcStructuralProfileProperties::testTorsionalConstantX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTorsionalConstantX()) == false;
}


IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaYZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MomentOfInertiaYZ;
    }
    else 
    {
        return Step::getUnset(m_MomentOfInertiaYZ);
    }    
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaYZ() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMomentOfInertiaYZ();
}

void IfcStructuralProfileProperties::setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentOfInertiaYZ = value;
}

void IfcStructuralProfileProperties::unsetMomentOfInertiaYZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentOfInertiaYZ = Step::getUnset(getMomentOfInertiaYZ());
}

bool IfcStructuralProfileProperties::testMomentOfInertiaYZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMomentOfInertiaYZ()) == false;
}


IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MomentOfInertiaY;
    }
    else 
    {
        return Step::getUnset(m_MomentOfInertiaY);
    }    
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaY() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMomentOfInertiaY();
}

void IfcStructuralProfileProperties::setMomentOfInertiaY(IfcMomentOfInertiaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentOfInertiaY = value;
}

void IfcStructuralProfileProperties::unsetMomentOfInertiaY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentOfInertiaY = Step::getUnset(getMomentOfInertiaY());
}

bool IfcStructuralProfileProperties::testMomentOfInertiaY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMomentOfInertiaY()) == false;
}


IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MomentOfInertiaZ;
    }
    else 
    {
        return Step::getUnset(m_MomentOfInertiaZ);
    }    
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaZ() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMomentOfInertiaZ();
}

void IfcStructuralProfileProperties::setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentOfInertiaZ = value;
}

void IfcStructuralProfileProperties::unsetMomentOfInertiaZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentOfInertiaZ = Step::getUnset(getMomentOfInertiaZ());
}

bool IfcStructuralProfileProperties::testMomentOfInertiaZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMomentOfInertiaZ()) == false;
}


IfcWarpingConstantMeasure IfcStructuralProfileProperties::getWarpingConstant()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WarpingConstant;
    }
    else 
    {
        return Step::getUnset(m_WarpingConstant);
    }    
}

IfcWarpingConstantMeasure IfcStructuralProfileProperties::getWarpingConstant() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getWarpingConstant();
}

void IfcStructuralProfileProperties::setWarpingConstant(IfcWarpingConstantMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WarpingConstant = value;
}

void IfcStructuralProfileProperties::unsetWarpingConstant()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WarpingConstant = Step::getUnset(getWarpingConstant());
}

bool IfcStructuralProfileProperties::testWarpingConstant() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWarpingConstant()) == false;
}


IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearCentreZ;
    }
    else 
    {
        return Step::getUnset(m_ShearCentreZ);
    }    
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreZ() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getShearCentreZ();
}

void IfcStructuralProfileProperties::setShearCentreZ(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearCentreZ = value;
}

void IfcStructuralProfileProperties::unsetShearCentreZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearCentreZ = Step::getUnset(getShearCentreZ());
}

bool IfcStructuralProfileProperties::testShearCentreZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShearCentreZ()) == false;
}


IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearCentreY;
    }
    else 
    {
        return Step::getUnset(m_ShearCentreY);
    }    
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreY() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getShearCentreY();
}

void IfcStructuralProfileProperties::setShearCentreY(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearCentreY = value;
}

void IfcStructuralProfileProperties::unsetShearCentreY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearCentreY = Step::getUnset(getShearCentreY());
}

bool IfcStructuralProfileProperties::testShearCentreY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShearCentreY()) == false;
}


IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearDeformationAreaZ;
    }
    else 
    {
        return Step::getUnset(m_ShearDeformationAreaZ);
    }    
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaZ() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getShearDeformationAreaZ();
}

void IfcStructuralProfileProperties::setShearDeformationAreaZ(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearDeformationAreaZ = value;
}

void IfcStructuralProfileProperties::unsetShearDeformationAreaZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearDeformationAreaZ = Step::getUnset(getShearDeformationAreaZ());
}

bool IfcStructuralProfileProperties::testShearDeformationAreaZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShearDeformationAreaZ()) == false;
}


IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearDeformationAreaY;
    }
    else 
    {
        return Step::getUnset(m_ShearDeformationAreaY);
    }    
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaY() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getShearDeformationAreaY();
}

void IfcStructuralProfileProperties::setShearDeformationAreaY(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearDeformationAreaY = value;
}

void IfcStructuralProfileProperties::unsetShearDeformationAreaY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearDeformationAreaY = Step::getUnset(getShearDeformationAreaY());
}

bool IfcStructuralProfileProperties::testShearDeformationAreaY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShearDeformationAreaY()) == false;
}


IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaximumSectionModulusY;
    }
    else 
    {
        return Step::getUnset(m_MaximumSectionModulusY);
    }    
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusY() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMaximumSectionModulusY();
}

void IfcStructuralProfileProperties::setMaximumSectionModulusY(IfcSectionModulusMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumSectionModulusY = value;
}

void IfcStructuralProfileProperties::unsetMaximumSectionModulusY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumSectionModulusY = Step::getUnset(getMaximumSectionModulusY());
}

bool IfcStructuralProfileProperties::testMaximumSectionModulusY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMaximumSectionModulusY()) == false;
}


IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinimumSectionModulusY;
    }
    else 
    {
        return Step::getUnset(m_MinimumSectionModulusY);
    }    
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusY() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMinimumSectionModulusY();
}

void IfcStructuralProfileProperties::setMinimumSectionModulusY(IfcSectionModulusMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumSectionModulusY = value;
}

void IfcStructuralProfileProperties::unsetMinimumSectionModulusY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumSectionModulusY = Step::getUnset(getMinimumSectionModulusY());
}

bool IfcStructuralProfileProperties::testMinimumSectionModulusY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMinimumSectionModulusY()) == false;
}


IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaximumSectionModulusZ;
    }
    else 
    {
        return Step::getUnset(m_MaximumSectionModulusZ);
    }    
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusZ() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMaximumSectionModulusZ();
}

void IfcStructuralProfileProperties::setMaximumSectionModulusZ(IfcSectionModulusMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumSectionModulusZ = value;
}

void IfcStructuralProfileProperties::unsetMaximumSectionModulusZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumSectionModulusZ = Step::getUnset(getMaximumSectionModulusZ());
}

bool IfcStructuralProfileProperties::testMaximumSectionModulusZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMaximumSectionModulusZ()) == false;
}


IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinimumSectionModulusZ;
    }
    else 
    {
        return Step::getUnset(m_MinimumSectionModulusZ);
    }    
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusZ() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getMinimumSectionModulusZ();
}

void IfcStructuralProfileProperties::setMinimumSectionModulusZ(IfcSectionModulusMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumSectionModulusZ = value;
}

void IfcStructuralProfileProperties::unsetMinimumSectionModulusZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumSectionModulusZ = Step::getUnset(getMinimumSectionModulusZ());
}

bool IfcStructuralProfileProperties::testMinimumSectionModulusZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMinimumSectionModulusZ()) == false;
}


IfcSectionModulusMeasure IfcStructuralProfileProperties::getTorsionalSectionModulus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TorsionalSectionModulus;
    }
    else 
    {
        return Step::getUnset(m_TorsionalSectionModulus);
    }    
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getTorsionalSectionModulus() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getTorsionalSectionModulus();
}

void IfcStructuralProfileProperties::setTorsionalSectionModulus(IfcSectionModulusMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TorsionalSectionModulus = value;
}

void IfcStructuralProfileProperties::unsetTorsionalSectionModulus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TorsionalSectionModulus = Step::getUnset(getTorsionalSectionModulus());
}

bool IfcStructuralProfileProperties::testTorsionalSectionModulus() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTorsionalSectionModulus()) == false;
}


IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CentreOfGravityInX;
    }
    else 
    {
        return Step::getUnset(m_CentreOfGravityInX);
    }    
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInX() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getCentreOfGravityInX();
}

void IfcStructuralProfileProperties::setCentreOfGravityInX(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = value;
}

void IfcStructuralProfileProperties::unsetCentreOfGravityInX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcStructuralProfileProperties::testCentreOfGravityInX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCentreOfGravityInX()) == false;
}


IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CentreOfGravityInY;
    }
    else 
    {
        return Step::getUnset(m_CentreOfGravityInY);
    }    
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInY() const
{
    return const_cast<IfcStructuralProfileProperties *>(this)->getCentreOfGravityInY();
}

void IfcStructuralProfileProperties::setCentreOfGravityInY(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = value;
}

void IfcStructuralProfileProperties::unsetCentreOfGravityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcStructuralProfileProperties::testCentreOfGravityInY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCentreOfGravityInY()) == false;
}

bool IfcStructuralProfileProperties::init()
{
    if (IfcGeneralProfileProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TorsionalConstantX = Step::getUnset(m_TorsionalConstantX);
    }
    else
    {
        m_TorsionalConstantX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MomentOfInertiaYZ = Step::getUnset(m_MomentOfInertiaYZ);
    }
    else
    {
        m_MomentOfInertiaYZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MomentOfInertiaY = Step::getUnset(m_MomentOfInertiaY);
    }
    else
    {
        m_MomentOfInertiaY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MomentOfInertiaZ = Step::getUnset(m_MomentOfInertiaZ);
    }
    else
    {
        m_MomentOfInertiaZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WarpingConstant = Step::getUnset(m_WarpingConstant);
    }
    else
    {
        m_WarpingConstant = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearCentreZ = Step::getUnset(m_ShearCentreZ);
    }
    else
    {
        m_ShearCentreZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearCentreY = Step::getUnset(m_ShearCentreY);
    }
    else
    {
        m_ShearCentreY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearDeformationAreaZ = Step::getUnset(m_ShearDeformationAreaZ);
    }
    else
    {
        m_ShearDeformationAreaZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearDeformationAreaY = Step::getUnset(m_ShearDeformationAreaY);
    }
    else
    {
        m_ShearDeformationAreaY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaximumSectionModulusY = Step::getUnset(m_MaximumSectionModulusY);
    }
    else
    {
        m_MaximumSectionModulusY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinimumSectionModulusY = Step::getUnset(m_MinimumSectionModulusY);
    }
    else
    {
        m_MinimumSectionModulusY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaximumSectionModulusZ = Step::getUnset(m_MaximumSectionModulusZ);
    }
    else
    {
        m_MaximumSectionModulusZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinimumSectionModulusZ = Step::getUnset(m_MinimumSectionModulusZ);
    }
    else
    {
        m_MinimumSectionModulusZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TorsionalSectionModulus = Step::getUnset(m_TorsionalSectionModulus);
    }
    else
    {
        m_TorsionalSectionModulus = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CentreOfGravityInX = Step::getUnset(m_CentreOfGravityInX);
    }
    else
    {
        m_CentreOfGravityInX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
    }
    else
    {
        m_CentreOfGravityInY = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralProfileProperties::copy(const IfcStructuralProfileProperties &obj, const CopyOp &copyop)
{
    IfcGeneralProfileProperties::copy(obj, copyop);
    setTorsionalConstantX(obj.m_TorsionalConstantX);
    setMomentOfInertiaYZ(obj.m_MomentOfInertiaYZ);
    setMomentOfInertiaY(obj.m_MomentOfInertiaY);
    setMomentOfInertiaZ(obj.m_MomentOfInertiaZ);
    setWarpingConstant(obj.m_WarpingConstant);
    setShearCentreZ(obj.m_ShearCentreZ);
    setShearCentreY(obj.m_ShearCentreY);
    setShearDeformationAreaZ(obj.m_ShearDeformationAreaZ);
    setShearDeformationAreaY(obj.m_ShearDeformationAreaY);
    setMaximumSectionModulusY(obj.m_MaximumSectionModulusY);
    setMinimumSectionModulusY(obj.m_MinimumSectionModulusY);
    setMaximumSectionModulusZ(obj.m_MaximumSectionModulusZ);
    setMinimumSectionModulusZ(obj.m_MinimumSectionModulusZ);
    setTorsionalSectionModulus(obj.m_TorsionalSectionModulus);
    setCentreOfGravityInX(obj.m_CentreOfGravityInX);
    setCentreOfGravityInY(obj.m_CentreOfGravityInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralProfileProperties, IfcGeneralProfileProperties)
