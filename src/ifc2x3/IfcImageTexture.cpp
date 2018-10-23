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


#include <ifc2x3/IfcImageTexture.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcImageTexture::IfcImageTexture(Step::Id id, Step::SPFData *args) : 
    IfcSurfaceTexture(id, args)
{
    m_UrlReference = Step::getUnset(m_UrlReference);
}

IfcImageTexture::~IfcImageTexture()
{}

bool IfcImageTexture::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcImageTexture(this);
}


IfcIdentifier IfcImageTexture::getUrlReference()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UrlReference;
    }
    else 
    {
        return Step::getUnset(m_UrlReference);
    }    
}

const IfcIdentifier IfcImageTexture::getUrlReference() const
{
    return const_cast<IfcImageTexture *>(this)->getUrlReference();
}

void IfcImageTexture::setUrlReference(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UrlReference = value;
}

void IfcImageTexture::unsetUrlReference()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UrlReference = Step::getUnset(getUrlReference());
}

bool IfcImageTexture::testUrlReference() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUrlReference()) == false;
}

bool IfcImageTexture::init()
{
    if (IfcSurfaceTexture::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UrlReference = Step::getUnset(m_UrlReference);
    }
    else
    {
        m_UrlReference = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcImageTexture::copy(const IfcImageTexture &obj, const CopyOp &copyop)
{
    IfcSurfaceTexture::copy(obj, copyop);
    setUrlReference(obj.m_UrlReference);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcImageTexture, IfcSurfaceTexture)
