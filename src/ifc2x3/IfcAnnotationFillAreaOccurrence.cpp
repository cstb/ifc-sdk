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


#include <ifc2x3/IfcAnnotationFillAreaOccurrence.h>

#include <ifc2x3/IfcPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAnnotationFillAreaOccurrence::IfcAnnotationFillAreaOccurrence(Step::Id id, Step::SPFData *args) : 
    IfcAnnotationOccurrence(id, args)
{
    m_FillStyleTarget = NULL;
    m_GlobalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

IfcAnnotationFillAreaOccurrence::~IfcAnnotationFillAreaOccurrence()
{}

bool IfcAnnotationFillAreaOccurrence::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAnnotationFillAreaOccurrence(this);
}


IfcPoint *IfcAnnotationFillAreaOccurrence::getFillStyleTarget()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FillStyleTarget.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPoint *IfcAnnotationFillAreaOccurrence::getFillStyleTarget() const
{
    return const_cast<IfcAnnotationFillAreaOccurrence *>(this)->getFillStyleTarget();
}

void IfcAnnotationFillAreaOccurrence::setFillStyleTarget(const Step::RefPtr< IfcPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FillStyleTarget = value;
}

void IfcAnnotationFillAreaOccurrence::unsetFillStyleTarget()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FillStyleTarget = Step::getUnset(getFillStyleTarget());
}

bool IfcAnnotationFillAreaOccurrence::testFillStyleTarget() const
{
    return Step::isUnset(getFillStyleTarget()) == false;
}


IfcGlobalOrLocalEnum IfcAnnotationFillAreaOccurrence::getGlobalOrLocal()
{
    if (Step::BaseObject::inited()) 
    {
        return m_GlobalOrLocal;
    }
    else 
    {
        return IfcGlobalOrLocalEnum_UNSET;
    }    
}

IfcGlobalOrLocalEnum IfcAnnotationFillAreaOccurrence::getGlobalOrLocal() const
{
    return const_cast<IfcAnnotationFillAreaOccurrence *>(this)->getGlobalOrLocal();
}

void IfcAnnotationFillAreaOccurrence::setGlobalOrLocal(IfcGlobalOrLocalEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GlobalOrLocal = value;
}

void IfcAnnotationFillAreaOccurrence::unsetGlobalOrLocal()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GlobalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

bool IfcAnnotationFillAreaOccurrence::testGlobalOrLocal() const
{
    return Step::isUnset(getGlobalOrLocal()) == false;
}

bool IfcAnnotationFillAreaOccurrence::init()
{
    if (IfcAnnotationOccurrence::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FillStyleTarget = NULL;
    }
    else
    {
        m_FillStyleTarget = static_cast< IfcPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_GlobalOrLocal = IfcGlobalOrLocalEnum_UNSET;
    }
    else
    {
        if (arg == ".GLOBAL_COORDS.")
        {
            m_GlobalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
        }
        else if (arg == ".LOCAL_COORDS.")
        {
            m_GlobalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
        }
    }
    return true;
}

void IfcAnnotationFillAreaOccurrence::copy(const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop)
{
    IfcAnnotationOccurrence::copy(obj, copyop);
    setFillStyleTarget((IfcPoint*)copyop(obj.m_FillStyleTarget.get()));
    setGlobalOrLocal(obj.m_GlobalOrLocal);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAnnotationFillAreaOccurrence, IfcAnnotationOccurrence)
