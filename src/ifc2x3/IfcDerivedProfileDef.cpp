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


#include <ifc2x3/IfcDerivedProfileDef.h>

#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDerivedProfileDef::IfcDerivedProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcProfileDef(id, args)
{
    m_ParentProfile = NULL;
    m_Operator = NULL;
    m_Label = Step::getUnset(m_Label);
}

IfcDerivedProfileDef::~IfcDerivedProfileDef()
{}

bool IfcDerivedProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDerivedProfileDef(this);
}


IfcProfileDef *IfcDerivedProfileDef::getParentProfile()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ParentProfile.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcDerivedProfileDef::getParentProfile() const
{
    return const_cast<IfcDerivedProfileDef *>(this)->getParentProfile();
}

void IfcDerivedProfileDef::setParentProfile(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentProfile = value;
}

void IfcDerivedProfileDef::unsetParentProfile()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentProfile = Step::getUnset(getParentProfile());
}

bool IfcDerivedProfileDef::testParentProfile() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getParentProfile()) == false;
}


IfcCartesianTransformationOperator2D *IfcDerivedProfileDef::getOperator()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Operator.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianTransformationOperator2D *IfcDerivedProfileDef::getOperator() const
{
    return const_cast<IfcDerivedProfileDef *>(this)->getOperator();
}

void IfcDerivedProfileDef::setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Operator = value;
}

void IfcDerivedProfileDef::unsetOperator()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Operator = Step::getUnset(getOperator());
}

bool IfcDerivedProfileDef::testOperator() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOperator()) == false;
}


IfcLabel IfcDerivedProfileDef::getLabel()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Label;
    }
    else 
    {
        return Step::getUnset(m_Label);
    }    
}

const IfcLabel IfcDerivedProfileDef::getLabel() const
{
    return const_cast<IfcDerivedProfileDef *>(this)->getLabel();
}

void IfcDerivedProfileDef::setLabel(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Label = value;
}

void IfcDerivedProfileDef::unsetLabel()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Label = Step::getUnset(getLabel());
}

bool IfcDerivedProfileDef::testLabel() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLabel()) == false;
}

bool IfcDerivedProfileDef::init()
{
    if (IfcProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ParentProfile = NULL;
    }
    else
    {
        m_ParentProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Operator = NULL;
    }
    else
    {
        m_Operator = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Label = Step::getUnset(m_Label);
    }
    else
    {
        m_Label = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcDerivedProfileDef::copy(const IfcDerivedProfileDef &obj, const CopyOp &copyop)
{
    IfcProfileDef::copy(obj, copyop);
    setParentProfile((IfcProfileDef*)copyop(obj.m_ParentProfile.get()));
    setOperator((IfcCartesianTransformationOperator2D*)copyop(obj.m_Operator.get()));
    setLabel(obj.m_Label);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDerivedProfileDef, IfcProfileDef)
