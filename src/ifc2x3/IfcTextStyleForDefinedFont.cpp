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


#include <ifc2x3/IfcTextStyleForDefinedFont.h>

#include <ifc2x3/IfcColour.h>
#include <ifc2x3/IfcColour.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextStyleForDefinedFont::IfcTextStyleForDefinedFont(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Colour = NULL;
    m_BackgroundColour = NULL;
}

IfcTextStyleForDefinedFont::~IfcTextStyleForDefinedFont()
{}

bool IfcTextStyleForDefinedFont::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextStyleForDefinedFont(this);
}


IfcColour *IfcTextStyleForDefinedFont::getColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Colour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColour *IfcTextStyleForDefinedFont::getColour() const
{
    return const_cast<IfcTextStyleForDefinedFont *>(this)->getColour();
}

void IfcTextStyleForDefinedFont::setColour(const Step::RefPtr< IfcColour > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Colour = value;
}

void IfcTextStyleForDefinedFont::unsetColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Colour = Step::getUnset(getColour());
}

bool IfcTextStyleForDefinedFont::testColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getColour()) == false;
}


IfcColour *IfcTextStyleForDefinedFont::getBackgroundColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BackgroundColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColour *IfcTextStyleForDefinedFont::getBackgroundColour() const
{
    return const_cast<IfcTextStyleForDefinedFont *>(this)->getBackgroundColour();
}

void IfcTextStyleForDefinedFont::setBackgroundColour(const Step::RefPtr< IfcColour > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BackgroundColour = value;
}

void IfcTextStyleForDefinedFont::unsetBackgroundColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BackgroundColour = Step::getUnset(getBackgroundColour());
}

bool IfcTextStyleForDefinedFont::testBackgroundColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBackgroundColour()) == false;
}

bool IfcTextStyleForDefinedFont::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Colour = NULL;
    }
    else
    {
        m_Colour = new IfcColour;
        if (arg[0] == '#') {
            m_Colour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_BackgroundColour = NULL;
    }
    else
    {
        m_BackgroundColour = new IfcColour;
        if (arg[0] == '#') {
            m_BackgroundColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcTextStyleForDefinedFont::copy(const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setColour((IfcColour*)copyop(obj.m_Colour.get()));
    setBackgroundColour((IfcColour*)copyop(obj.m_BackgroundColour.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextStyleForDefinedFont, Step::BaseEntity)
