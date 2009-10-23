#include "ifc2x3/IfcActuatorType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcActuatorType::IfcActuatorType(Step::Id id, Step::SPFData *args) : IfcDistributionControlElementType(id, args) {
    m_predefinedType = IfcActuatorTypeEnum_UNSET;
}

IfcActuatorType::~IfcActuatorType() {
}

bool IfcActuatorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcActuatorType(this);
}

const std::string &IfcActuatorType::type() const {
    return IfcActuatorType::s_type.getName();
}

const Step::ClassType &IfcActuatorType::getClassType() {
    return IfcActuatorType::s_type;
}

const Step::ClassType &IfcActuatorType::getType() const {
    return IfcActuatorType::s_type;
}

bool IfcActuatorType::isOfType(const Step::ClassType &t) const {
    return IfcActuatorType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcActuatorTypeEnum IfcActuatorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcActuatorTypeEnum_UNSET;
    }
}

const IfcActuatorTypeEnum IfcActuatorType::getPredefinedType() const {
    IfcActuatorType * deConstObject = const_cast< IfcActuatorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcActuatorType::setPredefinedType(IfcActuatorTypeEnum value) {
    m_predefinedType = value;
}

void IfcActuatorType::unsetPredefinedType() {
    m_predefinedType = IfcActuatorTypeEnum_UNSET;
}

bool IfcActuatorType::testPredefinedType() const {
    return getPredefinedType() != IfcActuatorTypeEnum_UNSET;
}

bool IfcActuatorType::init() {
    bool status = IfcDistributionControlElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcActuatorTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELECTRICACTUATOR.") {
            m_predefinedType = IfcActuatorTypeEnum_ELECTRICACTUATOR;
        }
        else if (arg == ".HANDOPERATEDACTUATOR.") {
            m_predefinedType = IfcActuatorTypeEnum_HANDOPERATEDACTUATOR;
        }
        else if (arg == ".HYDRAULICACTUATOR.") {
            m_predefinedType = IfcActuatorTypeEnum_HYDRAULICACTUATOR;
        }
        else if (arg == ".PNEUMATICACTUATOR.") {
            m_predefinedType = IfcActuatorTypeEnum_PNEUMATICACTUATOR;
        }
        else if (arg == ".THERMOSTATICACTUATOR.") {
            m_predefinedType = IfcActuatorTypeEnum_THERMOSTATICACTUATOR;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcActuatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcActuatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcActuatorType::copy(const IfcActuatorType &obj, const CopyOp &copyop) {
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcActuatorType::s_type("IfcActuatorType");
