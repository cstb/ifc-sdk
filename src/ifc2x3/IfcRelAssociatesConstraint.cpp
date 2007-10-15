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

#include "ifc2x3/IfcRelAssociatesConstraint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcRelAssociates.h"
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

IfcRelAssociatesConstraint::IfcRelAssociatesConstraint(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_intent = Step::getUnset(m_intent);
    m_relatingConstraint = NULL;
}

IfcRelAssociatesConstraint::~IfcRelAssociatesConstraint() {
}

bool IfcRelAssociatesConstraint::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssociatesConstraint(this);
}

const std::string &IfcRelAssociatesConstraint::type() {
    return IfcRelAssociatesConstraint::s_type.getName();
}

Step::ClassType IfcRelAssociatesConstraint::getClassType() {
    return IfcRelAssociatesConstraint::s_type;
}

Step::ClassType IfcRelAssociatesConstraint::getType() const {
    return IfcRelAssociatesConstraint::s_type;
}

bool IfcRelAssociatesConstraint::isOfType(Step::ClassType t) {
    return IfcRelAssociatesConstraint::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcLabel IfcRelAssociatesConstraint::getIntent() {
    if (Step::BaseObject::inited()) {
        return m_intent;
    }
    else {
        return Step::getUnset(m_intent);
    }
}

void IfcRelAssociatesConstraint::setIntent(const IfcLabel &value) {
    m_intent = value;
}

IfcConstraint *IfcRelAssociatesConstraint::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssociatesConstraint::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    m_relatingConstraint = value;
}

void IfcRelAssociatesConstraint::release() {
    IfcRelAssociates::release();
    m_relatingConstraint.release();
}

bool IfcRelAssociatesConstraint::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intent = Step::getUnset(m_intent);
    }
    else {
        m_intent = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssociatesConstraint::copy(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setIntent(obj.m_intent);
    setRelatingConstraint(copyop(obj.m_relatingConstraint.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesConstraint::s_type("IfcRelAssociatesConstraint");
