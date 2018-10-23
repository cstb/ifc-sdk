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


#include <ifc2x3/IfcConstraint.h>

#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcPropertyConstraintRelationship.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcConstraintClassificationRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConstraint::IfcConstraint(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_ConstraintGrade = IfcConstraintEnum_UNSET;
    m_ConstraintSource = Step::getUnset(m_ConstraintSource);
    m_CreatingActor = NULL;
    m_CreationTime = NULL;
    m_UserDefinedGrade = Step::getUnset(m_UserDefinedGrade);
}

IfcConstraint::~IfcConstraint()
{}

bool IfcConstraint::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConstraint(this);
}


IfcLabel IfcConstraint::getName()
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

const IfcLabel IfcConstraint::getName() const
{
    return const_cast<IfcConstraint *>(this)->getName();
}

void IfcConstraint::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcConstraint::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcConstraint::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcConstraint::getDescription()
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

const IfcText IfcConstraint::getDescription() const
{
    return const_cast<IfcConstraint *>(this)->getDescription();
}

void IfcConstraint::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcConstraint::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcConstraint::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}


IfcConstraintEnum IfcConstraint::getConstraintGrade()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConstraintGrade;
    }
    else 
    {
        return IfcConstraintEnum_UNSET;
    }    
}

IfcConstraintEnum IfcConstraint::getConstraintGrade() const
{
    return const_cast<IfcConstraint *>(this)->getConstraintGrade();
}

void IfcConstraint::setConstraintGrade(IfcConstraintEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstraintGrade = value;
}

void IfcConstraint::unsetConstraintGrade()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstraintGrade = IfcConstraintEnum_UNSET;
}

bool IfcConstraint::testConstraintGrade() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConstraintGrade()) == false;
}


IfcLabel IfcConstraint::getConstraintSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConstraintSource;
    }
    else 
    {
        return Step::getUnset(m_ConstraintSource);
    }    
}

const IfcLabel IfcConstraint::getConstraintSource() const
{
    return const_cast<IfcConstraint *>(this)->getConstraintSource();
}

void IfcConstraint::setConstraintSource(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstraintSource = value;
}

void IfcConstraint::unsetConstraintSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstraintSource = Step::getUnset(getConstraintSource());
}

bool IfcConstraint::testConstraintSource() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConstraintSource()) == false;
}


IfcActorSelect *IfcConstraint::getCreatingActor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CreatingActor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcConstraint::getCreatingActor() const
{
    return const_cast<IfcConstraint *>(this)->getCreatingActor();
}

void IfcConstraint::setCreatingActor(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreatingActor = value;
}

void IfcConstraint::unsetCreatingActor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreatingActor = Step::getUnset(getCreatingActor());
}

bool IfcConstraint::testCreatingActor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCreatingActor()) == false;
}


IfcDateTimeSelect *IfcConstraint::getCreationTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CreationTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcConstraint::getCreationTime() const
{
    return const_cast<IfcConstraint *>(this)->getCreationTime();
}

void IfcConstraint::setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationTime = value;
}

void IfcConstraint::unsetCreationTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationTime = Step::getUnset(getCreationTime());
}

bool IfcConstraint::testCreationTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCreationTime()) == false;
}


IfcLabel IfcConstraint::getUserDefinedGrade()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedGrade;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedGrade);
    }    
}

const IfcLabel IfcConstraint::getUserDefinedGrade() const
{
    return const_cast<IfcConstraint *>(this)->getUserDefinedGrade();
}

void IfcConstraint::setUserDefinedGrade(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedGrade = value;
}

void IfcConstraint::unsetUserDefinedGrade()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedGrade = Step::getUnset(getUserDefinedGrade());
}

bool IfcConstraint::testUserDefinedGrade() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUserDefinedGrade()) == false;
}

Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getAggregates()
{
    if (Step::BaseObject::inited())
    {
        return m_Aggregates;
    }
 
    m_Aggregates.setUnset(true);
    return m_Aggregates;
}

const Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getAggregates() const
{
    return  const_cast< IfcConstraint * > (this)->getAggregates();
}

bool IfcConstraint::testAggregates() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Aggregates.isUnset() == false;
}

Inverse_Set_IfcPropertyConstraintRelationship_0_n &IfcConstraint::getPropertiesForConstraint()
{
    if (Step::BaseObject::inited())
    {
        return m_PropertiesForConstraint;
    }
 
    m_PropertiesForConstraint.setUnset(true);
    return m_PropertiesForConstraint;
}

