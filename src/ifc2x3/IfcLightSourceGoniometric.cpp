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


#include <ifc2x3/IfcLightSourceGoniometric.h>

#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcLightDistributionDataSourceSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLightSourceGoniometric::IfcLightSourceGoniometric(Step::Id id, Step::SPFData *args) : 
    IfcLightSource(id, args)
{
    m_Position = NULL;
    m_ColourAppearance = NULL;
    m_ColourTemperature = Step::getUnset(m_ColourTemperature);
    m_LuminousFlux = Step::getUnset(m_LuminousFlux);
    m_LightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
    m_LightDistributionDataSource = NULL;
}

IfcLightSourceGoniometric::~IfcLightSourceGoniometric()
{}

bool IfcLightSourceGoniometric::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLightSourceGoniometric(this);
}


IfcAxis2Placement3D *IfcLightSourceGoniometric::getPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Position.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement3D *IfcLightSourceGoniometric::getPosition() const
{
    return const_cast<IfcLightSourceGoniometric *>(this)->getPosition();
}

void IfcLightSourceGoniometric::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = value;
}

void IfcLightSourceGoniometric::unsetPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = Step::getUnset(getPosition());
}

bool IfcLightSourceGoniometric::testPosition() const
{
    return Step::isUnset(getPosition()) == false;
}


IfcColourRgb *IfcLightSourceGoniometric::getColourAppearance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ColourAppearance.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcLightSourceGoniometric::getColourAppearance() const
{
    return const_cast<IfcLightSourceGoniometric *>(this)->getColourAppearance();
}

void IfcLightSourceGoniometric::setColourAppearance(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ColourAppearance = value;
}

void IfcLightSourceGoniometric::unsetColourAppearance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ColourAppearance = Step::getUnset(getColourAppearance());
}

bool IfcLightSourceGoniometric::testColourAppearance() const
{
    return Step::isUnset(getColourAppearance()) == false;
}


IfcThermodynamicTemperatureMeasure IfcLightSourceGoniometric::getColourTemperature()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ColourTemperature;
    }
    else 
    {
        return Step::getUnset(m_ColourTemperature);
    }    
}

IfcThermodynamicTemperatureMeasure IfcLightSourceGoniometric::getColourTemperature() const
{
    return const_cast<IfcLightSourceGoniometric *>(this)->getColourTemperature();
}

void IfcLightSourceGoniometric::setColourTemperature(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ColourTemperature = value;
}

void IfcLightSourceGoniometric::unsetColourTemperature()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ColourTemperature = Step::getUnset(getColourTemperature());
}

bool IfcLightSourceGoniometric::testColourTemperature() const
{
    return Step::isUnset(getColourTemperature()) == false;
}


IfcLuminousFluxMeasure IfcLightSourceGoniometric::getLuminousFlux()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LuminousFlux;
    }
    else 
    {
        return Step::getUnset(m_LuminousFlux);
    }    
}

IfcLuminousFluxMeasure IfcLightSourceGoniometric::getLuminousFlux() const
{
    return const_cast<IfcLightSourceGoniometric *>(this)->getLuminousFlux();
}

void IfcLightSourceGoniometric::setLuminousFlux(IfcLuminousFluxMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LuminousFlux = value;
}

void IfcLightSourceGoniometric::unsetLuminousFlux()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LuminousFlux = Step::getUnset(getLuminousFlux());
}

bool IfcLightSourceGoniometric::testLuminousFlux() const
{
    return Step::isUnset(getLuminousFlux()) == false;
}


IfcLightEmissionSourceEnum IfcLightSourceGoniometric::getLightEmissionSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LightEmissionSource;
    }
    else 
    {
        return IfcLightEmissionSourceEnum_UNSET;
    }    
}

IfcLightEmissionSourceEnum IfcLightSourceGoniometric::getLightEmissionSource() const
{
    return const_cast<IfcLightSourceGoniometric *>(this)->getLightEmissionSource();
}

void IfcLightSourceGoniometric::setLightEmissionSource(IfcLightEmissionSourceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightEmissionSource = value;
}

void IfcLightSourceGoniometric::unsetLightEmissionSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
}

bool IfcLightSourceGoniometric::testLightEmissionSource() const
{
    return Step::isUnset(getLightEmissionSource()) == false;
}


IfcLightDistributionDataSourceSelect *IfcLightSourceGoniometric::getLightDistributionDataSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LightDistributionDataSource.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcLightDistributionDataSourceSelect *IfcLightSourceGoniometric::getLightDistributionDataSource() const
{
    return const_cast<IfcLightSourceGoniometric *>(this)->getLightDistributionDataSource();
}

void IfcLightSourceGoniometric::setLightDistributionDataSource(const Step::RefPtr< IfcLightDistributionDataSourceSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightDistributionDataSource = value;
}

void IfcLightSourceGoniometric::unsetLightDistributionDataSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LightDistributionDataSource = Step::getUnset(getLightDistributionDataSource());
}

bool IfcLightSourceGoniometric::testLightDistributionDataSource() const
{
    return Step::isUnset(getLightDistributionDataSource()) == false;
}

bool IfcLightSourceGoniometric::init()
{
    if (IfcLightSource::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Position = NULL;
    }
    else
    {
        m_Position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ColourAppearance = NULL;
    }
    else
    {
        m_ColourAppearance = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ColourTemperature = Step::getUnset(m_ColourTemperature);
    }
    else
    {
        m_ColourTemperature = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LuminousFlux = Step::getUnset(m_LuminousFlux);
    }
    else
    {
        m_LuminousFlux = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
    }
    else
    {
        if (arg == ".COMPACTFLUORESCENT.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_COMPACTFLUORESCENT;
        }
        else if (arg == ".FLUORESCENT.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_FLUORESCENT;
        }
        else if (arg == ".HIGHPRESSUREMERCURY.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_HIGHPRESSUREMERCURY;
        }
        else if (arg == ".HIGHPRESSURESODIUM.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_HIGHPRESSURESODIUM;
        }
        else if (arg == ".LIGHTEMITTINGDIODE.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_LIGHTEMITTINGDIODE;
        }
        else if (arg == ".LOWPRESSURESODIUM.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_LOWPRESSURESODIUM;
        }
        else if (arg == ".LOWVOLTAGEHALOGEN.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_LOWVOLTAGEHALOGEN;
        }
        else if (arg == ".MAINVOLTAGEHALOGEN.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_MAINVOLTAGEHALOGEN;
        }
        else if (arg == ".METALHALIDE.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_METALHALIDE;
        }
        else if (arg == ".TUNGSTENFILAMENT.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_TUNGSTENFILAMENT;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_LightEmissionSource = IfcLightEmissionSourceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LightDistributionDataSource = NULL;
    }
    else
    {
        m_LightDistributionDataSource = new IfcLightDistributionDataSourceSelect;
        if (arg[0] == '#') {
            m_LightDistributionDataSource->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcLightSourceGoniometric::copy(const IfcLightSourceGoniometric &obj, const CopyOp &copyop)
{
    IfcLightSource::copy(obj, copyop);
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_Position.get()));
    setColourAppearance((IfcColourRgb*)copyop(obj.m_ColourAppearance.get()));
    setColourTemperature(obj.m_ColourTemperature);
    setLuminousFlux(obj.m_LuminousFlux);
    setLightEmissionSource(obj.m_LightEmissionSource);
    setLightDistributionDataSource((IfcLightDistributionDataSourceSelect*)copyop(obj.m_LightDistributionDataSource.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLightSourceGoniometric, IfcLightSource)
