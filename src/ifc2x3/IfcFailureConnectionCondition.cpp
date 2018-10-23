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


#include <ifc2x3/IfcFailureConnectionCondition.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFailureConnectionCondition::IfcFailureConnectionCondition(Step::Id id, Step::SPFData *args) : 
    IfcStructuralConnectionCondition(id, args)
{
    m_TensionFailureX = Step::getUnset(m_TensionFailureX);
    m_TensionFailureY = Step::getUnset(m_TensionFailureY);
    m_TensionFailureZ = Step::getUnset(m_TensionFailureZ);
    m_CompressionFailureX = Step::getUnset(m_CompressionFailureX);
    m_CompressionFailureY = Step::getUnset(m_CompressionFailureY);
    m_CompressionFailureZ = Step::getUnset(m_CompressionFailureZ);
}

IfcFailureConnectionCondition::~IfcFailureConnectionCondition()
{}

bool IfcFailureConnectionCondition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFailureConnectionCondition(this);
}


IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TensionFailureX;
    }
    else 
    {
        return Step::getUnset(m_TensionFailureX);
    }    
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureX() const
{
    return const_cast<IfcFailureConnectionCondition *>(this)->getTensionFailureX();
}

void IfcFailureConnectionCondition::setTensionFailureX(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionFailureX = value;
}

void IfcFailureConnectionCondition::unsetTensionFailureX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionFailureX = Step::getUnset(getTensionFailureX());
}

bool IfcFailureConnectionCondition::testTensionFailureX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTensionFailureX()) == false;
}


IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TensionFailureY;
    }
    else 
    {
        return Step::getUnset(m_TensionFailureY);
    }    
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureY() const
{
    return const_cast<IfcFailureConnectionCondition *>(this)->getTensionFailureY();
}

void IfcFailureConnectionCondition::setTensionFailureY(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionFailureY = value;
}

void IfcFailureConnectionCondition::unsetTensionFailureY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionFailureY = Step::getUnset(getTensionFailureY());
}

bool IfcFailureConnectionCondition::testTensionFailureY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTensionFailureY()) == false;
}


IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TensionFailureZ;
    }
    else 
    {
        return Step::getUnset(m_TensionFailureZ);
    }    
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureZ() const
{
    return const_cast<IfcFailureConnectionCondition *>(this)->getTensionFailureZ();
}

void IfcFailureConnectionCondition::setTensionFailureZ(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionFailureZ = value;
}

void IfcFailureConnectionCondition::unsetTensionFailureZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TensionFailureZ = Step::getUnset(getTensionFailureZ());
}

bool IfcFailureConnectionCondition::testTensionFailureZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTensionFailureZ()) == false;
}


IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CompressionFailureX;
    }
    else 
    {
        return Step::getUnset(m_CompressionFailureX);
    }    
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureX() const
{
    return const_cast<IfcFailureConnectionCondition *>(this)->getCompressionFailureX();
}

void IfcFailureConnectionCondition::setCompressionFailureX(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressionFailureX = value;
}

void IfcFailureConnectionCondition::unsetCompressionFailureX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressionFailureX = Step::getUnset(getCompressionFailureX());
}

bool IfcFailureConnectionCondition::testCompressionFailureX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCompressionFailureX()) == false;
}


IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CompressionFailureY;
    }
    else 
    {
        return Step::getUnset(m_CompressionFailureY);
    }    
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureY() const
{
    return const_cast<IfcFailureConnectionCondition *>(this)->getCompressionFailureY();
}

void IfcFailureConnectionCondition::setCompressionFailureY(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressionFailureY = value;
}

void IfcFailureConnectionCondition::unsetCompressionFailureY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressionFailureY = Step::getUnset(getCompressionFailureY());
}

bool IfcFailureConnectionCondition::testCompressionFailureY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCompressionFailureY()) == false;
}


IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CompressionFailureZ;
    }
    else 
    {
        return Step::getUnset(m_CompressionFailureZ);
    }    
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureZ() const
{
    return const_cast<IfcFailureConnectionCondition *>(this)->getCompressionFailureZ();
}

void IfcFailureConnectionCondition::setCompressionFailureZ(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressionFailureZ = value;
}

void IfcFailureConnectionCondition::unsetCompressionFailureZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressionFailureZ = Step::getUnset(getCompressionFailureZ());
}

bool IfcFailureConnectionCondition::testCompressionFailureZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCompressionFailureZ()) == false;
}

bool IfcFailureConnectionCondition::init()
{
    if (IfcStructuralConnectionCondition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TensionFailureX = Step::getUnset(m_TensionFailureX);
    }
    else
    {
        m_TensionFailureX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TensionFailureY = Step::getUnset(m_TensionFailureY);
    }
    else
    {
        m_TensionFailureY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TensionFailureZ = Step::getUnset(m_TensionFailureZ);
    }
    else
    {
        m_TensionFailureZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CompressionFailureX = Step::getUnset(m_CompressionFailureX);
    }
    else
    {
        m_CompressionFailureX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CompressionFailureY = Step::getUnset(m_CompressionFailureY);
    }
    else
    {
        m_CompressionFailureY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CompressionFailureZ = Step::getUnset(m_CompressionFailureZ);
    }
    else
    {
        m_CompressionFailureZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcFailureConnectionCondition::copy(const IfcFailureConnectionCondition &obj, const CopyOp &copyop)
{
    IfcStructuralConnectionCondition::copy(obj, copyop);
    setTensionFailureX(obj.m_TensionFailureX);
    setTensionFailureY(obj.m_TensionFailureY);
    setTensionFailureZ(obj.m_TensionFailureZ);
    setCompressionFailureX(obj.m_CompressionFailureX);
    setCompressionFailureY(obj.m_CompressionFailureY);
    setCompressionFailureZ(obj.m_CompressionFailureZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFailureConnectionCondition, IfcStructuralConnectionCondition)
