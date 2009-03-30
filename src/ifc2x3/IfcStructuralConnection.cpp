/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcStructuralConnection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/IfcRelConnectsStructuralMember.h"
#include "ifc2x3/IfcStructuralItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralConnection::IfcStructuralConnection(Step::Id id, Step::SPFData *args) : IfcStructuralItem(id, args) {
    m_appliedCondition = NULL;
}

IfcStructuralConnection::~IfcStructuralConnection() {
}

bool IfcStructuralConnection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralConnection(this);
}

const std::string &IfcStructuralConnection::type() const {
    return IfcStructuralConnection::s_type.getName();
}

const Step::ClassType &IfcStructuralConnection::getClassType() {
    return IfcStructuralConnection::s_type;
}

const Step::ClassType &IfcStructuralConnection::getType() const {
    return IfcStructuralConnection::s_type;
}

bool IfcStructuralConnection::isOfType(const Step::ClassType &t) const {
    return IfcStructuralConnection::s_type == t ? true : IfcStructuralItem::isOfType(t);
}

IfcBoundaryCondition *IfcStructuralConnection::getAppliedCondition() {
    if (Step::BaseObject::inited()) {
        return m_appliedCondition.get();
    }
    else {
        return NULL;
    }
}

const IfcBoundaryCondition *IfcStructuralConnection::getAppliedCondition() const {
    IfcStructuralConnection * deConstObject = const_cast< IfcStructuralConnection * > (this);
    return deConstObject->getAppliedCondition();
}

void IfcStructuralConnection::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value) {
    m_appliedCondition = value;
}

void IfcStructuralConnection::unsetAppliedCondition() {
    m_appliedCondition = Step::getUnset(getAppliedCondition());
}

bool IfcStructuralConnection::testAppliedCondition() const {
    return !Step::isUnset(getAppliedCondition());
}

Inverse_Set_IfcRelConnectsStructuralMember_1_n &IfcStructuralConnection::getConnectsStructuralMembers() {
    if (Step::BaseObject::inited()) {
        return m_connectsStructuralMembers;
    }
    else {
        m_connectsStructuralMembers.setUnset(true);
        return m_connectsStructuralMembers;
    }
}

const Inverse_Set_IfcRelConnectsStructuralMember_1_n &IfcStructuralConnection::getConnectsStructuralMembers() const {
    IfcStructuralConnection * deConstObject = const_cast< IfcStructuralConnection * > (this);
    return deConstObject->getConnectsStructuralMembers();
}

bool IfcStructuralConnection::testConnectsStructuralMembers() const {
    return !Step::isUnset(getConnectsStructuralMembers());
}

bool IfcStructuralConnection::init() {
    bool status = IfcStructuralItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_appliedCondition = NULL;
    }
    else {
        m_appliedCondition = static_cast< IfcBoundaryCondition * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_connectsStructuralMembers.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectsStructuralMembers.insert(static_cast< IfcRelConnectsStructuralMember * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralConnection::copy(const IfcStructuralConnection &obj, const CopyOp &copyop) {
    IfcStructuralItem::copy(obj, copyop);
    setAppliedCondition((IfcBoundaryCondition*)copyop(obj.m_appliedCondition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralConnection::s_type("IfcStructuralConnection");
