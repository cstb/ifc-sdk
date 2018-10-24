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


#include <ifc2x3/IfcElementAssembly.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElementAssembly::IfcElementAssembly(Step::Id id, Step::SPFData *args) : 
    IfcElement(id, args)
{
    m_AssemblyPlace = IfcAssemblyPlaceEnum_UNSET;
    m_PredefinedType = IfcElementAssemblyTypeEnum_UNSET;
}

IfcElementAssembly::~IfcElementAssembly()
{}

bool IfcElementAssembly::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElementAssembly(this);
}


IfcAssemblyPlaceEnum IfcElementAssembly::getAssemblyPlace()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AssemblyPlace;
    }
    else 
    {
        return IfcAssemblyPlaceEnum_UNSET;
    }    
}

IfcAssemblyPlaceEnum IfcElementAssembly::getAssemblyPlace() const
{
    return const_cast<IfcElementAssembly *>(this)->getAssemblyPlace();
}

void IfcElementAssembly::setAssemblyPlace(IfcAssemblyPlaceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssemblyPlace = value;
}

void IfcElementAssembly::unsetAssemblyPlace()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssemblyPlace = IfcAssemblyPlaceEnum_UNSET;
}

bool IfcElementAssembly::testAssemblyPlace() const
{
    return Step::isUnset(getAssemblyPlace()) == false;
}


IfcElementAssemblyTypeEnum IfcElementAssembly::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcElementAssemblyTypeEnum_UNSET;
    }    
}

IfcElementAssemblyTypeEnum IfcElementAssembly::getPredefinedType() const
{
    return const_cast<IfcElementAssembly *>(this)->getPredefinedType();
}

void IfcElementAssembly::setPredefinedType(IfcElementAssemblyTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcElementAssembly::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcElementAssemblyTypeEnum_UNSET;
}

bool IfcElementAssembly::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcElementAssembly::init()
{
    if (IfcElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AssemblyPlace = IfcAssemblyPlaceEnum_UNSET;
    }
    else
    {
        if (arg == ".SITE.")
        {
            m_AssemblyPlace = IfcAssemblyPlaceEnum_SITE;
        }
        else if (arg == ".FACTORY.")
        {
            m_AssemblyPlace = IfcAssemblyPlaceEnum_FACTORY;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_AssemblyPlace = IfcAssemblyPlaceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcElementAssemblyTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ACCESSORY_ASSEMBLY.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_ACCESSORY_ASSEMBLY;
        }
        else if (arg == ".ARCH.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_ARCH;
        }
        else if (arg == ".BEAM_GRID.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_BEAM_GRID;
        }
        else if (arg == ".BRACED_FRAME.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_BRACED_FRAME;
        }
        else if (arg == ".GIRDER.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_GIRDER;
        }
        else if (arg == ".REINFORCEMENT_UNIT.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_REINFORCEMENT_UNIT;
        }
        else if (arg == ".RIGID_FRAME.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_RIGID_FRAME;
        }
        else if (arg == ".SLAB_FIELD.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_SLAB_FIELD;
        }
        else if (arg == ".TRUSS.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_TRUSS;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcElementAssemblyTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElementAssembly::copy(const IfcElementAssembly &obj, const CopyOp &copyop)
{
    IfcElement::copy(obj, copyop);
    setAssemblyPlace(obj.m_AssemblyPlace);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElementAssembly, IfcElement)
