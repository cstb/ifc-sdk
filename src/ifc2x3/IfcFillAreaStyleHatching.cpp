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



#include <ifc2x3/IfcFillAreaStyleHatching.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/IfcHatchLineDistanceSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFillAreaStyleHatching::IfcFillAreaStyleHatching(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_hatchLineAppearance = NULL;
    m_startOfNextHatchLine = NULL;
    m_pointOfReferenceHatchLine = NULL;
    m_patternStart = NULL;
    m_hatchLineAngle = Step::getUnset(m_hatchLineAngle);
}

IfcFillAreaStyleHatching::~IfcFillAreaStyleHatching() {
}

bool IfcFillAreaStyleHatching::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillAreaStyleHatching(this);
}

const std::string &IfcFillAreaStyleHatching::type() const {
    return IfcFillAreaStyleHatching::s_type.getName();
}

const Step::ClassType &IfcFillAreaStyleHatching::getClassType() {
    return IfcFillAreaStyleHatching::s_type;
}

const Step::ClassType &IfcFillAreaStyleHatching::getType() const {
    return IfcFillAreaStyleHatching::s_type;
}

bool IfcFillAreaStyleHatching::isOfType(const Step::ClassType &t) const {
    return IfcFillAreaStyleHatching::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCurveStyle *IfcFillAreaStyleHatching::getHatchLineAppearance() {
    if (Step::BaseObject::inited()) {
        return m_hatchLineAppearance.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveStyle *IfcFillAreaStyleHatching::getHatchLineAppearance() const {
    IfcFillAreaStyleHatching * deConstObject = const_cast< IfcFillAreaStyleHatching * > (this);
    return deConstObject->getHatchLineAppearance();
}

void IfcFillAreaStyleHatching::setHatchLineAppearance(const Step::RefPtr< IfcCurveStyle > &value) {
    m_hatchLineAppearance = value;
}

void IfcFillAreaStyleHatching::unsetHatchLineAppearance() {
    m_hatchLineAppearance = Step::getUnset(getHatchLineAppearance());
}

bool IfcFillAreaStyleHatching::testHatchLineAppearance() const {
    return !Step::isUnset(getHatchLineAppearance());
}

IfcHatchLineDistanceSelect *IfcFillAreaStyleHatching::getStartOfNextHatchLine() {
    if (Step::BaseObject::inited()) {
        return m_startOfNextHatchLine.get();
    }
    else {
        return NULL;
    }
}

const IfcHatchLineDistanceSelect *IfcFillAreaStyleHatching::getStartOfNextHatchLine() const {
    IfcFillAreaStyleHatching * deConstObject = const_cast< IfcFillAreaStyleHatching * > (this);
    return deConstObject->getStartOfNextHatchLine();
}

void IfcFillAreaStyleHatching::setStartOfNextHatchLine(const Step::RefPtr< IfcHatchLineDistanceSelect > &value) {
    m_startOfNextHatchLine = value;
}

void IfcFillAreaStyleHatching::unsetStartOfNextHatchLine() {
    m_startOfNextHatchLine = Step::getUnset(getStartOfNextHatchLine());
}

bool IfcFillAreaStyleHatching::testStartOfNextHatchLine() const {
    return !Step::isUnset(getStartOfNextHatchLine());
}

IfcCartesianPoint *IfcFillAreaStyleHatching::getPointOfReferenceHatchLine() {
    if (Step::BaseObject::inited()) {
        return m_pointOfReferenceHatchLine.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcFillAreaStyleHatching::getPointOfReferenceHatchLine() const {
    IfcFillAreaStyleHatching * deConstObject = const_cast< IfcFillAreaStyleHatching * > (this);
    return deConstObject->getPointOfReferenceHatchLine();
}

void IfcFillAreaStyleHatching::setPointOfReferenceHatchLine(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_pointOfReferenceHatchLine = value;
}

void IfcFillAreaStyleHatching::unsetPointOfReferenceHatchLine() {
    m_pointOfReferenceHatchLine = Step::getUnset(getPointOfReferenceHatchLine());
}

bool IfcFillAreaStyleHatching::testPointOfReferenceHatchLine() const {
    return !Step::isUnset(getPointOfReferenceHatchLine());
}

IfcCartesianPoint *IfcFillAreaStyleHatching::getPatternStart() {
    if (Step::BaseObject::inited()) {
        return m_patternStart.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcFillAreaStyleHatching::getPatternStart() const {
    IfcFillAreaStyleHatching * deConstObject = const_cast< IfcFillAreaStyleHatching * > (this);
    return deConstObject->getPatternStart();
}

void IfcFillAreaStyleHatching::setPatternStart(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_patternStart = value;
}

void IfcFillAreaStyleHatching::unsetPatternStart() {
    m_patternStart = Step::getUnset(getPatternStart());
}

bool IfcFillAreaStyleHatching::testPatternStart() const {
    return !Step::isUnset(getPatternStart());
}

IfcPlaneAngleMeasure IfcFillAreaStyleHatching::getHatchLineAngle() {
    if (Step::BaseObject::inited()) {
        return m_hatchLineAngle;
    }
    else {
        return Step::getUnset(m_hatchLineAngle);
    }
}

const IfcPlaneAngleMeasure IfcFillAreaStyleHatching::getHatchLineAngle() const {
    IfcFillAreaStyleHatching * deConstObject = const_cast< IfcFillAreaStyleHatching * > (this);
    return deConstObject->getHatchLineAngle();
}

void IfcFillAreaStyleHatching::setHatchLineAngle(IfcPlaneAngleMeasure value) {
    m_hatchLineAngle = value;
}

void IfcFillAreaStyleHatching::unsetHatchLineAngle() {
    m_hatchLineAngle = Step::getUnset(getHatchLineAngle());
}

bool IfcFillAreaStyleHatching::testHatchLineAngle() const {
    return !Step::isUnset(getHatchLineAngle());
}

bool IfcFillAreaStyleHatching::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hatchLineAppearance = NULL;
    }
    else {
        m_hatchLineAppearance = static_cast< IfcCurveStyle * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startOfNextHatchLine = NULL;
    }
    else {
        m_startOfNextHatchLine = new IfcHatchLineDistanceSelect;
        if (arg[0] == '#') {
            m_startOfNextHatchLine->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_startOfNextHatchLine->setIfcPositiveLengthMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointOfReferenceHatchLine = NULL;
    }
    else {
        m_pointOfReferenceHatchLine = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_patternStart = NULL;
    }
    else {
        m_patternStart = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hatchLineAngle = Step::getUnset(m_hatchLineAngle);
    }
    else {
        m_hatchLineAngle = Step::spfToReal(arg);
    }
    return true;
}

void IfcFillAreaStyleHatching::copy(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setHatchLineAppearance((IfcCurveStyle*)copyop(obj.m_hatchLineAppearance.get()));
    m_startOfNextHatchLine = new IfcHatchLineDistanceSelect;
    m_startOfNextHatchLine->copy(*(obj.m_startOfNextHatchLine.get()), copyop);
    setPointOfReferenceHatchLine((IfcCartesianPoint*)copyop(obj.m_pointOfReferenceHatchLine.get()));
    setPatternStart((IfcCartesianPoint*)copyop(obj.m_patternStart.get()));
    setHatchLineAngle(obj.m_hatchLineAngle);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFillAreaStyleHatching::s_type("IfcFillAreaStyleHatching");
