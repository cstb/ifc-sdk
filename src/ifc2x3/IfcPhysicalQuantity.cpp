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


#include <ifc2x3/IfcPhysicalQuantity.h>

#include <ifc2x3/IfcPhysicalComplexQuantity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPhysicalQuantity::IfcPhysicalQuantity(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
}

IfcPhysicalQuantity::~IfcPhysicalQuantity()
{}

bool IfcPhysicalQuantity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPhysicalQuantity(this);
}


IfcLabel IfcPhysicalQuantity::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcPhysicalQuantity::getName() const
{
    return const_cast<IfcPhysicalQuantity *>(this)->getName();
}

void IfcPhysicalQuantity::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcPhysicalQuantity::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcPhysicalQuantity::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcPhysicalQuantity::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcPhysicalQuantity::getDescription() const
{
    return const_cast<IfcPhysicalQuantity *>(this)->getDescription();
}

void IfcPhysicalQuantity::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcPhysicalQuantity::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcPhysicalQuantity::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

Inverse_Set_IfcPhysicalComplexQuantity_0_1 &IfcPhysicalQuantity::getPartOfComplex()
{
    if (Step::BaseObject::inited())
    {
        return m_PartOfComplex;
    }
 
    m_PartOfComplex.setUnset(true);
    return m_PartOfComplex;
}

const Inverse_Set_IfcPhysicalComplexQuantity_0_1 &IfcPhysicalQuantity::getPartOfComplex() const
{
    return  const_cast< IfcPhysicalQuantity * > (this)->getPartOfComplex();
}

bool IfcPhysicalQuantity::testPartOfComplex() const
{
    return m_PartOfComplex.isUnset() == false;
}

bool IfcPhysicalQuantity::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcPhysicalComplexQuantity::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_PartOfComplex.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PartOfComplex.insert(static_cast< IfcPhysicalComplexQuantity * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPhysicalQuantity::copy(const IfcPhysicalQuantity &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPhysicalQuantity, Step::BaseEntity)
