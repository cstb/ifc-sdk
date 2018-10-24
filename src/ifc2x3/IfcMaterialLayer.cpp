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


#include <ifc2x3/IfcMaterialLayer.h>

#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialLayerSet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterialLayer::IfcMaterialLayer(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Material = NULL;
    m_LayerThickness = Step::getUnset(m_LayerThickness);
    m_IsVentilated = Step::getUnset(m_IsVentilated);
}

IfcMaterialLayer::~IfcMaterialLayer()
{}

bool IfcMaterialLayer::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialLayer(this);
}


IfcMaterial *IfcMaterialLayer::getMaterial()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Material.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMaterial *IfcMaterialLayer::getMaterial() const
{
    return const_cast<IfcMaterialLayer *>(this)->getMaterial();
}

void IfcMaterialLayer::setMaterial(const Step::RefPtr< IfcMaterial > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Material = value;
}

void IfcMaterialLayer::unsetMaterial()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Material = Step::getUnset(getMaterial());
}

bool IfcMaterialLayer::testMaterial() const
{
    return Step::isUnset(getMaterial()) == false;
}


IfcPositiveLengthMeasure IfcMaterialLayer::getLayerThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerThickness;
    }
    else 
    {
        return Step::getUnset(m_LayerThickness);
    }    
}

IfcPositiveLengthMeasure IfcMaterialLayer::getLayerThickness() const
{
    return const_cast<IfcMaterialLayer *>(this)->getLayerThickness();
}

void IfcMaterialLayer::setLayerThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerThickness = value;
}

void IfcMaterialLayer::unsetLayerThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerThickness = Step::getUnset(getLayerThickness());
}

bool IfcMaterialLayer::testLayerThickness() const
{
    return Step::isUnset(getLayerThickness()) == false;
}


IfcLogical IfcMaterialLayer::getIsVentilated()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsVentilated;
    }
    else 
    {
        return Step::getUnset(m_IsVentilated);
    }    
}

IfcLogical IfcMaterialLayer::getIsVentilated() const
{
    return const_cast<IfcMaterialLayer *>(this)->getIsVentilated();
}

void IfcMaterialLayer::setIsVentilated(IfcLogical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsVentilated = value;
}

void IfcMaterialLayer::unsetIsVentilated()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsVentilated = Step::getUnset(getIsVentilated());
}

bool IfcMaterialLayer::testIsVentilated() const
{
    return Step::isUnset(getIsVentilated()) == false;
}

IfcMaterialLayerSet *IfcMaterialLayer::getToMaterialLayerSet()
{
    if (Step::BaseObject::inited())
    {
        return m_ToMaterialLayerSet.get();
    }
 
    return NULL;
}

const IfcMaterialLayerSet *IfcMaterialLayer::getToMaterialLayerSet() const
{
    return  const_cast< IfcMaterialLayer * > (this)->getToMaterialLayerSet();
}

bool IfcMaterialLayer::testToMaterialLayerSet() const
{
    return Step::isUnset(getToMaterialLayerSet()) == false;
}

bool IfcMaterialLayer::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Material = NULL;
    }
    else
    {
        m_Material = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerThickness = Step::getUnset(m_LayerThickness);
    }
    else
    {
        m_LayerThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsVentilated = Step::getUnset(m_IsVentilated);
    }
    else
    {
        m_IsVentilated = Step::spfToLogical(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcMaterialLayerSet::getClassType(), 0);
    if (inverses)
    {
        m_ToMaterialLayerSet = static_cast< IfcMaterialLayerSet * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcMaterialLayer::copy(const IfcMaterialLayer &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setMaterial((IfcMaterial*)copyop(obj.m_Material.get()));
    setLayerThickness(obj.m_LayerThickness);
    setIsVentilated(obj.m_IsVentilated);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialLayer, Step::BaseEntity)
