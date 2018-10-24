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


#include <ifc2x3/IfcPointOnSurface.h>

#include <ifc2x3/IfcSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPointOnSurface::IfcPointOnSurface(Step::Id id, Step::SPFData *args) : 
    IfcPoint(id, args)
{
    m_BasisSurface = NULL;
    m_PointParameterU = Step::getUnset(m_PointParameterU);
    m_PointParameterV = Step::getUnset(m_PointParameterV);
}

IfcPointOnSurface::~IfcPointOnSurface()
{}

bool IfcPointOnSurface::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPointOnSurface(this);
}


IfcSurface *IfcPointOnSurface::getBasisSurface()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BasisSurface.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSurface *IfcPointOnSurface::getBasisSurface() const
{
    return const_cast<IfcPointOnSurface *>(this)->getBasisSurface();
}

void IfcPointOnSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisSurface = value;
}

void IfcPointOnSurface::unsetBasisSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisSurface = Step::getUnset(getBasisSurface());
}

bool IfcPointOnSurface::testBasisSurface() const
{
    return Step::isUnset(getBasisSurface()) == false;
}


IfcParameterValue IfcPointOnSurface::getPointParameterU()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PointParameterU;
    }
    else 
    {
        return Step::getUnset(m_PointParameterU);
    }    
}

IfcParameterValue IfcPointOnSurface::getPointParameterU() const
{
    return const_cast<IfcPointOnSurface *>(this)->getPointParameterU();
}

void IfcPointOnSurface::setPointParameterU(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointParameterU = value;
}

void IfcPointOnSurface::unsetPointParameterU()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointParameterU = Step::getUnset(getPointParameterU());
}

bool IfcPointOnSurface::testPointParameterU() const
{
    return Step::isUnset(getPointParameterU()) == false;
}


IfcParameterValue IfcPointOnSurface::getPointParameterV()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PointParameterV;
    }
    else 
    {
        return Step::getUnset(m_PointParameterV);
    }    
}

IfcParameterValue IfcPointOnSurface::getPointParameterV() const
{
    return const_cast<IfcPointOnSurface *>(this)->getPointParameterV();
}

void IfcPointOnSurface::setPointParameterV(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointParameterV = value;
}

void IfcPointOnSurface::unsetPointParameterV()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointParameterV = Step::getUnset(getPointParameterV());
}

bool IfcPointOnSurface::testPointParameterV() const
{
    return Step::isUnset(getPointParameterV()) == false;
}

bool IfcPointOnSurface::init()
{
    if (IfcPoint::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BasisSurface = NULL;
    }
    else
    {
        m_BasisSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PointParameterU = Step::getUnset(m_PointParameterU);
    }
    else
    {
        m_PointParameterU = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PointParameterV = Step::getUnset(m_PointParameterV);
    }
    else
    {
        m_PointParameterV = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcPointOnSurface::copy(const IfcPointOnSurface &obj, const CopyOp &copyop)
{
    IfcPoint::copy(obj, copyop);
    setBasisSurface((IfcSurface*)copyop(obj.m_BasisSurface.get()));
    setPointParameterU(obj.m_PointParameterU);
    setPointParameterV(obj.m_PointParameterV);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPointOnSurface, IfcPoint)
