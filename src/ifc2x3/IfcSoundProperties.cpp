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


#include <ifc2x3/IfcSoundProperties.h>

#include <ifc2x3/IfcSoundValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSoundProperties::IfcSoundProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_IsAttenuating = Step::getUnset(m_IsAttenuating);
    m_SoundScale = IfcSoundScaleEnum_UNSET;
    m_SoundValues.setUnset(true);
}

IfcSoundProperties::~IfcSoundProperties()
{}

bool IfcSoundProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSoundProperties(this);
}


IfcBoolean IfcSoundProperties::getIsAttenuating()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsAttenuating;
    }
    else 
    {
        return Step::getUnset(m_IsAttenuating);
    }    
}

IfcBoolean IfcSoundProperties::getIsAttenuating() const
{
    return const_cast<IfcSoundProperties *>(this)->getIsAttenuating();
}

void IfcSoundProperties::setIsAttenuating(IfcBoolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsAttenuating = value;
}

void IfcSoundProperties::unsetIsAttenuating()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsAttenuating = Step::getUnset(getIsAttenuating());
}

bool IfcSoundProperties::testIsAttenuating() const
{
    return Step::isUnset(getIsAttenuating()) == false;
}


IfcSoundScaleEnum IfcSoundProperties::getSoundScale()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SoundScale;
    }
    else 
    {
        return IfcSoundScaleEnum_UNSET;
    }    
}

IfcSoundScaleEnum IfcSoundProperties::getSoundScale() const
{
    return const_cast<IfcSoundProperties *>(this)->getSoundScale();
}

void IfcSoundProperties::setSoundScale(IfcSoundScaleEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundScale = value;
}

void IfcSoundProperties::unsetSoundScale()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundScale = IfcSoundScaleEnum_UNSET;
}

bool IfcSoundProperties::testSoundScale() const
{
    return Step::isUnset(getSoundScale()) == false;
}


List_IfcSoundValue_1_8 &IfcSoundProperties::getSoundValues()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SoundValues;
    }
    else 
    {
        m_SoundValues.setUnset(true);
        return m_SoundValues;
    }    
}

const List_IfcSoundValue_1_8 &IfcSoundProperties::getSoundValues() const
{
    return const_cast<IfcSoundProperties *>(this)->getSoundValues();
}

void IfcSoundProperties::setSoundValues(const List_IfcSoundValue_1_8 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundValues = value;
}

void IfcSoundProperties::unsetSoundValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundValues.clear();
    m_SoundValues.setUnset(true);
}

bool IfcSoundProperties::testSoundValues() const
{
    return m_SoundValues.isUnset() == false;
}

bool IfcSoundProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsAttenuating = Step::getUnset(m_IsAttenuating);
    }
    else
    {
        m_IsAttenuating = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SoundScale = IfcSoundScaleEnum_UNSET;
    }
    else
    {
        if (arg == ".DBA.")
        {
            m_SoundScale = IfcSoundScaleEnum_DBA;
        }
        else if (arg == ".DBB.")
        {
            m_SoundScale = IfcSoundScaleEnum_DBB;
        }
        else if (arg == ".DBC.")
        {
            m_SoundScale = IfcSoundScaleEnum_DBC;
        }
        else if (arg == ".NC.")
        {
            m_SoundScale = IfcSoundScaleEnum_NC;
        }
        else if (arg == ".NR.")
        {
            m_SoundScale = IfcSoundScaleEnum_NR;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_SoundScale = IfcSoundScaleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_SoundScale = IfcSoundScaleEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SoundValues.setUnset(true);
    }
    else
    {
        m_SoundValues.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_SoundValues.push_back(static_cast< IfcSoundValue * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcSoundProperties::copy(const IfcSoundProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setIsAttenuating(obj.m_IsAttenuating);
    setSoundScale(obj.m_SoundScale);
    List_IfcSoundValue_1_8::const_iterator it_m_SoundValues;
    for (it_m_SoundValues = obj.m_SoundValues.begin(); it_m_SoundValues != obj.m_SoundValues.end(); ++it_m_SoundValues)
    {
        Step::RefPtr< IfcSoundValue > copyTarget = (IfcSoundValue *) (copyop((*it_m_SoundValues).get()));
        m_SoundValues.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSoundProperties, IfcPropertySetDefinition)
