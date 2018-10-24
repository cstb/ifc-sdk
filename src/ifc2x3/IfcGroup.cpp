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


#include <ifc2x3/IfcGroup.h>

#include <ifc2x3/IfcRelAssignsToGroup.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGroup::IfcGroup(Step::Id id, Step::SPFData *args) : 
    IfcObject(id, args)
{
}

IfcGroup::~IfcGroup()
{}

bool IfcGroup::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGroup(this);
}

IfcRelAssignsToGroup *IfcGroup::getIsGroupedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_IsGroupedBy.get();
    }
 
    return NULL;
}

const IfcRelAssignsToGroup *IfcGroup::getIsGroupedBy() const
{
    return  const_cast< IfcGroup * > (this)->getIsGroupedBy();
}

bool IfcGroup::testIsGroupedBy() const
{
    return Step::isUnset(getIsGroupedBy()) == false;
}

bool IfcGroup::init()
{
    if (IfcObject::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelAssignsToGroup::getClassType(), 6);
    if (inverses)
    {
        m_IsGroupedBy = static_cast< IfcRelAssignsToGroup * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcGroup::copy(const IfcGroup &obj, const CopyOp &copyop)
{
    IfcObject::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGroup, IfcObject)
