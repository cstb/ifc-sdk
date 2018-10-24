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


#include <ifc2x3/IfcProcess.h>

#include <ifc2x3/IfcRelSequence.h>
#include <ifc2x3/IfcRelSequence.h>
#include <ifc2x3/IfcRelAssignsToProcess.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProcess::IfcProcess(Step::Id id, Step::SPFData *args) : 
    IfcObject(id, args)
{
}

IfcProcess::~IfcProcess()
{}

bool IfcProcess::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProcess(this);
}

Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsPredecessorTo()
{
    if (Step::BaseObject::inited())
    {
        return m_IsPredecessorTo;
    }
 
    m_IsPredecessorTo.setUnset(true);
    return m_IsPredecessorTo;
}

const Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsPredecessorTo() const
{
    return  const_cast< IfcProcess * > (this)->getIsPredecessorTo();
}

bool IfcProcess::testIsPredecessorTo() const
{
    return m_IsPredecessorTo.isUnset() == false;
}

Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsSuccessorFrom()
{
    if (Step::BaseObject::inited())
    {
        return m_IsSuccessorFrom;
    }
 
    m_IsSuccessorFrom.setUnset(true);
    return m_IsSuccessorFrom;
}

const Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsSuccessorFrom() const
{
    return  const_cast< IfcProcess * > (this)->getIsSuccessorFrom();
}

bool IfcProcess::testIsSuccessorFrom() const
{
    return m_IsSuccessorFrom.isUnset() == false;
}

Inverse_Set_IfcRelAssignsToProcess_0_n &IfcProcess::getOperatesOn()
{
    if (Step::BaseObject::inited())
    {
        return m_OperatesOn;
    }
 
    m_OperatesOn.setUnset(true);
    return m_OperatesOn;
}

const Inverse_Set_IfcRelAssignsToProcess_0_n &IfcProcess::getOperatesOn() const
{
    return  const_cast< IfcProcess * > (this)->getOperatesOn();
}

bool IfcProcess::testOperatesOn() const
{
    return m_OperatesOn.isUnset() == false;
}

bool IfcProcess::init()
{
    if (IfcObject::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelSequence::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_IsPredecessorTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsPredecessorTo.insert(static_cast< IfcRelSequence * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSequence::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_IsSuccessorFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsSuccessorFrom.insert(static_cast< IfcRelSequence * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelAssignsToProcess::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_OperatesOn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_OperatesOn.insert(static_cast< IfcRelAssignsToProcess * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProcess::copy(const IfcProcess &obj, const CopyOp &copyop)
{
    IfcObject::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProcess, IfcObject)
