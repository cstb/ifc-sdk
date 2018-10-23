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


#include <ifc2x3/IfcRectangularTrimmedSurface.h>

#include <ifc2x3/IfcSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRectangularTrimmedSurface::IfcRectangularTrimmedSurface(Step::Id id, Step::SPFData *args) : 
    IfcBoundedSurface(id, args)
{
    m_BasisSurface = NULL;
    m_U1 = Step::getUnset(m_U1);
    m_V1 = Step::getUnset(m_V1);
    m_U2 = Step::getUnset(m_U2);
    m_V2 = Step::getUnset(m_V2);
    m_Usense = Step::getUnset(m_Usense);
    m_Vsense = Step::getUnset(m_Vsense);
}

IfcRectangularTrimmedSurface::~IfcRectangularTrimmedSurface()
{}

bool IfcRectangularTrimmedSurface::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRectangularTrimmedSurface(this);
}


IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface()
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

const IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getBasisSurface();
}

void IfcRectangularTrimmedSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisSurface = value;
}

void IfcRectangularTrimmedSurface::unsetBasisSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisSurface = Step::getUnset(getBasisSurface());
}

bool IfcRectangularTrimmedSurface::testBasisSurface() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBasisSurface()) == false;
}


IfcParameterValue IfcRectangularTrimmedSurface::getU1()
{
    if (Step::BaseObject::inited()) 
    {
        return m_U1;
    }
    else 
    {
        return Step::getUnset(m_U1);
    }    
}

IfcParameterValue IfcRectangularTrimmedSurface::getU1() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getU1();
}

void IfcRectangularTrimmedSurface::setU1(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_U1 = value;
}

void IfcRectangularTrimmedSurface::unsetU1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_U1 = Step::getUnset(getU1());
}

bool IfcRectangularTrimmedSurface::testU1() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getU1()) == false;
}


IfcParameterValue IfcRectangularTrimmedSurface::getV1()
{
    if (Step::BaseObject::inited()) 
    {
        return m_V1;
    }
    else 
    {
        return Step::getUnset(m_V1);
    }    
}

IfcParameterValue IfcRectangularTrimmedSurface::getV1() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getV1();
}

void IfcRectangularTrimmedSurface::setV1(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_V1 = value;
}

void IfcRectangularTrimmedSurface::unsetV1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_V1 = Step::getUnset(getV1());
}

bool IfcRectangularTrimmedSurface::testV1() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getV1()) == false;
}


IfcParameterValue IfcRectangularTrimmedSurface::getU2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_U2;
    }
    else 
    {
        return Step::getUnset(m_U2);
    }    
}

IfcParameterValue IfcRectangularTrimmedSurface::getU2() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getU2();
}

void IfcRectangularTrimmedSurface::setU2(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_U2 = value;
}

void IfcRectangularTrimmedSurface::unsetU2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_U2 = Step::getUnset(getU2());
}

bool IfcRectangularTrimmedSurface::testU2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getU2()) == false;
}


IfcParameterValue IfcRectangularTrimmedSurface::getV2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_V2;
    }
    else 
    {
        return Step::getUnset(m_V2);
    }    
}

IfcParameterValue IfcRectangularTrimmedSurface::getV2() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getV2();
}

void IfcRectangularTrimmedSurface::setV2(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_V2 = value;
}

void IfcRectangularTrimmedSurface::unsetV2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_V2 = Step::getUnset(getV2());
}

bool IfcRectangularTrimmedSurface::testV2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getV2()) == false;
}


Step::Boolean IfcRectangularTrimmedSurface::getUsense()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Usense;
    }
    else 
    {
        return Step::getUnset(m_Usense);
    }    
}

Step::Boolean IfcRectangularTrimmedSurface::getUsense() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getUsense();
}

void IfcRectangularTrimmedSurface::setUsense(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Usense = value;
}

void IfcRectangularTrimmedSurface::unsetUsense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Usense = Step::getUnset(getUsense());
}

bool IfcRectangularTrimmedSurface::testUsense() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUsense()) == false;
}


Step::Boolean IfcRectangularTrimmedSurface::getVsense()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Vsense;
    }
    else 
    {
        return Step::getUnset(m_Vsense);
    }    
}

Step::Boolean IfcRectangularTrimmedSurface::getVsense() const
{
    return const_cast<IfcRectangularTrimmedSurface *>(this)->getVsense();
}

void IfcRectangularTrimmedSurface::setVsense(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Vsense = value;
}

void IfcRectangularTrimmedSurface::unsetVsense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Vsense = Step::getUnset(getVsense());
}

bool IfcRectangularTrimmedSurface::testVsense() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVsense()) == false;
}

bool IfcRectangularTrimmedSurface::init()
{
    if (IfcBoundedSurface::init() == false)
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
        m_U1 = Step::getUnset(m_U1);
    }
    else
    {
        m_U1 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_V1 = Step::getUnset(m_V1);
    }
    else
    {
        m_V1 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_U2 = Step::getUnset(m_U2);
    }
    else
    {
        m_U2 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_V2 = Step::getUnset(m_V2);
    }
    else
    {
        m_V2 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Usense = Step::getUnset(m_Usense);
    }
    else
    {
        m_Usense = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Vsense = Step::getUnset(m_Vsense);
    }
    else
    {
        m_Vsense = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcRectangularTrimmedSurface::copy(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop)
{
    IfcBoundedSurface::copy(obj, copyop);
    setBasisSurface((IfcSurface*)copyop(obj.m_BasisSurface.get()));
    setU1(obj.m_U1);
    setV1(obj.m_V1);
    setU2(obj.m_U2);
    setV2(obj.m_V2);
    setUsense(obj.m_Usense);
    setVsense(obj.m_Vsense);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRectangularTrimmedSurface, IfcBoundedSurface)
