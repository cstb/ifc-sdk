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

#include "ifc2x3/IfcProfileProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProfileProperties::IfcProfileProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_profileName = Step::getUnset(m_profileName);
    m_profileDefinition = NULL;
}

IfcProfileProperties::~IfcProfileProperties() {
}

bool IfcProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProfileProperties(this);
}

const std::string &IfcProfileProperties::type() {
    return IfcProfileProperties::s_type.getName();
}

Step::ClassType IfcProfileProperties::getClassType() {
    return IfcProfileProperties::s_type;
}

Step::ClassType IfcProfileProperties::getType() const {
    return IfcProfileProperties::s_type;
}

bool IfcProfileProperties::isOfType(Step::ClassType t) {
    return IfcProfileProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcProfileProperties::getProfileName() {
    if (Step::BaseObject::inited()) {
        return m_profileName;
    }
    else {
        return Step::getUnset(m_profileName);
    }
}

void IfcProfileProperties::setProfileName(const IfcLabel &value) {
    m_profileName = value;
}

IfcProfileDef *IfcProfileProperties::getProfileDefinition() {
    if (Step::BaseObject::inited()) {
        return m_profileDefinition.get();
    }
    else {
        return NULL;
    }
}

void IfcProfileProperties::setProfileDefinition(const Step::RefPtr< IfcProfileDef > &value) {
    m_profileDefinition = value;
}

void IfcProfileProperties::release() {
    m_profileDefinition.release();
}

bool IfcProfileProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileName = Step::getUnset(m_profileName);
    }
    else {
        m_profileName = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileDefinition = NULL;
    }
    else {
        m_profileDefinition = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcProfileProperties::copy(const IfcProfileProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setProfileName(obj.m_profileName);
    setProfileDefinition(copyop(obj.m_profileDefinition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProfileProperties::s_type("IfcProfileProperties");
