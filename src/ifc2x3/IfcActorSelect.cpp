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

#include "ifc2x3/IfcActorSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/IfcPersonAndOrganization.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcActorSelect::IfcActorSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcActorSelect::IfcActorSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcActorSelect::~IfcActorSelect() {
    deleteUnion();
}

bool IfcActorSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcActorSelect(this);
}

bool IfcActorSelect::init() {
    return false;
}

const std::string &IfcActorSelect::type() {
    return IfcActorSelect::s_type.getName();
}

Step::ClassType IfcActorSelect::getClassType() {
    return IfcActorSelect::s_type;
}

Step::ClassType IfcActorSelect::getType() const {
    return IfcActorSelect::s_type;
}

bool IfcActorSelect::isOfType(Step::ClassType t) {
    return IfcActorSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcActorSelect::copy(const IfcActorSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCORGANIZATION:
        setIfcOrganization(copyop(obj.m_IfcActorSelect_union.m_IfcOrganization));
        break;
    case IFCPERSON:
        setIfcPerson(copyop(obj.m_IfcActorSelect_union.m_IfcPerson));
        break;
    case IFCPERSONANDORGANIZATION:
        setIfcPersonAndOrganization(copyop(obj.m_IfcActorSelect_union.m_IfcPersonAndOrganization));
        break;
        }
}

char *IfcActorSelect::currentTypeName() {
    switch(m_type) {
    case IFCORGANIZATION:
        return "IfcOrganization";
        break;
    case IFCPERSON:
        return "IfcPerson";
        break;
    case IFCPERSONANDORGANIZATION:
        return "IfcPersonAndOrganization";
        break;
    default:
        return "UNSET";
    }
}

IfcActorSelect::IfcActorSelect_select IfcActorSelect::currentType() {
    return m_type;
}

void IfcActorSelect::deleteUnion() {
    switch(m_type) {
    case IFCORGANIZATION:
        m_IfcActorSelect_union.m_IfcOrganization->unref();
        break;
    case IFCPERSON:
        m_IfcActorSelect_union.m_IfcPerson->unref();
        break;
    case IFCPERSONANDORGANIZATION:
        m_IfcActorSelect_union.m_IfcPersonAndOrganization->unref();
        break;
        }
    m_type = UNSET;
}

IfcOrganization *IfcActorSelect::getIfcOrganization() {
    return m_IfcActorSelect_union.m_IfcOrganization;
}

void IfcActorSelect::setIfcOrganization(IfcOrganization *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcActorSelect_union.m_IfcOrganization = value;
    if (value) {
        value->ref();
        m_type = IFCORGANIZATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCORGANIZATION;
}

IfcPerson *IfcActorSelect::getIfcPerson() {
    return m_IfcActorSelect_union.m_IfcPerson;
}

void IfcActorSelect::setIfcPerson(IfcPerson *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcActorSelect_union.m_IfcPerson = value;
    if (value) {
        value->ref();
        m_type = IFCPERSON;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPERSON;
}

IfcPersonAndOrganization *IfcActorSelect::getIfcPersonAndOrganization() {
    return m_IfcActorSelect_union.m_IfcPersonAndOrganization;
}

void IfcActorSelect::setIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcActorSelect_union.m_IfcPersonAndOrganization = value;
    if (value) {
        value->ref();
        m_type = IFCPERSONANDORGANIZATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPERSONANDORGANIZATION;
}

void IfcActorSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcOrganization::getClassType())) {
        setIfcOrganization(static_cast< IfcOrganization* > (v));
    }
    else if (v->isOfType(IfcPerson::getClassType())) {
        setIfcPerson(static_cast< IfcPerson* > (v));
    }
    else if (v->isOfType(IfcPersonAndOrganization::getClassType())) {
        setIfcPersonAndOrganization(static_cast< IfcPersonAndOrganization* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcActorSelect::s_type("IfcActorSelect");
