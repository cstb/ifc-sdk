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


#include <ifc2x3/IfcComplexProperty.h>

#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcComplexProperty_HasProperties_type::Inverted_IfcComplexProperty_HasProperties_type()
{

}

void Inverted_IfcComplexProperty_HasProperties_type::setOwner(IfcComplexProperty *owner)
{
    mOwner = owner;
}

void Inverted_IfcComplexProperty_HasProperties_type::insert(const Step::RefPtr< IfcProperty > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    Set_IfcProperty_1_n::insert(value);
    inverse->m_PartOfComplex.insert(mOwner);
}


Inverted_IfcComplexProperty_HasProperties_type::size_type Inverted_IfcComplexProperty_HasProperties_type::erase(const Step::RefPtr< IfcProperty > &value)
{
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    inverse->m_PartOfComplex.erase(mOwner);
    return Set_IfcProperty_1_n::erase(value);
}

void Inverted_IfcComplexProperty_HasProperties_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcComplexProperty::IfcComplexProperty(Step::Id id, Step::SPFData *args) : 
    IfcProperty(id, args)
{
    m_UsageName = Step::getUnset(m_UsageName);
    m_HasProperties.setUnset(true);
    m_HasProperties.setOwner(this);
}

IfcComplexProperty::~IfcComplexProperty()
{}

bool IfcComplexProperty::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcComplexProperty(this);
}


IfcIdentifier IfcComplexProperty::getUsageName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UsageName;
    }
    else 
    {
        return Step::getUnset(m_UsageName);
    }    
}

const IfcIdentifier IfcComplexProperty::getUsageName() const
{
    return const_cast<IfcComplexProperty *>(this)->getUsageName();
}

void IfcComplexProperty::setUsageName(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UsageName = value;
}

void IfcComplexProperty::unsetUsageName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UsageName = Step::getUnset(getUsageName());
}

bool IfcComplexProperty::testUsageName() const
{
    return Step::isUnset(getUsageName()) == false;
}

Set_IfcProperty_1_n &IfcComplexProperty::getHasProperties()
{
    if (Step::BaseObject::inited())
    {
        return m_HasProperties;
    }
    else
    {
        m_HasProperties.setUnset(true);
        return m_HasProperties;
    }
}

const Set_IfcProperty_1_n &IfcComplexProperty::getHasProperties() const
{
    return const_cast< IfcComplexProperty * > (this)->getHasProperties();
}

void IfcComplexProperty::unsetHasProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HasProperties.clear();
    m_HasProperties.setUnset(true);
}

bool IfcComplexProperty::testHasProperties() const
{
    return m_HasProperties.isUnset() == false;
}

bool IfcComplexProperty::init()
{
    if (IfcProperty::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UsageName = Step::getUnset(m_UsageName);
    }
    else
    {
        m_UsageName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HasProperties.setUnset(true);
    }
    else
    {
        m_HasProperties.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_HasProperties.insert(static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcComplexProperty::copy(const IfcComplexProperty &obj, const CopyOp &copyop)
{
    IfcProperty::copy(obj, copyop);
    setUsageName(obj.m_UsageName);
    Set_IfcProperty_1_n::const_iterator it_m_HasProperties;
    for (it_m_HasProperties = obj.m_HasProperties.begin(); it_m_HasProperties != obj.m_HasProperties.end(); ++it_m_HasProperties)
    {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_HasProperties).get()));
        m_HasProperties.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcComplexProperty, IfcProperty)
