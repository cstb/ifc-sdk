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



#include <ifc2x3/IfcCurveStyleFont.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurveStyleFontPattern.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCurveStyleFont::IfcCurveStyleFont(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcCurveStyleFont::~IfcCurveStyleFont() {
}

bool IfcCurveStyleFont::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveStyleFont(this);
}

const std::string &IfcCurveStyleFont::type() const {
    return IfcCurveStyleFont::s_type.getName();
}

const Step::ClassType &IfcCurveStyleFont::getClassType() {
    return IfcCurveStyleFont::s_type;
}

const Step::ClassType &IfcCurveStyleFont::getType() const {
    return IfcCurveStyleFont::s_type;
}

bool IfcCurveStyleFont::isOfType(const Step::ClassType &t) const {
    return IfcCurveStyleFont::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcCurveStyleFont::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcCurveStyleFont::getName() const {
    IfcCurveStyleFont * deConstObject = const_cast< IfcCurveStyleFont * > (this);
    return deConstObject->getName();
}

void IfcCurveStyleFont::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcCurveStyleFont::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcCurveStyleFont::testName() const {
    return !Step::isUnset(getName());
}

List_IfcCurveStyleFontPattern_1_n &IfcCurveStyleFont::getPatternList() {
    if (Step::BaseObject::inited()) {
        return m_patternList;
    }
    else {
        m_patternList.setUnset(true);
        return m_patternList;
    }
}

const List_IfcCurveStyleFontPattern_1_n &IfcCurveStyleFont::getPatternList() const {
    IfcCurveStyleFont * deConstObject = const_cast< IfcCurveStyleFont * > (this);
    return deConstObject->getPatternList();
}

void IfcCurveStyleFont::setPatternList(const List_IfcCurveStyleFontPattern_1_n &value) {
    m_patternList = value;
}

void IfcCurveStyleFont::unsetPatternList() {
    m_patternList.clear();
    m_patternList.setUnset(true);
}

bool IfcCurveStyleFont::testPatternList() const {
    return !m_patternList.isUnset();
}

bool IfcCurveStyleFont::init() {
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
        m_patternList.setUnset(true);
    }
    else {
        m_patternList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCurveStyleFontPattern > attr2;
                attr2 = static_cast< IfcCurveStyleFontPattern * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_patternList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcCurveStyleFont::copy(const IfcCurveStyleFont &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCurveStyleFontPattern >, 1 >::const_iterator it_m_patternList;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    for (it_m_patternList = obj.m_patternList.begin(); it_m_patternList != obj.m_patternList.end(); ++it_m_patternList) {
        Step::RefPtr< IfcCurveStyleFontPattern > copyTarget = (IfcCurveStyleFontPattern *) (copyop((*it_m_patternList).get()));
        m_patternList.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurveStyleFont::s_type("IfcCurveStyleFont");
