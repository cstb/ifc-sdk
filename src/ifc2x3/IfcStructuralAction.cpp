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


#include <ifc2x3/IfcStructuralAction.h>

#include <ifc2x3/IfcStructuralReaction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralAction::IfcStructuralAction(Step::Id id, Step::SPFData *args) : 
    IfcStructuralActivity(id, args)
{
    m_DestabilizingLoad = Step::getUnset(m_DestabilizingLoad);
    m_CausedBy = NULL;
}

IfcStructuralAction::~IfcStructuralAction()
{}

bool IfcStructuralAction::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralAction(this);
}


Step::Boolean IfcStructuralAction::getDestabilizingLoad()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DestabilizingLoad;
    }
    else 
    {
        return Step::getUnset(m_DestabilizingLoad);
    }    
}

Step::Boolean IfcStructuralAction::getDestabilizingLoad() const
{
    return const_cast<IfcStructuralAction *>(this)->getDestabilizingLoad();
}

void IfcStructuralAction::setDestabilizingLoad(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DestabilizingLoad = value;
}

void IfcStructuralAction::unsetDestabilizingLoad()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DestabilizingLoad = Step::getUnset(getDestabilizingLoad());
}

bool IfcStructuralAction::testDestabilizingLoad() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDestabilizingLoad()) == false;
}

IfcStructuralReaction *IfcStructuralAction::getCausedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_CausedBy.get();
    }
    else
    {
        return NULL;
    }
}

const IfcStructuralReaction *IfcStructuralAction::getCausedBy() const
{
    return const_cast< IfcStructuralAction * > (this)->getCausedBy();
}

void IfcStructuralAction::setCausedBy(const Step::RefPtr< IfcStructuralReaction > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_CausedBy.valid())
    {
        m_CausedBy->m_Causes.erase(this);
    }
    if (value.valid() )
    {
       value->m_Causes.insert(this);
    }
    m_CausedBy = value;
}

void IfcStructuralAction::unsetCausedBy()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CausedBy = Step::getUnset(getCausedBy());
}

bool IfcStructuralAction::testCausedBy() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCausedBy()) == false;
}

bool IfcStructuralAction::init()
{
    if (IfcStructuralActivity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DestabilizingLoad = Step::getUnset(m_DestabilizingLoad);
    }
    else
    {
        m_DestabilizingLoad = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CausedBy = NULL;
    }
    else
    {
        m_CausedBy = static_cast< IfcStructuralReaction * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcStructuralAction::copy(const IfcStructuralAction &obj, const CopyOp &copyop)
{
    IfcStructuralActivity::copy(obj, copyop);
    setDestabilizingLoad(obj.m_DestabilizingLoad);
    setCausedBy((IfcStructuralReaction*)copyop(obj.m_CausedBy.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralAction, IfcStructuralActivity)
