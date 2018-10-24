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


#include <ifc2x3/IfcRelConnectsPathElements.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsPathElements::IfcRelConnectsPathElements(Step::Id id, Step::SPFData *args) : 
    IfcRelConnectsElements(id, args)
{
    m_RelatingPriorities.setUnset(true);
    m_RelatedPriorities.setUnset(true);
    m_RelatedConnectionType = IfcConnectionTypeEnum_UNSET;
    m_RelatingConnectionType = IfcConnectionTypeEnum_UNSET;
}

IfcRelConnectsPathElements::~IfcRelConnectsPathElements()
{}

bool IfcRelConnectsPathElements::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsPathElements(this);
}


List_Integer_0_n &IfcRelConnectsPathElements::getRelatingPriorities()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingPriorities;
    }
    else 
    {
        m_RelatingPriorities.setUnset(true);
        return m_RelatingPriorities;
    }    
}

const List_Integer_0_n &IfcRelConnectsPathElements::getRelatingPriorities() const
{
    return const_cast<IfcRelConnectsPathElements *>(this)->getRelatingPriorities();
}

void IfcRelConnectsPathElements::setRelatingPriorities(const List_Integer_0_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingPriorities = value;
}

void IfcRelConnectsPathElements::unsetRelatingPriorities()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingPriorities.clear();
    m_RelatingPriorities.setUnset(true);
}

bool IfcRelConnectsPathElements::testRelatingPriorities() const
{
    return m_RelatingPriorities.isUnset() == false;
}


List_Integer_0_n &IfcRelConnectsPathElements::getRelatedPriorities()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatedPriorities;
    }
    else 
    {
        m_RelatedPriorities.setUnset(true);
        return m_RelatedPriorities;
    }    
}

const List_Integer_0_n &IfcRelConnectsPathElements::getRelatedPriorities() const
{
    return const_cast<IfcRelConnectsPathElements *>(this)->getRelatedPriorities();
}

void IfcRelConnectsPathElements::setRelatedPriorities(const List_Integer_0_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedPriorities = value;
}

void IfcRelConnectsPathElements::unsetRelatedPriorities()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedPriorities.clear();
    m_RelatedPriorities.setUnset(true);
}

bool IfcRelConnectsPathElements::testRelatedPriorities() const
{
    return m_RelatedPriorities.isUnset() == false;
}


IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatedConnectionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatedConnectionType;
    }
    else 
    {
        return IfcConnectionTypeEnum_UNSET;
    }    
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatedConnectionType() const
{
    return const_cast<IfcRelConnectsPathElements *>(this)->getRelatedConnectionType();
}

void IfcRelConnectsPathElements::setRelatedConnectionType(IfcConnectionTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedConnectionType = value;
}

void IfcRelConnectsPathElements::unsetRelatedConnectionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedConnectionType = IfcConnectionTypeEnum_UNSET;
}

bool IfcRelConnectsPathElements::testRelatedConnectionType() const
{
    return Step::isUnset(getRelatedConnectionType()) == false;
}


IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatingConnectionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingConnectionType;
    }
    else 
    {
        return IfcConnectionTypeEnum_UNSET;
    }    
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatingConnectionType() const
{
    return const_cast<IfcRelConnectsPathElements *>(this)->getRelatingConnectionType();
}

void IfcRelConnectsPathElements::setRelatingConnectionType(IfcConnectionTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingConnectionType = value;
}

void IfcRelConnectsPathElements::unsetRelatingConnectionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingConnectionType = IfcConnectionTypeEnum_UNSET;
}

bool IfcRelConnectsPathElements::testRelatingConnectionType() const
{
    return Step::isUnset(getRelatingConnectionType()) == false;
}

bool IfcRelConnectsPathElements::init()
{
    if (IfcRelConnectsElements::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingPriorities.setUnset(true);
    }
    else
    {
        m_RelatingPriorities.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatingPriorities.push_back(Step::spfToInteger(str1)
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedPriorities.setUnset(true);
    }
    else
    {
        m_RelatedPriorities.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedPriorities.push_back(Step::spfToInteger(str1)
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedConnectionType = IfcConnectionTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ATPATH.")
        {
            m_RelatedConnectionType = IfcConnectionTypeEnum_ATPATH;
        }
        else if (arg == ".ATSTART.")
        {
            m_RelatedConnectionType = IfcConnectionTypeEnum_ATSTART;
        }
        else if (arg == ".ATEND.")
        {
            m_RelatedConnectionType = IfcConnectionTypeEnum_ATEND;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_RelatedConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingConnectionType = IfcConnectionTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ATPATH.")
        {
            m_RelatingConnectionType = IfcConnectionTypeEnum_ATPATH;
        }
        else if (arg == ".ATSTART.")
        {
            m_RelatingConnectionType = IfcConnectionTypeEnum_ATSTART;
        }
        else if (arg == ".ATEND.")
        {
            m_RelatingConnectionType = IfcConnectionTypeEnum_ATEND;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_RelatingConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelConnectsPathElements::copy(const IfcRelConnectsPathElements &obj, const CopyOp &copyop)
{
    IfcRelConnectsElements::copy(obj, copyop);
    List_Integer_0_n::const_iterator it_m_RelatingPriorities;
    for (it_m_RelatingPriorities = obj.m_RelatingPriorities.begin(); it_m_RelatingPriorities != obj.m_RelatingPriorities.end(); ++it_m_RelatingPriorities)
    {
        Step::Integer copyTarget = (*it_m_RelatingPriorities);
        m_RelatingPriorities.push_back(copyTarget);
    }
    
    List_Integer_0_n::const_iterator it_m_RelatedPriorities;
    for (it_m_RelatedPriorities = obj.m_RelatedPriorities.begin(); it_m_RelatedPriorities != obj.m_RelatedPriorities.end(); ++it_m_RelatedPriorities)
    {
        Step::Integer copyTarget = (*it_m_RelatedPriorities);
        m_RelatedPriorities.push_back(copyTarget);
    }
    
    setRelatedConnectionType(obj.m_RelatedConnectionType);
    setRelatingConnectionType(obj.m_RelatingConnectionType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsPathElements, IfcRelConnectsElements)
