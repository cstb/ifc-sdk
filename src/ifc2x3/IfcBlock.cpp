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


#include <ifc2x3/IfcBlock.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBlock::IfcBlock(Step::Id id, Step::SPFData *args) : 
    IfcCsgPrimitive3D(id, args)
{
    m_XLength = Step::getUnset(m_XLength);
    m_YLength = Step::getUnset(m_YLength);
    m_ZLength = Step::getUnset(m_ZLength);
}

IfcBlock::~IfcBlock()
{}

bool IfcBlock::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBlock(this);
}


IfcPositiveLengthMeasure IfcBlock::getXLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_XLength;
    }
    else 
    {
        return Step::getUnset(m_XLength);
    }    
}

IfcPositiveLengthMeasure IfcBlock::getXLength() const
{
    return const_cast<IfcBlock *>(this)->getXLength();
}

void IfcBlock::setXLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XLength = value;
}

void IfcBlock::unsetXLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XLength = Step::getUnset(getXLength());
}

bool IfcBlock::testXLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getXLength()) == false;
}


IfcPositiveLengthMeasure IfcBlock::getYLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YLength;
    }
    else 
    {
        return Step::getUnset(m_YLength);
    }    
}

IfcPositiveLengthMeasure IfcBlock::getYLength() const
{
    return const_cast<IfcBlock *>(this)->getYLength();
}

void IfcBlock::setYLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YLength = value;
}

void IfcBlock::unsetYLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YLength = Step::getUnset(getYLength());
}

bool IfcBlock::testYLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getYLength()) == false;
}


IfcPositiveLengthMeasure IfcBlock::getZLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ZLength;
    }
    else 
    {
        return Step::getUnset(m_ZLength);
    }    
}

IfcPositiveLengthMeasure IfcBlock::getZLength() const
{
    return const_cast<IfcBlock *>(this)->getZLength();
}

void IfcBlock::setZLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ZLength = value;
}

void IfcBlock::unsetZLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ZLength = Step::getUnset(getZLength());
}

bool IfcBlock::testZLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getZLength()) == false;
}

bool IfcBlock::init()
{
    if (IfcCsgPrimitive3D::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_XLength = Step::getUnset(m_XLength);
    }
    else
    {
        m_XLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YLength = Step::getUnset(m_YLength);
    }
    else
    {
        m_YLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ZLength = Step::getUnset(m_ZLength);
    }
    else
    {
        m_ZLength = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBlock::copy(const IfcBlock &obj, const CopyOp &copyop)
{
    IfcCsgPrimitive3D::copy(obj, copyop);
    setXLength(obj.m_XLength);
    setYLength(obj.m_YLength);
    setZLength(obj.m_ZLength);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBlock, IfcCsgPrimitive3D)
