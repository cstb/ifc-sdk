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


#include <ifc2x3/IfcSurfaceStyleRefraction.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceStyleRefraction::IfcSurfaceStyleRefraction(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RefractionIndex = Step::getUnset(m_RefractionIndex);
    m_DispersionFactor = Step::getUnset(m_DispersionFactor);
}

IfcSurfaceStyleRefraction::~IfcSurfaceStyleRefraction()
{}

bool IfcSurfaceStyleRefraction::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceStyleRefraction(this);
}


IfcReal IfcSurfaceStyleRefraction::getRefractionIndex()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RefractionIndex;
    }
    else 
    {
        return Step::getUnset(m_RefractionIndex);
    }    
}

IfcReal IfcSurfaceStyleRefraction::getRefractionIndex() const
{
    return const_cast<IfcSurfaceStyleRefraction *>(this)->getRefractionIndex();
}

void IfcSurfaceStyleRefraction::setRefractionIndex(IfcReal value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefractionIndex = value;
}

void IfcSurfaceStyleRefraction::unsetRefractionIndex()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefractionIndex = Step::getUnset(getRefractionIndex());
}

bool IfcSurfaceStyleRefraction::testRefractionIndex() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRefractionIndex()) == false;
}


IfcReal IfcSurfaceStyleRefraction::getDispersionFactor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DispersionFactor;
    }
    else 
    {
        return Step::getUnset(m_DispersionFactor);
    }    
}

IfcReal IfcSurfaceStyleRefraction::getDispersionFactor() const
{
    return const_cast<IfcSurfaceStyleRefraction *>(this)->getDispersionFactor();
}

void IfcSurfaceStyleRefraction::setDispersionFactor(IfcReal value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DispersionFactor = value;
}

void IfcSurfaceStyleRefraction::unsetDispersionFactor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DispersionFactor = Step::getUnset(getDispersionFactor());
}

bool IfcSurfaceStyleRefraction::testDispersionFactor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDispersionFactor()) == false;
}

bool IfcSurfaceStyleRefraction::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RefractionIndex = Step::getUnset(m_RefractionIndex);
    }
    else
    {
        m_RefractionIndex = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DispersionFactor = Step::getUnset(m_DispersionFactor);
    }
    else
    {
        m_DispersionFactor = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcSurfaceStyleRefraction::copy(const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRefractionIndex(obj.m_RefractionIndex);
    setDispersionFactor(obj.m_DispersionFactor);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceStyleRefraction, Step::BaseEntity)
