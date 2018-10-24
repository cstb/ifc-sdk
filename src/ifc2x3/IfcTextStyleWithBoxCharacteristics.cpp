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


#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>

#include <ifc2x3/IfcSizeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextStyleWithBoxCharacteristics::IfcTextStyleWithBoxCharacteristics(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_BoxHeight = Step::getUnset(m_BoxHeight);
    m_BoxWidth = Step::getUnset(m_BoxWidth);
    m_BoxSlantAngle = Step::getUnset(m_BoxSlantAngle);
    m_BoxRotateAngle = Step::getUnset(m_BoxRotateAngle);
    m_CharacterSpacing = NULL;
}

IfcTextStyleWithBoxCharacteristics::~IfcTextStyleWithBoxCharacteristics()
{}

bool IfcTextStyleWithBoxCharacteristics::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextStyleWithBoxCharacteristics(this);
}


IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BoxHeight;
    }
    else 
    {
        return Step::getUnset(m_BoxHeight);
    }    
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxHeight() const
{
    return const_cast<IfcTextStyleWithBoxCharacteristics *>(this)->getBoxHeight();
}

void IfcTextStyleWithBoxCharacteristics::setBoxHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxHeight = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxHeight = Step::getUnset(getBoxHeight());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxHeight() const
{
    return Step::isUnset(getBoxHeight()) == false;
}


IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BoxWidth;
    }
    else 
    {
        return Step::getUnset(m_BoxWidth);
    }    
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxWidth() const
{
    return const_cast<IfcTextStyleWithBoxCharacteristics *>(this)->getBoxWidth();
}

void IfcTextStyleWithBoxCharacteristics::setBoxWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxWidth = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxWidth = Step::getUnset(getBoxWidth());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxWidth() const
{
    return Step::isUnset(getBoxWidth()) == false;
}


IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxSlantAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BoxSlantAngle;
    }
    else 
    {
        return Step::getUnset(m_BoxSlantAngle);
    }    
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxSlantAngle() const
{
    return const_cast<IfcTextStyleWithBoxCharacteristics *>(this)->getBoxSlantAngle();
}

void IfcTextStyleWithBoxCharacteristics::setBoxSlantAngle(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxSlantAngle = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxSlantAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxSlantAngle = Step::getUnset(getBoxSlantAngle());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxSlantAngle() const
{
    return Step::isUnset(getBoxSlantAngle()) == false;
}


IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxRotateAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BoxRotateAngle;
    }
    else 
    {
        return Step::getUnset(m_BoxRotateAngle);
    }    
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxRotateAngle() const
{
    return const_cast<IfcTextStyleWithBoxCharacteristics *>(this)->getBoxRotateAngle();
}

void IfcTextStyleWithBoxCharacteristics::setBoxRotateAngle(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxRotateAngle = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxRotateAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BoxRotateAngle = Step::getUnset(getBoxRotateAngle());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxRotateAngle() const
{
    return Step::isUnset(getBoxRotateAngle()) == false;
}


IfcSizeSelect *IfcTextStyleWithBoxCharacteristics::getCharacterSpacing()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CharacterSpacing.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcTextStyleWithBoxCharacteristics::getCharacterSpacing() const
{
    return const_cast<IfcTextStyleWithBoxCharacteristics *>(this)->getCharacterSpacing();
}

void IfcTextStyleWithBoxCharacteristics::setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CharacterSpacing = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetCharacterSpacing()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CharacterSpacing = Step::getUnset(getCharacterSpacing());
}

bool IfcTextStyleWithBoxCharacteristics::testCharacterSpacing() const
{
    return Step::isUnset(getCharacterSpacing()) == false;
}

bool IfcTextStyleWithBoxCharacteristics::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BoxHeight = Step::getUnset(m_BoxHeight);
    }
    else
    {
        m_BoxHeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BoxWidth = Step::getUnset(m_BoxWidth);
    }
    else
    {
        m_BoxWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BoxSlantAngle = Step::getUnset(m_BoxSlantAngle);
    }
    else
    {
        m_BoxSlantAngle = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BoxRotateAngle = Step::getUnset(m_BoxRotateAngle);
    }
    else
    {
        m_BoxRotateAngle = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CharacterSpacing = NULL;
    }
    else
    {
        m_CharacterSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_CharacterSpacing->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CharacterSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CharacterSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_CharacterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CharacterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CharacterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_CharacterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleWithBoxCharacteristics::copy(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setBoxHeight(obj.m_BoxHeight);
    setBoxWidth(obj.m_BoxWidth);
    setBoxSlantAngle(obj.m_BoxSlantAngle);
    setBoxRotateAngle(obj.m_BoxRotateAngle);
    setCharacterSpacing((IfcSizeSelect*)copyop(obj.m_CharacterSpacing.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextStyleWithBoxCharacteristics, Step::BaseEntity)
