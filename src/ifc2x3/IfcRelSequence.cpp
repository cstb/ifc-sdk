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


#include <ifc2x3/IfcRelSequence.h>

#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/IfcProcess.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelSequence::IfcRelSequence(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_TimeLag = Step::getUnset(m_TimeLag);
    m_SequenceType = IfcSequenceEnum_UNSET;
    m_RelatedProcess = NULL;
    m_RelatingProcess = NULL;
}

IfcRelSequence::~IfcRelSequence()
{}

bool IfcRelSequence::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelSequence(this);
}


IfcTimeMeasure IfcRelSequence::getTimeLag()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeLag;
    }
    else 
    {
        return Step::getUnset(m_TimeLag);
    }    
}

IfcTimeMeasure IfcRelSequence::getTimeLag() const
{
    return const_cast<IfcRelSequence *>(this)->getTimeLag();
}

void IfcRelSequence::setTimeLag(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeLag = value;
}

void IfcRelSequence::unsetTimeLag()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeLag = Step::getUnset(getTimeLag());
}

bool IfcRelSequence::testTimeLag() const
{
    return Step::isUnset(getTimeLag()) == false;
}


IfcSequenceEnum IfcRelSequence::getSequenceType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SequenceType;
    }
    else 
    {
        return IfcSequenceEnum_UNSET;
    }    
}

IfcSequenceEnum IfcRelSequence::getSequenceType() const
{
    return const_cast<IfcRelSequence *>(this)->getSequenceType();
}

void IfcRelSequence::setSequenceType(IfcSequenceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SequenceType = value;
}

void IfcRelSequence::unsetSequenceType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SequenceType = IfcSequenceEnum_UNSET;
}

bool IfcRelSequence::testSequenceType() const
{
    return Step::isUnset(getSequenceType()) == false;
}

IfcProcess *IfcRelSequence::getRelatedProcess()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedProcess.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProcess *IfcRelSequence::getRelatedProcess() const
{
    return const_cast< IfcRelSequence * > (this)->getRelatedProcess();
}

void IfcRelSequence::setRelatedProcess(const Step::RefPtr< IfcProcess > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedProcess.valid())
    {
        m_RelatedProcess->m_IsSuccessorFrom.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsSuccessorFrom.insert(this);
    }
    m_RelatedProcess = value;
}

void IfcRelSequence::unsetRelatedProcess()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedProcess = Step::getUnset(getRelatedProcess());
}

bool IfcRelSequence::testRelatedProcess() const
{
    return Step::isUnset(getRelatedProcess()) == false;
}

IfcProcess *IfcRelSequence::getRelatingProcess()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingProcess.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProcess *IfcRelSequence::getRelatingProcess() const
{
    return const_cast< IfcRelSequence * > (this)->getRelatingProcess();
}

void IfcRelSequence::setRelatingProcess(const Step::RefPtr< IfcProcess > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingProcess.valid())
    {
        m_RelatingProcess->m_IsPredecessorTo.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsPredecessorTo.insert(this);
    }
    m_RelatingProcess = value;
}

void IfcRelSequence::unsetRelatingProcess()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingProcess = Step::getUnset(getRelatingProcess());
}

bool IfcRelSequence::testRelatingProcess() const
{
    return Step::isUnset(getRelatingProcess()) == false;
}

bool IfcRelSequence::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeLag = Step::getUnset(m_TimeLag);
    }
    else
    {
        m_TimeLag = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SequenceType = IfcSequenceEnum_UNSET;
    }
    else
    {
        if (arg == ".START_START.")
        {
            m_SequenceType = IfcSequenceEnum_START_START;
        }
        else if (arg == ".START_FINISH.")
        {
            m_SequenceType = IfcSequenceEnum_START_FINISH;
        }
        else if (arg == ".FINISH_START.")
        {
            m_SequenceType = IfcSequenceEnum_FINISH_START;
        }
        else if (arg == ".FINISH_FINISH.")
        {
            m_SequenceType = IfcSequenceEnum_FINISH_FINISH;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_SequenceType = IfcSequenceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedProcess = NULL;
    }
    else
    {
        m_RelatedProcess = static_cast< IfcProcess * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingProcess = NULL;
    }
    else
    {
        m_RelatingProcess = static_cast< IfcProcess * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelSequence::copy(const IfcRelSequence &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setTimeLag(obj.m_TimeLag);
    setSequenceType(obj.m_SequenceType);
    setRelatedProcess((IfcProcess*)copyop(obj.m_RelatedProcess.get()));
    setRelatingProcess((IfcProcess*)copyop(obj.m_RelatingProcess.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelSequence, IfcRelConnects)
