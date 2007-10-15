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

#include "ifc2x3/IfcOrganization.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcAddress.h"
#include "ifc2x3/IfcOrganizationRelationship.h"
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

IfcOrganization::IfcOrganization(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_id = Step::getUnset(m_id);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_roles.setUnset(true);
    m_addresses.setUnset(true);
    m_addresses.setOwner(this);
    m_isRelatedBy.setUnset(true);
    m_relates.setUnset(true);
    m_engages.setUnset(true);
}

IfcOrganization::~IfcOrganization() {
}

bool IfcOrganization::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOrganization(this);
}

const std::string &IfcOrganization::type() {
    return IfcOrganization::s_type.getName();
}

Step::ClassType IfcOrganization::getClassType() {
    return IfcOrganization::s_type;
}

Step::ClassType IfcOrganization::getType() const {
    return IfcOrganization::s_type;
}

bool IfcOrganization::isOfType(Step::ClassType t) {
    return IfcOrganization::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcOrganization::getId() {
    if (Step::BaseObject::inited()) {
        return m_id;
    }
    else {
        return Step::getUnset(m_id);
    }
}

void IfcOrganization::setId(const IfcIdentifier &value) {
    m_id = value;
}

IfcLabel IfcOrganization::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcOrganization::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcOrganization::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcOrganization::setDescription(const IfcText &value) {
    m_description = value;
}

Step::List< Step::RefPtr< IfcActorRole > > &IfcOrganization::getRoles() {
    if (Step::BaseObject::inited()) {
        return m_roles;
    }
    else {
        m_roles.setUnset(true);
        return m_roles;
    }
}

void IfcOrganization::setRoles(const Step::List< Step::RefPtr< IfcActorRole > > &value) {
    m_roles = value;
}

Step::List< Step::RefPtr< IfcAddress > > &IfcOrganization::getAddresses() {
    if (Step::BaseObject::inited()) {
        return m_addresses;
    }
    else {
        m_addresses.setUnset(true);
        return m_addresses;
    }
}

Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > &IfcOrganization::getIsRelatedBy() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedBy;
    }
    else {
        m_isRelatedBy.setUnset(true);
        return m_isRelatedBy;
    }
}

Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > &IfcOrganization::getRelates() {
    if (Step::BaseObject::inited()) {
        return m_relates;
    }
    else {
        m_relates.setUnset(true);
        return m_relates;
    }
}

Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > &IfcOrganization::getEngages() {
    if (Step::BaseObject::inited()) {
        return m_engages;
    }
    else {
        m_engages.setUnset(true);
        return m_engages;
    }
}

void IfcOrganization::release() {
    m_roles.clear();
    m_addresses.clear();
}

bool IfcOrganization::init() {
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
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
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
    inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_isRelatedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedBy.insert(static_cast< IfcOrganizationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_relates.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_relates.insert(static_cast< IfcOrganizationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_engages.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_engages.insert(static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcOrganization::copy(const IfcOrganization &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcActorRole > >::const_iterator it_m_roles;
    Step::List< Step::RefPtr< IfcAddress > >::const_iterator it_m_addresses;
    Step::BaseEntity::copy(obj, copyop);
    setId(obj.m_id);
    setName(obj.m_name);
    setDescription(obj.m_description);
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

IFC2X3_DLL_DEF Step::ClassType IfcOrganization::s_type("IfcOrganization");
IfcOrganization::Inverted_Addresses_type::Inverted_Addresses_type() {
}

void IfcOrganization::Inverted_Addresses_type::setOwner(IfcOrganization *owner) {
    mOwner = owner;
}

void IfcOrganization::Inverted_Addresses_type::push_back(const Step::RefPtr< IfcAddress > &value) {
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    Step::List< Step::RefPtr< IfcAddress > >::push_back(value);
    inverse->m_ofOrganization.insert(mOwner);
}

