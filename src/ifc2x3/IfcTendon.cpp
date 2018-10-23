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


#include <ifc2x3/IfcTendon.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTendon::IfcTendon(Step::Id id, Step::SPFData *args) : 
    IfcReinforcingElement(id, args)
{
    m_PredefinedType = IfcTendonTypeEnum_UNSET;
    m_NominalDiameter = Step::getUnset(m_NominalDiameter);
    m_CrossSectionArea = Step::getUnset(m_CrossSectionArea);
    m_TensionForce = Step::getUnset(m_TensionForce);
    m_PreStress = Step::getUnset(m_PreStress);
    m_FrictionCoefficient = Step::getUnset(m_FrictionCoefficient);
    m_AnchorageSlip = Step::getUnset(m_AnchorageSlip);
    m_MinCurvatureRadius = Step::getUnset(m_MinCurvatureRadius);
}

IfcTendon::~IfcTendon()
{}

bool IfcTendon::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTendon(this);
}


IfcTendonTypeEnum IfcTendon::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcTendonTypeEnum_UNSET;
    }    
}

IfcTendonTypeEnum IfcTendon::getPredefinedType() const
{
    return const_cast<IfcTendon *>(this)->getPredefinedType();
}

void IfcTendon::setPredefinedType(IfcTendonTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcTendon::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcTendonTypeEnum_UNSET;
}

bool IfcTendon::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}


IfcPositiveLengthMeasure IfcTendon::getNominalDiameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NominalDiameter;
    }
    else 
    {
        return Step::getUnset(m_NominalDiameter);
    }    
}

IfcPositiveLengthMeasure IfcTendon::getNominalDiameter() const
{
    return const_cast<IfcTendon *>(this)->getNominalDiameter();
}

void IfcTendon::setNominalDiameter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalDiameter = value;
}

void IfcTendon::unsetNominalDiameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalDiameter = Step::getUnset(getNominalDiameter());
}

bool IfcTendon::testNominalDiameter() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getNominalDiameter()) == false;
}


IfcAreaMeasure IfcTendon::getCrossSectionArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CrossSectionArea;
    }
    else 
    {
        return Step::getUnset(m_CrossSectionArea);
    }    
}

IfcAreaMeasure IfcTendon::getCrossSectionArea() const
{
    return const_cast<IfcTendon *>(this)->getCrossSectionArea();
}

void IfcTendon::setCrossSectionArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionArea = value;
}

void IfcTendon::unsetCrossSectionArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionArea = Step::getUnset(getCrossSectionArea());
}

bool IfcTendon::testCrossSectionArea() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCrossSectionArea()) == false;
}


IfcForceMeasure IfcTendon::getTensionForce()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TensionForce;
    }
    else 
    {
        return Step::getUnset(m_TensionForce);
    }    
}

IfcForceMeasure IfcTendon::getTensionForce() const
{
    return const_cast<IfcTendon *>(this)->getTensionForce();
}

void IfcTendon::setTensionForce(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionForce = value;
}

void IfcTendon::unsetTensionForce()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionForce = Step::getUnset(getTensionForce());
}

bool IfcTendon::testTensionForce() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTensionForce()) == false;
}


IfcPressureMeasure IfcTendon::getPreStress()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PreStress;
    }
    else 
    {
        return Step::getUnset(m_PreStress);
    }    
}

IfcPressureMeasure IfcTendon::getPreStress() const
{
    return const_cast<IfcTendon *>(this)->getPreStress();
}

void IfcTendon::setPreStress(IfcPressureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PreStress = value;
}

void IfcTendon::unsetPreStress()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PreStress = Step::getUnset(getPreStress());
}

bool IfcTendon::testPreStress() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPreStress()) == false;
}


IfcNormalisedRatioMeasure IfcTendon::getFrictionCoefficient()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FrictionCoefficient;
    }
    else 
    {
        return Step::getUnset(m_FrictionCoefficient);
    }    
}

