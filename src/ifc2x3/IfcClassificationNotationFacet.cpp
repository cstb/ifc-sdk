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


#include <ifc2x3/IfcClassificationNotationFacet.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcClassificationNotationFacet::IfcClassificationNotationFacet(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_NotationValue = Step::getUnset(m_NotationValue);
}

IfcClassificationNotationFacet::~IfcClassificationNotationFacet()
{}

bool IfcClassificationNotationFacet::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcClassificationNotationFacet(this);
}


IfcLabel IfcClassificationNotationFacet::getNotationValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NotationValue;
    }
    else 
    {
        return Step::getUnset(m_NotationValue);
    }    
}

const IfcLabel IfcClassificationNotationFacet::getNotationValue() const
{
    return const_cast<IfcClassificationNotationFacet *>(this)->getNotationValue();
}

void IfcClassificationNotationFacet::setNotationValue(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NotationValue = value;
}

void IfcClassificationNotationFacet::unsetNotationValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NotationValue = Step::getUnset(getNotationValue());
}

bool IfcClassificationNotationFacet::testNotationValue() const
{
    return Step::isUnset(getNotationValue()) == false;
}

bool IfcClassificationNotationFacet::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NotationValue = Step::getUnset(m_NotationValue);
    }
    else
    {
        m_NotationValue = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcClassificationNotationFacet::copy(const IfcClassificationNotationFacet &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setNotationValue(obj.m_NotationValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcClassificationNotationFacet, Step::BaseEntity)
