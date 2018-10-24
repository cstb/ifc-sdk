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


#include <ifc2x3/IfcTypeObject.h>

#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcRelDefinesByType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcTypeObject_HasPropertySets_type::Inverted_IfcTypeObject_HasPropertySets_type()
{

}

void Inverted_IfcTypeObject_HasPropertySets_type::setOwner(IfcTypeObject *owner)
{
    mOwner = owner;
}

void Inverted_IfcTypeObject_HasPropertySets_type::insert(const Step::RefPtr< IfcPropertySetDefinition > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcPropertySetDefinition *inverse = const_cast< IfcPropertySetDefinition * > (value.get());
    Set_IfcPropertySetDefinition_1_n::insert(value);
    inverse->m_DefinesType.insert(mOwner);
}


Inverted_IfcTypeObject_HasPropertySets_type::size_type Inverted_IfcTypeObject_HasPropertySets_type::erase(const Step::RefPtr< IfcPropertySetDefinition > &value)
{
    IfcPropertySetDefinition *inverse = const_cast< IfcPropertySetDefinition * > (value.get());
    inverse->m_DefinesType.erase(mOwner);
    return Set_IfcPropertySetDefinition_1_n::erase(value);
}

void Inverted_IfcTypeObject_HasPropertySets_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcTypeObject::IfcTypeObject(Step::Id id, Step::SPFData *args) : 
    IfcObjectDefinition(id, args)
{
    m_ApplicableOccurrence = Step::getUnset(m_ApplicableOccurrence);
    m_HasPropertySets.setUnset(true);
    m_HasPropertySets.setOwner(this);
}

IfcTypeObject::~IfcTypeObject()
{}

bool IfcTypeObject::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTypeObject(this);
}


IfcLabel IfcTypeObject::getApplicableOccurrence()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicableOccurrence;
    }
    else 
    {
        return Step::getUnset(m_ApplicableOccurrence);
    }    
}

const IfcLabel IfcTypeObject::getApplicableOccurrence() const
{
    return const_cast<IfcTypeObject *>(this)->getApplicableOccurrence();
}

void IfcTypeObject::setApplicableOccurrence(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableOccurrence = value;
}

void IfcTypeObject::unsetApplicableOccurrence()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableOccurrence = Step::getUnset(getApplicableOccurrence());
}

bool IfcTypeObject::testApplicableOccurrence() const
{
    return Step::isUnset(getApplicableOccurrence()) == false;
}

Set_IfcPropertySetDefinition_1_n &IfcTypeObject::getHasPropertySets()
{
    if (Step::BaseObject::inited())
    {
        return m_HasPropertySets;
    }
    else
    {
        m_HasPropertySets.setUnset(true);
        return m_HasPropertySets;
    }
}

const Set_IfcPropertySetDefinition_1_n &IfcTypeObject::getHasPropertySets() const
{
    return const_cast< IfcTypeObject * > (this)->getHasPropertySets();
}

void IfcTypeObject::unsetHasPropertySets()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HasPropertySets.clear();
    m_HasPropertySets.setUnset(true);
}

bool IfcTypeObject::testHasPropertySets() const
{
    return m_HasPropertySets.isUnset() == false;
}

Inverse_Set_IfcRelDefinesByType_0_1 &IfcTypeObject::getObjectTypeOf()
{
    if (Step::BaseObject::inited())
    {
        return m_ObjectTypeOf;
    }
 
    m_ObjectTypeOf.setUnset(true);
    return m_ObjectTypeOf;
}

const Inverse_Set_IfcRelDefinesByType_0_1 &IfcTypeObject::getObjectTypeOf() const
{
    return  const_cast< IfcTypeObject * > (this)->getObjectTypeOf();
}

bool IfcTypeObject::testObjectTypeOf() const
{
    return m_ObjectTypeOf.isUnset() == false;
}

bool IfcTypeObject::init()
{
    if (IfcObjectDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicableOccurrence = Step::getUnset(m_ApplicableOccurrence);
    }
    else
    {
        m_ApplicableOccurrence = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HasPropertySets.setUnset(true);
    }
    else
    {
        m_HasPropertySets.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_HasPropertySets.insert(static_cast< IfcPropertySetDefinition * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelDefinesByType::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ObjectTypeOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ObjectTypeOf.insert(static_cast< IfcRelDefinesByType * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTypeObject::copy(const IfcTypeObject &obj, const CopyOp &copyop)
{
    IfcObjectDefinition::copy(obj, copyop);
    setApplicableOccurrence(obj.m_ApplicableOccurrence);
    Set_IfcPropertySetDefinition_1_n::const_iterator it_m_HasPropertySets;
    for (it_m_HasPropertySets = obj.m_HasPropertySets.begin(); it_m_HasPropertySets != obj.m_HasPropertySets.end(); ++it_m_HasPropertySets)
    {
        Step::RefPtr< IfcPropertySetDefinition > copyTarget = (IfcPropertySetDefinition *) (copyop((*it_m_HasPropertySets).get()));
        m_HasPropertySets.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTypeObject, IfcObjectDefinition)
