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

#include "ifc2x3/IfcProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcProfileDef::IfcProfileDef(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_profileType = IfcProfileTypeEnum_UNSET;
    m_profileName = Step::getUnset(m_profileName);
}

IfcProfileDef::~IfcProfileDef() {
}

bool IfcProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProfileDef(this);
}

const std::string &IfcProfileDef::type() const {
    return IfcProfileDef::s_type.getName();
}

const Step::ClassType &IfcProfileDef::getClassType() {
    return IfcProfileDef::s_type;
}

const Step::ClassType &IfcProfileDef::getType() const {
    return IfcProfileDef::s_type;
}

bool IfcProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcProfileDef::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcProfileTypeEnum IfcProfileDef::getProfileType() {
    if (Step::BaseObject::inited()) {
        return m_profileType;
    }
    else {
        return IfcProfileTypeEnum_UNSET;
    }
}

const IfcProfileTypeEnum IfcProfileDef::getProfileType() const {
    IfcProfileDef * deConstObject = const_cast< IfcProfileDef * > (this);
    return deConstObject->getProfileType();
}

void IfcProfileDef::setProfileType(IfcProfileTypeEnum value) {
    m_profileType = value;
}

void IfcProfileDef::unsetProfileType() {
    m_profileType = IfcProfileTypeEnum_UNSET;
}

bool IfcProfileDef::testProfileType() const {
    return getProfileType() != IfcProfileTypeEnum_UNSET;
}

IfcLabel IfcProfileDef::getProfileName() {
    if (Step::BaseObject::inited()) {
        return m_profileName;
    }
    else {
        return Step::getUnset(m_profileName);
    }
}

const IfcLabel IfcProfileDef::getProfileName() const {
    IfcProfileDef * deConstObject = const_cast< IfcProfileDef * > (this);
    return deConstObject->getProfileName();
}

void IfcProfileDef::setProfileName(const IfcLabel &value) {
    m_profileName = value;
}

void IfcProfileDef::unsetProfileName() {
    m_profileName = Step::getUnset(getProfileName());
}

bool IfcProfileDef::testProfileName() const {
    return !Step::isUnset(getProfileName());
}

bool IfcProfileDef::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileType = IfcProfileTypeEnum_UNSET;
    }
    else {
        if (arg == ".CURVE.") {
            m_profileType = IfcProfileTypeEnum_CURVE;
        }
        else if (arg == ".AREA.") {
            m_profileType = IfcProfileTypeEnum_AREA;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileName = Step::getUnset(m_profileName);
    }
    else {
        m_profileName = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcProfileDef::copy(const IfcProfileDef &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setProfileType(obj.m_profileType);
    setProfileName(obj.m_profileName);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProfileDef::s_type("IfcProfileDef");
