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


#include <ifc2x3/IfcObject.h>

#include <ifc2x3/IfcRelDefines.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcObject::IfcObject(Step::Id id, Step::SPFData *args) : 
    IfcObjectDefinition(id, args)
{
    m_ObjectType = Step::getUnset(m_ObjectType);
}

IfcObject::~IfcObject()
{}

bool IfcObject::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcObject(this);
}


IfcLabel IfcObject::getObjectType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ObjectType;
    }
    else 
    {
        return Step::getUnset(m_ObjectType);
    }    
}

const IfcLabel IfcObject::getObjectType() const
{
    return const_cast<IfcObject *>(this)->getObjectType();
}

void IfcObject::setObjectType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ObjectType = value;
}

void IfcObject::unsetObjectType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ObjectType = Step::getUnset(getObjectType());
}

bool IfcObject::testObjectType() const
{
    return Step::isUnset(getObjectType()) == false;
}

Inverse_Set_IfcRelDefines_0_n &IfcObject::getIsDefinedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_IsDefinedBy;
    }
 
    m_IsDefinedBy.setUnset(true);
    return m_IsDefinedBy;
}

const Inverse_Set_IfcRelDefines_0_n &IfcObject::getIsDefinedBy() const
{
    return  const_cast< IfcObject * > (this)->getIsDefinedBy();
}

bool IfcObject::testIsDefinedBy() const
{
    return m_IsDefinedBy.isUnset() == false;
}

bool IfcObject::init()
{
    if (IfcObjectDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ObjectType = Step::getUnset(m_ObjectType);
    }
    else
    {
        m_ObjectType = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelDefines::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_IsDefinedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsDefinedBy.insert(static_cast< IfcRelDefines * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObject::copy(const IfcObject &obj, const CopyOp &copyop)
{
    IfcObjectDefinition::copy(obj, copyop);
    setObjectType(obj.m_ObjectType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcObject, IfcObjectDefinition)
