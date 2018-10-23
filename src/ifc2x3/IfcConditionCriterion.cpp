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


#include <ifc2x3/IfcConditionCriterion.h>

#include <ifc2x3/IfcConditionCriterionSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConditionCriterion::IfcConditionCriterion(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_Criterion = NULL;
    m_CriterionDateTime = NULL;
}

IfcConditionCriterion::~IfcConditionCriterion()
{}

bool IfcConditionCriterion::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConditionCriterion(this);
}


IfcConditionCriterionSelect *IfcConditionCriterion::getCriterion()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Criterion.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcConditionCriterionSelect *IfcConditionCriterion::getCriterion() const
{
    return const_cast<IfcConditionCriterion *>(this)->getCriterion();
}

void IfcConditionCriterion::setCriterion(const Step::RefPtr< IfcConditionCriterionSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Criterion = value;
}

void IfcConditionCriterion::unsetCriterion()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Criterion = Step::getUnset(getCriterion());
}

bool IfcConditionCriterion::testCriterion() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCriterion()) == false;
}


IfcDateTimeSelect *IfcConditionCriterion::getCriterionDateTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CriterionDateTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcConditionCriterion::getCriterionDateTime() const
{
    return const_cast<IfcConditionCriterion *>(this)->getCriterionDateTime();
}

void IfcConditionCriterion::setCriterionDateTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CriterionDateTime = value;
}

void IfcConditionCriterion::unsetCriterionDateTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CriterionDateTime = Step::getUnset(getCriterionDateTime());
}

bool IfcConditionCriterion::testCriterionDateTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCriterionDateTime()) == false;
}

bool IfcConditionCriterion::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Criterion = NULL;
    }
    else
    {
        m_Criterion = new IfcConditionCriterionSelect;
        if (arg[0] == '#') {
            m_Criterion->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCLABEL")
                {
                    IfcLabel tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_Criterion->setIfcLabel(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CriterionDateTime = NULL;
    }
    else
    {
        m_CriterionDateTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_CriterionDateTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    return true;
}

void IfcConditionCriterion::copy(const IfcConditionCriterion &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setCriterion((IfcConditionCriterionSelect*)copyop(obj.m_Criterion.get()));
    setCriterionDateTime((IfcDateTimeSelect*)copyop(obj.m_CriterionDateTime.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConditionCriterion, IfcControl)
