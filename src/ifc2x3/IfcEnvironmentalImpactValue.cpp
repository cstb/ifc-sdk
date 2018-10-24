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


#include <ifc2x3/IfcEnvironmentalImpactValue.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEnvironmentalImpactValue::IfcEnvironmentalImpactValue(Step::Id id, Step::SPFData *args) : 
    IfcAppliedValue(id, args)
{
    m_ImpactType = Step::getUnset(m_ImpactType);
    m_Category = IfcEnvironmentalImpactCategoryEnum_UNSET;
    m_UserDefinedCategory = Step::getUnset(m_UserDefinedCategory);
}

IfcEnvironmentalImpactValue::~IfcEnvironmentalImpactValue()
{}

bool IfcEnvironmentalImpactValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEnvironmentalImpactValue(this);
}


IfcLabel IfcEnvironmentalImpactValue::getImpactType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ImpactType;
    }
    else 
    {
        return Step::getUnset(m_ImpactType);
    }    
}

const IfcLabel IfcEnvironmentalImpactValue::getImpactType() const
{
    return const_cast<IfcEnvironmentalImpactValue *>(this)->getImpactType();
}

void IfcEnvironmentalImpactValue::setImpactType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ImpactType = value;
}

void IfcEnvironmentalImpactValue::unsetImpactType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ImpactType = Step::getUnset(getImpactType());
}

bool IfcEnvironmentalImpactValue::testImpactType() const
{
    return Step::isUnset(getImpactType()) == false;
}


IfcEnvironmentalImpactCategoryEnum IfcEnvironmentalImpactValue::getCategory()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Category;
    }
    else 
    {
        return IfcEnvironmentalImpactCategoryEnum_UNSET;
    }    
}

IfcEnvironmentalImpactCategoryEnum IfcEnvironmentalImpactValue::getCategory() const
{
    return const_cast<IfcEnvironmentalImpactValue *>(this)->getCategory();
}

void IfcEnvironmentalImpactValue::setCategory(IfcEnvironmentalImpactCategoryEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Category = value;
}

void IfcEnvironmentalImpactValue::unsetCategory()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Category = IfcEnvironmentalImpactCategoryEnum_UNSET;
}

bool IfcEnvironmentalImpactValue::testCategory() const
{
    return Step::isUnset(getCategory()) == false;
}


IfcLabel IfcEnvironmentalImpactValue::getUserDefinedCategory()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedCategory;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedCategory);
    }    
}

const IfcLabel IfcEnvironmentalImpactValue::getUserDefinedCategory() const
{
    return const_cast<IfcEnvironmentalImpactValue *>(this)->getUserDefinedCategory();
}

void IfcEnvironmentalImpactValue::setUserDefinedCategory(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedCategory = value;
}

void IfcEnvironmentalImpactValue::unsetUserDefinedCategory()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedCategory = Step::getUnset(getUserDefinedCategory());
}

bool IfcEnvironmentalImpactValue::testUserDefinedCategory() const
{
    return Step::isUnset(getUserDefinedCategory()) == false;
}

bool IfcEnvironmentalImpactValue::init()
{
    if (IfcAppliedValue::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ImpactType = Step::getUnset(m_ImpactType);
    }
    else
    {
        m_ImpactType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Category = IfcEnvironmentalImpactCategoryEnum_UNSET;
    }
    else
    {
        if (arg == ".COMBINEDVALUE.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_COMBINEDVALUE;
        }
        else if (arg == ".DISPOSAL.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_DISPOSAL;
        }
        else if (arg == ".EXTRACTION.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_EXTRACTION;
        }
        else if (arg == ".INSTALLATION.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_INSTALLATION;
        }
        else if (arg == ".MANUFACTURE.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_MANUFACTURE;
        }
        else if (arg == ".TRANSPORTATION.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_TRANSPORTATION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_Category = IfcEnvironmentalImpactCategoryEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedCategory = Step::getUnset(m_UserDefinedCategory);
    }
    else
    {
        m_UserDefinedCategory = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcEnvironmentalImpactValue::copy(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop)
{
    IfcAppliedValue::copy(obj, copyop);
    setImpactType(obj.m_ImpactType);
    setCategory(obj.m_Category);
    setUserDefinedCategory(obj.m_UserDefinedCategory);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEnvironmentalImpactValue, IfcAppliedValue)
