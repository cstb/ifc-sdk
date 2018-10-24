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


#include <ifc2x3/IfcFaceBound.h>

#include <ifc2x3/IfcLoop.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFaceBound::IfcFaceBound(Step::Id id, Step::SPFData *args) : 
    IfcTopologicalRepresentationItem(id, args)
{
    m_Bound = NULL;
    m_Orientation = Step::getUnset(m_Orientation);
}

IfcFaceBound::~IfcFaceBound()
{}

bool IfcFaceBound::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFaceBound(this);
}


IfcLoop *IfcFaceBound::getBound()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Bound.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcLoop *IfcFaceBound::getBound() const
{
    return const_cast<IfcFaceBound *>(this)->getBound();
}

void IfcFaceBound::setBound(const Step::RefPtr< IfcLoop > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Bound = value;
}

void IfcFaceBound::unsetBound()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Bound = Step::getUnset(getBound());
}

bool IfcFaceBound::testBound() const
{
    return Step::isUnset(getBound()) == false;
}


Step::Boolean IfcFaceBound::getOrientation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Orientation;
    }
    else 
    {
        return Step::getUnset(m_Orientation);
    }    
}

Step::Boolean IfcFaceBound::getOrientation() const
{
    return const_cast<IfcFaceBound *>(this)->getOrientation();
}

void IfcFaceBound::setOrientation(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = value;
}

void IfcFaceBound::unsetOrientation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = Step::getUnset(getOrientation());
}

bool IfcFaceBound::testOrientation() const
{
    return Step::isUnset(getOrientation()) == false;
}

bool IfcFaceBound::init()
{
    if (IfcTopologicalRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Bound = NULL;
    }
    else
    {
        m_Bound = static_cast< IfcLoop * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Orientation = Step::getUnset(m_Orientation);
    }
    else
    {
        m_Orientation = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcFaceBound::copy(const IfcFaceBound &obj, const CopyOp &copyop)
{
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setBound((IfcLoop*)copyop(obj.m_Bound.get()));
    setOrientation(obj.m_Orientation);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFaceBound, IfcTopologicalRepresentationItem)
