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


#include <ifc2x3/IfcMaterialLayerSetUsage.h>

#include <ifc2x3/IfcMaterialLayerSet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ForLayerSet = NULL;
    m_LayerSetDirection = IfcLayerSetDirectionEnum_UNSET;
    m_DirectionSense = IfcDirectionSenseEnum_UNSET;
    m_OffsetFromReferenceLine = Step::getUnset(m_OffsetFromReferenceLine);
}

IfcMaterialLayerSetUsage::~IfcMaterialLayerSetUsage()
{}

bool IfcMaterialLayerSetUsage::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialLayerSetUsage(this);
}


IfcMaterialLayerSet *IfcMaterialLayerSetUsage::getForLayerSet()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ForLayerSet.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMaterialLayerSet *IfcMaterialLayerSetUsage::getForLayerSet() const
{
    return const_cast<IfcMaterialLayerSetUsage *>(this)->getForLayerSet();
}

void IfcMaterialLayerSetUsage::setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForLayerSet = value;
}

void IfcMaterialLayerSetUsage::unsetForLayerSet()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForLayerSet = Step::getUnset(getForLayerSet());
}

bool IfcMaterialLayerSetUsage::testForLayerSet() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getForLayerSet()) == false;
}


IfcLayerSetDirectionEnum IfcMaterialLayerSetUsage::getLayerSetDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerSetDirection;
    }
    else 
    {
        return IfcLayerSetDirectionEnum_UNSET;
    }    
}

IfcLayerSetDirectionEnum IfcMaterialLayerSetUsage::getLayerSetDirection() const
{
    return const_cast<IfcMaterialLayerSetUsage *>(this)->getLayerSetDirection();
}

void IfcMaterialLayerSetUsage::setLayerSetDirection(IfcLayerSetDirectionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerSetDirection = value;
}

void IfcMaterialLayerSetUsage::unsetLayerSetDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerSetDirection = IfcLayerSetDirectionEnum_UNSET;
}

bool IfcMaterialLayerSetUsage::testLayerSetDirection() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLayerSetDirection()) == false;
}


IfcDirectionSenseEnum IfcMaterialLayerSetUsage::getDirectionSense()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DirectionSense;
    }
    else 
    {
        return IfcDirectionSenseEnum_UNSET;
    }    
}

IfcDirectionSenseEnum IfcMaterialLayerSetUsage::getDirectionSense() const
{
    return const_cast<IfcMaterialLayerSetUsage *>(this)->getDirectionSense();
}

void IfcMaterialLayerSetUsage::setDirectionSense(IfcDirectionSenseEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DirectionSense = value;
}

void IfcMaterialLayerSetUsage::unsetDirectionSense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DirectionSense = IfcDirectionSenseEnum_UNSET;
}

bool IfcMaterialLayerSetUsage::testDirectionSense() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDirectionSense()) == false;
}


IfcLengthMeasure IfcMaterialLayerSetUsage::getOffsetFromReferenceLine()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OffsetFromReferenceLine;
    }
    else 
    {
        return Step::getUnset(m_OffsetFromReferenceLine);
    }    
}

IfcLengthMeasure IfcMaterialLayerSetUsage::getOffsetFromReferenceLine() const
{
    return const_cast<IfcMaterialLayerSetUsage *>(this)->getOffsetFromReferenceLine();
}

void IfcMaterialLayerSetUsage::setOffsetFromReferenceLine(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OffsetFromReferenceLine = value;
}

void IfcMaterialLayerSetUsage::unsetOffsetFromReferenceLine()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OffsetFromReferenceLine = Step::getUnset(getOffsetFromReferenceLine());
}

bool IfcMaterialLayerSetUsage::testOffsetFromReferenceLine() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOffsetFromReferenceLine()) == false;
}

bool IfcMaterialLayerSetUsage::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ForLayerSet = NULL;
    }
    else
    {
        m_ForLayerSet = static_cast< IfcMaterialLayerSet * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerSetDirection = IfcLayerSetDirectionEnum_UNSET;
    }
    else
    {
        if (arg == ".AXIS1.")
        {
            m_LayerSetDirection = IfcLayerSetDirectionEnum_AXIS1;
        }
        else if (arg == ".AXIS2.")
        {
            m_LayerSetDirection = IfcLayerSetDirectionEnum_AXIS2;
        }
        else if (arg == ".AXIS3.")
        {
            m_LayerSetDirection = IfcLayerSetDirectionEnum_AXIS3;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DirectionSense = IfcDirectionSenseEnum_UNSET;
    }
    else
    {
        if (arg == ".POSITIVE.")
        {
            m_DirectionSense = IfcDirectionSenseEnum_POSITIVE;
        }
        else if (arg == ".NEGATIVE.")
        {
            m_DirectionSense = IfcDirectionSenseEnum_NEGATIVE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OffsetFromReferenceLine = Step::getUnset(m_OffsetFromReferenceLine);
    }
    else
    {
        m_OffsetFromReferenceLine = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcMaterialLayerSetUsage::copy(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setForLayerSet((IfcMaterialLayerSet*)copyop(obj.m_ForLayerSet.get()));
    setLayerSetDirection(obj.m_LayerSetDirection);
    setDirectionSense(obj.m_DirectionSense);
    setOffsetFromReferenceLine(obj.m_OffsetFromReferenceLine);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialLayerSetUsage, Step::BaseEntity)
