/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcTrimmedCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcTrimmingSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTrimmedCurve::IfcTrimmedCurve(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_basisCurve = NULL;
    m_trim1.setUnset(true);
    m_trim2.setUnset(true);
    m_senseAgreement = Step::getUnset(m_senseAgreement);
    m_masterRepresentation = IfcTrimmingPreference_UNSET;
}

IfcTrimmedCurve::~IfcTrimmedCurve() {
}

bool IfcTrimmedCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTrimmedCurve(this);
}

const std::string &IfcTrimmedCurve::type() {
    return IfcTrimmedCurve::s_type.getName();
}

Step::ClassType IfcTrimmedCurve::getClassType() {
    return IfcTrimmedCurve::s_type;
}

Step::ClassType IfcTrimmedCurve::getType() const {
    return IfcTrimmedCurve::s_type;
}

bool IfcTrimmedCurve::isOfType(Step::ClassType t) {
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

void IfcTrimmedCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_basisCurve = value;
}

Step::Set< Step::RefPtr< IfcTrimmingSelect > > &IfcTrimmedCurve::getTrim1() {
    if (Step::BaseObject::inited()) {
        return m_trim1;
    }
    else {
        m_trim1.setUnset(true);
        return m_trim1;
    }
}

void IfcTrimmedCurve::setTrim1(const Step::Set< Step::RefPtr< IfcTrimmingSelect > > &value) {
    m_trim1 = value;
}

Step::Set< Step::RefPtr< IfcTrimmingSelect > > &IfcTrimmedCurve::getTrim2() {
    if (Step::BaseObject::inited()) {
        return m_trim2;
    }
    else {
        m_trim2.setUnset(true);
        return m_trim2;
    }
}

void IfcTrimmedCurve::setTrim2(const Step::Set< Step::RefPtr< IfcTrimmingSelect > > &value) {
    m_trim2 = value;
}

Step::Bool IfcTrimmedCurve::getSenseAgreement() {
    if (Step::BaseObject::inited()) {
        return m_senseAgreement;
    }
    else {
        return Step::getUnset(m_senseAgreement);
    }
}

void IfcTrimmedCurve::setSenseAgreement(Step::Bool value) {
    m_senseAgreement = value;
}

IfcTrimmingPreference IfcTrimmedCurve::getMasterRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_masterRepresentation;
    }
    else {
        return IfcTrimmingPreference_UNSET;
    }
}

void IfcTrimmedCurve::setMasterRepresentation(IfcTrimmingPreference value) {
    m_masterRepresentation = value;
}

void IfcTrimmedCurve::release() {
    IfcBoundedCurve::release();
    m_basisCurve.release();
    m_trim1.clear();
    m_trim2.clear();
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
        m_basisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
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
                m_trim1.insert(attr2);
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
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
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
                m_trim2.insert(attr2);
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
        m_senseAgreement = Step::spfToBool(arg);
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
    Step::Set< Step::RefPtr< IfcTrimmingSelect > >::const_iterator it_m_trim1;
    Step::Set< Step::RefPtr< IfcTrimmingSelect > >::const_iterator it_m_trim2;
    IfcBoundedCurve::copy(obj, copyop);
    setBasisCurve(copyop(obj.m_basisCurve.get()));
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

IFC2X3_DLL_DEF Step::ClassType IfcTrimmedCurve::s_type("IfcTrimmedCurve");
