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


#include <ifc2x3/IfcSurfaceStyleWithTextures.h>

#include <ifc2x3/IfcSurfaceTexture.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Textures.setUnset(true);
}

IfcSurfaceStyleWithTextures::~IfcSurfaceStyleWithTextures()
{}

bool IfcSurfaceStyleWithTextures::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceStyleWithTextures(this);
}


List_IfcSurfaceTexture_1_n &IfcSurfaceStyleWithTextures::getTextures()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Textures;
    }
    else 
    {
        m_Textures.setUnset(true);
        return m_Textures;
    }    
}

const List_IfcSurfaceTexture_1_n &IfcSurfaceStyleWithTextures::getTextures() const
{
    return const_cast<IfcSurfaceStyleWithTextures *>(this)->getTextures();
}

void IfcSurfaceStyleWithTextures::setTextures(const List_IfcSurfaceTexture_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Textures = value;
}

void IfcSurfaceStyleWithTextures::unsetTextures()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Textures.clear();
    m_Textures.setUnset(true);
}

bool IfcSurfaceStyleWithTextures::testTextures() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Textures.isUnset() == false;
}

bool IfcSurfaceStyleWithTextures::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Textures.setUnset(true);
    }
    else
    {
        m_Textures.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Textures.push_back(static_cast< IfcSurfaceTexture * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyleWithTextures::copy(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    List_IfcSurfaceTexture_1_n::const_iterator it_m_Textures;
    for (it_m_Textures = obj.m_Textures.begin(); it_m_Textures != obj.m_Textures.end(); ++it_m_Textures)
    {
        Step::RefPtr< IfcSurfaceTexture > copyTarget = (IfcSurfaceTexture *) (copyop((*it_m_Textures).get()));
        m_Textures.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceStyleWithTextures, Step::BaseEntity)
