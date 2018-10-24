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


#include <ifc2x3/IfcBooleanResult.h>

#include <ifc2x3/IfcBooleanOperand.h>
#include <ifc2x3/IfcBooleanOperand.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBooleanResult::IfcBooleanResult(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Operator = IfcBooleanOperator_UNSET;
    m_FirstOperand = NULL;
    m_SecondOperand = NULL;
}

IfcBooleanResult::~IfcBooleanResult()
{}

bool IfcBooleanResult::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBooleanResult(this);
}


IfcBooleanOperator IfcBooleanResult::getOperator()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Operator;
    }
    else 
    {
        return IfcBooleanOperator_UNSET;
    }    
}

IfcBooleanOperator IfcBooleanResult::getOperator() const
{
    return const_cast<IfcBooleanResult *>(this)->getOperator();
}

void IfcBooleanResult::setOperator(IfcBooleanOperator value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Operator = value;
}

void IfcBooleanResult::unsetOperator()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Operator = IfcBooleanOperator_UNSET;
}

bool IfcBooleanResult::testOperator() const
{
    return Step::isUnset(getOperator()) == false;
}


IfcBooleanOperand *IfcBooleanResult::getFirstOperand()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FirstOperand.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBooleanOperand *IfcBooleanResult::getFirstOperand() const
{
    return const_cast<IfcBooleanResult *>(this)->getFirstOperand();
}

void IfcBooleanResult::setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FirstOperand = value;
}

void IfcBooleanResult::unsetFirstOperand()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FirstOperand = Step::getUnset(getFirstOperand());
}

bool IfcBooleanResult::testFirstOperand() const
{
    return Step::isUnset(getFirstOperand()) == false;
}


IfcBooleanOperand *IfcBooleanResult::getSecondOperand()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SecondOperand.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBooleanOperand *IfcBooleanResult::getSecondOperand() const
{
    return const_cast<IfcBooleanResult *>(this)->getSecondOperand();
}

void IfcBooleanResult::setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondOperand = value;
}

void IfcBooleanResult::unsetSecondOperand()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondOperand = Step::getUnset(getSecondOperand());
}

bool IfcBooleanResult::testSecondOperand() const
{
    return Step::isUnset(getSecondOperand()) == false;
}

bool IfcBooleanResult::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Operator = IfcBooleanOperator_UNSET;
    }
    else
    {
        if (arg == ".UNION.")
        {
            m_Operator = IfcBooleanOperator_UNION;
        }
        else if (arg == ".INTERSECTION.")
        {
            m_Operator = IfcBooleanOperator_INTERSECTION;
        }
        else if (arg == ".DIFFERENCE.")
        {
            m_Operator = IfcBooleanOperator_DIFFERENCE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FirstOperand = NULL;
    }
    else
    {
        m_FirstOperand = new IfcBooleanOperand;
        if (arg[0] == '#') {
            m_FirstOperand->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_SecondOperand = NULL;
    }
    else
    {
        m_SecondOperand = new IfcBooleanOperand;
        if (arg[0] == '#') {
            m_SecondOperand->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcBooleanResult::copy(const IfcBooleanResult &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOperator(obj.m_Operator);
    setFirstOperand((IfcBooleanOperand*)copyop(obj.m_FirstOperand.get()));
    setSecondOperand((IfcBooleanOperand*)copyop(obj.m_SecondOperand.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBooleanResult, IfcGeometricRepresentationItem)
