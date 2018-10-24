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


#include <ifc2x3/IfcVertexBasedTextureMap.h>

#include <ifc2x3/IfcTextureVertex.h>
#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcVertexBasedTextureMap::IfcVertexBasedTextureMap(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_TextureVertices.setUnset(true);
    m_TexturePoints.setUnset(true);
}

IfcVertexBasedTextureMap::~IfcVertexBasedTextureMap()
{}

bool IfcVertexBasedTextureMap::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcVertexBasedTextureMap(this);
}


List_IfcTextureVertex_3_n &IfcVertexBasedTextureMap::getTextureVertices()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextureVertices;
    }
    else 
    {
        m_TextureVertices.setUnset(true);
        return m_TextureVertices;
    }    
}

const List_IfcTextureVertex_3_n &IfcVertexBasedTextureMap::getTextureVertices() const
{
    return const_cast<IfcVertexBasedTextureMap *>(this)->getTextureVertices();
}

void IfcVertexBasedTextureMap::setTextureVertices(const List_IfcTextureVertex_3_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureVertices = value;
}

void IfcVertexBasedTextureMap::unsetTextureVertices()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureVertices.clear();
    m_TextureVertices.setUnset(true);
}

bool IfcVertexBasedTextureMap::testTextureVertices() const
{
    return m_TextureVertices.isUnset() == false;
}


List_IfcCartesianPoint_3_n &IfcVertexBasedTextureMap::getTexturePoints()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TexturePoints;
    }
    else 
    {
        m_TexturePoints.setUnset(true);
        return m_TexturePoints;
    }    
}

const List_IfcCartesianPoint_3_n &IfcVertexBasedTextureMap::getTexturePoints() const
{
    return const_cast<IfcVertexBasedTextureMap *>(this)->getTexturePoints();
}

void IfcVertexBasedTextureMap::setTexturePoints(const List_IfcCartesianPoint_3_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TexturePoints = value;
}

void IfcVertexBasedTextureMap::unsetTexturePoints()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TexturePoints.clear();
    m_TexturePoints.setUnset(true);
}

bool IfcVertexBasedTextureMap::testTexturePoints() const
{
    return m_TexturePoints.isUnset() == false;
}

bool IfcVertexBasedTextureMap::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextureVertices.setUnset(true);
    }
    else
    {
        m_TextureVertices.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_TextureVertices.push_back(static_cast< IfcTextureVertex * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TexturePoints.setUnset(true);
    }
    else
    {
        m_TexturePoints.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_TexturePoints.push_back(static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcVertexBasedTextureMap::copy(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    List_IfcTextureVertex_3_n::const_iterator it_m_TextureVertices;
    for (it_m_TextureVertices = obj.m_TextureVertices.begin(); it_m_TextureVertices != obj.m_TextureVertices.end(); ++it_m_TextureVertices)
    {
        Step::RefPtr< IfcTextureVertex > copyTarget = (IfcTextureVertex *) (copyop((*it_m_TextureVertices).get()));
        m_TextureVertices.push_back(copyTarget);
    }
    
    List_IfcCartesianPoint_3_n::const_iterator it_m_TexturePoints;
    for (it_m_TexturePoints = obj.m_TexturePoints.begin(); it_m_TexturePoints != obj.m_TexturePoints.end(); ++it_m_TexturePoints)
    {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_TexturePoints).get()));
        m_TexturePoints.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcVertexBasedTextureMap, Step::BaseEntity)
