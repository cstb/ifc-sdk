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


#include <ifc2x3/IfcRelAssignsToProcess.h>

#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcProcess.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssignsToProcess::IfcRelAssignsToProcess(Step::Id id, Step::SPFData *args) : 
    IfcRelAssigns(id, args)
{
    m_QuantityInProcess = NULL;
    m_RelatingProcess = NULL;
}

IfcRelAssignsToProcess::~IfcRelAssignsToProcess()
{}

bool IfcRelAssignsToProcess::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssignsToProcess(this);
}


IfcMeasureWithUnit *IfcRelAssignsToProcess::getQuantityInProcess()
{
    if (Step::BaseObject::inited()) 
    {
        return m_QuantityInProcess.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureWithUnit *IfcRelAssignsToProcess::getQuantityInProcess() const
{
    return const_cast<IfcRelAssignsToProcess *>(this)->getQuantityInProcess();
}

void IfcRelAssignsToProcess::setQuantityInProcess(const Step::RefPtr< IfcMeasureWithUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_QuantityInProcess = value;
}

void IfcRelAssignsToProcess::unsetQuantityInProcess()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_QuantityInProcess = Step::getUnset(getQuantityInProcess());
}

bool IfcRelAssignsToProcess::testQuantityInProcess() const
{
    return Step::isUnset(getQuantityInProcess()) == false;
}

IfcProcess *IfcRelAssignsToProcess::getRelatingProcess()
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

const IfcProcess *IfcRelAssignsToProcess::getRelatingProcess() const
{
    return const_cast< IfcRelAssignsToProcess * > (this)->getRelatingProcess();
}

void IfcRelAssignsToProcess::setRelatingProcess(const Step::RefPtr< IfcProcess > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingProcess.valid())
    {
        m_RelatingProcess->m_OperatesOn.erase(this);
    }
    if (value.valid() )
    {
       value->m_OperatesOn.insert(this);
    }
    m_RelatingProcess = value;
}

void IfcRelAssignsToProcess::unsetRelatingProcess()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingProcess = Step::getUnset(getRelatingProcess());
}

bool IfcRelAssignsToProcess::testRelatingProcess() const
{
    return Step::isUnset(getRelatingProcess()) == false;
}

bool IfcRelAssignsToProcess::init()
{
    if (IfcRelAssigns::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_QuantityInProcess = NULL;
    }
    else
    {
        m_QuantityInProcess = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
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

void IfcRelAssignsToProcess::copy(const IfcRelAssignsToProcess &obj, const CopyOp &copyop)
{
    IfcRelAssigns::copy(obj, copyop);
    setQuantityInProcess((IfcMeasureWithUnit*)copyop(obj.m_QuantityInProcess.get()));
    setRelatingProcess((IfcProcess*)copyop(obj.m_RelatingProcess.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssignsToProcess, IfcRelAssigns)
