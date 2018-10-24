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


#include <ifc2x3/IfcBuildingElementProxy.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBuildingElementProxy::IfcBuildingElementProxy(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_CompositionType = IfcElementCompositionEnum_UNSET;
}

IfcBuildingElementProxy::~IfcBuildingElementProxy()
{}

bool IfcBuildingElementProxy::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBuildingElementProxy(this);
}


IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType()
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

IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType() const
{
    return const_cast<IfcBuildingElementProxy *>(this)->getCompositionType();
}

void IfcBuildingElementProxy::setCompositionType(IfcElementCompositionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompositionType = value;
}

void IfcBuildingElementProxy::unsetCompositionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompositionType = IfcElementCompositionEnum_UNSET;
}

bool IfcBuildingElementProxy::testCompositionType() const
{
    return Step::isUnset(getCompositionType()) == false;
}

bool IfcBuildingElementProxy::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
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
    return true;
}

void IfcBuildingElementProxy::copy(const IfcBuildingElementProxy &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setCompositionType(obj.m_CompositionType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBuildingElementProxy, IfcBuildingElement)
