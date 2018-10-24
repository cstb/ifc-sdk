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


#include <ifc2x3/IfcTextureMap.h>

#include <ifc2x3/IfcVertexBasedTextureMap.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextureMap::IfcTextureMap(Step::Id id, Step::SPFData *args) : 
    IfcTextureCoordinate(id, args)
{
    m_TextureMaps.setUnset(true);
}

IfcTextureMap::~IfcTextureMap()
{}

bool IfcTextureMap::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextureMap(this);
}


Set_IfcVertexBasedTextureMap_1_n &IfcTextureMap::getTextureMaps()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextureMaps;
    }
    else 
    {
        m_TextureMaps.setUnset(true);
        return m_TextureMaps;
    }    
}

const Set_IfcVertexBasedTextureMap_1_n &IfcTextureMap::getTextureMaps() const
{
    return const_cast<IfcTextureMap *>(this)->getTextureMaps();
}

void IfcTextureMap::setTextureMaps(const Set_IfcVertexBasedTextureMap_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureMaps = value;
}

void IfcTextureMap::unsetTextureMaps()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureMaps.clear();
    m_TextureMaps.setUnset(true);
}

bool IfcTextureMap::testTextureMaps() const
{
    return m_TextureMaps.isUnset() == false;
}

bool IfcTextureMap::init()
{
    if (IfcTextureCoordinate::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextureMaps.setUnset(true);
    }
    else
    {
        m_TextureMaps.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_TextureMaps.insert(static_cast< IfcVertexBasedTextureMap * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcTextureMap::copy(const IfcTextureMap &obj, const CopyOp &copyop)
{
    IfcTextureCoordinate::copy(obj, copyop);
    Set_IfcVertexBasedTextureMap_1_n::const_iterator it_m_TextureMaps;
    for (it_m_TextureMaps = obj.m_TextureMaps.begin(); it_m_TextureMaps != obj.m_TextureMaps.end(); ++it_m_TextureMaps)
    {
        Step::RefPtr< IfcVertexBasedTextureMap > copyTarget = (IfcVertexBasedTextureMap *) (copyop((*it_m_TextureMaps).get()));
        m_TextureMaps.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextureMap, IfcTextureCoordinate)
