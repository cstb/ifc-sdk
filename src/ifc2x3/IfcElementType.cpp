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


#include <ifc2x3/IfcElementType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElementType::IfcElementType(Step::Id id, Step::SPFData *args) : 
    IfcTypeProduct(id, args)
{
    m_ElementType = Step::getUnset(m_ElementType);
}

IfcElementType::~IfcElementType()
{}

bool IfcElementType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElementType(this);
}


IfcLabel IfcElementType::getElementType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElementType;
    }
    else 
    {
        return Step::getUnset(m_ElementType);
    }    
}

const IfcLabel IfcElementType::getElementType() const
{
    return const_cast<IfcElementType *>(this)->getElementType();
}

void IfcElementType::setElementType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElementType = value;
}

void IfcElementType::unsetElementType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElementType = Step::getUnset(getElementType());
}

bool IfcElementType::testElementType() const
{
    return Step::isUnset(getElementType()) == false;
}

bool IfcElementType::init()
{
    if (IfcTypeProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElementType = Step::getUnset(m_ElementType);
    }
    else
    {
        m_ElementType = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcElementType::copy(const IfcElementType &obj, const CopyOp &copyop)
{
    IfcTypeProduct::copy(obj, copyop);
    setElementType(obj.m_ElementType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElementType, IfcTypeProduct)
