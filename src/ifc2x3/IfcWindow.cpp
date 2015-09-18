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



#include <ifc2x3/IfcWindow.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcWindow::IfcWindow(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_overallHeight = Step::getUnset(m_overallHeight);
    m_overallWidth = Step::getUnset(m_overallWidth);
}

IfcWindow::~IfcWindow() {
}

bool IfcWindow::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWindow(this);
}

const std::string &IfcWindow::type() const {
    return IfcWindow::s_type.getName();
}

const Step::ClassType &IfcWindow::getClassType() {
    return IfcWindow::s_type;
}

const Step::ClassType &IfcWindow::getType() const {
    return IfcWindow::s_type;
}

bool IfcWindow::isOfType(const Step::ClassType &t) const {
    return IfcWindow::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcWindow::getOverallHeight() {
    if (Step::BaseObject::inited()) {
        return m_overallHeight;
    }
    else {
        return Step::getUnset(m_overallHeight);
    }
}

const IfcPositiveLengthMeasure IfcWindow::getOverallHeight() const {
    IfcWindow * deConstObject = const_cast< IfcWindow * > (this);
    return deConstObject->getOverallHeight();
}

void IfcWindow::setOverallHeight(IfcPositiveLengthMeasure value) {
    m_overallHeight = value;
}

void IfcWindow::unsetOverallHeight() {
    m_overallHeight = Step::getUnset(getOverallHeight());
}

bool IfcWindow::testOverallHeight() const {
    return !Step::isUnset(getOverallHeight());
}

IfcPositiveLengthMeasure IfcWindow::getOverallWidth() {
    if (Step::BaseObject::inited()) {
        return m_overallWidth;
    }
    else {
        return Step::getUnset(m_overallWidth);
    }
}

const IfcPositiveLengthMeasure IfcWindow::getOverallWidth() const {
    IfcWindow * deConstObject = const_cast< IfcWindow * > (this);
    return deConstObject->getOverallWidth();
}

void IfcWindow::setOverallWidth(IfcPositiveLengthMeasure value) {
    m_overallWidth = value;
}

void IfcWindow::unsetOverallWidth() {
    m_overallWidth = Step::getUnset(getOverallWidth());
}

bool IfcWindow::testOverallWidth() const {
    return !Step::isUnset(getOverallWidth());
}

bool IfcWindow::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallHeight = Step::getUnset(m_overallHeight);
    }
    else {
        m_overallHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallWidth = Step::getUnset(m_overallWidth);
    }
    else {
        m_overallWidth = Step::spfToReal(arg);
    }
    return true;
}

void IfcWindow::copy(const IfcWindow &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setOverallHeight(obj.m_overallHeight);
    setOverallWidth(obj.m_overallWidth);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWindow::s_type("IfcWindow");
