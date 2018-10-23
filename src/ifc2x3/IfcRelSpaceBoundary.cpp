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


#include <ifc2x3/IfcRelSpaceBoundary.h>

#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelSpaceBoundary::IfcRelSpaceBoundary(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_ConnectionGeometry = NULL;
    m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
    m_InternalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
    m_RelatingSpace = NULL;
    m_RelatedBuildingElement = NULL;
}

IfcRelSpaceBoundary::~IfcRelSpaceBoundary()
{}

bool IfcRelSpaceBoundary::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelSpaceBoundary(this);
}


IfcConnectionGeometry *IfcRelSpaceBoundary::getConnectionGeometry()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConnectionGeometry.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcConnectionGeometry *IfcRelSpaceBoundary::getConnectionGeometry() const
{
    return const_cast<IfcRelSpaceBoundary *>(this)->getConnectionGeometry();
}

void IfcRelSpaceBoundary::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionGeometry = value;
}

void IfcRelSpaceBoundary::unsetConnectionGeometry()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionGeometry = Step::getUnset(getConnectionGeometry());
}

bool IfcRelSpaceBoundary::testConnectionGeometry() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConnectionGeometry()) == false;
}


IfcPhysicalOrVirtualEnum IfcRelSpaceBoundary::getPhysicalOrVirtualBoundary()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PhysicalOrVirtualBoundary;
    }
    else 
    {
        return IfcPhysicalOrVirtualEnum_UNSET;
    }    
}

IfcPhysicalOrVirtualEnum IfcRelSpaceBoundary::getPhysicalOrVirtualBoundary() const
{
    return const_cast<IfcRelSpaceBoundary *>(this)->getPhysicalOrVirtualBoundary();
}

void IfcRelSpaceBoundary::setPhysicalOrVirtualBoundary(IfcPhysicalOrVirtualEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PhysicalOrVirtualBoundary = value;
}

void IfcRelSpaceBoundary::unsetPhysicalOrVirtualBoundary()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
}

bool IfcRelSpaceBoundary::testPhysicalOrVirtualBoundary() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPhysicalOrVirtualBoundary()) == false;
}


IfcInternalOrExternalEnum IfcRelSpaceBoundary::getInternalOrExternalBoundary()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InternalOrExternalBoundary;
    }
    else 
    {
        return IfcInternalOrExternalEnum_UNSET;
    }    
}

IfcInternalOrExternalEnum IfcRelSpaceBoundary::getInternalOrExternalBoundary() const
{
    return const_cast<IfcRelSpaceBoundary *>(this)->getInternalOrExternalBoundary();
}

void IfcRelSpaceBoundary::setInternalOrExternalBoundary(IfcInternalOrExternalEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InternalOrExternalBoundary = value;
}

void IfcRelSpaceBoundary::unsetInternalOrExternalBoundary()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InternalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
}

bool IfcRelSpaceBoundary::testInternalOrExternalBoundary() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getInternalOrExternalBoundary()) == false;
}

IfcSpace *IfcRelSpaceBoundary::getRelatingSpace()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingSpace.get();
    }
    else
    {
        return NULL;
    }
}

const IfcSpace *IfcRelSpaceBoundary::getRelatingSpace() const
{
    return const_cast< IfcRelSpaceBoundary * > (this)->getRelatingSpace();
}

void IfcRelSpaceBoundary::setRelatingSpace(const Step::RefPtr< IfcSpace > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingSpace.valid())
    {
        m_RelatingSpace->m_BoundedBy.erase(this);
    }
    if (value.valid() )
    {
       value->m_BoundedBy.insert(this);
    }
    m_RelatingSpace = value;
}

void IfcRelSpaceBoundary::unsetRelatingSpace()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingSpace = Step::getUnset(getRelatingSpace());
}

bool IfcRelSpaceBoundary::testRelatingSpace() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingSpace()) == false;
}

IfcElement *IfcRelSpaceBoundary::getRelatedBuildingElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedBuildingElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcElement *IfcRelSpaceBoundary::getRelatedBuildingElement() const
{
    return const_cast< IfcRelSpaceBoundary * > (this)->getRelatedBuildingElement();
}

void IfcRelSpaceBoundary::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedBuildingElement.valid())
    {
        m_RelatedBuildingElement->m_ProvidesBoundaries.erase(this);
    }
    if (value.valid() )
    {
       value->m_ProvidesBoundaries.insert(this);
    }
    m_RelatedBuildingElement = value;
}

void IfcRelSpaceBoundary::unsetRelatedBuildingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedBuildingElement = Step::getUnset(getRelatedBuildingElement());
}

bool IfcRelSpaceBoundary::testRelatedBuildingElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatedBuildingElement()) == false;
}

bool IfcRelSpaceBoundary::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConnectionGeometry = NULL;
    }
    else
    {
        m_ConnectionGeometry = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
    }
    else
    {
        if (arg == ".PHYSICAL.")
        {
            m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_PHYSICAL;
        }
        else if (arg == ".VIRTUAL.")
        {
            m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_VIRTUAL;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InternalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
    }
    else
    {
        if (arg == ".INTERNAL.")
        {
            m_InternalOrExternalBoundary = IfcInternalOrExternalEnum_INTERNAL;
        }
        else if (arg == ".EXTERNAL.")
        {
            m_InternalOrExternalBoundary = IfcInternalOrExternalEnum_EXTERNAL;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_InternalOrExternalBoundary = IfcInternalOrExternalEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingSpace = NULL;
    }
    else
    {
        m_RelatingSpace = static_cast< IfcSpace * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedBuildingElement = NULL;
    }
    else
    {
        m_RelatedBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelSpaceBoundary::copy(const IfcRelSpaceBoundary &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setConnectionGeometry((IfcConnectionGeometry*)copyop(obj.m_ConnectionGeometry.get()));
    setPhysicalOrVirtualBoundary(obj.m_PhysicalOrVirtualBoundary);
    setInternalOrExternalBoundary(obj.m_InternalOrExternalBoundary);
    setRelatingSpace((IfcSpace*)copyop(obj.m_RelatingSpace.get()));
    setRelatedBuildingElement((IfcElement*)copyop(obj.m_RelatedBuildingElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelSpaceBoundary, IfcRelConnects)
