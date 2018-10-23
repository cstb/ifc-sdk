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


#include <ifc2x3/IfcCurveStyleFont.h>

#include <ifc2x3/IfcCurveStyleFontPattern.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCurveStyleFont::IfcCurveStyleFont(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_PatternList.setUnset(true);
}

IfcCurveStyleFont::~IfcCurveStyleFont()
{}

bool IfcCurveStyleFont::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurveStyleFont(this);
}


IfcLabel IfcCurveStyleFont::getName()
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

const IfcLabel IfcCurveStyleFont::getName() const
{
    return const_cast<IfcCurveStyleFont *>(this)->getName();
}

void IfcCurveStyleFont::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcCurveStyleFont::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcCurveStyleFont::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


List_IfcCurveStyleFontPattern_1_n &IfcCurveStyleFont::getPatternList()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PatternList;
    }
    else 
    {
        m_PatternList.setUnset(true);
        return m_PatternList;
    }    
}

const List_IfcCurveStyleFontPattern_1_n &IfcCurveStyleFont::getPatternList() const
{
    return const_cast<IfcCurveStyleFont *>(this)->getPatternList();
}

void IfcCurveStyleFont::setPatternList(const List_IfcCurveStyleFontPattern_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PatternList = value;
}

void IfcCurveStyleFont::unsetPatternList()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PatternList.clear();
    m_PatternList.setUnset(true);
}

bool IfcCurveStyleFont::testPatternList() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_PatternList.isUnset() == false;
}

bool IfcCurveStyleFont::init()
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
        m_PatternList.setUnset(true);
    }
    else
    {
        m_PatternList.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_PatternList.push_back(static_cast< IfcCurveStyleFontPattern * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcCurveStyleFont::copy(const IfcCurveStyleFont &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    List_IfcCurveStyleFontPattern_1_n::const_iterator it_m_PatternList;
    for (it_m_PatternList = obj.m_PatternList.begin(); it_m_PatternList != obj.m_PatternList.end(); ++it_m_PatternList)
    {
        Step::RefPtr< IfcCurveStyleFontPattern > copyTarget = (IfcCurveStyleFontPattern *) (copyop((*it_m_PatternList).get()));
        m_PatternList.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCurveStyleFont, Step::BaseEntity)
