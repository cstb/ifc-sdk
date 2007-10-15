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

#include "ifc2x3/IfcRelAssignsToActor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActor.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcRelAssigns.h"
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

IfcRelAssignsToActor::IfcRelAssignsToActor(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingActor = NULL;
    m_actingRole = NULL;
}

IfcRelAssignsToActor::~IfcRelAssignsToActor() {
}

bool IfcRelAssignsToActor::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToActor(this);
}

const std::string &IfcRelAssignsToActor::type() {
    return IfcRelAssignsToActor::s_type.getName();
}

Step::ClassType IfcRelAssignsToActor::getClassType() {
    return IfcRelAssignsToActor::s_type;
}

Step::ClassType IfcRelAssignsToActor::getType() const {
    return IfcRelAssignsToActor::s_type;
}

bool IfcRelAssignsToActor::isOfType(Step::ClassType t) {
    return IfcRelAssignsToActor::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcActor *IfcRelAssignsToActor::getRelatingActor() {
    if (Step::BaseObject::inited()) {
        return m_relatingActor.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToActor::setRelatingActor(const Step::RefPtr< IfcActor > &value) {
    m_relatingActor = value;
    m_relatingActor->m_isActingUpon.insert(this);
}

IfcActorRole *IfcRelAssignsToActor::getActingRole() {
    if (Step::BaseObject::inited()) {
        return m_actingRole.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToActor::setActingRole(const Step::RefPtr< IfcActorRole > &value) {
    m_actingRole = value;
}

void IfcRelAssignsToActor::release() {
    IfcRelAssigns::release();
    m_relatingActor.release();
    m_actingRole.release();
}

bool IfcRelAssignsToActor::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingActor = NULL;
    }
    else {
        m_relatingActor = static_cast< IfcActor * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actingRole = NULL;
    }
    else {
        m_actingRole = static_cast< IfcActorRole * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsToActor::copy(const IfcRelAssignsToActor &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingActor(copyop(obj.m_relatingActor.get()));
    setActingRole(copyop(obj.m_actingRole.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToActor::s_type("IfcRelAssignsToActor");
