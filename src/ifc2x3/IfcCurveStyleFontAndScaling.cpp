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



#include <ifc2x3/IfcCurveStyleFontAndScaling.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurveStyleFontSelect.h>
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

IfcCurveStyleFontAndScaling::IfcCurveStyleFontAndScaling(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_curveFont = NULL;
    m_curveFontScaling = Step::getUnset(m_curveFontScaling);
}

IfcCurveStyleFontAndScaling::~IfcCurveStyleFontAndScaling() {
}

bool IfcCurveStyleFontAndScaling::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveStyleFontAndScaling(this);
}

const std::string &IfcCurveStyleFontAndScaling::type() const {
    return IfcCurveStyleFontAndScaling::s_type.getName();
}

const Step::ClassType &IfcCurveStyleFontAndScaling::getClassType() {
    return IfcCurveStyleFontAndScaling::s_type;
}

const Step::ClassType &IfcCurveStyleFontAndScaling::getType() const {
    return IfcCurveStyleFontAndScaling::s_type;
}

bool IfcCurveStyleFontAndScaling::isOfType(const Step::ClassType &t) const {
    return IfcCurveStyleFontAndScaling::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcCurveStyleFontAndScaling::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcCurveStyleFontAndScaling::getName() const {
    IfcCurveStyleFontAndScaling * deConstObject = const_cast< IfcCurveStyleFontAndScaling * > (this);
    return deConstObject->getName();
}

void IfcCurveStyleFontAndScaling::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcCurveStyleFontAndScaling::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcCurveStyleFontAndScaling::testName() const {
    return !Step::isUnset(getName());
}

IfcCurveStyleFontSelect *IfcCurveStyleFontAndScaling::getCurveFont() {
    if (Step::BaseObject::inited()) {
        return m_curveFont.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveStyleFontSelect *IfcCurveStyleFontAndScaling::getCurveFont() const {
    IfcCurveStyleFontAndScaling * deConstObject = const_cast< IfcCurveStyleFontAndScaling * > (this);
    return deConstObject->getCurveFont();
}

void IfcCurveStyleFontAndScaling::setCurveFont(const Step::RefPtr< IfcCurveStyleFontSelect > &value) {
    m_curveFont = value;
}

void IfcCurveStyleFontAndScaling::unsetCurveFont() {
    m_curveFont = Step::getUnset(getCurveFont());
}

bool IfcCurveStyleFontAndScaling::testCurveFont() const {
    return !Step::isUnset(getCurveFont());
}

IfcPositiveRatioMeasure IfcCurveStyleFontAndScaling::getCurveFontScaling() {
    if (Step::BaseObject::inited()) {
        return m_curveFontScaling;
    }
    else {
        return Step::getUnset(m_curveFontScaling);
    }
}

const IfcPositiveRatioMeasure IfcCurveStyleFontAndScaling::getCurveFontScaling() const {
    IfcCurveStyleFontAndScaling * deConstObject = const_cast< IfcCurveStyleFontAndScaling * > (this);
    return deConstObject->getCurveFontScaling();
}

void IfcCurveStyleFontAndScaling::setCurveFontScaling(IfcPositiveRatioMeasure value) {
    m_curveFontScaling = value;
}

void IfcCurveStyleFontAndScaling::unsetCurveFontScaling() {
    m_curveFontScaling = Step::getUnset(getCurveFontScaling());
}

bool IfcCurveStyleFontAndScaling::testCurveFontScaling() const {
    return !Step::isUnset(getCurveFontScaling());
}

bool IfcCurveStyleFontAndScaling::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveFont = NULL;
    }
    else {
        m_curveFont = new IfcCurveStyleFontSelect;
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
        m_curveFontScaling = Step::getUnset(m_curveFontScaling);
    }
    else {
        m_curveFontScaling = Step::spfToReal(arg);
    }
    return true;
}

void IfcCurveStyleFontAndScaling::copy(const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    m_curveFont = new IfcCurveStyleFontSelect;
    m_curveFont->copy(*(obj.m_curveFont.get()), copyop);
    setCurveFontScaling(obj.m_curveFontScaling);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurveStyleFontAndScaling::s_type("IfcCurveStyleFontAndScaling");
