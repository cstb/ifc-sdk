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


#include <ifc2x3/IfcResource.h>

#include <ifc2x3/IfcRelAssignsToResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcResource::IfcResource(Step::Id id, Step::SPFData *args) : 
    IfcObject(id, args)
{
}

IfcResource::~IfcResource()
{}

bool IfcResource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcResource(this);
}

Inverse_Set_IfcRelAssignsToResource_0_n &IfcResource::getResourceOf()
{
    if (Step::BaseObject::inited())
    {
        return m_ResourceOf;
    }
 
    m_ResourceOf.setUnset(true);
    return m_ResourceOf;
}

const Inverse_Set_IfcRelAssignsToResource_0_n &IfcResource::getResourceOf() const
{
    return  const_cast< IfcResource * > (this)->getResourceOf();
}

bool IfcResource::testResourceOf() const
{
    return m_ResourceOf.isUnset() == false;
}

bool IfcResource::init()
{
    if (IfcObject::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelAssignsToResource::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_ResourceOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ResourceOf.insert(static_cast< IfcRelAssignsToResource * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcResource::copy(const IfcResource &obj, const CopyOp &copyop)
{
    IfcObject::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcResource, IfcObject)
