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



#include <ifc2x3/IfcCurveStyle.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColour.h>
#include <ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h>
#include <ifc2x3/IfcPresentationStyle.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCurveStyle::IfcCurveStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_curveFont = NULL;
    m_curveWidth = NULL;
    m_curveColour = NULL;
}

IfcCurveStyle::~IfcCurveStyle() {
}

bool IfcCurveStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveStyle(this);
}

const std::string &IfcCurveStyle::type() const {
    return IfcCurveStyle::s_type.getName();
}

const Step::ClassType &IfcCurveStyle::getClassType() {
    return IfcCurveStyle::s_type;
}

const Step::ClassType &IfcCurveStyle::getType() const {
    return IfcCurveStyle::s_type;
}

bool IfcCurveStyle::isOfType(const Step::ClassType &t) const {
    return IfcCurveStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcCurveFontOrScaledCurveFontSelect *IfcCurveStyle::getCurveFont() {
    if (Step::BaseObject::inited()) {
        return m_curveFont.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveFontOrScaledCurveFontSelect *IfcCurveStyle::getCurveFont() const {
    IfcCurveStyle * deConstObject = const_cast< IfcCurveStyle * > (this);
    return deConstObject->getCurveFont();
}

void IfcCurveStyle::setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value) {
    m_curveFont = value;
}

void IfcCurveStyle::unsetCurveFont() {
    m_curveFont = Step::getUnset(getCurveFont());
}

bool IfcCurveStyle::testCurveFont() const {
    return !Step::isUnset(getCurveFont());
}

IfcSizeSelect *IfcCurveStyle::getCurveWidth() {
    if (Step::BaseObject::inited()) {
        return m_curveWidth.get();
    }
    else {
        return NULL;
    }
}

const IfcSizeSelect *IfcCurveStyle::getCurveWidth() const {
    IfcCurveStyle * deConstObject = const_cast< IfcCurveStyle * > (this);
    return deConstObject->getCurveWidth();
}

void IfcCurveStyle::setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value) {
    m_curveWidth = value;
}

void IfcCurveStyle::unsetCurveWidth() {
    m_curveWidth = Step::getUnset(getCurveWidth());
}

bool IfcCurveStyle::testCurveWidth() const {
    return !Step::isUnset(getCurveWidth());
}

IfcColour *IfcCurveStyle::getCurveColour() {
    if (Step::BaseObject::inited()) {
        return m_curveColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColour *IfcCurveStyle::getCurveColour() const {
    IfcCurveStyle * deConstObject = const_cast< IfcCurveStyle * > (this);
    return deConstObject->getCurveColour();
}

void IfcCurveStyle::setCurveColour(const Step::RefPtr< IfcColour > &value) {
    m_curveColour = value;
}

void IfcCurveStyle::unsetCurveColour() {
    m_curveColour = Step::getUnset(getCurveColour());
}

bool IfcCurveStyle::testCurveColour() const {
    return !Step::isUnset(getCurveColour());
}

bool IfcCurveStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveFont = NULL;
    }
    else {
        m_curveFont = new IfcCurveFontOrScaledCurveFontSelect;
        if (arg[0] == '#') {
            m_curveFont->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveWidth = NULL;
    }
    else {
        m_curveWidth = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_curveWidth->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_curveWidth->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_curveWidth->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveColour = NULL;
    }
    else {
        m_curveColour = new IfcColour;
        if (arg[0] == '#') {
            m_curveColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcCurveStyle::copy(const IfcCurveStyle &obj, const CopyOp &copyop) {
    IfcPresentationStyle::copy(obj, copyop);
    m_curveFont = new IfcCurveFontOrScaledCurveFontSelect;
    m_curveFont->copy(*(obj.m_curveFont.get()), copyop);
    m_curveWidth = new IfcSizeSelect;
    m_curveWidth->copy(*(obj.m_curveWidth.get()), copyop);
    m_curveColour = new IfcColour;
    m_curveColour->copy(*(obj.m_curveColour.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurveStyle::s_type("IfcCurveStyle");
