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


#include <ifc2x3/IfcPlacement.h>

#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPlacement::IfcPlacement(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Location = NULL;
}

IfcPlacement::~IfcPlacement()
{}

bool IfcPlacement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPlacement(this);
}


IfcCartesianPoint *IfcPlacement::getLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Location.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcPlacement::getLocation() const
{
    return const_cast<IfcPlacement *>(this)->getLocation();
}

void IfcPlacement::setLocation(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Location = value;
}

void IfcPlacement::unsetLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Location = Step::getUnset(getLocation());
}

bool IfcPlacement::testLocation() const
{
    return Step::isUnset(getLocation()) == false;
}

bool IfcPlacement::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Location = NULL;
    }
    else
    {
        m_Location = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcPlacement::copy(const IfcPlacement &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setLocation((IfcCartesianPoint*)copyop(obj.m_Location.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPlacement, IfcGeometricRepresentationItem)
