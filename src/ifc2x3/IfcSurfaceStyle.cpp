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


#include <ifc2x3/IfcSurfaceStyle.h>

#include <ifc2x3/IfcSurfaceStyleElementSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceStyle::IfcSurfaceStyle(Step::Id id, Step::SPFData *args) : 
    IfcPresentationStyle(id, args)
{
    m_Side = IfcSurfaceSide_UNSET;
    m_Styles.setUnset(true);
}

IfcSurfaceStyle::~IfcSurfaceStyle()
{}

bool IfcSurfaceStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceStyle(this);
}


IfcSurfaceSide IfcSurfaceStyle::getSide()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Side;
    }
    else 
    {
        return IfcSurfaceSide_UNSET;
    }    
}

IfcSurfaceSide IfcSurfaceStyle::getSide() const
{
    return const_cast<IfcSurfaceStyle *>(this)->getSide();
}

void IfcSurfaceStyle::setSide(IfcSurfaceSide value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Side = value;
}

void IfcSurfaceStyle::unsetSide()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Side = IfcSurfaceSide_UNSET;
}

bool IfcSurfaceStyle::testSide() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSide()) == false;
}


Set_IfcSurfaceStyleElementSelect_1_5 &IfcSurfaceStyle::getStyles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Styles;
    }
    else 
    {
        m_Styles.setUnset(true);
        return m_Styles;
    }    
}

const Set_IfcSurfaceStyleElementSelect_1_5 &IfcSurfaceStyle::getStyles() const
{
    return const_cast<IfcSurfaceStyle *>(this)->getStyles();
}

void IfcSurfaceStyle::setStyles(const Set_IfcSurfaceStyleElementSelect_1_5 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Styles = value;
}

void IfcSurfaceStyle::unsetStyles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Styles.clear();
    m_Styles.setUnset(true);
}

bool IfcSurfaceStyle::testStyles() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Styles.isUnset() == false;
}

bool IfcSurfaceStyle::init()
{
    if (IfcPresentationStyle::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Side = IfcSurfaceSide_UNSET;
    }
    else
    {
        if (arg == ".POSITIVE.")
        {
            m_Side = IfcSurfaceSide_POSITIVE;
        }
        else if (arg == ".NEGATIVE.")
        {
            m_Side = IfcSurfaceSide_NEGATIVE;
        }
        else if (arg == ".BOTH.")
        {
            m_Side = IfcSurfaceSide_BOTH;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Styles.setUnset(true);
    }
    else
    {
        m_Styles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcSurfaceStyleElementSelect > attr2 = new IfcSurfaceStyleElementSelect();
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
                    m_Styles.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyle::copy(const IfcSurfaceStyle &obj, const CopyOp &copyop)
{
    IfcPresentationStyle::copy(obj, copyop);
    setSide(obj.m_Side);
    Set_IfcSurfaceStyleElementSelect_1_5::const_iterator it_m_Styles;
    for (it_m_Styles = obj.m_Styles.begin(); it_m_Styles != obj.m_Styles.end(); ++it_m_Styles)
    {
        Step::RefPtr< IfcSurfaceStyleElementSelect > copyTarget = new IfcSurfaceStyleElementSelect;
        copyTarget->copy(*((*it_m_Styles).get()), copyop);
        m_Styles.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceStyle, IfcPresentationStyle)
