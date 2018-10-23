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


#include <ifc2x3/IfcSurfaceStyleShading.h>

#include <ifc2x3/IfcColourRgb.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceStyleShading::IfcSurfaceStyleShading(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_SurfaceColour = NULL;
}

IfcSurfaceStyleShading::~IfcSurfaceStyleShading()
{}

bool IfcSurfaceStyleShading::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceStyleShading(this);
}


IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SurfaceColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() const
{
    return const_cast<IfcSurfaceStyleShading *>(this)->getSurfaceColour();
}

void IfcSurfaceStyleShading::setSurfaceColour(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SurfaceColour = value;
}

void IfcSurfaceStyleShading::unsetSurfaceColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SurfaceColour = Step::getUnset(getSurfaceColour());
}

bool IfcSurfaceStyleShading::testSurfaceColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSurfaceColour()) == false;
}

bool IfcSurfaceStyleShading::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SurfaceColour = NULL;
    }
    else
    {
        m_SurfaceColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSurfaceStyleShading::copy(const IfcSurfaceStyleShading &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setSurfaceColour((IfcColourRgb*)copyop(obj.m_SurfaceColour.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceStyleShading, Step::BaseEntity)
