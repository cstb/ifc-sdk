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


#include <ifc2x3/IfcStructuralConnection.h>

#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralConnection::IfcStructuralConnection(Step::Id id, Step::SPFData *args) : 
    IfcStructuralItem(id, args)
{
    m_AppliedCondition = NULL;
}

IfcStructuralConnection::~IfcStructuralConnection()
{}

bool IfcStructuralConnection::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralConnection(this);
}


IfcBoundaryCondition *IfcStructuralConnection::getAppliedCondition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AppliedCondition.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBoundaryCondition *IfcStructuralConnection::getAppliedCondition() const
{
    return const_cast<IfcStructuralConnection *>(this)->getAppliedCondition();
}

void IfcStructuralConnection::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedCondition = value;
}

void IfcStructuralConnection::unsetAppliedCondition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedCondition = Step::getUnset(getAppliedCondition());
}

bool IfcStructuralConnection::testAppliedCondition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAppliedCondition()) == false;
}

Inverse_Set_IfcRelConnectsStructuralMember_1_n &IfcStructuralConnection::getConnectsStructuralMembers()
{
    if (Step::BaseObject::inited())
    {
        return m_ConnectsStructuralMembers;
    }
 
    m_ConnectsStructuralMembers.setUnset(true);
    return m_ConnectsStructuralMembers;
}

const Inverse_Set_IfcRelConnectsStructuralMember_1_n &IfcStructuralConnection::getConnectsStructuralMembers() const
{
    return  const_cast< IfcStructuralConnection * > (this)->getConnectsStructuralMembers();
}

bool IfcStructuralConnection::testConnectsStructuralMembers() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ConnectsStructuralMembers.isUnset() == false;
}

bool IfcStructuralConnection::init()
{
    if (IfcStructuralItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AppliedCondition = NULL;
    }
    else
    {
        m_AppliedCondition = static_cast< IfcBoundaryCondition * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ConnectsStructuralMembers.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ConnectsStructuralMembers.insert(static_cast< IfcRelConnectsStructuralMember * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralConnection::copy(const IfcStructuralConnection &obj, const CopyOp &copyop)
{
    IfcStructuralItem::copy(obj, copyop);
    setAppliedCondition((IfcBoundaryCondition*)copyop(obj.m_AppliedCondition.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralConnection, IfcStructuralItem)
