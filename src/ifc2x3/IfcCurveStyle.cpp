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


#include <ifc2x3/IfcCurveStyle.h>

#include <ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/IfcColour.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCurveStyle::IfcCurveStyle(Step::Id id, Step::SPFData *args) : 
    IfcPresentationStyle(id, args)
{
    m_CurveFont = NULL;
    m_CurveWidth = NULL;
    m_CurveColour = NULL;
}

IfcCurveStyle::~IfcCurveStyle()
{}

bool IfcCurveStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurveStyle(this);
}


IfcCurveFontOrScaledCurveFontSelect *IfcCurveStyle::getCurveFont()
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

const IfcCurveFontOrScaledCurveFontSelect *IfcCurveStyle::getCurveFont() const
{
    return const_cast<IfcCurveStyle *>(this)->getCurveFont();
}

void IfcCurveStyle::setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveFont = value;
}

void IfcCurveStyle::unsetCurveFont()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveFont = Step::getUnset(getCurveFont());
}

bool IfcCurveStyle::testCurveFont() const
{
    return Step::isUnset(getCurveFont()) == false;
}


IfcSizeSelect *IfcCurveStyle::getCurveWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveWidth.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcCurveStyle::getCurveWidth() const
{
    return const_cast<IfcCurveStyle *>(this)->getCurveWidth();
}

void IfcCurveStyle::setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveWidth = value;
}

void IfcCurveStyle::unsetCurveWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveWidth = Step::getUnset(getCurveWidth());
}

bool IfcCurveStyle::testCurveWidth() const
{
    return Step::isUnset(getCurveWidth()) == false;
}


IfcColour *IfcCurveStyle::getCurveColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColour *IfcCurveStyle::getCurveColour() const
{
    return const_cast<IfcCurveStyle *>(this)->getCurveColour();
}

void IfcCurveStyle::setCurveColour(const Step::RefPtr< IfcColour > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveColour = value;
}

void IfcCurveStyle::unsetCurveColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveColour = Step::getUnset(getCurveColour());
}

bool IfcCurveStyle::testCurveColour() const
{
    return Step::isUnset(getCurveColour()) == false;
}

bool IfcCurveStyle::init()
{
    if (IfcPresentationStyle::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CurveFont = NULL;
    }
    else
    {
        m_CurveFont = new IfcCurveFontOrScaledCurveFontSelect;
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
        m_CurveWidth = NULL;
    }
    else
    {
        m_CurveWidth = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_CurveWidth->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CurveWidth->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CurveWidth->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_CurveWidth->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CurveWidth->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CurveWidth->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CurveWidth->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CurveColour = NULL;
    }
    else
    {
        m_CurveColour = new IfcColour;
        if (arg[0] == '#') {
            m_CurveColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcCurveStyle::copy(const IfcCurveStyle &obj, const CopyOp &copyop)
{
    IfcPresentationStyle::copy(obj, copyop);
    setCurveFont((IfcCurveFontOrScaledCurveFontSelect*)copyop(obj.m_CurveFont.get()));
    setCurveWidth((IfcSizeSelect*)copyop(obj.m_CurveWidth.get()));
    setCurveColour((IfcColour*)copyop(obj.m_CurveColour.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCurveStyle, IfcPresentationStyle)
