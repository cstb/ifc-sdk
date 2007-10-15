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

#include "ifc2x3/IfcAddress.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAddress::IfcAddress(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_purpose = IfcAddressTypeEnum_UNSET;
    m_description = Step::getUnset(m_description);
    m_userDefinedPurpose = Step::getUnset(m_userDefinedPurpose);
    m_ofPerson.setUnset(true);
    m_ofOrganization.setUnset(true);
}

IfcAddress::~IfcAddress() {
}

bool IfcAddress::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAddress(this);
}

const std::string &IfcAddress::type() {
    return IfcAddress::s_type.getName();
}

Step::ClassType IfcAddress::getClassType() {
    return IfcAddress::s_type;
}

Step::ClassType IfcAddress::getType() const {
    return IfcAddress::s_type;
}

bool IfcAddress::isOfType(Step::ClassType t) {
    return IfcAddress::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAddressTypeEnum IfcAddress::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return IfcAddressTypeEnum_UNSET;
    }
}

void IfcAddress::setPurpose(IfcAddressTypeEnum value) {
    m_purpose = value;
}

IfcText IfcAddress::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcAddress::setDescription(const IfcText &value) {
    m_description = value;
}

IfcLabel IfcAddress::getUserDefinedPurpose() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedPurpose;
    }
    else {
        return Step::getUnset(m_userDefinedPurpose);
    }
}

void IfcAddress::setUserDefinedPurpose(const IfcLabel &value) {
    m_userDefinedPurpose = value;
}

Step::Set< Step::ObsPtr< IfcPerson > > &IfcAddress::getOfPerson() {
    if (Step::BaseObject::inited()) {
        return m_ofPerson;
    }
    else {
        m_ofPerson.setUnset(true);
        return m_ofPerson;
    }
}

Step::Set< Step::ObsPtr< IfcOrganization > > &IfcAddress::getOfOrganization() {
    if (Step::BaseObject::inited()) {
        return m_ofOrganization;
    }
    else {
        m_ofOrganization.setUnset(true);
        return m_ofOrganization;
    }
}

void IfcAddress::release() {
}

bool IfcAddress::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = IfcAddressTypeEnum_UNSET;
    }
    else {
        if (arg == ".OFFICE.") {
            m_purpose = IfcAddressTypeEnum_OFFICE;
        }
        else if (arg == ".SITE.") {
            m_purpose = IfcAddressTypeEnum_SITE;
        }
        else if (arg == ".HOME.") {
            m_purpose = IfcAddressTypeEnum_HOME;
        }
        else if (arg == ".DISTRIBUTIONPOINT.") {
            m_purpose = IfcAddressTypeEnum_DISTRIBUTIONPOINT;
        }
        else if (arg == ".USERDEFINED.") {
            m_purpose = IfcAddressTypeEnum_USERDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedPurpose = Step::getUnset(m_userDefinedPurpose);
    }
    else {
        m_userDefinedPurpose = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcPerson::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_ofPerson.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofPerson.insert(static_cast< IfcPerson * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcOrganization::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_ofOrganization.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofOrganization.insert(static_cast< IfcOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAddress::copy(const IfcAddress &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setPurpose(obj.m_purpose);
    setDescription(obj.m_description);
    setUserDefinedPurpose(obj.m_userDefinedPurpose);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAddress::s_type("IfcAddress");
