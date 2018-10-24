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


#include <ifc2x3/IfcProductDefinitionShape.h>

#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcProduct.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProductDefinitionShape::IfcProductDefinitionShape(Step::Id id, Step::SPFData *args) : 
    IfcProductRepresentation(id, args)
{
}

IfcProductDefinitionShape::~IfcProductDefinitionShape()
{}

bool IfcProductDefinitionShape::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProductDefinitionShape(this);
}

Inverse_Set_IfcShapeAspect_0_n &IfcProductDefinitionShape::getHasShapeAspects()
{
    if (Step::BaseObject::inited())
    {
        return m_HasShapeAspects;
    }
 
    m_HasShapeAspects.setUnset(true);
    return m_HasShapeAspects;
}

const Inverse_Set_IfcShapeAspect_0_n &IfcProductDefinitionShape::getHasShapeAspects() const
{
    return  const_cast< IfcProductDefinitionShape * > (this)->getHasShapeAspects();
}

bool IfcProductDefinitionShape::testHasShapeAspects() const
{
    return m_HasShapeAspects.isUnset() == false;
}

Inverse_Set_IfcProduct_1_1 &IfcProductDefinitionShape::getShapeOfProduct()
{
    if (Step::BaseObject::inited())
    {
        return m_ShapeOfProduct;
    }
 
    m_ShapeOfProduct.setUnset(true);
    return m_ShapeOfProduct;
}

const Inverse_Set_IfcProduct_1_1 &IfcProductDefinitionShape::getShapeOfProduct() const
{
    return  const_cast< IfcProductDefinitionShape * > (this)->getShapeOfProduct();
}

bool IfcProductDefinitionShape::testShapeOfProduct() const
{
    return m_ShapeOfProduct.isUnset() == false;
}

bool IfcProductDefinitionShape::init()
{
    if (IfcProductRepresentation::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcShapeAspect::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasShapeAspects.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasShapeAspects.insert(static_cast< IfcShapeAspect * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcProduct::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_ShapeOfProduct.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ShapeOfProduct.insert(static_cast< IfcProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProductDefinitionShape::copy(const IfcProductDefinitionShape &obj, const CopyOp &copyop)
{
    IfcProductRepresentation::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProductDefinitionShape, IfcProductRepresentation)
