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


#include <ifc2x3/IfcTextureCoordinate.h>

#include <ifc2x3/IfcAnnotationSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextureCoordinate::IfcTextureCoordinate(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
}

IfcTextureCoordinate::~IfcTextureCoordinate()
{}

bool IfcTextureCoordinate::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextureCoordinate(this);
}

Inverse_Set_IfcAnnotationSurface_1_1 &IfcTextureCoordinate::getAnnotatedSurface()
{
    if (Step::BaseObject::inited())
    {
        return m_AnnotatedSurface;
    }
 
    m_AnnotatedSurface.setUnset(true);
    return m_AnnotatedSurface;
}

const Inverse_Set_IfcAnnotationSurface_1_1 &IfcTextureCoordinate::getAnnotatedSurface() const
{
    return  const_cast< IfcTextureCoordinate * > (this)->getAnnotatedSurface();
}

bool IfcTextureCoordinate::testAnnotatedSurface() const
{
    return m_AnnotatedSurface.isUnset() == false;
}

bool IfcTextureCoordinate::init()
{
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcAnnotationSurface::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_AnnotatedSurface.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_AnnotatedSurface.insert(static_cast< IfcAnnotationSurface * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTextureCoordinate::copy(const IfcTextureCoordinate &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextureCoordinate, Step::BaseEntity)
