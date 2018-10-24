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


#include <ifc2x3/IfcLaborResource.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLaborResource::IfcLaborResource(Step::Id id, Step::SPFData *args) : 
    IfcConstructionResource(id, args)
{
    m_SkillSet = Step::getUnset(m_SkillSet);
}

IfcLaborResource::~IfcLaborResource()
{}

bool IfcLaborResource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLaborResource(this);
}


IfcText IfcLaborResource::getSkillSet()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SkillSet;
    }
    else 
    {
        return Step::getUnset(m_SkillSet);
    }    
}

const IfcText IfcLaborResource::getSkillSet() const
{
    return const_cast<IfcLaborResource *>(this)->getSkillSet();
}

void IfcLaborResource::setSkillSet(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SkillSet = value;
}

void IfcLaborResource::unsetSkillSet()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SkillSet = Step::getUnset(getSkillSet());
}

bool IfcLaborResource::testSkillSet() const
{
    return Step::isUnset(getSkillSet()) == false;
}

bool IfcLaborResource::init()
{
    if (IfcConstructionResource::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SkillSet = Step::getUnset(m_SkillSet);
    }
    else
    {
        m_SkillSet = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcLaborResource::copy(const IfcLaborResource &obj, const CopyOp &copyop)
{
    IfcConstructionResource::copy(obj, copyop);
    setSkillSet(obj.m_SkillSet);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLaborResource, IfcConstructionResource)
