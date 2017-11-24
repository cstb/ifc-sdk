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



#include <ifc2x3/IfcTrimmedCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcTrimmingSelect.h>
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

IfcTrimmedCurve::IfcTrimmedCurve(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_basisCurve = NULL;
    m_senseAgreement = Step::getUnset(m_senseAgreement);
    m_masterRepresentation = IfcTrimmingPreference_UNSET;
}

IfcTrimmedCurve::~IfcTrimmedCurve() {
}

bool IfcTrimmedCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTrimmedCurve(this);
}

const std::string &IfcTrimmedCurve::type() const {
    return IfcTrimmedCurve::s_type.getName();
}

const Step::ClassType &IfcTrimmedCurve::getClassType() {
    return IfcTrimmedCurve::s_type;
}

const Step::ClassType &IfcTrimmedCurve::getType() const {
    return IfcTrimmedCurve::s_type;
}

bool IfcTrimmedCurve::isOfType(const Step::ClassType &t) const {
    return IfcTrimmedCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

IfcCurve *IfcTrimmedCurve::getBasisCurve() {
    if (Step::BaseObject::inited()) {
        return m_basisCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcTrimmedCurve::getBasisCurve() const {
    IfcTrimmedCurve * deConstObject = const_cast< IfcTrimmedCurve * > (this);
    return deConstObject->getBasisCurve();
}

void IfcTrimmedCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_basisCurve = value;
}

void IfcTrimmedCurve::unsetBasisCurve() {
    m_basisCurve = Step::getUnset(getBasisCurve());
}

bool IfcTrimmedCurve::testBasisCurve() const {
    return !Step::isUnset(getBasisCurve());
}

Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim1() {
    if (Step::BaseObject::inited()) {
        return m_trim1;
    }
    else {
        m_trim1.setUnset(true);
        return m_trim1;
    }
}

const Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim1() const {
    IfcTrimmedCurve * deConstObject = const_cast< IfcTrimmedCurve * > (this);
    return deConstObject->getTrim1();
}

void IfcTrimmedCurve::setTrim1(const Set_IfcTrimmingSelect_1_2 &value) {
    m_trim1 = value;
}

void IfcTrimmedCurve::unsetTrim1() {
    m_trim1.clear();
    m_trim1.setUnset(true);
}

bool IfcTrimmedCurve::testTrim1() const {
    return !m_trim1.isUnset();
}

Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim2() {
    if (Step::BaseObject::inited()) {
        return m_trim2;
    }
    else {
        m_trim2.setUnset(true);
        return m_trim2;
    }
}

const Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim2() const {
    IfcTrimmedCurve * deConstObject = const_cast< IfcTrimmedCurve * > (this);
    return deConstObject->getTrim2();
}

void IfcTrimmedCurve::setTrim2(const Set_IfcTrimmingSelect_1_2 &value) {
    m_trim2 = value;
}

void IfcTrimmedCurve::unsetTrim2() {
    m_trim2.clear();
    m_trim2.setUnset(true);
}

bool IfcTrimmedCurve::testTrim2() const {
    return !m_trim2.isUnset();
}

Step::Boolean IfcTrimmedCurve::getSenseAgreement() {
    if (Step::BaseObject::inited()) {
        return m_senseAgreement;
    }
    else {
        return Step::getUnset(m_senseAgreement);
    }
}

const Step::Boolean IfcTrimmedCurve::getSenseAgreement() const {
    IfcTrimmedCurve * deConstObject = const_cast< IfcTrimmedCurve * > (this);
    return deConstObject->getSenseAgreement();
}

void IfcTrimmedCurve::setSenseAgreement(Step::Boolean value) {
    m_senseAgreement = value;
}

void IfcTrimmedCurve::unsetSenseAgreement() {
    m_senseAgreement = Step::getUnset(getSenseAgreement());
}

bool IfcTrimmedCurve::testSenseAgreement() const {
    return !Step::isUnset(getSenseAgreement());
}

IfcTrimmingPreference IfcTrimmedCurve::getMasterRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_masterRepresentation;
    }
    else {
        return IfcTrimmingPreference_UNSET;
    }
}

const IfcTrimmingPreference IfcTrimmedCurve::getMasterRepresentation() const {
    IfcTrimmedCurve * deConstObject = const_cast< IfcTrimmedCurve * > (this);
    return deConstObject->getMasterRepresentation();
}

void IfcTrimmedCurve::setMasterRepresentation(IfcTrimmingPreference value) {
    m_masterRepresentation = value;
}

void IfcTrimmedCurve::unsetMasterRepresentation() {
    m_masterRepresentation = IfcTrimmingPreference_UNSET;
}

bool IfcTrimmedCurve::testMasterRepresentation() const {
    return getMasterRepresentation() != IfcTrimmingPreference_UNSET;
}

bool IfcTrimmedCurve::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisCurve = NULL;
    }
    else {
        m_basisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_trim1.setUnset(true);
    }
    else {
        m_trim1.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcTrimmingSelect > attr2;
                attr2 = new IfcTrimmingSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCPARAMETERVALUE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                    }
                }
                if (attr2.valid()) m_trim1.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_trim2.setUnset(true);
    }
    else {
        m_trim2.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcTrimmingSelect > attr2;
                attr2 = new IfcTrimmingSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCPARAMETERVALUE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                    }
                }
                if (attr2.valid()) m_trim2.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_senseAgreement = Step::getUnset(m_senseAgreement);
    }
    else {
        m_senseAgreement = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_masterRepresentation = IfcTrimmingPreference_UNSET;
    }
    else {
        if (arg == ".CARTESIAN.") {
            m_masterRepresentation = IfcTrimmingPreference_CARTESIAN;
        }
        else if (arg == ".PARAMETER.") {
            m_masterRepresentation = IfcTrimmingPreference_PARAMETER;
        }
        else if (arg == ".UNSPECIFIED.") {
            m_masterRepresentation = IfcTrimmingPreference_UNSPECIFIED;
        }
    }
    return true;
}

void IfcTrimmedCurve::copy(const IfcTrimmedCurve &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcTrimmingSelect >, 1, 2 >::const_iterator it_m_trim1;
    Step::Set< Step::RefPtr< IfcTrimmingSelect >, 1, 2 >::const_iterator it_m_trim2;
    IfcBoundedCurve::copy(obj, copyop);
    setBasisCurve((IfcCurve*)copyop(obj.m_basisCurve.get()));
    for (it_m_trim1 = obj.m_trim1.begin(); it_m_trim1 != obj.m_trim1.end(); ++it_m_trim1) {
        Step::RefPtr< IfcTrimmingSelect > copyTarget = new IfcTrimmingSelect;
        copyTarget->copy(*((*it_m_trim1).get()), copyop);
        m_trim1.insert(copyTarget.get());
    }
    for (it_m_trim2 = obj.m_trim2.begin(); it_m_trim2 != obj.m_trim2.end(); ++it_m_trim2) {
        Step::RefPtr< IfcTrimmingSelect > copyTarget = new IfcTrimmingSelect;
        copyTarget->copy(*((*it_m_trim2).get()), copyop);
        m_trim2.insert(copyTarget.get());
    }
    setSenseAgreement(obj.m_senseAgreement);
    setMasterRepresentation(obj.m_masterRepresentation);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTrimmedCurve::s_type("IfcTrimmedCurve");
