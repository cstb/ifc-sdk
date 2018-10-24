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


#include <ifc2x3/IfcRepresentationMap.h>

#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcMappedItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRepresentationMap::IfcRepresentationMap(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_MappingOrigin = NULL;
    m_MappedRepresentation = NULL;
}

IfcRepresentationMap::~IfcRepresentationMap()
{}

bool IfcRepresentationMap::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRepresentationMap(this);
}


IfcAxis2Placement *IfcRepresentationMap::getMappingOrigin()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MappingOrigin.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement *IfcRepresentationMap::getMappingOrigin() const
{
    return const_cast<IfcRepresentationMap *>(this)->getMappingOrigin();
}

void IfcRepresentationMap::setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MappingOrigin = value;
}

void IfcRepresentationMap::unsetMappingOrigin()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MappingOrigin = Step::getUnset(getMappingOrigin());
}

bool IfcRepresentationMap::testMappingOrigin() const
{
    return Step::isUnset(getMappingOrigin()) == false;
}

IfcRepresentation *IfcRepresentationMap::getMappedRepresentation()
{
    if (Step::BaseObject::inited())
    {
        return m_MappedRepresentation.get();
    }
    else
    {
        return NULL;
    }
}

const IfcRepresentation *IfcRepresentationMap::getMappedRepresentation() const
{
    return const_cast< IfcRepresentationMap * > (this)->getMappedRepresentation();
}

void IfcRepresentationMap::setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_MappedRepresentation.valid())
    {
        m_MappedRepresentation->m_RepresentationMap.erase(this);
    }
    if (value.valid() )
    {
       value->m_RepresentationMap.insert(this);
    }
    m_MappedRepresentation = value;
}

void IfcRepresentationMap::unsetMappedRepresentation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MappedRepresentation = Step::getUnset(getMappedRepresentation());
}

bool IfcRepresentationMap::testMappedRepresentation() const
{
    return Step::isUnset(getMappedRepresentation()) == false;
}

Inverse_Set_IfcMappedItem_0_n &IfcRepresentationMap::getMapUsage()
{
    if (Step::BaseObject::inited())
    {
        return m_MapUsage;
    }
 
    m_MapUsage.setUnset(true);
    return m_MapUsage;
}

const Inverse_Set_IfcMappedItem_0_n &IfcRepresentationMap::getMapUsage() const
{
    return  const_cast< IfcRepresentationMap * > (this)->getMapUsage();
}

bool IfcRepresentationMap::testMapUsage() const
{
    return m_MapUsage.isUnset() == false;
}

bool IfcRepresentationMap::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MappingOrigin = NULL;
    }
    else
    {
        m_MappingOrigin = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_MappingOrigin->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_MappedRepresentation = NULL;
    }
    else
    {
        m_MappedRepresentation = static_cast< IfcRepresentation * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcMappedItem::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_MapUsage.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_MapUsage.insert(static_cast< IfcMappedItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationMap::copy(const IfcRepresentationMap &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setMappingOrigin((IfcAxis2Placement*)copyop(obj.m_MappingOrigin.get()));
    setMappedRepresentation((IfcRepresentation*)copyop(obj.m_MappedRepresentation.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRepresentationMap, Step::BaseEntity)
