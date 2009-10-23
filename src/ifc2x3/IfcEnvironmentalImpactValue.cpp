#include "ifc2x3/IfcEnvironmentalImpactValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcEnvironmentalImpactValue::IfcEnvironmentalImpactValue(Step::Id id, Step::SPFData *args) : IfcAppliedValue(id, args) {
    m_impactType = Step::getUnset(m_impactType);
    m_category = IfcEnvironmentalImpactCategoryEnum_UNSET;
    m_userDefinedCategory = Step::getUnset(m_userDefinedCategory);
}

IfcEnvironmentalImpactValue::~IfcEnvironmentalImpactValue() {
}

bool IfcEnvironmentalImpactValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEnvironmentalImpactValue(this);
}

const std::string &IfcEnvironmentalImpactValue::type() const {
    return IfcEnvironmentalImpactValue::s_type.getName();
}

const Step::ClassType &IfcEnvironmentalImpactValue::getClassType() {
    return IfcEnvironmentalImpactValue::s_type;
}

const Step::ClassType &IfcEnvironmentalImpactValue::getType() const {
    return IfcEnvironmentalImpactValue::s_type;
}

bool IfcEnvironmentalImpactValue::isOfType(const Step::ClassType &t) const {
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

const IfcLabel IfcEnvironmentalImpactValue::getImpactType() const {
    IfcEnvironmentalImpactValue * deConstObject = const_cast< IfcEnvironmentalImpactValue * > (this);
    return deConstObject->getImpactType();
}

void IfcEnvironmentalImpactValue::setImpactType(const IfcLabel &value) {
    m_impactType = value;
}

void IfcEnvironmentalImpactValue::unsetImpactType() {
    m_impactType = Step::getUnset(getImpactType());
}

bool IfcEnvironmentalImpactValue::testImpactType() const {
    return !Step::isUnset(getImpactType());
}

IfcEnvironmentalImpactCategoryEnum IfcEnvironmentalImpactValue::getCategory() {
    if (Step::BaseObject::inited()) {
        return m_category;
    }
    else {
        return IfcEnvironmentalImpactCategoryEnum_UNSET;
    }
}

const IfcEnvironmentalImpactCategoryEnum IfcEnvironmentalImpactValue::getCategory() const {
    IfcEnvironmentalImpactValue * deConstObject = const_cast< IfcEnvironmentalImpactValue * > (this);
    return deConstObject->getCategory();
}

void IfcEnvironmentalImpactValue::setCategory(IfcEnvironmentalImpactCategoryEnum value) {
    m_category = value;
}

void IfcEnvironmentalImpactValue::unsetCategory() {
    m_category = IfcEnvironmentalImpactCategoryEnum_UNSET;
}

bool IfcEnvironmentalImpactValue::testCategory() const {
    return getCategory() != IfcEnvironmentalImpactCategoryEnum_UNSET;
}

IfcLabel IfcEnvironmentalImpactValue::getUserDefinedCategory() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedCategory;
    }
    else {
        return Step::getUnset(m_userDefinedCategory);
    }
}

const IfcLabel IfcEnvironmentalImpactValue::getUserDefinedCategory() const {
    IfcEnvironmentalImpactValue * deConstObject = const_cast< IfcEnvironmentalImpactValue * > (this);
    return deConstObject->getUserDefinedCategory();
}

void IfcEnvironmentalImpactValue::setUserDefinedCategory(const IfcLabel &value) {
    m_userDefinedCategory = value;
}

void IfcEnvironmentalImpactValue::unsetUserDefinedCategory() {
    m_userDefinedCategory = Step::getUnset(getUserDefinedCategory());
}

bool IfcEnvironmentalImpactValue::testUserDefinedCategory() const {
    return !Step::isUnset(getUserDefinedCategory());
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
        m_impactType = Step::String::fromSPF(arg);
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
        m_userDefinedCategory = Step::String::fromSPF(arg);
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
