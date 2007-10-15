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

#include "ifc2x3/IfcEnvironmentalImpactValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcEnvironmentalImpactValue::IfcEnvironmentalImpactValue(Step::Id id, Step::SPFData *args) : IfcAppliedValue(id, args) {
    m_impactType = Step::getUnset(m_impactType);
    m_category = IfcEnvironmentalImpactCategoryEnum_UNSET;
    m_userDefinedCategory = Step::getUnset(m_userDefinedCategory);
}

IfcEnvironmentalImpactValue::~IfcEnvironmentalImpactValue() {
}

bool IfcEnvironmentalImpactValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEnvironmentalImpactValue(this);
}

const std::string &IfcEnvironmentalImpactValue::type() {
    return IfcEnvironmentalImpactValue::s_type.getName();
}

Step::ClassType IfcEnvironmentalImpactValue::getClassType() {
    return IfcEnvironmentalImpactValue::s_type;
}

Step::ClassType IfcEnvironmentalImpactValue::getType() const {
    return IfcEnvironmentalImpactValue::s_type;
}

bool IfcEnvironmentalImpactValue::isOfType(Step::ClassType t) {
    return IfcEnvironmentalImpactValue::s_type == t ? true : IfcAppliedValue::isOfType(t);
}

IfcLabel IfcEnvironmentalImpactValue::getImpactType() {
    if (Step::BaseObject::inited()) {
        return m_impactType;
    }
    else {
        return Step::getUnset(m_impactType);
    }
}

void IfcEnvironmentalImpactValue::setImpactType(const IfcLabel &value) {
    m_impactType = value;
}

IfcEnvironmentalImpactCategoryEnum IfcEnvironmentalImpactValue::getCategory() {
    if (Step::BaseObject::inited()) {
        return m_category;
    }
    else {
        return IfcEnvironmentalImpactCategoryEnum_UNSET;
    }
}

void IfcEnvironmentalImpactValue::setCategory(IfcEnvironmentalImpactCategoryEnum value) {
    m_category = value;
}

IfcLabel IfcEnvironmentalImpactValue::getUserDefinedCategory() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedCategory;
    }
    else {
        return Step::getUnset(m_userDefinedCategory);
    }
}

void IfcEnvironmentalImpactValue::setUserDefinedCategory(const IfcLabel &value) {
    m_userDefinedCategory = value;
}

void IfcEnvironmentalImpactValue::release() {
    IfcAppliedValue::release();
}

bool IfcEnvironmentalImpactValue::init() {
    bool status = IfcAppliedValue::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_impactType = Step::getUnset(m_impactType);
    }
    else {
        m_impactType = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_category = IfcEnvironmentalImpactCategoryEnum_UNSET;
    }
    else {
        if (arg == ".COMBINEDVALUE.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_COMBINEDVALUE;
        }
        else if (arg == ".DISPOSAL.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_DISPOSAL;
        }
        else if (arg == ".EXTRACTION.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_EXTRACTION;
        }
        else if (arg == ".INSTALLATION.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_INSTALLATION;
        }
        else if (arg == ".MANUFACTURE.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_MANUFACTURE;
        }
        else if (arg == ".TRANSPORTATION.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_TRANSPORTATION;
        }
        else if (arg == ".USERDEFINED.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_category = IfcEnvironmentalImpactCategoryEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedCategory = Step::getUnset(m_userDefinedCategory);
    }
    else {
        m_userDefinedCategory = Step::spfToString(arg);
    }
    return true;
}

void IfcEnvironmentalImpactValue::copy(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop) {
    IfcAppliedValue::copy(obj, copyop);
    setImpactType(obj.m_impactType);
    setCategory(obj.m_category);
    setUserDefinedCategory(obj.m_userDefinedCategory);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnvironmentalImpactValue::s_type("IfcEnvironmentalImpactValue");
