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


#include <ifc2x3/IfcTextLiteralWithExtent.h>

#include <ifc2x3/IfcPlanarExtent.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextLiteralWithExtent::IfcTextLiteralWithExtent(Step::Id id, Step::SPFData *args) : 
    IfcTextLiteral(id, args)
{
    m_Extent = NULL;
    m_BoxAlignment = Step::getUnset(m_BoxAlignment);
}

IfcTextLiteralWithExtent::~IfcTextLiteralWithExtent()
{}

bool IfcTextLiteralWithExtent::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextLiteralWithExtent(this);
}


IfcPlanarExtent *IfcTextLiteralWithExtent::getExtent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Extent.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPlanarExtent *IfcTextLiteralWithExtent::getExtent() const
{
    return const_cast<IfcTextLiteralWithExtent *>(this)->getExtent();
}

void IfcTextLiteralWithExtent::setExtent(const Step::RefPtr< IfcPlanarExtent > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Extent = value;
}

void IfcTextLiteralWithExtent::unsetExtent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Extent = Step::getUnset(getExtent());
}

bool IfcTextLiteralWithExtent::testExtent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getExtent()) == false;
}


IfcBoxAlignment IfcTextLiteralWithExtent::getBoxAlignment()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BoxAlignment;
    }
    else 
    {
        return Step::getUnset(m_BoxAlignment);
    }    
}

const IfcBoxAlignment IfcTextLiteralWithExtent::getBoxAlignment() const
{
    return const_cast<IfcTextLiteralWithExtent *>(this)->getBoxAlignment();
}

void IfcTextLiteralWithExtent::setBoxAlignment(const IfcBoxAlignment &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxAlignment = value;
}

void IfcTextLiteralWithExtent::unsetBoxAlignment()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxAlignment = Step::getUnset(getBoxAlignment());
}

bool IfcTextLiteralWithExtent::testBoxAlignment() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBoxAlignment()) == false;
}

bool IfcTextLiteralWithExtent::init()
{
    if (IfcTextLiteral::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Extent = NULL;
    }
    else
    {
        m_Extent = static_cast< IfcPlanarExtent * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BoxAlignment = Step::getUnset(m_BoxAlignment);
    }
    else
    {
        m_BoxAlignment = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcTextLiteralWithExtent::copy(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop)
{
    IfcTextLiteral::copy(obj, copyop);
    setExtent((IfcPlanarExtent*)copyop(obj.m_Extent.get()));
    setBoxAlignment(obj.m_BoxAlignment);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextLiteralWithExtent, IfcTextLiteral)
