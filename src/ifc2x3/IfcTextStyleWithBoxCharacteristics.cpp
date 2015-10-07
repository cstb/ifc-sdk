// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTextStyleWithBoxCharacteristics::IfcTextStyleWithBoxCharacteristics(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_boxHeight = Step::getUnset(m_boxHeight);
    m_boxWidth = Step::getUnset(m_boxWidth);
    m_boxSlantAngle = Step::getUnset(m_boxSlantAngle);
    m_boxRotateAngle = Step::getUnset(m_boxRotateAngle);
    m_characterSpacing = NULL;
}

IfcTextStyleWithBoxCharacteristics::~IfcTextStyleWithBoxCharacteristics() {
}

bool IfcTextStyleWithBoxCharacteristics::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextStyleWithBoxCharacteristics(this);
}

const std::string &IfcTextStyleWithBoxCharacteristics::type() const {
    return IfcTextStyleWithBoxCharacteristics::s_type.getName();
}

const Step::ClassType &IfcTextStyleWithBoxCharacteristics::getClassType() {
    return IfcTextStyleWithBoxCharacteristics::s_type;
}

const Step::ClassType &IfcTextStyleWithBoxCharacteristics::getType() const {
    return IfcTextStyleWithBoxCharacteristics::s_type;
}

bool IfcTextStyleWithBoxCharacteristics::isOfType(const Step::ClassType &t) const {
    return IfcTextStyleWithBoxCharacteristics::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxHeight() {
    if (Step::BaseObject::inited()) {
        return m_boxHeight;
    }
    else {
        return Step::getUnset(m_boxHeight);
    }
}

const IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxHeight() const {
    IfcTextStyleWithBoxCharacteristics * deConstObject = const_cast< IfcTextStyleWithBoxCharacteristics * > (this);
    return deConstObject->getBoxHeight();
}

void IfcTextStyleWithBoxCharacteristics::setBoxHeight(IfcPositiveLengthMeasure value) {
    m_boxHeight = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxHeight() {
    m_boxHeight = Step::getUnset(getBoxHeight());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxHeight() const {
    return !Step::isUnset(getBoxHeight());
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxWidth() {
    if (Step::BaseObject::inited()) {
        return m_boxWidth;
    }
    else {
        return Step::getUnset(m_boxWidth);
    }
}

const IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxWidth() const {
    IfcTextStyleWithBoxCharacteristics * deConstObject = const_cast< IfcTextStyleWithBoxCharacteristics * > (this);
    return deConstObject->getBoxWidth();
}

void IfcTextStyleWithBoxCharacteristics::setBoxWidth(IfcPositiveLengthMeasure value) {
    m_boxWidth = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxWidth() {
    m_boxWidth = Step::getUnset(getBoxWidth());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxWidth() const {
    return !Step::isUnset(getBoxWidth());
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxSlantAngle() {
    if (Step::BaseObject::inited()) {
        return m_boxSlantAngle;
    }
    else {
        return Step::getUnset(m_boxSlantAngle);
    }
}

const IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxSlantAngle() const {
    IfcTextStyleWithBoxCharacteristics * deConstObject = const_cast< IfcTextStyleWithBoxCharacteristics * > (this);
    return deConstObject->getBoxSlantAngle();
}

void IfcTextStyleWithBoxCharacteristics::setBoxSlantAngle(IfcPlaneAngleMeasure value) {
    m_boxSlantAngle = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxSlantAngle() {
    m_boxSlantAngle = Step::getUnset(getBoxSlantAngle());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxSlantAngle() const {
    return !Step::isUnset(getBoxSlantAngle());
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxRotateAngle() {
    if (Step::BaseObject::inited()) {
        return m_boxRotateAngle;
    }
    else {
        return Step::getUnset(m_boxRotateAngle);
    }
}

const IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxRotateAngle() const {
    IfcTextStyleWithBoxCharacteristics * deConstObject = const_cast< IfcTextStyleWithBoxCharacteristics * > (this);
    return deConstObject->getBoxRotateAngle();
}

void IfcTextStyleWithBoxCharacteristics::setBoxRotateAngle(IfcPlaneAngleMeasure value) {
    m_boxRotateAngle = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetBoxRotateAngle() {
    m_boxRotateAngle = Step::getUnset(getBoxRotateAngle());
}

bool IfcTextStyleWithBoxCharacteristics::testBoxRotateAngle() const {
    return !Step::isUnset(getBoxRotateAngle());
}

IfcSizeSelect *IfcTextStyleWithBoxCharacteristics::getCharacterSpacing() {
    if (Step::BaseObject::inited()) {
        return m_characterSpacing.get();
    }
    else {
        return NULL;
    }
}

const IfcSizeSelect *IfcTextStyleWithBoxCharacteristics::getCharacterSpacing() const {
    IfcTextStyleWithBoxCharacteristics * deConstObject = const_cast< IfcTextStyleWithBoxCharacteristics * > (this);
    return deConstObject->getCharacterSpacing();
}

void IfcTextStyleWithBoxCharacteristics::setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
    m_characterSpacing = value;
}

void IfcTextStyleWithBoxCharacteristics::unsetCharacterSpacing() {
    m_characterSpacing = Step::getUnset(getCharacterSpacing());
}

bool IfcTextStyleWithBoxCharacteristics::testCharacterSpacing() const {
    return !Step::isUnset(getCharacterSpacing());
}

bool IfcTextStyleWithBoxCharacteristics::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxHeight = Step::getUnset(m_boxHeight);
    }
    else {
        m_boxHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxWidth = Step::getUnset(m_boxWidth);
    }
    else {
        m_boxWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxSlantAngle = Step::getUnset(m_boxSlantAngle);
    }
    else {
        m_boxSlantAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxRotateAngle = Step::getUnset(m_boxRotateAngle);
    }
    else {
        m_boxRotateAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_characterSpacing = NULL;
    }
    else {
        m_characterSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_characterSpacing->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_characterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleWithBoxCharacteristics::copy(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setBoxHeight(obj.m_boxHeight);
    setBoxWidth(obj.m_boxWidth);
    setBoxSlantAngle(obj.m_boxSlantAngle);
    setBoxRotateAngle(obj.m_boxRotateAngle);
    m_characterSpacing = new IfcSizeSelect;
    m_characterSpacing->copy(*(obj.m_characterSpacing.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTextStyleWithBoxCharacteristics::s_type("IfcTextStyleWithBoxCharacteristics");
