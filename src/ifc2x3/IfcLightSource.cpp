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


#include <ifc2x3/IfcLightSource.h>

#include <ifc2x3/IfcColourRgb.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLightSource::IfcLightSource(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_LightColour = NULL;
    m_AmbientIntensity = Step::getUnset(m_AmbientIntensity);
    m_Intensity = Step::getUnset(m_Intensity);
}

IfcLightSource::~IfcLightSource()
{}

bool IfcLightSource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLightSource(this);
}


IfcLabel IfcLightSource::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcLightSource::getName() const
{
    return const_cast<IfcLightSource *>(this)->getName();
}

void IfcLightSource::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcLightSource::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcLightSource::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcColourRgb *IfcLightSource::getLightColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LightColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcLightSource::getLightColour() const
{
    return const_cast<IfcLightSource *>(this)->getLightColour();
}

void IfcLightSource::setLightColour(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightColour = value;
}

void IfcLightSource::unsetLightColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightColour = Step::getUnset(getLightColour());
}

bool IfcLightSource::testLightColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLightColour()) == false;
}


IfcNormalisedRatioMeasure IfcLightSource::getAmbientIntensity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AmbientIntensity;
    }
    else 
    {
        return Step::getUnset(m_AmbientIntensity);
    }    
}

IfcNormalisedRatioMeasure IfcLightSource::getAmbientIntensity() const
{
    return const_cast<IfcLightSource *>(this)->getAmbientIntensity();
}

void IfcLightSource::setAmbientIntensity(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AmbientIntensity = value;
}

void IfcLightSource::unsetAmbientIntensity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AmbientIntensity = Step::getUnset(getAmbientIntensity());
}

bool IfcLightSource::testAmbientIntensity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAmbientIntensity()) == false;
}


IfcNormalisedRatioMeasure IfcLightSource::getIntensity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Intensity;
    }
    else 
    {
        return Step::getUnset(m_Intensity);
    }    
}

IfcNormalisedRatioMeasure IfcLightSource::getIntensity() const
{
    return const_cast<IfcLightSource *>(this)->getIntensity();
}

void IfcLightSource::setIntensity(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Intensity = value;
}

void IfcLightSource::unsetIntensity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Intensity = Step::getUnset(getIntensity());
}

bool IfcLightSource::testIntensity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIntensity()) == false;
}

bool IfcLightSource::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LightColour = NULL;
    }
    else
    {
        m_LightColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AmbientIntensity = Step::getUnset(m_AmbientIntensity);
    }
    else
    {
        m_AmbientIntensity = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Intensity = Step::getUnset(m_Intensity);
    }
    else
    {
        m_Intensity = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcLightSource::copy(const IfcLightSource &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setName(obj.m_Name);
    setLightColour((IfcColourRgb*)copyop(obj.m_LightColour.get()));
    setAmbientIntensity(obj.m_AmbientIntensity);
    setIntensity(obj.m_Intensity);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLightSource, IfcGeometricRepresentationItem)
