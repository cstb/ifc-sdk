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


#include <ifc2x3/IfcSymbolStyle.h>

#include <ifc2x3/IfcSymbolStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSymbolStyle::IfcSymbolStyle(Step::Id id, Step::SPFData *args) : 
    IfcPresentationStyle(id, args)
{
    m_StyleOfSymbol = NULL;
}

IfcSymbolStyle::~IfcSymbolStyle()
{}

bool IfcSymbolStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSymbolStyle(this);
}


IfcSymbolStyleSelect *IfcSymbolStyle::getStyleOfSymbol()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StyleOfSymbol.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSymbolStyleSelect *IfcSymbolStyle::getStyleOfSymbol() const
{
    return const_cast<IfcSymbolStyle *>(this)->getStyleOfSymbol();
}

void IfcSymbolStyle::setStyleOfSymbol(const Step::RefPtr< IfcSymbolStyleSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StyleOfSymbol = value;
}

void IfcSymbolStyle::unsetStyleOfSymbol()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StyleOfSymbol = Step::getUnset(getStyleOfSymbol());
}

bool IfcSymbolStyle::testStyleOfSymbol() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStyleOfSymbol()) == false;
}

bool IfcSymbolStyle::init()
{
    if (IfcPresentationStyle::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StyleOfSymbol = NULL;
    }
    else
    {
        m_StyleOfSymbol = new IfcSymbolStyleSelect;
        if (arg[0] == '#') {
            m_StyleOfSymbol->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcSymbolStyle::copy(const IfcSymbolStyle &obj, const CopyOp &copyop)
{
    IfcPresentationStyle::copy(obj, copyop);
    setStyleOfSymbol((IfcSymbolStyleSelect*)copyop(obj.m_StyleOfSymbol.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSymbolStyle, IfcPresentationStyle)
