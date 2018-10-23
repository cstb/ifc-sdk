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


#include <ifc2x3/IfcMappedItem.h>

#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcRepresentationMap.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMappedItem::IfcMappedItem(Step::Id id, Step::SPFData *args) : 
    IfcRepresentationItem(id, args)
{
    m_MappingTarget = NULL;
    m_MappingSource = NULL;
}

IfcMappedItem::~IfcMappedItem()
{}

bool IfcMappedItem::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMappedItem(this);
}


IfcCartesianTransformationOperator *IfcMappedItem::getMappingTarget()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MappingTarget.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianTransformationOperator *IfcMappedItem::getMappingTarget() const
{
    return const_cast<IfcMappedItem *>(this)->getMappingTarget();
}

void IfcMappedItem::setMappingTarget(const Step::RefPtr< IfcCartesianTransformationOperator > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MappingTarget = value;
}

void IfcMappedItem::unsetMappingTarget()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MappingTarget = Step::getUnset(getMappingTarget());
}

bool IfcMappedItem::testMappingTarget() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMappingTarget()) == false;
}

IfcRepresentationMap *IfcMappedItem::getMappingSource()
{
    if (Step::BaseObject::inited())
    {
        return m_MappingSource.get();
    }
    else
    {
        return NULL;
    }
}

const IfcRepresentationMap *IfcMappedItem::getMappingSource() const
{
    return const_cast< IfcMappedItem * > (this)->getMappingSource();
}

void IfcMappedItem::setMappingSource(const Step::RefPtr< IfcRepresentationMap > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_MappingSource.valid())
    {
        m_MappingSource->m_MapUsage.erase(this);
    }
    if (value.valid() )
    {
       value->m_MapUsage.insert(this);
    }
    m_MappingSource = value;
}

void IfcMappedItem::unsetMappingSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MappingSource = Step::getUnset(getMappingSource());
}

bool IfcMappedItem::testMappingSource() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMappingSource()) == false;
}

bool IfcMappedItem::init()
{
    if (IfcRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MappingTarget = NULL;
    }
    else
    {
        m_MappingTarget = static_cast< IfcCartesianTransformationOperator * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MappingSource = NULL;
    }
    else
    {
        m_MappingSource = static_cast< IfcRepresentationMap * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcMappedItem::copy(const IfcMappedItem &obj, const CopyOp &copyop)
{
    IfcRepresentationItem::copy(obj, copyop);
    setMappingTarget((IfcCartesianTransformationOperator*)copyop(obj.m_MappingTarget.get()));
    setMappingSource((IfcRepresentationMap*)copyop(obj.m_MappingSource.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMappedItem, IfcRepresentationItem)
