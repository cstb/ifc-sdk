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


#include <ifc2x3/IfcStructuralLoadTemperature.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadTemperature::IfcStructuralLoadTemperature(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadStatic(id, args)
{
    m_DeltaT_Constant = Step::getUnset(m_DeltaT_Constant);
    m_DeltaT_Y = Step::getUnset(m_DeltaT_Y);
    m_DeltaT_Z = Step::getUnset(m_DeltaT_Z);
}

IfcStructuralLoadTemperature::~IfcStructuralLoadTemperature()
{}

bool IfcStructuralLoadTemperature::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadTemperature(this);
}


IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Constant()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DeltaT_Constant;
    }
    else 
    {
        return Step::getUnset(m_DeltaT_Constant);
    }    
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Constant() const
{
    return const_cast<IfcStructuralLoadTemperature *>(this)->getDeltaT_Constant();
}

void IfcStructuralLoadTemperature::setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DeltaT_Constant = value;
}

void IfcStructuralLoadTemperature::unsetDeltaT_Constant()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DeltaT_Constant = Step::getUnset(getDeltaT_Constant());
}

bool IfcStructuralLoadTemperature::testDeltaT_Constant() const
{
    return Step::isUnset(getDeltaT_Constant()) == false;
}


IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Y()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DeltaT_Y;
    }
    else 
    {
        return Step::getUnset(m_DeltaT_Y);
    }    
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Y() const
{
    return const_cast<IfcStructuralLoadTemperature *>(this)->getDeltaT_Y();
}

void IfcStructuralLoadTemperature::setDeltaT_Y(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DeltaT_Y = value;
}

void IfcStructuralLoadTemperature::unsetDeltaT_Y()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DeltaT_Y = Step::getUnset(getDeltaT_Y());
}

bool IfcStructuralLoadTemperature::testDeltaT_Y() const
{
    return Step::isUnset(getDeltaT_Y()) == false;
}


IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Z()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DeltaT_Z;
    }
    else 
    {
        return Step::getUnset(m_DeltaT_Z);
    }    
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Z() const
{
    return const_cast<IfcStructuralLoadTemperature *>(this)->getDeltaT_Z();
}

void IfcStructuralLoadTemperature::setDeltaT_Z(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DeltaT_Z = value;
}

void IfcStructuralLoadTemperature::unsetDeltaT_Z()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DeltaT_Z = Step::getUnset(getDeltaT_Z());
}

bool IfcStructuralLoadTemperature::testDeltaT_Z() const
{
    return Step::isUnset(getDeltaT_Z()) == false;
}

bool IfcStructuralLoadTemperature::init()
{
    if (IfcStructuralLoadStatic::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DeltaT_Constant = Step::getUnset(m_DeltaT_Constant);
    }
    else
    {
        m_DeltaT_Constant = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DeltaT_Y = Step::getUnset(m_DeltaT_Y);
    }
    else
    {
        m_DeltaT_Y = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DeltaT_Z = Step::getUnset(m_DeltaT_Z);
    }
    else
    {
        m_DeltaT_Z = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadTemperature::copy(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop)
{
    IfcStructuralLoadStatic::copy(obj, copyop);
    setDeltaT_Constant(obj.m_DeltaT_Constant);
    setDeltaT_Y(obj.m_DeltaT_Y);
    setDeltaT_Z(obj.m_DeltaT_Z);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadTemperature, IfcStructuralLoadStatic)
