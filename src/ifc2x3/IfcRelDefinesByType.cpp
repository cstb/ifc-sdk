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


#include <ifc2x3/IfcRelDefinesByType.h>

#include <ifc2x3/IfcTypeObject.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelDefinesByType::IfcRelDefinesByType(Step::Id id, Step::SPFData *args) : 
    IfcRelDefines(id, args)
{
    m_RelatingType = NULL;
}

IfcRelDefinesByType::~IfcRelDefinesByType()
{}

bool IfcRelDefinesByType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelDefinesByType(this);
}

IfcTypeObject *IfcRelDefinesByType::getRelatingType()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingType.get();
    }
    else
    {
        return NULL;
    }
}

const IfcTypeObject *IfcRelDefinesByType::getRelatingType() const
{
    return const_cast< IfcRelDefinesByType * > (this)->getRelatingType();
}

void IfcRelDefinesByType::setRelatingType(const Step::RefPtr< IfcTypeObject > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingType.valid())
    {
        m_RelatingType->m_ObjectTypeOf.erase(this);
    }
    if (value.valid() )
    {
       value->m_ObjectTypeOf.insert(this);
    }
    m_RelatingType = value;
}

void IfcRelDefinesByType::unsetRelatingType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingType = Step::getUnset(getRelatingType());
}

bool IfcRelDefinesByType::testRelatingType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingType()) == false;
}

bool IfcRelDefinesByType::init()
{
    if (IfcRelDefines::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingType = NULL;
    }
    else
    {
        m_RelatingType = static_cast< IfcTypeObject * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelDefinesByType::copy(const IfcRelDefinesByType &obj, const CopyOp &copyop)
{
    IfcRelDefines::copy(obj, copyop);
    setRelatingType((IfcTypeObject*)copyop(obj.m_RelatingType.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelDefinesByType, IfcRelDefines)