IfcNormalisedRatioMeasure IfcTendon::getFrictionCoefficient() const
{
    return const_cast<IfcTendon *>(this)->getFrictionCoefficient();
}

void IfcTendon::setFrictionCoefficient(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrictionCoefficient = value;
}

void IfcTendon::unsetFrictionCoefficient()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrictionCoefficient = Step::getUnset(getFrictionCoefficient());
}

bool IfcTendon::testFrictionCoefficient() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFrictionCoefficient()) == false;
}


IfcPositiveLengthMeasure IfcTendon::getAnchorageSlip()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AnchorageSlip;
    }
    else 
    {
        return Step::getUnset(m_AnchorageSlip);
    }    
}

IfcPositiveLengthMeasure IfcTendon::getAnchorageSlip() const
{
    return const_cast<IfcTendon *>(this)->getAnchorageSlip();
}

void IfcTendon::setAnchorageSlip(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AnchorageSlip = value;
}

void IfcTendon::unsetAnchorageSlip()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AnchorageSlip = Step::getUnset(getAnchorageSlip());
}

bool IfcTendon::testAnchorageSlip() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAnchorageSlip()) == false;
}


IfcPositiveLengthMeasure IfcTendon::getMinCurvatureRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinCurvatureRadius;
    }
    else 
    {
        return Step::getUnset(m_MinCurvatureRadius);
    }    
}

IfcPositiveLengthMeasure IfcTendon::getMinCurvatureRadius() const
{
    return const_cast<IfcTendon *>(this)->getMinCurvatureRadius();
}

void IfcTendon::setMinCurvatureRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinCurvatureRadius = value;
}

void IfcTendon::unsetMinCurvatureRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinCurvatureRadius = Step::getUnset(getMinCurvatureRadius());
}

bool IfcTendon::testMinCurvatureRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMinCurvatureRadius()) == false;
}

bool IfcTendon::init()
{
    if (IfcReinforcingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcTendonTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".STRAND.")
        {
            m_PredefinedType = IfcTendonTypeEnum_STRAND;
        }
        else if (arg == ".WIRE.")
        {
            m_PredefinedType = IfcTendonTypeEnum_WIRE;
        }
        else if (arg == ".BAR.")
        {
            m_PredefinedType = IfcTendonTypeEnum_BAR;
        }
        else if (arg == ".COATED.")
        {
            m_PredefinedType = IfcTendonTypeEnum_COATED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcTendonTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcTendonTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NominalDiameter = Step::getUnset(m_NominalDiameter);
    }
    else
    {
        m_NominalDiameter = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CrossSectionArea = Step::getUnset(m_CrossSectionArea);
    }
    else
    {
        m_CrossSectionArea = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TensionForce = Step::getUnset(m_TensionForce);
    }
    else
    {
        m_TensionForce = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PreStress = Step::getUnset(m_PreStress);
    }
    else
    {
        m_PreStress = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FrictionCoefficient = Step::getUnset(m_FrictionCoefficient);
    }
    else
    {
        m_FrictionCoefficient = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AnchorageSlip = Step::getUnset(m_AnchorageSlip);
    }
    else
    {
        m_AnchorageSlip = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinCurvatureRadius = Step::getUnset(m_MinCurvatureRadius);
    }
    else
    {
        m_MinCurvatureRadius = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcTendon::copy(const IfcTendon &obj, const CopyOp &copyop)
{
    IfcReinforcingElement::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    setNominalDiameter(obj.m_NominalDiameter);
    setCrossSectionArea(obj.m_CrossSectionArea);
    setTensionForce(obj.m_TensionForce);
    setPreStress(obj.m_PreStress);
    setFrictionCoefficient(obj.m_FrictionCoefficient);
    setAnchorageSlip(obj.m_AnchorageSlip);
    setMinCurvatureRadius(obj.m_MinCurvatureRadius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTendon, IfcReinforcingElement)
