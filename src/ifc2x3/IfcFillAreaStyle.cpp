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


#include <ifc2x3/IfcFillAreaStyle.h>

#include <ifc2x3/IfcFillStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFillAreaStyle::IfcFillAreaStyle(Step::Id id, Step::SPFData *args) : 
    IfcPresentationStyle(id, args)
{
    m_FillStyles.setUnset(true);
}

IfcFillAreaStyle::~IfcFillAreaStyle()
{}

bool IfcFillAreaStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFillAreaStyle(this);
}


Set_IfcFillStyleSelect_1_n &IfcFillAreaStyle::getFillStyles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FillStyles;
    }
    else 
    {
        m_FillStyles.setUnset(true);
        return m_FillStyles;
    }    
}

const Set_IfcFillStyleSelect_1_n &IfcFillAreaStyle::getFillStyles() const
{
    return const_cast<IfcFillAreaStyle *>(this)->getFillStyles();
}

void IfcFillAreaStyle::setFillStyles(const Set_IfcFillStyleSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FillStyles = value;
}

void IfcFillAreaStyle::unsetFillStyles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FillStyles.clear();
    m_FillStyles.setUnset(true);
}

bool IfcFillAreaStyle::testFillStyles() const
{
    return m_FillStyles.isUnset() == false;
}

bool IfcFillAreaStyle::init()
{
    if (IfcPresentationStyle::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FillStyles.setUnset(true);
    }
    else
    {
        m_FillStyles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcFillStyleSelect > attr2 = new IfcFillStyleSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_FillStyles.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcFillAreaStyle::copy(const IfcFillAreaStyle &obj, const CopyOp &copyop)
{
    IfcPresentationStyle::copy(obj, copyop);
    Set_IfcFillStyleSelect_1_n::const_iterator it_m_FillStyles;
    for (it_m_FillStyles = obj.m_FillStyles.begin(); it_m_FillStyles != obj.m_FillStyles.end(); ++it_m_FillStyles)
    {
        Step::RefPtr< IfcFillStyleSelect > copyTarget = new IfcFillStyleSelect;
        copyTarget->copy(*((*it_m_FillStyles).get()), copyop);
        m_FillStyles.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFillAreaStyle, IfcPresentationStyle)
