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


#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>

#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type()
{

}

void Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::setOwner(IfcRelConnectsWithRealizingElements *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::insert(const Step::RefPtr< IfcElement > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcElement *inverse = const_cast< IfcElement * > (value.get());
    Set_IfcElement_1_n::insert(value);
    inverse->m_IsConnectionRealization.insert(mOwner);
}


Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::size_type Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::erase(const Step::RefPtr< IfcElement > &value)
{
    IfcElement *inverse = const_cast< IfcElement * > (value.get());
    inverse->m_IsConnectionRealization.erase(mOwner);
    return Set_IfcElement_1_n::erase(value);
}

void Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelConnectsWithRealizingElements::IfcRelConnectsWithRealizingElements(Step::Id id, Step::SPFData *args) : 
    IfcRelConnectsElements(id, args)
{
    m_ConnectionType = Step::getUnset(m_ConnectionType);
    m_RealizingElements.setUnset(true);
    m_RealizingElements.setOwner(this);
}

IfcRelConnectsWithRealizingElements::~IfcRelConnectsWithRealizingElements()
{}

bool IfcRelConnectsWithRealizingElements::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsWithRealizingElements(this);
}


IfcLabel IfcRelConnectsWithRealizingElements::getConnectionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConnectionType;
    }
    else 
    {
        return Step::getUnset(m_ConnectionType);
    }    
}

const IfcLabel IfcRelConnectsWithRealizingElements::getConnectionType() const
{
    return const_cast<IfcRelConnectsWithRealizingElements *>(this)->getConnectionType();
}

void IfcRelConnectsWithRealizingElements::setConnectionType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionType = value;
}

void IfcRelConnectsWithRealizingElements::unsetConnectionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionType = Step::getUnset(getConnectionType());
}

bool IfcRelConnectsWithRealizingElements::testConnectionType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConnectionType()) == false;
}

Set_IfcElement_1_n &IfcRelConnectsWithRealizingElements::getRealizingElements()
{
    if (Step::BaseObject::inited())
    {
        return m_RealizingElements;
    }
    else
    {
        m_RealizingElements.setUnset(true);
        return m_RealizingElements;
    }
}

const Set_IfcElement_1_n &IfcRelConnectsWithRealizingElements::getRealizingElements() const
{
    return const_cast< IfcRelConnectsWithRealizingElements * > (this)->getRealizingElements();
}

void IfcRelConnectsWithRealizingElements::unsetRealizingElements()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RealizingElements.clear();
    m_RealizingElements.setUnset(true);
}

bool IfcRelConnectsWithRealizingElements::testRealizingElements() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RealizingElements.isUnset() == false;
}

bool IfcRelConnectsWithRealizingElements::init()
{
    if (IfcRelConnectsElements::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConnectionType = Step::getUnset(m_ConnectionType);
    }
    else
    {
        m_ConnectionType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RealizingElements.setUnset(true);
    }
    else
    {
        m_RealizingElements.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RealizingElements.insert(static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcRelConnectsWithRealizingElements::copy(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop)
{
    IfcRelConnectsElements::copy(obj, copyop);
    setConnectionType(obj.m_ConnectionType);
    Set_IfcElement_1_n::const_iterator it_m_RealizingElements;
    for (it_m_RealizingElements = obj.m_RealizingElements.begin(); it_m_RealizingElements != obj.m_RealizingElements.end(); ++it_m_RealizingElements)
    {
        Step::RefPtr< IfcElement > copyTarget = (IfcElement *) (copyop((*it_m_RealizingElements).get()));
        m_RealizingElements.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsWithRealizingElements, IfcRelConnectsElements)
