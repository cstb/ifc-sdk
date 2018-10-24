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


#include <ifc2x3/IfcRelAssignsToResource.h>

#include <ifc2x3/IfcResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssignsToResource::IfcRelAssignsToResource(Step::Id id, Step::SPFData *args) : 
    IfcRelAssigns(id, args)
{
    m_RelatingResource = NULL;
}

IfcRelAssignsToResource::~IfcRelAssignsToResource()
{}

bool IfcRelAssignsToResource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssignsToResource(this);
}

IfcResource *IfcRelAssignsToResource::getRelatingResource()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingResource.get();
    }
    else
    {
        return NULL;
    }
}

const IfcResource *IfcRelAssignsToResource::getRelatingResource() const
{
    return const_cast< IfcRelAssignsToResource * > (this)->getRelatingResource();
}

void IfcRelAssignsToResource::setRelatingResource(const Step::RefPtr< IfcResource > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingResource.valid())
    {
        m_RelatingResource->m_ResourceOf.erase(this);
    }
    if (value.valid() )
    {
       value->m_ResourceOf.insert(this);
    }
    m_RelatingResource = value;
}

void IfcRelAssignsToResource::unsetRelatingResource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingResource = Step::getUnset(getRelatingResource());
}

bool IfcRelAssignsToResource::testRelatingResource() const
{
    return Step::isUnset(getRelatingResource()) == false;
}

bool IfcRelAssignsToResource::init()
{
    if (IfcRelAssigns::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingResource = NULL;
    }
    else
    {
        m_RelatingResource = static_cast< IfcResource * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssignsToResource::copy(const IfcRelAssignsToResource &obj, const CopyOp &copyop)
{
    IfcRelAssigns::copy(obj, copyop);
    setRelatingResource((IfcResource*)copyop(obj.m_RelatingResource.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssignsToResource, IfcRelAssigns)
