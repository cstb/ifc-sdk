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


#include <ifc2x3/IfcActor.h>

#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcRelAssignsToActor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcActor::IfcActor(Step::Id id, Step::SPFData *args) : 
    IfcObject(id, args)
{
    m_TheActor = NULL;
}

IfcActor::~IfcActor()
{}

bool IfcActor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcActor(this);
}


IfcActorSelect *IfcActor::getTheActor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TheActor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcActor::getTheActor() const
{
    return const_cast<IfcActor *>(this)->getTheActor();
}

void IfcActor::setTheActor(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TheActor = value;
}

void IfcActor::unsetTheActor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TheActor = Step::getUnset(getTheActor());
}

bool IfcActor::testTheActor() const
{
    return Step::isUnset(getTheActor()) == false;
}

Inverse_Set_IfcRelAssignsToActor_0_n &IfcActor::getIsActingUpon()
{
    if (Step::BaseObject::inited())
    {
        return m_IsActingUpon;
    }
 
    m_IsActingUpon.setUnset(true);
    return m_IsActingUpon;
}

const Inverse_Set_IfcRelAssignsToActor_0_n &IfcActor::getIsActingUpon() const
{
    return  const_cast< IfcActor * > (this)->getIsActingUpon();
}

bool IfcActor::testIsActingUpon() const
{
    return m_IsActingUpon.isUnset() == false;
}

bool IfcActor::init()
{
    if (IfcObject::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TheActor = NULL;
    }
    else
    {
        m_TheActor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_TheActor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelAssignsToActor::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_IsActingUpon.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsActingUpon.insert(static_cast< IfcRelAssignsToActor * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcActor::copy(const IfcActor &obj, const CopyOp &copyop)
{
    IfcObject::copy(obj, copyop);
    setTheActor((IfcActorSelect*)copyop(obj.m_TheActor.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcActor, IfcObject)
