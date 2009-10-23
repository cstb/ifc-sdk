#include "ifc2x3/IfcCoilType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCoilType::IfcCoilType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcCoilTypeEnum_UNSET;
}

IfcCoilType::~IfcCoilType() {
}

bool IfcCoilType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCoilType(this);
}

const std::string &IfcCoilType::type() const {
    return IfcCoilType::s_type.getName();
}

const Step::ClassType &IfcCoilType::getClassType() {
    return IfcCoilType::s_type;
}

const Step::ClassType &IfcCoilType::getType() const {
    return IfcCoilType::s_type;
}

bool IfcCoilType::isOfType(const Step::ClassType &t) const {
    return IfcCoilType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCoilTypeEnum IfcCoilType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCoilTypeEnum_UNSET;
    }
}

const IfcCoilTypeEnum IfcCoilType::getPredefinedType() const {
    IfcCoilType * deConstObject = const_cast< IfcCoilType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCoilType::setPredefinedType(IfcCoilTypeEnum value) {
    m_predefinedType = value;
}

void IfcCoilType::unsetPredefinedType() {
    m_predefinedType = IfcCoilTypeEnum_UNSET;
}

bool IfcCoilType::testPredefinedType() const {
    return getPredefinedType() != IfcCoilTypeEnum_UNSET;
}

bool IfcCoilType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCoilTypeEnum_UNSET;
    }
    else {
        if (arg == ".DXCOOLINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_DXCOOLINGCOIL;
        }
        else if (arg == ".WATERCOOLINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_WATERCOOLINGCOIL;
        }
        else if (arg == ".STEAMHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_STEAMHEATINGCOIL;
        }
        else if (arg == ".WATERHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_WATERHEATINGCOIL;
        }
        else if (arg == ".ELECTRICHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_ELECTRICHEATINGCOIL;
        }
        else if (arg == ".GASHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_GASHEATINGCOIL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCoilTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCoilTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCoilType::copy(const IfcCoilType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCoilType::s_type("IfcCoilType");
