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


#include <ifc2x3/IfcCurveStyleFontAndScaling.h>

#include <ifc2x3/IfcCurveStyleFontSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCurveStyleFontAndScaling::IfcCurveStyleFontAndScaling(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_CurveFont = NULL;
    m_CurveFontScaling = Step::getUnset(m_CurveFontScaling);
}

IfcCurveStyleFontAndScaling::~IfcCurveStyleFontAndScaling()
{}

bool IfcCurveStyleFontAndScaling::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurveStyleFontAndScaling(this);
}


IfcLabel IfcCurveStyleFontAndScaling::getName()
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

const IfcLabel IfcCurveStyleFontAndScaling::getName() const
{
    return const_cast<IfcCurveStyleFontAndScaling *>(this)->getName();
}

void IfcCurveStyleFontAndScaling::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcCurveStyleFontAndScaling::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcCurveStyleFontAndScaling::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcCurveStyleFontSelect *IfcCurveStyleFontAndScaling::getCurveFont()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveFont.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurveStyleFontSelect *IfcCurveStyleFontAndScaling::getCurveFont() const
{
    return const_cast<IfcCurveStyleFontAndScaling *>(this)->getCurveFont();
}

void IfcCurveStyleFontAndScaling::setCurveFont(const Step::RefPtr< IfcCurveStyleFontSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveFont = value;
}

void IfcCurveStyleFontAndScaling::unsetCurveFont()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveFont = Step::getUnset(getCurveFont());
}

bool IfcCurveStyleFontAndScaling::testCurveFont() const
{
    return Step::isUnset(getCurveFont()) == false;
}


IfcPositiveRatioMeasure IfcCurveStyleFontAndScaling::getCurveFontScaling()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveFontScaling;
    }
    else 
    {
        return Step::getUnset(m_CurveFontScaling);
    }    
}

IfcPositiveRatioMeasure IfcCurveStyleFontAndScaling::getCurveFontScaling() const
{
    return const_cast<IfcCurveStyleFontAndScaling *>(this)->getCurveFontScaling();
}

void IfcCurveStyleFontAndScaling::setCurveFontScaling(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveFontScaling = value;
}

void IfcCurveStyleFontAndScaling::unsetCurveFontScaling()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveFontScaling = Step::getUnset(getCurveFontScaling());
}

bool IfcCurveStyleFontAndScaling::testCurveFontScaling() const
{
    return Step::isUnset(getCurveFontScaling()) == false;
}

bool IfcCurveStyleFontAndScaling::init()
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
        m_CurveFont = NULL;
    }
    else
    {
        m_CurveFont = new IfcCurveStyleFontSelect;
        if (arg[0] == '#') {
            m_CurveFont->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_CurveFontScaling = Step::getUnset(m_CurveFontScaling);
    }
    else
    {
        m_CurveFontScaling = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCurveStyleFontAndScaling::copy(const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setCurveFont((IfcCurveStyleFontSelect*)copyop(obj.m_CurveFont.get()));
    setCurveFontScaling(obj.m_CurveFontScaling);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCurveStyleFontAndScaling, Step::BaseEntity)
