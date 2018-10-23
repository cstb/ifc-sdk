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


#include <ifc2x3/IfcProxy.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProxy::IfcProxy(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
    m_ProxyType = IfcObjectTypeEnum_UNSET;
    m_Tag = Step::getUnset(m_Tag);
}

IfcProxy::~IfcProxy()
{}

bool IfcProxy::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProxy(this);
}


IfcObjectTypeEnum IfcProxy::getProxyType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProxyType;
    }
    else 
    {
        return IfcObjectTypeEnum_UNSET;
    }    
}

IfcObjectTypeEnum IfcProxy::getProxyType() const
{
    return const_cast<IfcProxy *>(this)->getProxyType();
}

void IfcProxy::setProxyType(IfcObjectTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProxyType = value;
}

void IfcProxy::unsetProxyType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProxyType = IfcObjectTypeEnum_UNSET;
}

bool IfcProxy::testProxyType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProxyType()) == false;
}


IfcLabel IfcProxy::getTag()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Tag;
    }
    else 
    {
        return Step::getUnset(m_Tag);
    }    
}

const IfcLabel IfcProxy::getTag() const
{
    return const_cast<IfcProxy *>(this)->getTag();
}

void IfcProxy::setTag(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tag = value;
}

void IfcProxy::unsetTag()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tag = Step::getUnset(getTag());
}

bool IfcProxy::testTag() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTag()) == false;
}

bool IfcProxy::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProxyType = IfcObjectTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".PRODUCT.")
        {
            m_ProxyType = IfcObjectTypeEnum_PRODUCT;
        }
        else if (arg == ".PROCESS.")
        {
            m_ProxyType = IfcObjectTypeEnum_PROCESS;
        }
        else if (arg == ".CONTROL.")
        {
            m_ProxyType = IfcObjectTypeEnum_CONTROL;
        }
        else if (arg == ".RESOURCE.")
        {
            m_ProxyType = IfcObjectTypeEnum_RESOURCE;
        }
        else if (arg == ".ACTOR.")
        {
            m_ProxyType = IfcObjectTypeEnum_ACTOR;
        }
        else if (arg == ".GROUP.")
        {
            m_ProxyType = IfcObjectTypeEnum_GROUP;
        }
        else if (arg == ".PROJECT.")
        {
            m_ProxyType = IfcObjectTypeEnum_PROJECT;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ProxyType = IfcObjectTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Tag = Step::getUnset(m_Tag);
    }
    else
    {
        m_Tag = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcProxy::copy(const IfcProxy &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    setProxyType(obj.m_ProxyType);
    setTag(obj.m_Tag);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProxy, IfcProduct)
