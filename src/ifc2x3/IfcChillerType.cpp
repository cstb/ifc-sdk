#include "ifc2x3/IfcChillerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcChillerType::IfcChillerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcChillerTypeEnum_UNSET;
}

IfcChillerType::~IfcChillerType() {
}

bool IfcChillerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcChillerType(this);
}

const std::string &IfcChillerType::type() const {
    return IfcChillerType::s_type.getName();
}

const Step::ClassType &IfcChillerType::getClassType() {
    return IfcChillerType::s_type;
}

const Step::ClassType &IfcChillerType::getType() const {
    return IfcChillerType::s_type;
}

bool IfcChillerType::isOfType(const Step::ClassType &t) const {
    return IfcChillerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcChillerTypeEnum IfcChillerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcChillerTypeEnum_UNSET;
    }
}

const IfcChillerTypeEnum IfcChillerType::getPredefinedType() const {
    IfcChillerType * deConstObject = const_cast< IfcChillerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcChillerType::setPredefinedType(IfcChillerTypeEnum value) {
    m_predefinedType = value;
}

void IfcChillerType::unsetPredefinedType() {
    m_predefinedType = IfcChillerTypeEnum_UNSET;
}

bool IfcChillerType::testPredefinedType() const {
    return getPredefinedType() != IfcChillerTypeEnum_UNSET;
}

bool IfcChillerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcChillerTypeEnum_UNSET;
    }
    else {
        if (arg == ".AIRCOOLED.") {
            m_predefinedType = IfcChillerTypeEnum_AIRCOOLED;
        }
        else if (arg == ".WATERCOOLED.") {
            m_predefinedType = IfcChillerTypeEnum_WATERCOOLED;
        }
        else if (arg == ".HEATRECOVERY.") {
            m_predefinedType = IfcChillerTypeEnum_HEATRECOVERY;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcChillerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcChillerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcChillerType::copy(const IfcChillerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcChillerType::s_type("IfcChillerType");
