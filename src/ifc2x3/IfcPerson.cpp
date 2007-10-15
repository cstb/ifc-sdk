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

#include "ifc2x3/IfcPerson.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcAddress.h"
#include "ifc2x3/IfcPersonAndOrganization.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPerson::IfcPerson(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_id = Step::getUnset(m_id);
    m_familyName = Step::getUnset(m_familyName);
    m_givenName = Step::getUnset(m_givenName);
    m_middleNames.setUnset(true);
    m_prefixTitles.setUnset(true);
    m_suffixTitles.setUnset(true);
    m_roles.setUnset(true);
    m_addresses.setUnset(true);
    m_addresses.setOwner(this);
    m_engagedIn.setUnset(true);
}

IfcPerson::~IfcPerson() {
}

bool IfcPerson::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPerson(this);
}

const std::string &IfcPerson::type() {
    return IfcPerson::s_type.getName();
}

Step::ClassType IfcPerson::getClassType() {
    return IfcPerson::s_type;
}

Step::ClassType IfcPerson::getType() const {
    return IfcPerson::s_type;
}

bool IfcPerson::isOfType(Step::ClassType t) {
    return IfcPerson::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcPerson::getId() {
    if (Step::BaseObject::inited()) {
        return m_id;
    }
    else {
        return Step::getUnset(m_id);
    }
}

void IfcPerson::setId(const IfcIdentifier &value) {
    m_id = value;
}

IfcLabel IfcPerson::getFamilyName() {
    if (Step::BaseObject::inited()) {
        return m_familyName;
    }
    else {
        return Step::getUnset(m_familyName);
    }
}

void IfcPerson::setFamilyName(const IfcLabel &value) {
    m_familyName = value;
}

IfcLabel IfcPerson::getGivenName() {
    if (Step::BaseObject::inited()) {
        return m_givenName;
    }
    else {
        return Step::getUnset(m_givenName);
    }
}

void IfcPerson::setGivenName(const IfcLabel &value) {
    m_givenName = value;
}

Step::List< IfcLabel > &IfcPerson::getMiddleNames() {
    if (Step::BaseObject::inited()) {
        return m_middleNames;
    }
    else {
        m_middleNames.setUnset(true);
        return m_middleNames;
    }
}

void IfcPerson::setMiddleNames(const Step::List< IfcLabel > &value) {
    m_middleNames = value;
}

Step::List< IfcLabel > &IfcPerson::getPrefixTitles() {
    if (Step::BaseObject::inited()) {
        return m_prefixTitles;
    }
    else {
        m_prefixTitles.setUnset(true);
        return m_prefixTitles;
    }
}

void IfcPerson::setPrefixTitles(const Step::List< IfcLabel > &value) {
    m_prefixTitles = value;
}

Step::List< IfcLabel > &IfcPerson::getSuffixTitles() {
    if (Step::BaseObject::inited()) {
        return m_suffixTitles;
    }
    else {
        m_suffixTitles.setUnset(true);
        return m_suffixTitles;
    }
}

void IfcPerson::setSuffixTitles(const Step::List< IfcLabel > &value) {
    m_suffixTitles = value;
}

Step::List< Step::RefPtr< IfcActorRole > > &IfcPerson::getRoles() {
    if (Step::BaseObject::inited()) {
        return m_roles;
    }
    else {
        m_roles.setUnset(true);
        return m_roles;
    }
}

void IfcPerson::setRoles(const Step::List< Step::RefPtr< IfcActorRole > > &value) {
    m_roles = value;
}

Step::List< Step::RefPtr< IfcAddress > > &IfcPerson::getAddresses() {
    if (Step::BaseObject::inited()) {
        return m_addresses;
    }
    else {
        m_addresses.setUnset(true);
        return m_addresses;
    }
}

Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > &IfcPerson::getEngagedIn() {
    if (Step::BaseObject::inited()) {
        return m_engagedIn;
    }
    else {
        m_engagedIn.setUnset(true);
        return m_engagedIn;
    }
}

void IfcPerson::release() {
    m_middleNames.clear();
    m_prefixTitles.clear();
    m_suffixTitles.clear();
    m_roles.clear();
    m_addresses.clear();
}

bool IfcPerson::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_id = Step::getUnset(m_id);
    }
    else {
        m_id = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_familyName = Step::getUnset(m_familyName);
    }
    else {
        m_familyName = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_givenName = Step::getUnset(m_givenName);
    }
    else {
        m_givenName = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_middleNames.setUnset(true);
    }
    else {
        m_middleNames.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::spfToString(str1);
                m_middleNames.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_prefixTitles.setUnset(true);
    }
    else {
        m_prefixTitles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::spfToString(str1);
                m_prefixTitles.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_suffixTitles.setUnset(true);
    }
    else {
        m_suffixTitles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::spfToString(str1);
                m_suffixTitles.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_roles.setUnset(true);
    }
    else {
        m_roles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorRole > attr2;
                attr2 = static_cast< IfcActorRole * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_roles.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_addresses.setUnset(true);
    }
    else {
        m_addresses.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAddress > attr2;
                attr2 = static_cast< IfcAddress * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_addresses.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_engagedIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_engagedIn.insert(static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPerson::copy(const IfcPerson &obj, const CopyOp &copyop) {
    Step::List< IfcLabel >::const_iterator it_m_middleNames;
    Step::List< IfcLabel >::const_iterator it_m_prefixTitles;
    Step::List< IfcLabel >::const_iterator it_m_suffixTitles;
    Step::List< Step::RefPtr< IfcActorRole > >::const_iterator it_m_roles;
    Step::List< Step::RefPtr< IfcAddress > >::const_iterator it_m_addresses;
    Step::BaseEntity::copy(obj, copyop);
    setId(obj.m_id);
    setFamilyName(obj.m_familyName);
    setGivenName(obj.m_givenName);
    for (it_m_middleNames = obj.m_middleNames.begin(); it_m_middleNames != obj.m_middleNames.end(); ++it_m_middleNames) {
        IfcLabel copyTarget = (*it_m_middleNames);
        m_middleNames.push_back(copyTarget);
    }
    for (it_m_prefixTitles = obj.m_prefixTitles.begin(); it_m_prefixTitles != obj.m_prefixTitles.end(); ++it_m_prefixTitles) {
        IfcLabel copyTarget = (*it_m_prefixTitles);
        m_prefixTitles.push_back(copyTarget);
    }
    for (it_m_suffixTitles = obj.m_suffixTitles.begin(); it_m_suffixTitles != obj.m_suffixTitles.end(); ++it_m_suffixTitles) {
        IfcLabel copyTarget = (*it_m_suffixTitles);
        m_suffixTitles.push_back(copyTarget);
    }
    for (it_m_roles = obj.m_roles.begin(); it_m_roles != obj.m_roles.end(); ++it_m_roles) {
        Step::RefPtr< IfcActorRole > copyTarget = copyop((*it_m_roles).get());
        m_roles.push_back(copyTarget.get());
    }
    for (it_m_addresses = obj.m_addresses.begin(); it_m_addresses != obj.m_addresses.end(); ++it_m_addresses) {
        Step::RefPtr< IfcAddress > copyTarget = copyop((*it_m_addresses).get());
        m_addresses.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPerson::s_type("IfcPerson");
IfcPerson::Inverted_Addresses_type::Inverted_Addresses_type() {
}

void IfcPerson::Inverted_Addresses_type::setOwner(IfcPerson *owner) {
    mOwner = owner;
}

void IfcPerson::Inverted_Addresses_type::push_back(const Step::RefPtr< IfcAddress > &value) {
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    Step::List< Step::RefPtr< IfcAddress > >::push_back(value);
    inverse->m_ofPerson.insert(mOwner);
}

