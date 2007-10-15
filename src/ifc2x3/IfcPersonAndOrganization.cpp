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

#include "ifc2x3/IfcPersonAndOrganization.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/Visitor.h"
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

IfcPersonAndOrganization::IfcPersonAndOrganization(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_thePerson = NULL;
    m_theOrganization = NULL;
    m_roles.setUnset(true);
}

IfcPersonAndOrganization::~IfcPersonAndOrganization() {
}

bool IfcPersonAndOrganization::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPersonAndOrganization(this);
}

const std::string &IfcPersonAndOrganization::type() {
    return IfcPersonAndOrganization::s_type.getName();
}

Step::ClassType IfcPersonAndOrganization::getClassType() {
    return IfcPersonAndOrganization::s_type;
}

Step::ClassType IfcPersonAndOrganization::getType() const {
    return IfcPersonAndOrganization::s_type;
}

bool IfcPersonAndOrganization::isOfType(Step::ClassType t) {
    return IfcPersonAndOrganization::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPerson *IfcPersonAndOrganization::getThePerson() {
    if (Step::BaseObject::inited()) {
        return m_thePerson.get();
    }
    else {
        return NULL;
    }
}

void IfcPersonAndOrganization::setThePerson(const Step::RefPtr< IfcPerson > &value) {
    m_thePerson = value;
    m_thePerson->m_engagedIn.insert(this);
}

IfcOrganization *IfcPersonAndOrganization::getTheOrganization() {
    if (Step::BaseObject::inited()) {
        return m_theOrganization.get();
    }
    else {
        return NULL;
    }
}

void IfcPersonAndOrganization::setTheOrganization(const Step::RefPtr< IfcOrganization > &value) {
    m_theOrganization = value;
    m_theOrganization->m_engages.insert(this);
}

Step::List< Step::RefPtr< IfcActorRole > > &IfcPersonAndOrganization::getRoles() {
    if (Step::BaseObject::inited()) {
        return m_roles;
    }
    else {
        m_roles.setUnset(true);
        return m_roles;
    }
}

void IfcPersonAndOrganization::setRoles(const Step::List< Step::RefPtr< IfcActorRole > > &value) {
    m_roles = value;
}

void IfcPersonAndOrganization::release() {
    m_thePerson.release();
    m_theOrganization.release();
    m_roles.clear();
}

bool IfcPersonAndOrganization::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thePerson = NULL;
    }
    else {
        m_thePerson = static_cast< IfcPerson * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_theOrganization = NULL;
    }
    else {
        m_theOrganization = static_cast< IfcOrganization * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    return true;
}

void IfcPersonAndOrganization::copy(const IfcPersonAndOrganization &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcActorRole > >::const_iterator it_m_roles;
    Step::BaseEntity::copy(obj, copyop);
    setThePerson(copyop(obj.m_thePerson.get()));
    setTheOrganization(copyop(obj.m_theOrganization.get()));
    for (it_m_roles = obj.m_roles.begin(); it_m_roles != obj.m_roles.end(); ++it_m_roles) {
        Step::RefPtr< IfcActorRole > copyTarget = copyop((*it_m_roles).get());
        m_roles.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPersonAndOrganization::s_type("IfcPersonAndOrganization");
