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


#include <ifc2x3/IfcRelAssociatesConstraint.h>

#include <ifc2x3/IfcConstraint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssociatesConstraint::IfcRelAssociatesConstraint(Step::Id id, Step::SPFData *args) : 
    IfcRelAssociates(id, args)
{
    m_Intent = Step::getUnset(m_Intent);
    m_RelatingConstraint = NULL;
}

IfcRelAssociatesConstraint::~IfcRelAssociatesConstraint()
{}

bool IfcRelAssociatesConstraint::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssociatesConstraint(this);
}


IfcLabel IfcRelAssociatesConstraint::getIntent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Intent;
    }
    else 
    {
        return Step::getUnset(m_Intent);
    }    
}

const IfcLabel IfcRelAssociatesConstraint::getIntent() const
{
    return const_cast<IfcRelAssociatesConstraint *>(this)->getIntent();
}

void IfcRelAssociatesConstraint::setIntent(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Intent = value;
}

void IfcRelAssociatesConstraint::unsetIntent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Intent = Step::getUnset(getIntent());
}

bool IfcRelAssociatesConstraint::testIntent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIntent()) == false;
}


IfcConstraint *IfcRelAssociatesConstraint::getRelatingConstraint()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingConstraint.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcConstraint *IfcRelAssociatesConstraint::getRelatingConstraint() const
{
    return const_cast<IfcRelAssociatesConstraint *>(this)->getRelatingConstraint();
}

void IfcRelAssociatesConstraint::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingConstraint = value;
}

void IfcRelAssociatesConstraint::unsetRelatingConstraint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcRelAssociatesConstraint::testRelatingConstraint() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingConstraint()) == false;
}

bool IfcRelAssociatesConstraint::init()
{
    if (IfcRelAssociates::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Intent = Step::getUnset(m_Intent);
    }
    else
    {
        m_Intent = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingConstraint = NULL;
    }
    else
    {
        m_RelatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssociatesConstraint::copy(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop)
{
    IfcRelAssociates::copy(obj, copyop);
    setIntent(obj.m_Intent);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_RelatingConstraint.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssociatesConstraint, IfcRelAssociates)