const Inverse_Set_IfcPropertyConstraintRelationship_0_n &IfcConstraint::getPropertiesForConstraint() const
{
    return  const_cast< IfcConstraint * > (this)->getPropertiesForConstraint();
}

bool IfcConstraint::testPropertiesForConstraint() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_PropertiesForConstraint.isUnset() == false;
}

Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getIsAggregatedIn()
{
    if (Step::BaseObject::inited())
    {
        return m_IsAggregatedIn;
    }
 
    m_IsAggregatedIn.setUnset(true);
    return m_IsAggregatedIn;
}

const Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getIsAggregatedIn() const
{
    return  const_cast< IfcConstraint * > (this)->getIsAggregatedIn();
}

bool IfcConstraint::testIsAggregatedIn() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsAggregatedIn.isUnset() == false;
}

Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getRelatesConstraints()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatesConstraints;
    }
 
    m_RelatesConstraints.setUnset(true);
    return m_RelatesConstraints;
}

const Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getRelatesConstraints() const
{
    return  const_cast< IfcConstraint * > (this)->getRelatesConstraints();
}

bool IfcConstraint::testRelatesConstraints() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RelatesConstraints.isUnset() == false;
}

Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getIsRelatedWith()
{
    if (Step::BaseObject::inited())
    {
        return m_IsRelatedWith;
    }
 
    m_IsRelatedWith.setUnset(true);
    return m_IsRelatedWith;
}

const Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getIsRelatedWith() const
{
    return  const_cast< IfcConstraint * > (this)->getIsRelatedWith();
}

bool IfcConstraint::testIsRelatedWith() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsRelatedWith.isUnset() == false;
}

Inverse_Set_IfcConstraintClassificationRelationship_0_n &IfcConstraint::getClassifiedAs()
{
    if (Step::BaseObject::inited())
    {
        return m_ClassifiedAs;
    }
 
    m_ClassifiedAs.setUnset(true);
    return m_ClassifiedAs;
}

const Inverse_Set_IfcConstraintClassificationRelationship_0_n &IfcConstraint::getClassifiedAs() const
{
    return  const_cast< IfcConstraint * > (this)->getClassifiedAs();
}

bool IfcConstraint::testClassifiedAs() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ClassifiedAs.isUnset() == false;
}

bool IfcConstraint::init()
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConstraintGrade = IfcConstraintEnum_UNSET;
    }
    else
    {
        if (arg == ".HARD.")
        {
            m_ConstraintGrade = IfcConstraintEnum_HARD;
        }
        else if (arg == ".SOFT.")
        {
            m_ConstraintGrade = IfcConstraintEnum_SOFT;
        }
        else if (arg == ".ADVISORY.")
        {
            m_ConstraintGrade = IfcConstraintEnum_ADVISORY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ConstraintGrade = IfcConstraintEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ConstraintGrade = IfcConstraintEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConstraintSource = Step::getUnset(m_ConstraintSource);
    }
    else
    {
        m_ConstraintSource = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CreatingActor = NULL;
    }
    else
    {
        m_CreatingActor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_CreatingActor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CreationTime = NULL;
    }
    else
    {
        m_CreationTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_CreationTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedGrade = Step::getUnset(m_UserDefinedGrade);
    }
    else
    {
        m_UserDefinedGrade = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcConstraintAggregationRelationship::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_Aggregates.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Aggregates.insert(static_cast< IfcConstraintAggregationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPropertyConstraintRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_PropertiesForConstraint.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PropertiesForConstraint.insert(static_cast< IfcPropertyConstraintRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintAggregationRelationship::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_IsAggregatedIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsAggregatedIn.insert(static_cast< IfcConstraintAggregationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintRelationship::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_RelatesConstraints.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_RelatesConstraints.insert(static_cast< IfcConstraintRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintRelationship::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_IsRelatedWith.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsRelatedWith.insert(static_cast< IfcConstraintRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintClassificationRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_ClassifiedAs.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ClassifiedAs.insert(static_cast< IfcConstraintClassificationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcConstraint::copy(const IfcConstraint &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setConstraintGrade(obj.m_ConstraintGrade);
    setConstraintSource(obj.m_ConstraintSource);
    setCreatingActor((IfcActorSelect*)copyop(obj.m_CreatingActor.get()));
    setCreationTime((IfcDateTimeSelect*)copyop(obj.m_CreationTime.get()));
    setUserDefinedGrade(obj.m_UserDefinedGrade);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConstraint, Step::BaseEntity)
