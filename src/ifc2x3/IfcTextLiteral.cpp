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


#include <ifc2x3/IfcTextLiteral.h>

#include <ifc2x3/IfcAxis2Placement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextLiteral::IfcTextLiteral(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Literal = Step::getUnset(m_Literal);
    m_Placement = NULL;
    m_Path = IfcTextPath_UNSET;
}

IfcTextLiteral::~IfcTextLiteral()
{}

bool IfcTextLiteral::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextLiteral(this);
}


IfcPresentableText IfcTextLiteral::getLiteral()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Literal;
    }
    else 
    {
        return Step::getUnset(m_Literal);
    }    
}

const IfcPresentableText IfcTextLiteral::getLiteral() const
{
    return const_cast<IfcTextLiteral *>(this)->getLiteral();
}

void IfcTextLiteral::setLiteral(const IfcPresentableText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Literal = value;
}

void IfcTextLiteral::unsetLiteral()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Literal = Step::getUnset(getLiteral());
}

bool IfcTextLiteral::testLiteral() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLiteral()) == false;
}


IfcAxis2Placement *IfcTextLiteral::getPlacement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Placement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement *IfcTextLiteral::getPlacement() const
{
    return const_cast<IfcTextLiteral *>(this)->getPlacement();
}

void IfcTextLiteral::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Placement = value;
}

void IfcTextLiteral::unsetPlacement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Placement = Step::getUnset(getPlacement());
}

bool IfcTextLiteral::testPlacement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPlacement()) == false;
}


IfcTextPath IfcTextLiteral::getPath()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Path;
    }
    else 
    {
        return IfcTextPath_UNSET;
    }    
}

IfcTextPath IfcTextLiteral::getPath() const
{
    return const_cast<IfcTextLiteral *>(this)->getPath();
}

void IfcTextLiteral::setPath(IfcTextPath value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Path = value;
}

void IfcTextLiteral::unsetPath()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Path = IfcTextPath_UNSET;
}

bool IfcTextLiteral::testPath() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPath()) == false;
}

bool IfcTextLiteral::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Literal = Step::getUnset(m_Literal);
    }
    else
    {
        m_Literal = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Placement = NULL;
    }
    else
    {
        m_Placement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_Placement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_Path = IfcTextPath_UNSET;
    }
    else
    {
        if (arg == ".LEFT.")
        {
            m_Path = IfcTextPath_LEFT;
        }
        else if (arg == ".RIGHT.")
        {
            m_Path = IfcTextPath_RIGHT;
        }
        else if (arg == ".UP.")
        {
            m_Path = IfcTextPath_UP;
        }
        else if (arg == ".DOWN.")
        {
            m_Path = IfcTextPath_DOWN;
        }
    }
    return true;
}

void IfcTextLiteral::copy(const IfcTextLiteral &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setLiteral(obj.m_Literal);
    setPlacement((IfcAxis2Placement*)copyop(obj.m_Placement.get()));
    setPath(obj.m_Path);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextLiteral, IfcGeometricRepresentationItem)
