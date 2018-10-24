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


#include <ifc2x3/IfcProduct.h>

#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/IfcRelAssignsToProduct.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProduct::IfcProduct(Step::Id id, Step::SPFData *args) : 
    IfcObject(id, args)
{
    m_Representation = NULL;
    m_ObjectPlacement = NULL;
}

IfcProduct::~IfcProduct()
{}

bool IfcProduct::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProduct(this);
}

IfcProductRepresentation *IfcProduct::getRepresentation()
{
    if (Step::BaseObject::inited())
    {
        return m_Representation.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProductRepresentation *IfcProduct::getRepresentation() const
{
    return const_cast< IfcProduct * > (this)->getRepresentation();
}

void IfcProduct::setRepresentation(const Step::RefPtr< IfcProductRepresentation > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_Representation.valid() && m_Representation->isOfType(IfcProductDefinitionShape::getClassType()))
    {
        static_cast<IfcProductDefinitionShape*>(m_Representation.get())->m_ShapeOfProduct.erase(this);
    }
    if (value.valid() && value->isOfType(IfcProductDefinitionShape::getClassType()))
    {
       static_cast<IfcProductDefinitionShape*>(value.get())->m_ShapeOfProduct.insert(this);
    }
    m_Representation = value;
}

void IfcProduct::unsetRepresentation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Representation = Step::getUnset(getRepresentation());
}

bool IfcProduct::testRepresentation() const
{
    return Step::isUnset(getRepresentation()) == false;
}

IfcObjectPlacement *IfcProduct::getObjectPlacement()
{
    if (Step::BaseObject::inited())
    {
        return m_ObjectPlacement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcObjectPlacement *IfcProduct::getObjectPlacement() const
{
    return const_cast< IfcProduct * > (this)->getObjectPlacement();
}

void IfcProduct::setObjectPlacement(const Step::RefPtr< IfcObjectPlacement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ObjectPlacement.valid())
    {
        m_ObjectPlacement->m_PlacesObject.erase(this);
    }
    if (value.valid() )
    {
       value->m_PlacesObject.insert(this);
    }
    m_ObjectPlacement = value;
}

void IfcProduct::unsetObjectPlacement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ObjectPlacement = Step::getUnset(getObjectPlacement());
}

bool IfcProduct::testObjectPlacement() const
{
    return Step::isUnset(getObjectPlacement()) == false;
}

Inverse_Set_IfcRelAssignsToProduct_0_n &IfcProduct::getReferencedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencedBy;
    }
 
    m_ReferencedBy.setUnset(true);
    return m_ReferencedBy;
}

const Inverse_Set_IfcRelAssignsToProduct_0_n &IfcProduct::getReferencedBy() const
{
    return  const_cast< IfcProduct * > (this)->getReferencedBy();
}

bool IfcProduct::testReferencedBy() const
{
    return m_ReferencedBy.isUnset() == false;
}

bool IfcProduct::init()
{
    if (IfcObject::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Representation = NULL;
    }
    else
    {
        m_Representation = static_cast< IfcProductRepresentation * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ObjectPlacement = NULL;
    }
    else
    {
        m_ObjectPlacement = static_cast< IfcObjectPlacement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelAssignsToProduct::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_ReferencedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ReferencedBy.insert(static_cast< IfcRelAssignsToProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProduct::copy(const IfcProduct &obj, const CopyOp &copyop)
{
    IfcObject::copy(obj, copyop);
    setRepresentation((IfcProductRepresentation*)copyop(obj.m_Representation.get()));
    setObjectPlacement((IfcObjectPlacement*)copyop(obj.m_ObjectPlacement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProduct, IfcObject)
