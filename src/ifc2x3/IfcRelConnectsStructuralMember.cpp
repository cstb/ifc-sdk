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

#include "ifc2x3/IfcRelConnectsStructuralMember.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/IfcStructuralConnectionCondition.h"
#include "ifc2x3/IfcStructuralMember.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelConnectsStructuralMember::IfcRelConnectsStructuralMember(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingStructuralMember = NULL;
    m_relatedStructuralConnection = NULL;
    m_appliedCondition = NULL;
    m_additionalConditions = NULL;
    m_supportedLength = Step::getUnset(m_supportedLength);
    m_conditionCoordinateSystem = NULL;
}

IfcRelConnectsStructuralMember::~IfcRelConnectsStructuralMember() {
}

bool IfcRelConnectsStructuralMember::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsStructuralMember(this);
}

const std::string &IfcRelConnectsStructuralMember::type() {
    return IfcRelConnectsStructuralMember::s_type.getName();
}

Step::ClassType IfcRelConnectsStructuralMember::getClassType() {
    return IfcRelConnectsStructuralMember::s_type;
}

Step::ClassType IfcRelConnectsStructuralMember::getType() const {
    return IfcRelConnectsStructuralMember::s_type;
}

bool IfcRelConnectsStructuralMember::isOfType(Step::ClassType t) {
    return IfcRelConnectsStructuralMember::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcStructuralMember *IfcRelConnectsStructuralMember::getRelatingStructuralMember() {
    if (Step::BaseObject::inited()) {
        return m_relatingStructuralMember.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralMember::setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value) {
    m_relatingStructuralMember = value;
    m_relatingStructuralMember->m_connectedBy.insert(this);
}

IfcStructuralConnection *IfcRelConnectsStructuralMember::getRelatedStructuralConnection() {
    if (Step::BaseObject::inited()) {
        return m_relatedStructuralConnection.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralMember::setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value) {
    m_relatedStructuralConnection = value;
    m_relatedStructuralConnection->m_connectsStructuralMembers.insert(this);
}

IfcBoundaryCondition *IfcRelConnectsStructuralMember::getAppliedCondition() {
    if (Step::BaseObject::inited()) {
        return m_appliedCondition.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralMember::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value) {
    m_appliedCondition = value;
}

IfcStructuralConnectionCondition *IfcRelConnectsStructuralMember::getAdditionalConditions() {
    if (Step::BaseObject::inited()) {
        return m_additionalConditions.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralMember::setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value) {
    m_additionalConditions = value;
}

IfcLengthMeasure IfcRelConnectsStructuralMember::getSupportedLength() {
    if (Step::BaseObject::inited()) {
        return m_supportedLength;
    }
    else {
        return Step::getUnset(m_supportedLength);
    }
}

void IfcRelConnectsStructuralMember::setSupportedLength(IfcLengthMeasure value) {
    m_supportedLength = value;
}

IfcAxis2Placement3D *IfcRelConnectsStructuralMember::getConditionCoordinateSystem() {
    if (Step::BaseObject::inited()) {
        return m_conditionCoordinateSystem.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralMember::setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_conditionCoordinateSystem = value;
}

void IfcRelConnectsStructuralMember::release() {
    IfcRelConnects::release();
    m_relatingStructuralMember.release();
    m_relatedStructuralConnection.release();
    m_appliedCondition.release();
    m_additionalConditions.release();
    m_conditionCoordinateSystem.release();
}

bool IfcRelConnectsStructuralMember::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingStructuralMember = NULL;
    }
    else {
        m_relatingStructuralMember = static_cast< IfcStructuralMember * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedStructuralConnection = NULL;
    }
    else {
        m_relatedStructuralConnection = static_cast< IfcStructuralConnection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_appliedCondition = NULL;
    }
    else {
        m_appliedCondition = static_cast< IfcBoundaryCondition * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_additionalConditions = NULL;
    }
    else {
        m_additionalConditions = static_cast< IfcStructuralConnectionCondition * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_supportedLength = Step::getUnset(m_supportedLength);
    }
    else {
        m_supportedLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_conditionCoordinateSystem = NULL;
    }
    else {
        m_conditionCoordinateSystem = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelConnectsStructuralMember::copy(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingStructuralMember(copyop(obj.m_relatingStructuralMember.get()));
    setRelatedStructuralConnection(copyop(obj.m_relatedStructuralConnection.get()));
    setAppliedCondition(copyop(obj.m_appliedCondition.get()));
    setAdditionalConditions(copyop(obj.m_additionalConditions.get()));
    setSupportedLength(obj.m_supportedLength);
    setConditionCoordinateSystem(copyop(obj.m_conditionCoordinateSystem.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralMember::s_type("IfcRelConnectsStructuralMember");
