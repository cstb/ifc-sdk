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


#include <ifc2x3/IfcConstructionResource.h>

#include <ifc2x3/IfcMeasureWithUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConstructionResource::IfcConstructionResource(Step::Id id, Step::SPFData *args) : 
    IfcResource(id, args)
{
    m_ResourceIdentifier = Step::getUnset(m_ResourceIdentifier);
    m_ResourceGroup = Step::getUnset(m_ResourceGroup);
    m_ResourceConsumption = IfcResourceConsumptionEnum_UNSET;
    m_BaseQuantity = NULL;
}

IfcConstructionResource::~IfcConstructionResource()
{}

bool IfcConstructionResource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConstructionResource(this);
}


IfcIdentifier IfcConstructionResource::getResourceIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ResourceIdentifier;
    }
    else 
    {
        return Step::getUnset(m_ResourceIdentifier);
    }    
}

const IfcIdentifier IfcConstructionResource::getResourceIdentifier() const
{
    return const_cast<IfcConstructionResource *>(this)->getResourceIdentifier();
}

void IfcConstructionResource::setResourceIdentifier(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResourceIdentifier = value;
}

void IfcConstructionResource::unsetResourceIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResourceIdentifier = Step::getUnset(getResourceIdentifier());
}

bool IfcConstructionResource::testResourceIdentifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getResourceIdentifier()) == false;
}


IfcLabel IfcConstructionResource::getResourceGroup()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ResourceGroup;
    }
    else 
    {
        return Step::getUnset(m_ResourceGroup);
    }    
}

const IfcLabel IfcConstructionResource::getResourceGroup() const
{
    return const_cast<IfcConstructionResource *>(this)->getResourceGroup();
}

void IfcConstructionResource::setResourceGroup(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResourceGroup = value;
}

void IfcConstructionResource::unsetResourceGroup()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResourceGroup = Step::getUnset(getResourceGroup());
}

bool IfcConstructionResource::testResourceGroup() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getResourceGroup()) == false;
}


IfcResourceConsumptionEnum IfcConstructionResource::getResourceConsumption()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ResourceConsumption;
    }
    else 
    {
        return IfcResourceConsumptionEnum_UNSET;
    }    
}

IfcResourceConsumptionEnum IfcConstructionResource::getResourceConsumption() const
{
    return const_cast<IfcConstructionResource *>(this)->getResourceConsumption();
}

void IfcConstructionResource::setResourceConsumption(IfcResourceConsumptionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResourceConsumption = value;
}

void IfcConstructionResource::unsetResourceConsumption()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResourceConsumption = IfcResourceConsumptionEnum_UNSET;
}

bool IfcConstructionResource::testResourceConsumption() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getResourceConsumption()) == false;
}


IfcMeasureWithUnit *IfcConstructionResource::getBaseQuantity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseQuantity.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureWithUnit *IfcConstructionResource::getBaseQuantity() const
{
    return const_cast<IfcConstructionResource *>(this)->getBaseQuantity();
}

void IfcConstructionResource::setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseQuantity = value;
}

void IfcConstructionResource::unsetBaseQuantity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseQuantity = Step::getUnset(getBaseQuantity());
}

bool IfcConstructionResource::testBaseQuantity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBaseQuantity()) == false;
}

bool IfcConstructionResource::init()
{
    if (IfcResource::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ResourceIdentifier = Step::getUnset(m_ResourceIdentifier);
    }
    else
    {
        m_ResourceIdentifier = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ResourceGroup = Step::getUnset(m_ResourceGroup);
    }
    else
    {
        m_ResourceGroup = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ResourceConsumption = IfcResourceConsumptionEnum_UNSET;
    }
    else
    {
        if (arg == ".CONSUMED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_CONSUMED;
        }
        else if (arg == ".PARTIALLYCONSUMED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_PARTIALLYCONSUMED;
        }
        else if (arg == ".NOTCONSUMED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_NOTCONSUMED;
        }
        else if (arg == ".OCCUPIED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_OCCUPIED;
        }
        else if (arg == ".PARTIALLYOCCUPIED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_PARTIALLYOCCUPIED;
        }
        else if (arg == ".NOTOCCUPIED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_NOTOCCUPIED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ResourceConsumption = IfcResourceConsumptionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BaseQuantity = NULL;
    }
    else
    {
        m_BaseQuantity = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcConstructionResource::copy(const IfcConstructionResource &obj, const CopyOp &copyop)
{
    IfcResource::copy(obj, copyop);
    setResourceIdentifier(obj.m_ResourceIdentifier);
    setResourceGroup(obj.m_ResourceGroup);
    setResourceConsumption(obj.m_ResourceConsumption);
    setBaseQuantity((IfcMeasureWithUnit*)copyop(obj.m_BaseQuantity.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConstructionResource, IfcResource)
