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

#include "ifc2x3/IfcOrganizationRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOrganization.h"
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

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcOrganizationRelationship::IfcOrganizationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingOrganization = NULL;
    m_relatedOrganizations.setUnset(true);
    m_relatedOrganizations.setOwner(this);
}

IfcOrganizationRelationship::~IfcOrganizationRelationship() {
}

bool IfcOrganizationRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOrganizationRelationship(this);
}

const std::string &IfcOrganizationRelationship::type() {
    return IfcOrganizationRelationship::s_type.getName();
}

Step::ClassType IfcOrganizationRelationship::getClassType() {
    return IfcOrganizationRelationship::s_type;
}

Step::ClassType IfcOrganizationRelationship::getType() const {
    return IfcOrganizationRelationship::s_type;
}

bool IfcOrganizationRelationship::isOfType(Step::ClassType t) {
    return IfcOrganizationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcOrganizationRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcOrganizationRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcOrganizationRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcOrganizationRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcOrganization *IfcOrganizationRelationship::getRelatingOrganization() {
    if (Step::BaseObject::inited()) {
        return m_relatingOrganization.get();
    }
    else {
        return NULL;
    }
}

void IfcOrganizationRelationship::setRelatingOrganization(const Step::RefPtr< IfcOrganization > &value) {
    m_relatingOrganization = value;
    m_relatingOrganization->m_relates.insert(this);
}

Step::Set< Step::RefPtr< IfcOrganization > > &IfcOrganizationRelationship::getRelatedOrganizations() {
    if (Step::BaseObject::inited()) {
        return m_relatedOrganizations;
    }
    else {
        m_relatedOrganizations.setUnset(true);
        return m_relatedOrganizations;
    }
}

void IfcOrganizationRelationship::release() {
    m_relatingOrganization.release();
    m_relatedOrganizations.clear();
}

bool IfcOrganizationRelationship::init() {
    std::string arg;
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
        m_relatingOrganization = NULL;
    }
    else {
        m_relatingOrganization = static_cast< IfcOrganization * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedOrganizations.setUnset(true);
    }
    else {
        m_relatedOrganizations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcOrganization > attr2;
                attr2 = static_cast< IfcOrganization * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedOrganizations.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcOrganizationRelationship::copy(const IfcOrganizationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcOrganization > >::const_iterator it_m_relatedOrganizations;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingOrganization(copyop(obj.m_relatingOrganization.get()));
    for (it_m_relatedOrganizations = obj.m_relatedOrganizations.begin(); it_m_relatedOrganizations != obj.m_relatedOrganizations.end(); ++it_m_relatedOrganizations) {
        Step::RefPtr< IfcOrganization > copyTarget = copyop((*it_m_relatedOrganizations).get());
        m_relatedOrganizations.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrganizationRelationship::s_type("IfcOrganizationRelationship");
IfcOrganizationRelationship::Inverted_RelatedOrganizations_type::Inverted_RelatedOrganizations_type() {
}

void IfcOrganizationRelationship::Inverted_RelatedOrganizations_type::setOwner(IfcOrganizationRelationship *owner) {
    mOwner = owner;
}

void IfcOrganizationRelationship::Inverted_RelatedOrganizations_type::insert(const Step::RefPtr< IfcOrganization > &value) {
    IfcOrganization *inverse = const_cast< IfcOrganization * > (value.get());
    Step::Set< Step::RefPtr< IfcOrganization > >::insert(value);
    inverse->m_isRelatedBy.insert(mOwner);
}

