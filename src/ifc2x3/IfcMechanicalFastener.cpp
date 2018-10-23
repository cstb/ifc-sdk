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


#include <ifc2x3/IfcMechanicalFastener.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMechanicalFastener::IfcMechanicalFastener(Step::Id id, Step::SPFData *args) : 
    IfcFastener(id, args)
{
    m_NominalDiameter = Step::getUnset(m_NominalDiameter);
    m_NominalLength = Step::getUnset(m_NominalLength);
}

IfcMechanicalFastener::~IfcMechanicalFastener()
{}

bool IfcMechanicalFastener::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMechanicalFastener(this);
}


IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NominalDiameter;
    }
    else 
    {
        return Step::getUnset(m_NominalDiameter);
    }    
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter() const
{
    return const_cast<IfcMechanicalFastener *>(this)->getNominalDiameter();
}

void IfcMechanicalFastener::setNominalDiameter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalDiameter = value;
}

void IfcMechanicalFastener::unsetNominalDiameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalDiameter = Step::getUnset(getNominalDiameter());
}

bool IfcMechanicalFastener::testNominalDiameter() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getNominalDiameter()) == false;
}


IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NominalLength;
    }
    else 
    {
        return Step::getUnset(m_NominalLength);
    }    
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength() const
{
    return const_cast<IfcMechanicalFastener *>(this)->getNominalLength();
}

void IfcMechanicalFastener::setNominalLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalLength = value;
}

void IfcMechanicalFastener::unsetNominalLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalLength = Step::getUnset(getNominalLength());
}

bool IfcMechanicalFastener::testNominalLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getNominalLength()) == false;
}

bool IfcMechanicalFastener::init()
{
    if (IfcFastener::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NominalDiameter = Step::getUnset(m_NominalDiameter);
    }
    else
    {
        m_NominalDiameter = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NominalLength = Step::getUnset(m_NominalLength);
    }
    else
    {
        m_NominalLength = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcMechanicalFastener::copy(const IfcMechanicalFastener &obj, const CopyOp &copyop)
{
    IfcFastener::copy(obj, copyop);
    setNominalDiameter(obj.m_NominalDiameter);
    setNominalLength(obj.m_NominalLength);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMechanicalFastener, IfcFastener)
