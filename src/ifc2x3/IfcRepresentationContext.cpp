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


#include <ifc2x3/IfcRepresentationContext.h>

#include <ifc2x3/IfcRepresentation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRepresentationContext::IfcRepresentationContext(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ContextIdentifier = Step::getUnset(m_ContextIdentifier);
    m_ContextType = Step::getUnset(m_ContextType);
}

IfcRepresentationContext::~IfcRepresentationContext()
{}

bool IfcRepresentationContext::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRepresentationContext(this);
}


IfcLabel IfcRepresentationContext::getContextIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ContextIdentifier;
    }
    else 
    {
        return Step::getUnset(m_ContextIdentifier);
    }    
}

const IfcLabel IfcRepresentationContext::getContextIdentifier() const
{
    return const_cast<IfcRepresentationContext *>(this)->getContextIdentifier();
}

void IfcRepresentationContext::setContextIdentifier(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ContextIdentifier = value;
}

void IfcRepresentationContext::unsetContextIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ContextIdentifier = Step::getUnset(getContextIdentifier());
}

bool IfcRepresentationContext::testContextIdentifier() const
{
    return Step::isUnset(getContextIdentifier()) == false;
}


IfcLabel IfcRepresentationContext::getContextType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ContextType;
    }
    else 
    {
        return Step::getUnset(m_ContextType);
    }    
}

const IfcLabel IfcRepresentationContext::getContextType() const
{
    return const_cast<IfcRepresentationContext *>(this)->getContextType();
}

void IfcRepresentationContext::setContextType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ContextType = value;
}

void IfcRepresentationContext::unsetContextType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ContextType = Step::getUnset(getContextType());
}

bool IfcRepresentationContext::testContextType() const
{
    return Step::isUnset(getContextType()) == false;
}

Inverse_Set_IfcRepresentation_0_n &IfcRepresentationContext::getRepresentationsInContext()
{
    if (Step::BaseObject::inited())
    {
        return m_RepresentationsInContext;
    }
 
    m_RepresentationsInContext.setUnset(true);
    return m_RepresentationsInContext;
}

const Inverse_Set_IfcRepresentation_0_n &IfcRepresentationContext::getRepresentationsInContext() const
{
    return  const_cast< IfcRepresentationContext * > (this)->getRepresentationsInContext();
}

bool IfcRepresentationContext::testRepresentationsInContext() const
{
    return m_RepresentationsInContext.isUnset() == false;
}

bool IfcRepresentationContext::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ContextIdentifier = Step::getUnset(m_ContextIdentifier);
    }
    else
    {
        m_ContextIdentifier = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ContextType = Step::getUnset(m_ContextType);
    }
    else
    {
        m_ContextType = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRepresentation::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_RepresentationsInContext.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_RepresentationsInContext.insert(static_cast< IfcRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationContext::copy(const IfcRepresentationContext &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setContextIdentifier(obj.m_ContextIdentifier);
    setContextType(obj.m_ContextType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRepresentationContext, Step::BaseEntity)
