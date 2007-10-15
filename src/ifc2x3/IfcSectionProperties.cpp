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

#include "ifc2x3/IfcSectionProperties.h"

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

IfcSectionProperties::IfcSectionProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_sectionType = IfcSectionTypeEnum_UNSET;
    m_startProfile = NULL;
    m_endProfile = NULL;
}

IfcSectionProperties::~IfcSectionProperties() {
}

bool IfcSectionProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSectionProperties(this);
}

const std::string &IfcSectionProperties::type() {
    return IfcSectionProperties::s_type.getName();
}

Step::ClassType IfcSectionProperties::getClassType() {
    return IfcSectionProperties::s_type;
}

Step::ClassType IfcSectionProperties::getType() const {
    return IfcSectionProperties::s_type;
}

bool IfcSectionProperties::isOfType(Step::ClassType t) {
    return IfcSectionProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcSectionTypeEnum IfcSectionProperties::getSectionType() {
    if (Step::BaseObject::inited()) {
        return m_sectionType;
    }
    else {
        return IfcSectionTypeEnum_UNSET;
    }
}

void IfcSectionProperties::setSectionType(IfcSectionTypeEnum value) {
    m_sectionType = value;
}

IfcProfileDef *IfcSectionProperties::getStartProfile() {
    if (Step::BaseObject::inited()) {
        return m_startProfile.get();
    }
    else {
        return NULL;
    }
}

void IfcSectionProperties::setStartProfile(const Step::RefPtr< IfcProfileDef > &value) {
    m_startProfile = value;
}

IfcProfileDef *IfcSectionProperties::getEndProfile() {
    if (Step::BaseObject::inited()) {
        return m_endProfile.get();
    }
    else {
        return NULL;
    }
}

void IfcSectionProperties::setEndProfile(const Step::RefPtr< IfcProfileDef > &value) {
    m_endProfile = value;
}

void IfcSectionProperties::release() {
    m_startProfile.release();
    m_endProfile.release();
}

bool IfcSectionProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sectionType = IfcSectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".UNIFORM.") {
            m_sectionType = IfcSectionTypeEnum_UNIFORM;
        }
        else if (arg == ".TAPERED.") {
            m_sectionType = IfcSectionTypeEnum_TAPERED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startProfile = NULL;
    }
    else {
        m_startProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_endProfile = NULL;
    }
    else {
        m_endProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSectionProperties::copy(const IfcSectionProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSectionType(obj.m_sectionType);
    setStartProfile(copyop(obj.m_startProfile.get()));
    setEndProfile(copyop(obj.m_endProfile.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionProperties::s_type("IfcSectionProperties");
