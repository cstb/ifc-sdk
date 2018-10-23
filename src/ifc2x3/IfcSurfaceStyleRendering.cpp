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


#include <ifc2x3/IfcSurfaceStyleRendering.h>

#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcSpecularHighlightSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceStyleRendering::IfcSurfaceStyleRendering(Step::Id id, Step::SPFData *args) : 
    IfcSurfaceStyleShading(id, args)
{
    m_Transparency = Step::getUnset(m_Transparency);
    m_DiffuseColour = NULL;
    m_TransmissionColour = NULL;
    m_DiffuseTransmissionColour = NULL;
    m_ReflectionColour = NULL;
    m_SpecularColour = NULL;
    m_SpecularHighlight = NULL;
    m_ReflectanceMethod = IfcReflectanceMethodEnum_UNSET;
}

IfcSurfaceStyleRendering::~IfcSurfaceStyleRendering()
{}

bool IfcSurfaceStyleRendering::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceStyleRendering(this);
}


IfcNormalisedRatioMeasure IfcSurfaceStyleRendering::getTransparency()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Transparency;
    }
    else 
    {
        return Step::getUnset(m_Transparency);
    }    
}

IfcNormalisedRatioMeasure IfcSurfaceStyleRendering::getTransparency() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getTransparency();
}

void IfcSurfaceStyleRendering::setTransparency(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Transparency = value;
}

void IfcSurfaceStyleRendering::unsetTransparency()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Transparency = Step::getUnset(getTransparency());
}

bool IfcSurfaceStyleRendering::testTransparency() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTransparency()) == false;
}


IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DiffuseColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseColour() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getDiffuseColour();
}

void IfcSurfaceStyleRendering::setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseColour = value;
}

void IfcSurfaceStyleRendering::unsetDiffuseColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseColour = Step::getUnset(getDiffuseColour());
}

bool IfcSurfaceStyleRendering::testDiffuseColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDiffuseColour()) == false;
}


IfcColourOrFactor *IfcSurfaceStyleRendering::getTransmissionColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransmissionColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getTransmissionColour() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getTransmissionColour();
}

void IfcSurfaceStyleRendering::setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransmissionColour = value;
}

void IfcSurfaceStyleRendering::unsetTransmissionColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransmissionColour = Step::getUnset(getTransmissionColour());
}

bool IfcSurfaceStyleRendering::testTransmissionColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTransmissionColour()) == false;
}


IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseTransmissionColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DiffuseTransmissionColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseTransmissionColour() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getDiffuseTransmissionColour();
}

void IfcSurfaceStyleRendering::setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseTransmissionColour = value;
}

void IfcSurfaceStyleRendering::unsetDiffuseTransmissionColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseTransmissionColour = Step::getUnset(getDiffuseTransmissionColour());
}

bool IfcSurfaceStyleRendering::testDiffuseTransmissionColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDiffuseTransmissionColour()) == false;
}


IfcColourOrFactor *IfcSurfaceStyleRendering::getReflectionColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReflectionColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getReflectionColour() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getReflectionColour();
}

void IfcSurfaceStyleRendering::setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReflectionColour = value;
}

void IfcSurfaceStyleRendering::unsetReflectionColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReflectionColour = Step::getUnset(getReflectionColour());
}

bool IfcSurfaceStyleRendering::testReflectionColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getReflectionColour()) == false;
}


IfcColourOrFactor *IfcSurfaceStyleRendering::getSpecularColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SpecularColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getSpecularColour() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getSpecularColour();
}

void IfcSurfaceStyleRendering::setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecularColour = value;
}

void IfcSurfaceStyleRendering::unsetSpecularColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecularColour = Step::getUnset(getSpecularColour());
}

bool IfcSurfaceStyleRendering::testSpecularColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSpecularColour()) == false;
}


IfcSpecularHighlightSelect *IfcSurfaceStyleRendering::getSpecularHighlight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SpecularHighlight.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSpecularHighlightSelect *IfcSurfaceStyleRendering::getSpecularHighlight() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getSpecularHighlight();
}

void IfcSurfaceStyleRendering::setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecularHighlight = value;
}

