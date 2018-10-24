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


#include <ifc2x3/IfcPhysicalComplexQuantity.h>

#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/IfcPhysicalQuantity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::Inverted_IfcPhysicalComplexQuantity_HasQuantities_type()
{

}

void Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::setOwner(IfcPhysicalComplexQuantity *owner)
{
    mOwner = owner;
}

void Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::insert(const Step::RefPtr< IfcPhysicalQuantity > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcPhysicalQuantity *inverse = const_cast< IfcPhysicalQuantity * > (value.get());
    Set_IfcPhysicalQuantity_1_n::insert(value);
    inverse->m_PartOfComplex.insert(mOwner);
}


Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::size_type Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::erase(const Step::RefPtr< IfcPhysicalQuantity > &value)
{
    IfcPhysicalQuantity *inverse = const_cast< IfcPhysicalQuantity * > (value.get());
    inverse->m_PartOfComplex.erase(mOwner);
    return Set_IfcPhysicalQuantity_1_n::erase(value);
}

void Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalQuantity(id, args)
{
    m_Discrimination = Step::getUnset(m_Discrimination);
    m_Quality = Step::getUnset(m_Quality);
    m_Usage = Step::getUnset(m_Usage);
    m_HasQuantities.setUnset(true);
    m_HasQuantities.setOwner(this);
}

IfcPhysicalComplexQuantity::~IfcPhysicalComplexQuantity()
{}

bool IfcPhysicalComplexQuantity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPhysicalComplexQuantity(this);
}


IfcLabel IfcPhysicalComplexQuantity::getDiscrimination()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Discrimination;
    }
    else 
    {
        return Step::getUnset(m_Discrimination);
    }    
}

const IfcLabel IfcPhysicalComplexQuantity::getDiscrimination() const
{
    return const_cast<IfcPhysicalComplexQuantity *>(this)->getDiscrimination();
}

void IfcPhysicalComplexQuantity::setDiscrimination(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Discrimination = value;
}

void IfcPhysicalComplexQuantity::unsetDiscrimination()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Discrimination = Step::getUnset(getDiscrimination());
}

bool IfcPhysicalComplexQuantity::testDiscrimination() const
{
    return Step::isUnset(getDiscrimination()) == false;
}


IfcLabel IfcPhysicalComplexQuantity::getQuality()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Quality;
    }
    else 
    {
        return Step::getUnset(m_Quality);
    }    
}

const IfcLabel IfcPhysicalComplexQuantity::getQuality() const
{
    return const_cast<IfcPhysicalComplexQuantity *>(this)->getQuality();
}

void IfcPhysicalComplexQuantity::setQuality(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Quality = value;
}

void IfcPhysicalComplexQuantity::unsetQuality()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Quality = Step::getUnset(getQuality());
}

bool IfcPhysicalComplexQuantity::testQuality() const
{
    return Step::isUnset(getQuality()) == false;
}


IfcLabel IfcPhysicalComplexQuantity::getUsage()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Usage;
    }
    else 
    {
        return Step::getUnset(m_Usage);
    }    
}

const IfcLabel IfcPhysicalComplexQuantity::getUsage() const
{
    return const_cast<IfcPhysicalComplexQuantity *>(this)->getUsage();
}

void IfcPhysicalComplexQuantity::setUsage(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Usage = value;
}

void IfcPhysicalComplexQuantity::unsetUsage()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Usage = Step::getUnset(getUsage());
}

bool IfcPhysicalComplexQuantity::testUsage() const
{
    return Step::isUnset(getUsage()) == false;
}

Set_IfcPhysicalQuantity_1_n &IfcPhysicalComplexQuantity::getHasQuantities()
{
    if (Step::BaseObject::inited())
    {
        return m_HasQuantities;
    }
    else
    {
        m_HasQuantities.setUnset(true);
        return m_HasQuantities;
    }
}

const Set_IfcPhysicalQuantity_1_n &IfcPhysicalComplexQuantity::getHasQuantities() const
{
    return const_cast< IfcPhysicalComplexQuantity * > (this)->getHasQuantities();
}

void IfcPhysicalComplexQuantity::unsetHasQuantities()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HasQuantities.clear();
    m_HasQuantities.setUnset(true);
}

bool IfcPhysicalComplexQuantity::testHasQuantities() const
{
    return m_HasQuantities.isUnset() == false;
}

bool IfcPhysicalComplexQuantity::init()
{
    if (IfcPhysicalQuantity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Discrimination = Step::getUnset(m_Discrimination);
    }
    else
    {
        m_Discrimination = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Quality = Step::getUnset(m_Quality);
    }
    else
    {
        m_Quality = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Usage = Step::getUnset(m_Usage);
    }
    else
    {
        m_Usage = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HasQuantities.setUnset(true);
    }
    else
    {
        m_HasQuantities.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_HasQuantities.insert(static_cast< IfcPhysicalQuantity * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcPhysicalComplexQuantity::copy(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop)
{
    IfcPhysicalQuantity::copy(obj, copyop);
    setDiscrimination(obj.m_Discrimination);
    setQuality(obj.m_Quality);
    setUsage(obj.m_Usage);
    Set_IfcPhysicalQuantity_1_n::const_iterator it_m_HasQuantities;
    for (it_m_HasQuantities = obj.m_HasQuantities.begin(); it_m_HasQuantities != obj.m_HasQuantities.end(); ++it_m_HasQuantities)
    {
        Step::RefPtr< IfcPhysicalQuantity > copyTarget = (IfcPhysicalQuantity *) (copyop((*it_m_HasQuantities).get()));
        m_HasQuantities.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPhysicalComplexQuantity, IfcPhysicalQuantity)
