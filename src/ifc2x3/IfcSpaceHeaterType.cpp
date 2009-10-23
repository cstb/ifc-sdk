#include "ifc2x3/IfcSpaceHeaterType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSpaceHeaterType::IfcSpaceHeaterType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcSpaceHeaterTypeEnum_UNSET;
}

IfcSpaceHeaterType::~IfcSpaceHeaterType() {
}

bool IfcSpaceHeaterType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpaceHeaterType(this);
}

const std::string &IfcSpaceHeaterType::type() const {
    return IfcSpaceHeaterType::s_type.getName();
}

const Step::ClassType &IfcSpaceHeaterType::getClassType() {
    return IfcSpaceHeaterType::s_type;
}

const Step::ClassType &IfcSpaceHeaterType::getType() const {
    return IfcSpaceHeaterType::s_type;
}

bool IfcSpaceHeaterType::isOfType(const Step::ClassType &t) const {
    return IfcSpaceHeaterType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcSpaceHeaterTypeEnum IfcSpaceHeaterType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSpaceHeaterTypeEnum_UNSET;
    }
}

const IfcSpaceHeaterTypeEnum IfcSpaceHeaterType::getPredefinedType() const {
    IfcSpaceHeaterType * deConstObject = const_cast< IfcSpaceHeaterType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSpaceHeaterType::setPredefinedType(IfcSpaceHeaterTypeEnum value) {
    m_predefinedType = value;
}

void IfcSpaceHeaterType::unsetPredefinedType() {
    m_predefinedType = IfcSpaceHeaterTypeEnum_UNSET;
}

bool IfcSpaceHeaterType::testPredefinedType() const {
    return getPredefinedType() != IfcSpaceHeaterTypeEnum_UNSET;
}

bool IfcSpaceHeaterType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSpaceHeaterTypeEnum_UNSET;
    }
    else {
        if (arg == ".SECTIONALRADIATOR.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_SECTIONALRADIATOR;
        }
        else if (arg == ".PANELRADIATOR.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_PANELRADIATOR;
        }
        else if (arg == ".TUBULARRADIATOR.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_TUBULARRADIATOR;
        }
        else if (arg == ".CONVECTOR.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_CONVECTOR;
        }
        else if (arg == ".BASEBOARDHEATER.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_BASEBOARDHEATER;
        }
        else if (arg == ".FINNEDTUBEUNIT.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_FINNEDTUBEUNIT;
        }
        else if (arg == ".UNITHEATER.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_UNITHEATER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSpaceHeaterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceHeaterType::copy(const IfcSpaceHeaterType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceHeaterType::s_type("IfcSpaceHeaterType");
