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

#include "ifc2x3/IfcRelAssociatesConstraint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssociatesConstraint::IfcRelAssociatesConstraint(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_intent = Step::getUnset(m_intent);
    m_relatingConstraint = NULL;
}

IfcRelAssociatesConstraint::~IfcRelAssociatesConstraint() {
}

bool IfcRelAssociatesConstraint::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesConstraint(this);
}

const std::string &IfcRelAssociatesConstraint::type() const {
    return IfcRelAssociatesConstraint::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesConstraint::getClassType() {
    return IfcRelAssociatesConstraint::s_type;
}

const Step::ClassType &IfcRelAssociatesConstraint::getType() const {
    return IfcRelAssociatesConstraint::s_type;
}

bool IfcRelAssociatesConstraint::isOfType(const Step::ClassType &t) const {
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

const IfcLabel IfcRelAssociatesConstraint::getIntent() const {
    IfcRelAssociatesConstraint * deConstObject = const_cast< IfcRelAssociatesConstraint * > (this);
    return deConstObject->getIntent();
}

void IfcRelAssociatesConstraint::setIntent(const IfcLabel &value) {
    m_intent = value;
}

void IfcRelAssociatesConstraint::unsetIntent() {
    m_intent = Step::getUnset(getIntent());
}

bool IfcRelAssociatesConstraint::testIntent() const {
    return !Step::isUnset(getIntent());
}

IfcConstraint *IfcRelAssociatesConstraint::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcRelAssociatesConstraint::getRelatingConstraint() const {
    IfcRelAssociatesConstraint * deConstObject = const_cast< IfcRelAssociatesConstraint * > (this);
    return deConstObject->getRelatingConstraint();
}

void IfcRelAssociatesConstraint::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    m_relatingConstraint = value;
}

void IfcRelAssociatesConstraint::unsetRelatingConstraint() {
    m_relatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcRelAssociatesConstraint::testRelatingConstraint() const {
    return !Step::isUnset(getRelatingConstraint());
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
        m_intent = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssociatesConstraint::copy(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setIntent(obj.m_intent);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_relatingConstraint.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesConstraint::s_type("IfcRelAssociatesConstraint");
