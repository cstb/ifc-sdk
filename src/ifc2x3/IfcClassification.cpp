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


#include <ifc2x3/IfcClassification.h>

#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcClassificationItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcClassification::IfcClassification(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Source = Step::getUnset(m_Source);
    m_Edition = Step::getUnset(m_Edition);
    m_EditionDate = NULL;
    m_Name = Step::getUnset(m_Name);
}

IfcClassification::~IfcClassification()
{}

bool IfcClassification::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcClassification(this);
}


IfcLabel IfcClassification::getSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Source;
    }
    else 
    {
        return Step::getUnset(m_Source);
    }    
}

const IfcLabel IfcClassification::getSource() const
{
    return const_cast<IfcClassification *>(this)->getSource();
}

void IfcClassification::setSource(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Source = value;
}

void IfcClassification::unsetSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Source = Step::getUnset(getSource());
}

bool IfcClassification::testSource() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSource()) == false;
}


IfcLabel IfcClassification::getEdition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Edition;
    }
    else 
    {
        return Step::getUnset(m_Edition);
    }    
}

const IfcLabel IfcClassification::getEdition() const
{
    return const_cast<IfcClassification *>(this)->getEdition();
}

void IfcClassification::setEdition(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Edition = value;
}

void IfcClassification::unsetEdition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Edition = Step::getUnset(getEdition());
}

bool IfcClassification::testEdition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEdition()) == false;
}


IfcCalendarDate *IfcClassification::getEditionDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EditionDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcClassification::getEditionDate() const
{
    return const_cast<IfcClassification *>(this)->getEditionDate();
}

void IfcClassification::setEditionDate(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EditionDate = value;
}

void IfcClassification::unsetEditionDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EditionDate = Step::getUnset(getEditionDate());
}

bool IfcClassification::testEditionDate() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEditionDate()) == false;
}


IfcLabel IfcClassification::getName()
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

const IfcLabel IfcClassification::getName() const
{
    return const_cast<IfcClassification *>(this)->getName();
}

void IfcClassification::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcClassification::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcClassification::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}

Inverse_Set_IfcClassificationItem_0_n &IfcClassification::getContains()
{
    if (Step::BaseObject::inited())
    {
        return m_Contains;
    }
 
    m_Contains.setUnset(true);
    return m_Contains;
}

const Inverse_Set_IfcClassificationItem_0_n &IfcClassification::getContains() const
{
    return  const_cast< IfcClassification * > (this)->getContains();
}

bool IfcClassification::testContains() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Contains.isUnset() == false;
}

bool IfcClassification::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Source = Step::getUnset(m_Source);
    }
    else
    {
        m_Source = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Edition = Step::getUnset(m_Edition);
    }
    else
    {
        m_Edition = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EditionDate = NULL;
    }
    else
    {
        m_EditionDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
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
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcClassificationItem::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_Contains.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Contains.insert(static_cast< IfcClassificationItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcClassification::copy(const IfcClassification &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setSource(obj.m_Source);
    setEdition(obj.m_Edition);
    setEditionDate((IfcCalendarDate*)copyop(obj.m_EditionDate.get()));
    setName(obj.m_Name);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcClassification, Step::BaseEntity)
