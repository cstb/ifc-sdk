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


#include <ifc2x3/IfcFillAreaStyleTiles.h>

#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/IfcFillAreaStyleTileShapeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFillAreaStyleTiles::IfcFillAreaStyleTiles(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_TilingPattern = NULL;
    m_Tiles.setUnset(true);
    m_TilingScale = Step::getUnset(m_TilingScale);
}

IfcFillAreaStyleTiles::~IfcFillAreaStyleTiles()
{}

bool IfcFillAreaStyleTiles::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFillAreaStyleTiles(this);
}


IfcOneDirectionRepeatFactor *IfcFillAreaStyleTiles::getTilingPattern()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TilingPattern.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcOneDirectionRepeatFactor *IfcFillAreaStyleTiles::getTilingPattern() const
{
    return const_cast<IfcFillAreaStyleTiles *>(this)->getTilingPattern();
}

void IfcFillAreaStyleTiles::setTilingPattern(const Step::RefPtr< IfcOneDirectionRepeatFactor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TilingPattern = value;
}

void IfcFillAreaStyleTiles::unsetTilingPattern()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TilingPattern = Step::getUnset(getTilingPattern());
}

bool IfcFillAreaStyleTiles::testTilingPattern() const
{
    return Step::isUnset(getTilingPattern()) == false;
}


Set_IfcFillAreaStyleTileShapeSelect_1_n &IfcFillAreaStyleTiles::getTiles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Tiles;
    }
    else 
    {
        m_Tiles.setUnset(true);
        return m_Tiles;
    }    
}

const Set_IfcFillAreaStyleTileShapeSelect_1_n &IfcFillAreaStyleTiles::getTiles() const
{
    return const_cast<IfcFillAreaStyleTiles *>(this)->getTiles();
}

void IfcFillAreaStyleTiles::setTiles(const Set_IfcFillAreaStyleTileShapeSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tiles = value;
}

void IfcFillAreaStyleTiles::unsetTiles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tiles.clear();
    m_Tiles.setUnset(true);
}

bool IfcFillAreaStyleTiles::testTiles() const
{
    return m_Tiles.isUnset() == false;
}


IfcPositiveRatioMeasure IfcFillAreaStyleTiles::getTilingScale()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TilingScale;
    }
    else 
    {
        return Step::getUnset(m_TilingScale);
    }    
}

IfcPositiveRatioMeasure IfcFillAreaStyleTiles::getTilingScale() const
{
    return const_cast<IfcFillAreaStyleTiles *>(this)->getTilingScale();
}

void IfcFillAreaStyleTiles::setTilingScale(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TilingScale = value;
}

void IfcFillAreaStyleTiles::unsetTilingScale()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TilingScale = Step::getUnset(getTilingScale());
}

bool IfcFillAreaStyleTiles::testTilingScale() const
{
    return Step::isUnset(getTilingScale()) == false;
}

bool IfcFillAreaStyleTiles::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TilingPattern = NULL;
    }
    else
    {
        m_TilingPattern = static_cast< IfcOneDirectionRepeatFactor * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Tiles.setUnset(true);
    }
    else
    {
        m_Tiles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcFillAreaStyleTileShapeSelect > attr2 = new IfcFillAreaStyleTileShapeSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_Tiles.insert(attr2);
                }
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
        m_TilingScale = Step::getUnset(m_TilingScale);
    }
    else
    {
        m_TilingScale = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcFillAreaStyleTiles::copy(const IfcFillAreaStyleTiles &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setTilingPattern((IfcOneDirectionRepeatFactor*)copyop(obj.m_TilingPattern.get()));
    Set_IfcFillAreaStyleTileShapeSelect_1_n::const_iterator it_m_Tiles;
    for (it_m_Tiles = obj.m_Tiles.begin(); it_m_Tiles != obj.m_Tiles.end(); ++it_m_Tiles)
    {
        Step::RefPtr< IfcFillAreaStyleTileShapeSelect > copyTarget = new IfcFillAreaStyleTileShapeSelect;
        copyTarget->copy(*((*it_m_Tiles).get()), copyop);
        m_Tiles.insert(copyTarget.get());
    }
    
    setTilingScale(obj.m_TilingScale);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFillAreaStyleTiles, IfcGeometricRepresentationItem)