void IfcSurfaceStyleRendering::unsetSpecularHighlight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpecularHighlight = Step::getUnset(getSpecularHighlight());
}

bool IfcSurfaceStyleRendering::testSpecularHighlight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSpecularHighlight()) == false;
}


IfcReflectanceMethodEnum IfcSurfaceStyleRendering::getReflectanceMethod()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReflectanceMethod;
    }
    else 
    {
        return IfcReflectanceMethodEnum_UNSET;
    }    
}

IfcReflectanceMethodEnum IfcSurfaceStyleRendering::getReflectanceMethod() const
{
    return const_cast<IfcSurfaceStyleRendering *>(this)->getReflectanceMethod();
}

void IfcSurfaceStyleRendering::setReflectanceMethod(IfcReflectanceMethodEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReflectanceMethod = value;
}

void IfcSurfaceStyleRendering::unsetReflectanceMethod()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReflectanceMethod = IfcReflectanceMethodEnum_UNSET;
}

bool IfcSurfaceStyleRendering::testReflectanceMethod() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getReflectanceMethod()) == false;
}

bool IfcSurfaceStyleRendering::init()
{
    if (IfcSurfaceStyleShading::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Transparency = Step::getUnset(m_Transparency);
    }
    else
    {
        m_Transparency = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DiffuseColour = NULL;
    }
    else
    {
        m_DiffuseColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_DiffuseColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_DiffuseColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransmissionColour = NULL;
    }
    else
    {
        m_TransmissionColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_TransmissionColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_TransmissionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DiffuseTransmissionColour = NULL;
    }
    else
    {
        m_DiffuseTransmissionColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_DiffuseTransmissionColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_DiffuseTransmissionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReflectionColour = NULL;
    }
    else
    {
        m_ReflectionColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_ReflectionColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ReflectionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SpecularColour = NULL;
    }
    else
    {
        m_SpecularColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_SpecularColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SpecularColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SpecularHighlight = NULL;
    }
    else
    {
        m_SpecularHighlight = new IfcSpecularHighlightSelect;
        if (arg[0] == '#') {
            m_SpecularHighlight->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCSPECULAREXPONENT")
                {
                    IfcSpecularExponent tmp_attr1 = Step::spfToReal(arg)

;
                    m_SpecularHighlight->setIfcSpecularExponent(tmp_attr1);
                }
                else if (type1 == "IFCSPECULARROUGHNESS")
                {
                    IfcSpecularRoughness tmp_attr1 = Step::spfToReal(arg)

;
                    m_SpecularHighlight->setIfcSpecularRoughness(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReflectanceMethod = IfcReflectanceMethodEnum_UNSET;
    }
    else
    {
        if (arg == ".BLINN.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_BLINN;
        }
        else if (arg == ".FLAT.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_FLAT;
        }
        else if (arg == ".GLASS.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_GLASS;
        }
        else if (arg == ".MATT.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_MATT;
        }
        else if (arg == ".METAL.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_METAL;
        }
        else if (arg == ".MIRROR.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_MIRROR;
        }
        else if (arg == ".PHONG.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_PHONG;
        }
        else if (arg == ".PLASTIC.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_PLASTIC;
        }
        else if (arg == ".STRAUSS.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_STRAUSS;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ReflectanceMethod = IfcReflectanceMethodEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSurfaceStyleRendering::copy(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop)
{
    IfcSurfaceStyleShading::copy(obj, copyop);
    setTransparency(obj.m_Transparency);
    setDiffuseColour((IfcColourOrFactor*)copyop(obj.m_DiffuseColour.get()));
    setTransmissionColour((IfcColourOrFactor*)copyop(obj.m_TransmissionColour.get()));
    setDiffuseTransmissionColour((IfcColourOrFactor*)copyop(obj.m_DiffuseTransmissionColour.get()));
    setReflectionColour((IfcColourOrFactor*)copyop(obj.m_ReflectionColour.get()));
    setSpecularColour((IfcColourOrFactor*)copyop(obj.m_SpecularColour.get()));
    setSpecularHighlight((IfcSpecularHighlightSelect*)copyop(obj.m_SpecularHighlight.get()));
    setReflectanceMethod(obj.m_ReflectanceMethod);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceStyleRendering, IfcSurfaceStyleShading)
