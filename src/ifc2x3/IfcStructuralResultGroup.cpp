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


#include <ifc2x3/IfcStructuralResultGroup.h>

#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralResultGroup::IfcStructuralResultGroup(Step::Id id, Step::SPFData *args) : 
    IfcGroup(id, args)
{
    m_TheoryType = IfcAnalysisTheoryTypeEnum_UNSET;
    m_IsLinear = Step::getUnset(m_IsLinear);
    m_ResultForLoadGroup = NULL;
}

IfcStructuralResultGroup::~IfcStructuralResultGroup()
{}

bool IfcStructuralResultGroup::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralResultGroup(this);
}


IfcAnalysisTheoryTypeEnum IfcStructuralResultGroup::getTheoryType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TheoryType;
    }
    else 
    {
        return IfcAnalysisTheoryTypeEnum_UNSET;
    }    
}

IfcAnalysisTheoryTypeEnum IfcStructuralResultGroup::getTheoryType() const
{
    return const_cast<IfcStructuralResultGroup *>(this)->getTheoryType();
}

void IfcStructuralResultGroup::setTheoryType(IfcAnalysisTheoryTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TheoryType = value;
}

void IfcStructuralResultGroup::unsetTheoryType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TheoryType = IfcAnalysisTheoryTypeEnum_UNSET;
}

bool IfcStructuralResultGroup::testTheoryType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTheoryType()) == false;
}


Step::Boolean IfcStructuralResultGroup::getIsLinear()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsLinear;
    }
    else 
    {
        return Step::getUnset(m_IsLinear);
    }    
}

Step::Boolean IfcStructuralResultGroup::getIsLinear() const
{
    return const_cast<IfcStructuralResultGroup *>(this)->getIsLinear();
}

void IfcStructuralResultGroup::setIsLinear(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsLinear = value;
}

void IfcStructuralResultGroup::unsetIsLinear()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsLinear = Step::getUnset(getIsLinear());
}

bool IfcStructuralResultGroup::testIsLinear() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIsLinear()) == false;
}

IfcStructuralLoadGroup *IfcStructuralResultGroup::getResultForLoadGroup()
{
    if (Step::BaseObject::inited())
    {
        return m_ResultForLoadGroup.get();
    }
    else
    {
        return NULL;
    }
}

const IfcStructuralLoadGroup *IfcStructuralResultGroup::getResultForLoadGroup() const
{
    return const_cast< IfcStructuralResultGroup * > (this)->getResultForLoadGroup();
}

void IfcStructuralResultGroup::setResultForLoadGroup(const Step::RefPtr< IfcStructuralLoadGroup > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ResultForLoadGroup.valid())
    {
        m_ResultForLoadGroup->m_SourceOfResultGroup.erase(this);
    }
    if (value.valid() )
    {
       value->m_SourceOfResultGroup.insert(this);
    }
    m_ResultForLoadGroup = value;
}

void IfcStructuralResultGroup::unsetResultForLoadGroup()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResultForLoadGroup = Step::getUnset(getResultForLoadGroup());
}

bool IfcStructuralResultGroup::testResultForLoadGroup() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getResultForLoadGroup()) == false;
}

Inverse_Set_IfcStructuralAnalysisModel_0_1 &IfcStructuralResultGroup::getResultGroupFor()
{
    if (Step::BaseObject::inited())
    {
        return m_ResultGroupFor;
    }
 
    m_ResultGroupFor.setUnset(true);
    return m_ResultGroupFor;
}

const Inverse_Set_IfcStructuralAnalysisModel_0_1 &IfcStructuralResultGroup::getResultGroupFor() const
{
    return  const_cast< IfcStructuralResultGroup * > (this)->getResultGroupFor();
}

bool IfcStructuralResultGroup::testResultGroupFor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ResultGroupFor.isUnset() == false;
}

bool IfcStructuralResultGroup::init()
{
    if (IfcGroup::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TheoryType = IfcAnalysisTheoryTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FIRST_ORDER_THEORY.")
        {
            m_TheoryType = IfcAnalysisTheoryTypeEnum_FIRST_ORDER_THEORY;
        }
        else if (arg == ".SECOND_ORDER_THEORY.")
        {
            m_TheoryType = IfcAnalysisTheoryTypeEnum_SECOND_ORDER_THEORY;
        }
        else if (arg == ".THIRD_ORDER_THEORY.")
        {
            m_TheoryType = IfcAnalysisTheoryTypeEnum_THIRD_ORDER_THEORY;
        }
        else if (arg == ".FULL_NONLINEAR_THEORY.")
        {
            m_TheoryType = IfcAnalysisTheoryTypeEnum_FULL_NONLINEAR_THEORY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_TheoryType = IfcAnalysisTheoryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_TheoryType = IfcAnalysisTheoryTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsLinear = Step::getUnset(m_IsLinear);
    }
    else
    {
        m_IsLinear = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ResultForLoadGroup = NULL;
    }
    else
    {
        m_ResultForLoadGroup = static_cast< IfcStructuralLoadGroup * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 8);
    if (inverses)
    {
        unsigned int i;
        m_ResultGroupFor.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ResultGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralResultGroup::copy(const IfcStructuralResultGroup &obj, const CopyOp &copyop)
{
    IfcGroup::copy(obj, copyop);
    setTheoryType(obj.m_TheoryType);
    setIsLinear(obj.m_IsLinear);
    setResultForLoadGroup((IfcStructuralLoadGroup*)copyop(obj.m_ResultForLoadGroup.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralResultGroup, IfcGroup)
