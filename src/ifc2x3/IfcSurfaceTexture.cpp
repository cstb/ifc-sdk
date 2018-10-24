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


#include <ifc2x3/IfcSurfaceTexture.h>

#include <ifc2x3/IfcCartesianTransformationOperator2D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceTexture::IfcSurfaceTexture(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RepeatS = Step::getUnset(m_RepeatS);
    m_RepeatT = Step::getUnset(m_RepeatT);
    m_TextureType = IfcSurfaceTextureEnum_UNSET;
    m_TextureTransform = NULL;
}

IfcSurfaceTexture::~IfcSurfaceTexture()
{}

bool IfcSurfaceTexture::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceTexture(this);
}


Step::Boolean IfcSurfaceTexture::getRepeatS()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepeatS;
    }
    else 
    {
        return Step::getUnset(m_RepeatS);
    }    
}

Step::Boolean IfcSurfaceTexture::getRepeatS() const
{
    return const_cast<IfcSurfaceTexture *>(this)->getRepeatS();
}

void IfcSurfaceTexture::setRepeatS(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepeatS = value;
}

void IfcSurfaceTexture::unsetRepeatS()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepeatS = Step::getUnset(getRepeatS());
}

bool IfcSurfaceTexture::testRepeatS() const
{
    return Step::isUnset(getRepeatS()) == false;
}


Step::Boolean IfcSurfaceTexture::getRepeatT()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepeatT;
    }
    else 
    {
        return Step::getUnset(m_RepeatT);
    }    
}

Step::Boolean IfcSurfaceTexture::getRepeatT() const
{
    return const_cast<IfcSurfaceTexture *>(this)->getRepeatT();
}

void IfcSurfaceTexture::setRepeatT(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepeatT = value;
}

void IfcSurfaceTexture::unsetRepeatT()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepeatT = Step::getUnset(getRepeatT());
}

bool IfcSurfaceTexture::testRepeatT() const
{
    return Step::isUnset(getRepeatT()) == false;
}


IfcSurfaceTextureEnum IfcSurfaceTexture::getTextureType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextureType;
    }
    else 
    {
        return IfcSurfaceTextureEnum_UNSET;
    }    
}

IfcSurfaceTextureEnum IfcSurfaceTexture::getTextureType() const
{
    return const_cast<IfcSurfaceTexture *>(this)->getTextureType();
}

void IfcSurfaceTexture::setTextureType(IfcSurfaceTextureEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureType = value;
}

void IfcSurfaceTexture::unsetTextureType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureType = IfcSurfaceTextureEnum_UNSET;
}

bool IfcSurfaceTexture::testTextureType() const
{
    return Step::isUnset(getTextureType()) == false;
}


IfcCartesianTransformationOperator2D *IfcSurfaceTexture::getTextureTransform()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextureTransform.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianTransformationOperator2D *IfcSurfaceTexture::getTextureTransform() const
{
    return const_cast<IfcSurfaceTexture *>(this)->getTextureTransform();
}

void IfcSurfaceTexture::setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureTransform = value;
}

void IfcSurfaceTexture::unsetTextureTransform()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextureTransform = Step::getUnset(getTextureTransform());
}

bool IfcSurfaceTexture::testTextureTransform() const
{
    return Step::isUnset(getTextureTransform()) == false;
}

bool IfcSurfaceTexture::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepeatS = Step::getUnset(m_RepeatS);
    }
    else
    {
        m_RepeatS = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepeatT = Step::getUnset(m_RepeatT);
    }
    else
    {
        m_RepeatT = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextureType = IfcSurfaceTextureEnum_UNSET;
    }
    else
    {
        if (arg == ".BUMP.")
        {
            m_TextureType = IfcSurfaceTextureEnum_BUMP;
        }
        else if (arg == ".OPACITY.")
        {
            m_TextureType = IfcSurfaceTextureEnum_OPACITY;
        }
        else if (arg == ".REFLECTION.")
        {
            m_TextureType = IfcSurfaceTextureEnum_REFLECTION;
        }
        else if (arg == ".SELFILLUMINATION.")
        {
            m_TextureType = IfcSurfaceTextureEnum_SELFILLUMINATION;
        }
        else if (arg == ".SHININESS.")
        {
            m_TextureType = IfcSurfaceTextureEnum_SHININESS;
        }
        else if (arg == ".SPECULAR.")
        {
            m_TextureType = IfcSurfaceTextureEnum_SPECULAR;
        }
        else if (arg == ".TEXTURE.")
        {
            m_TextureType = IfcSurfaceTextureEnum_TEXTURE;
        }
        else if (arg == ".TRANSPARENCYMAP.")
        {
            m_TextureType = IfcSurfaceTextureEnum_TRANSPARENCYMAP;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_TextureType = IfcSurfaceTextureEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextureTransform = NULL;
    }
    else
    {
        m_TextureTransform = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSurfaceTexture::copy(const IfcSurfaceTexture &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRepeatS(obj.m_RepeatS);
    setRepeatT(obj.m_RepeatT);
    setTextureType(obj.m_TextureType);
    setTextureTransform((IfcCartesianTransformationOperator2D*)copyop(obj.m_TextureTransform.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceTexture, Step::BaseEntity)
