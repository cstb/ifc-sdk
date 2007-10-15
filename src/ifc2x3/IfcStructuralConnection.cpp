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
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralConnection::IfcStructuralConnection(Step::Id id, Step::SPFData *args) : IfcStructuralItem(id, args) {
    m_appliedCondition = NULL;
    m_connectsStructuralMembers.setUnset(true);
}

IfcStructuralConnection::~IfcStructuralConnection() {
}

bool IfcStructuralConnection::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralConnection(this);
}

const std::string &IfcStructuralConnection::type() {
    return IfcStructuralConnection::s_type.getName();
}

Step::ClassType IfcStructuralConnection::getClassType() {
    return IfcStructuralConnection::s_type;
}

Step::ClassType IfcStructuralConnection::getType() const {
    return IfcStructuralConnection::s_type;
}

bool IfcStructuralConnection::isOfType(Step::ClassType t) {
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

void IfcStructuralConnection::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value) {
    m_appliedCondition = value;
}

Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > &IfcStructuralConnection::getConnectsStructuralMembers() {
    if (Step::BaseObject::inited()) {
        return m_connectsStructuralMembers;
    }
    else {
        m_connectsStructuralMembers.setUnset(true);
        return m_connectsStructuralMembers;
    }
}

void IfcStructuralConnection::release() {
    IfcStructuralItem::release();
    m_appliedCondition.release();
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
        m_appliedCondition = static_cast< IfcBoundaryCondition * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    setAppliedCondition(copyop(obj.m_appliedCondition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralConnection::s_type("IfcStructuralConnection");
