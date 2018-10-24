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


#include <ifc2x3/IfcLocalPlacement.h>

#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcObjectPlacement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLocalPlacement::IfcLocalPlacement(Step::Id id, Step::SPFData *args) : 
    IfcObjectPlacement(id, args)
{
    m_RelativePlacement = NULL;
    m_PlacementRelTo = NULL;
}

IfcLocalPlacement::~IfcLocalPlacement()
{}

bool IfcLocalPlacement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLocalPlacement(this);
}


IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelativePlacement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() const
{
    return const_cast<IfcLocalPlacement *>(this)->getRelativePlacement();
}

void IfcLocalPlacement::setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelativePlacement = value;
}

void IfcLocalPlacement::unsetRelativePlacement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelativePlacement = Step::getUnset(getRelativePlacement());
}

bool IfcLocalPlacement::testRelativePlacement() const
{
    return Step::isUnset(getRelativePlacement()) == false;
}

IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo()
{
    if (Step::BaseObject::inited())
    {
        return m_PlacementRelTo.get();
    }
    else
    {
        return NULL;
    }
}

const IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() const
{
    return const_cast< IfcLocalPlacement * > (this)->getPlacementRelTo();
}

void IfcLocalPlacement::setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_PlacementRelTo.valid())
    {
        m_PlacementRelTo->m_ReferencedByPlacements.erase(this);
    }
    if (value.valid() )
    {
       value->m_ReferencedByPlacements.insert(this);
    }
    m_PlacementRelTo = value;
}

void IfcLocalPlacement::unsetPlacementRelTo()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlacementRelTo = Step::getUnset(getPlacementRelTo());
}

bool IfcLocalPlacement::testPlacementRelTo() const
{
    return Step::isUnset(getPlacementRelTo()) == false;
}

bool IfcLocalPlacement::init()
{
    if (IfcObjectPlacement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelativePlacement = NULL;
    }
    else
    {
        m_RelativePlacement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_RelativePlacement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_PlacementRelTo = NULL;
    }
    else
    {
        m_PlacementRelTo = static_cast< IfcObjectPlacement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcLocalPlacement::copy(const IfcLocalPlacement &obj, const CopyOp &copyop)
{
    IfcObjectPlacement::copy(obj, copyop);
    setRelativePlacement((IfcAxis2Placement*)copyop(obj.m_RelativePlacement.get()));
    setPlacementRelTo((IfcObjectPlacement*)copyop(obj.m_PlacementRelTo.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLocalPlacement, IfcObjectPlacement)
