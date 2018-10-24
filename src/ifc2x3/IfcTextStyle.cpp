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


#include <ifc2x3/IfcTextStyle.h>

#include <ifc2x3/IfcCharacterStyleSelect.h>
#include <ifc2x3/IfcTextStyleSelect.h>
#include <ifc2x3/IfcTextFontSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextStyle::IfcTextStyle(Step::Id id, Step::SPFData *args) : 
    IfcPresentationStyle(id, args)
{
    m_TextCharacterAppearance = NULL;
    m_TextStyle = NULL;
    m_TextFontStyle = NULL;
}

IfcTextStyle::~IfcTextStyle()
{}

bool IfcTextStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextStyle(this);
}


IfcCharacterStyleSelect *IfcTextStyle::getTextCharacterAppearance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextCharacterAppearance.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCharacterStyleSelect *IfcTextStyle::getTextCharacterAppearance() const
{
    return const_cast<IfcTextStyle *>(this)->getTextCharacterAppearance();
}

void IfcTextStyle::setTextCharacterAppearance(const Step::RefPtr< IfcCharacterStyleSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextCharacterAppearance = value;
}

void IfcTextStyle::unsetTextCharacterAppearance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextCharacterAppearance = Step::getUnset(getTextCharacterAppearance());
}

bool IfcTextStyle::testTextCharacterAppearance() const
{
    return Step::isUnset(getTextCharacterAppearance()) == false;
}


IfcTextStyleSelect *IfcTextStyle::getTextStyle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextStyle.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTextStyleSelect *IfcTextStyle::getTextStyle() const
{
    return const_cast<IfcTextStyle *>(this)->getTextStyle();
}

void IfcTextStyle::setTextStyle(const Step::RefPtr< IfcTextStyleSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextStyle = value;
}

void IfcTextStyle::unsetTextStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextStyle = Step::getUnset(getTextStyle());
}

bool IfcTextStyle::testTextStyle() const
{
    return Step::isUnset(getTextStyle()) == false;
}


IfcTextFontSelect *IfcTextStyle::getTextFontStyle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextFontStyle.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTextFontSelect *IfcTextStyle::getTextFontStyle() const
{
    return const_cast<IfcTextStyle *>(this)->getTextFontStyle();
}

void IfcTextStyle::setTextFontStyle(const Step::RefPtr< IfcTextFontSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextFontStyle = value;
}

void IfcTextStyle::unsetTextFontStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextFontStyle = Step::getUnset(getTextFontStyle());
}

bool IfcTextStyle::testTextFontStyle() const
{
    return Step::isUnset(getTextFontStyle()) == false;
}

bool IfcTextStyle::init()
{
    if (IfcPresentationStyle::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextCharacterAppearance = NULL;
    }
    else
    {
        m_TextCharacterAppearance = new IfcCharacterStyleSelect;
        if (arg[0] == '#') {
            m_TextCharacterAppearance->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_TextStyle = NULL;
    }
    else
    {
        m_TextStyle = new IfcTextStyleSelect;
        if (arg[0] == '#') {
            m_TextStyle->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_TextFontStyle = NULL;
    }
    else
    {
        m_TextFontStyle = new IfcTextFontSelect;
        if (arg[0] == '#') {
            m_TextFontStyle->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcTextStyle::copy(const IfcTextStyle &obj, const CopyOp &copyop)
{
    IfcPresentationStyle::copy(obj, copyop);
    setTextCharacterAppearance((IfcCharacterStyleSelect*)copyop(obj.m_TextCharacterAppearance.get()));
    setTextStyle((IfcTextStyleSelect*)copyop(obj.m_TextStyle.get()));
    setTextFontStyle((IfcTextFontSelect*)copyop(obj.m_TextFontStyle.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextStyle, IfcPresentationStyle)
