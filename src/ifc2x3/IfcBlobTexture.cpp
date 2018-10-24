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


#include <ifc2x3/IfcBlobTexture.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBlobTexture::IfcBlobTexture(Step::Id id, Step::SPFData *args) : 
    IfcSurfaceTexture(id, args)
{
    m_RasterFormat = Step::getUnset(m_RasterFormat);
    m_RasterCode = Step::getUnset(m_RasterCode);
}

IfcBlobTexture::~IfcBlobTexture()
{}

bool IfcBlobTexture::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBlobTexture(this);
}


IfcIdentifier IfcBlobTexture::getRasterFormat()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RasterFormat;
    }
    else 
    {
        return Step::getUnset(m_RasterFormat);
    }    
}

const IfcIdentifier IfcBlobTexture::getRasterFormat() const
{
    return const_cast<IfcBlobTexture *>(this)->getRasterFormat();
}

void IfcBlobTexture::setRasterFormat(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RasterFormat = value;
}

void IfcBlobTexture::unsetRasterFormat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RasterFormat = Step::getUnset(getRasterFormat());
}

bool IfcBlobTexture::testRasterFormat() const
{
    return Step::isUnset(getRasterFormat()) == false;
}


Step::Boolean IfcBlobTexture::getRasterCode()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RasterCode;
    }
    else 
    {
        return Step::getUnset(m_RasterCode);
    }    
}

Step::Boolean IfcBlobTexture::getRasterCode() const
{
    return const_cast<IfcBlobTexture *>(this)->getRasterCode();
}

void IfcBlobTexture::setRasterCode(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RasterCode = value;
}

void IfcBlobTexture::unsetRasterCode()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RasterCode = Step::getUnset(getRasterCode());
}

bool IfcBlobTexture::testRasterCode() const
{
    return Step::isUnset(getRasterCode()) == false;
}

bool IfcBlobTexture::init()
{
    if (IfcSurfaceTexture::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RasterFormat = Step::getUnset(m_RasterFormat);
    }
    else
    {
        m_RasterFormat = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RasterCode = Step::getUnset(m_RasterCode);
    }
    else
    {
        m_RasterCode = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcBlobTexture::copy(const IfcBlobTexture &obj, const CopyOp &copyop)
{
    IfcSurfaceTexture::copy(obj, copyop);
    setRasterFormat(obj.m_RasterFormat);
    setRasterCode(obj.m_RasterCode);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBlobTexture, IfcSurfaceTexture)
