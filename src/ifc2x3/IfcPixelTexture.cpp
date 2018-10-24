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


#include <ifc2x3/IfcPixelTexture.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPixelTexture::IfcPixelTexture(Step::Id id, Step::SPFData *args) : 
    IfcSurfaceTexture(id, args)
{
    m_Width = Step::getUnset(m_Width);
    m_Height = Step::getUnset(m_Height);
    m_ColourComponents = Step::getUnset(m_ColourComponents);
    m_Pixel.setUnset(true);
}

IfcPixelTexture::~IfcPixelTexture()
{}

bool IfcPixelTexture::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPixelTexture(this);
}


IfcInteger IfcPixelTexture::getWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Width;
    }
    else 
    {
        return Step::getUnset(m_Width);
    }    
}

IfcInteger IfcPixelTexture::getWidth() const
{
    return const_cast<IfcPixelTexture *>(this)->getWidth();
}

void IfcPixelTexture::setWidth(IfcInteger value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = value;
}

void IfcPixelTexture::unsetWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = Step::getUnset(getWidth());
}

bool IfcPixelTexture::testWidth() const
{
    return Step::isUnset(getWidth()) == false;
}


IfcInteger IfcPixelTexture::getHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Height;
    }
    else 
    {
        return Step::getUnset(m_Height);
    }    
}

IfcInteger IfcPixelTexture::getHeight() const
{
    return const_cast<IfcPixelTexture *>(this)->getHeight();
}

void IfcPixelTexture::setHeight(IfcInteger value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = value;
}

void IfcPixelTexture::unsetHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = Step::getUnset(getHeight());
}

bool IfcPixelTexture::testHeight() const
{
    return Step::isUnset(getHeight()) == false;
}


IfcInteger IfcPixelTexture::getColourComponents()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ColourComponents;
    }
    else 
    {
        return Step::getUnset(m_ColourComponents);
    }    
}

IfcInteger IfcPixelTexture::getColourComponents() const
{
    return const_cast<IfcPixelTexture *>(this)->getColourComponents();
}

void IfcPixelTexture::setColourComponents(IfcInteger value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ColourComponents = value;
}

void IfcPixelTexture::unsetColourComponents()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ColourComponents = Step::getUnset(getColourComponents());
}

bool IfcPixelTexture::testColourComponents() const
{
    return Step::isUnset(getColourComponents()) == false;
}


List_Binary_32__1_n &IfcPixelTexture::getPixel()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Pixel;
    }
    else 
    {
        m_Pixel.setUnset(true);
        return m_Pixel;
    }    
}

const List_Binary_32__1_n &IfcPixelTexture::getPixel() const
{
    return const_cast<IfcPixelTexture *>(this)->getPixel();
}

void IfcPixelTexture::setPixel(const List_Binary_32__1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Pixel = value;
}

void IfcPixelTexture::unsetPixel()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Pixel.clear();
    m_Pixel.setUnset(true);
}

bool IfcPixelTexture::testPixel() const
{
    return m_Pixel.isUnset() == false;
}

bool IfcPixelTexture::init()
{
    if (IfcSurfaceTexture::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Width = Step::getUnset(m_Width);
    }
    else
    {
        m_Width = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Height = Step::getUnset(m_Height);
    }
    else
    {
        m_Height = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ColourComponents = Step::getUnset(m_ColourComponents);
    }
    else
    {
        m_ColourComponents = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Pixel.setUnset(true);
    }
    else
    {
        m_Pixel.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::Binary<32> attr2;
                attr2 = Step::spfToBinary<32>(str1);
                m_Pixel.push_back(attr2);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcPixelTexture::copy(const IfcPixelTexture &obj, const CopyOp &copyop)
{
    IfcSurfaceTexture::copy(obj, copyop);
    setWidth(obj.m_Width);
    setHeight(obj.m_Height);
    setColourComponents(obj.m_ColourComponents);
    List_Binary_32__1_n::const_iterator it_m_Pixel;
    for (it_m_Pixel = obj.m_Pixel.begin(); it_m_Pixel != obj.m_Pixel.end(); ++it_m_Pixel)
    {
        Step::Binary<32> copyTarget = (*it_m_Pixel);
        m_Pixel.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPixelTexture, IfcSurfaceTexture)
