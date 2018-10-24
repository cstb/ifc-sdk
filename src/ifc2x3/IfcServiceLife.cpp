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


#include <ifc2x3/IfcServiceLife.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcServiceLife::IfcServiceLife(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_ServiceLifeType = IfcServiceLifeTypeEnum_UNSET;
    m_ServiceLifeDuration = Step::getUnset(m_ServiceLifeDuration);
}

IfcServiceLife::~IfcServiceLife()
{}

bool IfcServiceLife::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcServiceLife(this);
}


IfcServiceLifeTypeEnum IfcServiceLife::getServiceLifeType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ServiceLifeType;
    }
    else 
    {
        return IfcServiceLifeTypeEnum_UNSET;
    }    
}

IfcServiceLifeTypeEnum IfcServiceLife::getServiceLifeType() const
{
    return const_cast<IfcServiceLife *>(this)->getServiceLifeType();
}

void IfcServiceLife::setServiceLifeType(IfcServiceLifeTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ServiceLifeType = value;
}

void IfcServiceLife::unsetServiceLifeType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ServiceLifeType = IfcServiceLifeTypeEnum_UNSET;
}

bool IfcServiceLife::testServiceLifeType() const
{
    return Step::isUnset(getServiceLifeType()) == false;
}


IfcTimeMeasure IfcServiceLife::getServiceLifeDuration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ServiceLifeDuration;
    }
    else 
    {
        return Step::getUnset(m_ServiceLifeDuration);
    }    
}

IfcTimeMeasure IfcServiceLife::getServiceLifeDuration() const
{
    return const_cast<IfcServiceLife *>(this)->getServiceLifeDuration();
}

void IfcServiceLife::setServiceLifeDuration(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ServiceLifeDuration = value;
}

void IfcServiceLife::unsetServiceLifeDuration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ServiceLifeDuration = Step::getUnset(getServiceLifeDuration());
}

bool IfcServiceLife::testServiceLifeDuration() const
{
    return Step::isUnset(getServiceLifeDuration()) == false;
}

bool IfcServiceLife::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ServiceLifeType = IfcServiceLifeTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ACTUALSERVICELIFE.")
        {
            m_ServiceLifeType = IfcServiceLifeTypeEnum_ACTUALSERVICELIFE;
        }
        else if (arg == ".EXPECTEDSERVICELIFE.")
        {
            m_ServiceLifeType = IfcServiceLifeTypeEnum_EXPECTEDSERVICELIFE;
        }
        else if (arg == ".OPTIMISTICREFERENCESERVICELIFE.")
        {
            m_ServiceLifeType = IfcServiceLifeTypeEnum_OPTIMISTICREFERENCESERVICELIFE;
        }
        else if (arg == ".PESSIMISTICREFERENCESERVICELIFE.")
        {
            m_ServiceLifeType = IfcServiceLifeTypeEnum_PESSIMISTICREFERENCESERVICELIFE;
        }
        else if (arg == ".REFERENCESERVICELIFE.")
        {
            m_ServiceLifeType = IfcServiceLifeTypeEnum_REFERENCESERVICELIFE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ServiceLifeDuration = Step::getUnset(m_ServiceLifeDuration);
    }
    else
    {
        m_ServiceLifeDuration = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcServiceLife::copy(const IfcServiceLife &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setServiceLifeType(obj.m_ServiceLifeType);
    setServiceLifeDuration(obj.m_ServiceLifeDuration);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcServiceLife, IfcControl)
