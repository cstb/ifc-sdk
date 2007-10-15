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

#include "ifc2x3/IfcTelecomAddress.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAddress.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTelecomAddress::IfcTelecomAddress(Step::Id id, Step::SPFData *args) : IfcAddress(id, args) {
    m_telephoneNumbers.setUnset(true);
    m_facsimileNumbers.setUnset(true);
    m_pagerNumber = Step::getUnset(m_pagerNumber);
    m_electronicMailAddresses.setUnset(true);
    m_wWWHomePageURL = Step::getUnset(m_wWWHomePageURL);
}

IfcTelecomAddress::~IfcTelecomAddress() {
}

bool IfcTelecomAddress::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTelecomAddress(this);
}

const std::string &IfcTelecomAddress::type() {
    return IfcTelecomAddress::s_type.getName();
}

Step::ClassType IfcTelecomAddress::getClassType() {
    return IfcTelecomAddress::s_type;
}

Step::ClassType IfcTelecomAddress::getType() const {
    return IfcTelecomAddress::s_type;
}

bool IfcTelecomAddress::isOfType(Step::ClassType t) {
    return IfcTelecomAddress::s_type == t ? true : IfcAddress::isOfType(t);
}

Step::List< IfcLabel > &IfcTelecomAddress::getTelephoneNumbers() {
    if (Step::BaseObject::inited()) {
        return m_telephoneNumbers;
    }
    else {
        m_telephoneNumbers.setUnset(true);
        return m_telephoneNumbers;
    }
}

void IfcTelecomAddress::setTelephoneNumbers(const Step::List< IfcLabel > &value) {
    m_telephoneNumbers = value;
}

Step::List< IfcLabel > &IfcTelecomAddress::getFacsimileNumbers() {
    if (Step::BaseObject::inited()) {
        return m_facsimileNumbers;
    }
    else {
        m_facsimileNumbers.setUnset(true);
        return m_facsimileNumbers;
    }
}

void IfcTelecomAddress::setFacsimileNumbers(const Step::List< IfcLabel > &value) {
    m_facsimileNumbers = value;
}

IfcLabel IfcTelecomAddress::getPagerNumber() {
    if (Step::BaseObject::inited()) {
        return m_pagerNumber;
    }
    else {
        return Step::getUnset(m_pagerNumber);
    }
}

void IfcTelecomAddress::setPagerNumber(const IfcLabel &value) {
    m_pagerNumber = value;
}

Step::List< IfcLabel > &IfcTelecomAddress::getElectronicMailAddresses() {
    if (Step::BaseObject::inited()) {
        return m_electronicMailAddresses;
    }
    else {
        m_electronicMailAddresses.setUnset(true);
        return m_electronicMailAddresses;
    }
}

void IfcTelecomAddress::setElectronicMailAddresses(const Step::List< IfcLabel > &value) {
    m_electronicMailAddresses = value;
}

IfcLabel IfcTelecomAddress::getWWWHomePageURL() {
    if (Step::BaseObject::inited()) {
        return m_wWWHomePageURL;
    }
    else {
        return Step::getUnset(m_wWWHomePageURL);
    }
}

void IfcTelecomAddress::setWWWHomePageURL(const IfcLabel &value) {
    m_wWWHomePageURL = value;
}

void IfcTelecomAddress::release() {
    IfcAddress::release();
    m_telephoneNumbers.clear();
    m_facsimileNumbers.clear();
    m_electronicMailAddresses.clear();
}

bool IfcTelecomAddress::init() {
    bool status = IfcAddress::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_telephoneNumbers.setUnset(true);
    }
    else {
        m_telephoneNumbers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::spfToString(str1);
                m_telephoneNumbers.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_facsimileNumbers.setUnset(true);
    }
    else {
        m_facsimileNumbers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::spfToString(str1);
                m_facsimileNumbers.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pagerNumber = Step::getUnset(m_pagerNumber);
    }
    else {
        m_pagerNumber = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_electronicMailAddresses.setUnset(true);
    }
    else {
        m_electronicMailAddresses.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::spfToString(str1);
                m_electronicMailAddresses.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wWWHomePageURL = Step::getUnset(m_wWWHomePageURL);
    }
    else {
        m_wWWHomePageURL = Step::spfToString(arg);
    }
    return true;
}

void IfcTelecomAddress::copy(const IfcTelecomAddress &obj, const CopyOp &copyop) {
    Step::List< IfcLabel >::const_iterator it_m_telephoneNumbers;
    Step::List< IfcLabel >::const_iterator it_m_facsimileNumbers;
    Step::List< IfcLabel >::const_iterator it_m_electronicMailAddresses;
    IfcAddress::copy(obj, copyop);
    for (it_m_telephoneNumbers = obj.m_telephoneNumbers.begin(); it_m_telephoneNumbers != obj.m_telephoneNumbers.end(); ++it_m_telephoneNumbers) {
        IfcLabel copyTarget = (*it_m_telephoneNumbers);
        m_telephoneNumbers.push_back(copyTarget);
    }
    for (it_m_facsimileNumbers = obj.m_facsimileNumbers.begin(); it_m_facsimileNumbers != obj.m_facsimileNumbers.end(); ++it_m_facsimileNumbers) {
        IfcLabel copyTarget = (*it_m_facsimileNumbers);
        m_facsimileNumbers.push_back(copyTarget);
    }
    setPagerNumber(obj.m_pagerNumber);
    for (it_m_electronicMailAddresses = obj.m_electronicMailAddresses.begin(); it_m_electronicMailAddresses != obj.m_electronicMailAddresses.end(); ++it_m_electronicMailAddresses) {
        IfcLabel copyTarget = (*it_m_electronicMailAddresses);
        m_electronicMailAddresses.push_back(copyTarget);
    }
    setWWWHomePageURL(obj.m_wWWHomePageURL);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTelecomAddress::s_type("IfcTelecomAddress");
