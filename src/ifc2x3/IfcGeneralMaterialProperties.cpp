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


#include <ifc2x3/IfcGeneralMaterialProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGeneralMaterialProperties::IfcGeneralMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_MolecularWeight = Step::getUnset(m_MolecularWeight);
    m_Porosity = Step::getUnset(m_Porosity);
    m_MassDensity = Step::getUnset(m_MassDensity);
}

IfcGeneralMaterialProperties::~IfcGeneralMaterialProperties()
{}

bool IfcGeneralMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGeneralMaterialProperties(this);
}


IfcMolecularWeightMeasure IfcGeneralMaterialProperties::getMolecularWeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MolecularWeight;
    }
    else 
    {
        return Step::getUnset(m_MolecularWeight);
    }    
}

IfcMolecularWeightMeasure IfcGeneralMaterialProperties::getMolecularWeight() const
{
    return const_cast<IfcGeneralMaterialProperties *>(this)->getMolecularWeight();
}

void IfcGeneralMaterialProperties::setMolecularWeight(IfcMolecularWeightMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MolecularWeight = value;
}

void IfcGeneralMaterialProperties::unsetMolecularWeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MolecularWeight = Step::getUnset(getMolecularWeight());
}

bool IfcGeneralMaterialProperties::testMolecularWeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMolecularWeight()) == false;
}


IfcNormalisedRatioMeasure IfcGeneralMaterialProperties::getPorosity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Porosity;
    }
    else 
    {
        return Step::getUnset(m_Porosity);
    }    
}

IfcNormalisedRatioMeasure IfcGeneralMaterialProperties::getPorosity() const
{
    return const_cast<IfcGeneralMaterialProperties *>(this)->getPorosity();
}

void IfcGeneralMaterialProperties::setPorosity(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Porosity = value;
}

void IfcGeneralMaterialProperties::unsetPorosity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Porosity = Step::getUnset(getPorosity());
}

bool IfcGeneralMaterialProperties::testPorosity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPorosity()) == false;
}


IfcMassDensityMeasure IfcGeneralMaterialProperties::getMassDensity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MassDensity;
    }
    else 
    {
        return Step::getUnset(m_MassDensity);
    }    
}

IfcMassDensityMeasure IfcGeneralMaterialProperties::getMassDensity() const
{
    return const_cast<IfcGeneralMaterialProperties *>(this)->getMassDensity();
}

void IfcGeneralMaterialProperties::setMassDensity(IfcMassDensityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MassDensity = value;
}

void IfcGeneralMaterialProperties::unsetMassDensity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MassDensity = Step::getUnset(getMassDensity());
}

bool IfcGeneralMaterialProperties::testMassDensity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMassDensity()) == false;
}

bool IfcGeneralMaterialProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MolecularWeight = Step::getUnset(m_MolecularWeight);
    }
    else
    {
        m_MolecularWeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Porosity = Step::getUnset(m_Porosity);
    }
    else
    {
        m_Porosity = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MassDensity = Step::getUnset(m_MassDensity);
    }
    else
    {
        m_MassDensity = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcGeneralMaterialProperties::copy(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setMolecularWeight(obj.m_MolecularWeight);
    setPorosity(obj.m_Porosity);
    setMassDensity(obj.m_MassDensity);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGeneralMaterialProperties, IfcMaterialProperties)
