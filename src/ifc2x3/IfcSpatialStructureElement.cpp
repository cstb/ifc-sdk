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


#include <ifc2x3/IfcSpatialStructureElement.h>

#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSpatialStructureElement::IfcSpatialStructureElement(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
    m_LongName = Step::getUnset(m_LongName);
    m_CompositionType = IfcElementCompositionEnum_UNSET;
}

IfcSpatialStructureElement::~IfcSpatialStructureElement()
{}

bool IfcSpatialStructureElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpatialStructureElement(this);
}


IfcLabel IfcSpatialStructureElement::getLongName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongName;
    }
    else 
    {
        return Step::getUnset(m_LongName);
    }    
}

const IfcLabel IfcSpatialStructureElement::getLongName() const
{
    return const_cast<IfcSpatialStructureElement *>(this)->getLongName();
}

void IfcSpatialStructureElement::setLongName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongName = value;
}

void IfcSpatialStructureElement::unsetLongName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongName = Step::getUnset(getLongName());
}

bool IfcSpatialStructureElement::testLongName() const
{
    return Step::isUnset(getLongName()) == false;
}


IfcElementCompositionEnum IfcSpatialStructureElement::getCompositionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CompositionType;
    }
    else 
    {
        return IfcElementCompositionEnum_UNSET;
    }    
}

IfcElementCompositionEnum IfcSpatialStructureElement::getCompositionType() const
{
    return const_cast<IfcSpatialStructureElement *>(this)->getCompositionType();
}

void IfcSpatialStructureElement::setCompositionType(IfcElementCompositionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompositionType = value;
}

void IfcSpatialStructureElement::unsetCompositionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompositionType = IfcElementCompositionEnum_UNSET;
}

bool IfcSpatialStructureElement::testCompositionType() const
{
    return Step::isUnset(getCompositionType()) == false;
}

Inverse_Set_IfcRelServicesBuildings_0_n &IfcSpatialStructureElement::getServicedBySystems()
{
    if (Step::BaseObject::inited())
    {
        return m_ServicedBySystems;
    }
 
    m_ServicedBySystems.setUnset(true);
    return m_ServicedBySystems;
}

const Inverse_Set_IfcRelServicesBuildings_0_n &IfcSpatialStructureElement::getServicedBySystems() const
{
    return  const_cast< IfcSpatialStructureElement * > (this)->getServicedBySystems();
}

bool IfcSpatialStructureElement::testServicedBySystems() const
{
    return m_ServicedBySystems.isUnset() == false;
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_n &IfcSpatialStructureElement::getContainsElements()
{
    if (Step::BaseObject::inited())
    {
        return m_ContainsElements;
    }
 
    m_ContainsElements.setUnset(true);
    return m_ContainsElements;
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_n &IfcSpatialStructureElement::getContainsElements() const
{
    return  const_cast< IfcSpatialStructureElement * > (this)->getContainsElements();
}

bool IfcSpatialStructureElement::testContainsElements() const
{
    return m_ContainsElements.isUnset() == false;
}

Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcSpatialStructureElement::getReferencesElements()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencesElements;
    }
 
    m_ReferencesElements.setUnset(true);
    return m_ReferencesElements;
}

const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcSpatialStructureElement::getReferencesElements() const
{
    return  const_cast< IfcSpatialStructureElement * > (this)->getReferencesElements();
}

bool IfcSpatialStructureElement::testReferencesElements() const
{
    return m_ReferencesElements.isUnset() == false;
}

bool IfcSpatialStructureElement::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongName = Step::getUnset(m_LongName);
    }
    else
    {
        m_LongName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CompositionType = IfcElementCompositionEnum_UNSET;
    }
    else
    {
        if (arg == ".COMPLEX.")
        {
            m_CompositionType = IfcElementCompositionEnum_COMPLEX;
        }
        else if (arg == ".ELEMENT.")
        {
            m_CompositionType = IfcElementCompositionEnum_ELEMENT;
        }
        else if (arg == ".PARTIAL.")
        {
            m_CompositionType = IfcElementCompositionEnum_PARTIAL;
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ServicedBySystems.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ServicedBySystems.insert(static_cast< IfcRelServicesBuildings * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ContainsElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ContainsElements.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ReferencesElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ReferencesElements.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpatialStructureElement::copy(const IfcSpatialStructureElement &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    setLongName(obj.m_LongName);
    setCompositionType(obj.m_CompositionType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSpatialStructureElement, IfcProduct)
