#include "ifc2x3/IfcElectricGeneratorType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcElectricGeneratorType::IfcElectricGeneratorType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
}

IfcElectricGeneratorType::~IfcElectricGeneratorType() {
}

bool IfcElectricGeneratorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricGeneratorType(this);
}

const std::string &IfcElectricGeneratorType::type() const {
    return IfcElectricGeneratorType::s_type.getName();
}

const Step::ClassType &IfcElectricGeneratorType::getClassType() {
    return IfcElectricGeneratorType::s_type;
}

const Step::ClassType &IfcElectricGeneratorType::getType() const {
    return IfcElectricGeneratorType::s_type;
}

bool IfcElectricGeneratorType::isOfType(const Step::ClassType &t) const {
    return IfcElectricGeneratorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcElectricGeneratorTypeEnum IfcElectricGeneratorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricGeneratorTypeEnum_UNSET;
    }
}

const IfcElectricGeneratorTypeEnum IfcElectricGeneratorType::getPredefinedType() const {
    IfcElectricGeneratorType * deConstObject = const_cast< IfcElectricGeneratorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricGeneratorType::setPredefinedType(IfcElectricGeneratorTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricGeneratorType::unsetPredefinedType() {
    m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
}

bool IfcElectricGeneratorType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricGeneratorTypeEnum_UNSET;
}

bool IfcElectricGeneratorType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricGeneratorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricGeneratorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricGeneratorType::copy(const IfcElectricGeneratorType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricGeneratorType::s_type("IfcElectricGeneratorType");
