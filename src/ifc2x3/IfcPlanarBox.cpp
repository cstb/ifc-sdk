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


#include <ifc2x3/IfcPlanarBox.h>

#include <ifc2x3/IfcAxis2Placement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPlanarBox::IfcPlanarBox(Step::Id id, Step::SPFData *args) : 
    IfcPlanarExtent(id, args)
{
    m_Placement = NULL;
}

IfcPlanarBox::~IfcPlanarBox()
{}

bool IfcPlanarBox::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPlanarBox(this);
}


IfcAxis2Placement *IfcPlanarBox::getPlacement()
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

const IfcAxis2Placement *IfcPlanarBox::getPlacement() const
{
    return const_cast<IfcPlanarBox *>(this)->getPlacement();
}

void IfcPlanarBox::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Placement = value;
}

void IfcPlanarBox::unsetPlacement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Placement = Step::getUnset(getPlacement());
}

bool IfcPlanarBox::testPlacement() const
{
    return Step::isUnset(getPlacement()) == false;
}

bool IfcPlanarBox::init()
{
    if (IfcPlanarExtent::init() == false)
    {
        return false;
    }
    std::string arg;
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
    return true;
}

void IfcPlanarBox::copy(const IfcPlanarBox &obj, const CopyOp &copyop)
{
    IfcPlanarExtent::copy(obj, copyop);
    setPlacement((IfcAxis2Placement*)copyop(obj.m_Placement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPlanarBox, IfcPlanarExtent)
