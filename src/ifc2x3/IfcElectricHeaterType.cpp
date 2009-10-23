#include "ifc2x3/IfcElectricHeaterType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowTerminalType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcElectricHeaterType::IfcElectricHeaterType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
}

IfcElectricHeaterType::~IfcElectricHeaterType() {
}

bool IfcElectricHeaterType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricHeaterType(this);
}

const std::string &IfcElectricHeaterType::type() const {
    return IfcElectricHeaterType::s_type.getName();
}

const Step::ClassType &IfcElectricHeaterType::getClassType() {
    return IfcElectricHeaterType::s_type;
}

const Step::ClassType &IfcElectricHeaterType::getType() const {
    return IfcElectricHeaterType::s_type;
}

bool IfcElectricHeaterType::isOfType(const Step::ClassType &t) const {
    return IfcElectricHeaterType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcElectricHeaterTypeEnum IfcElectricHeaterType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricHeaterTypeEnum_UNSET;
    }
}

const IfcElectricHeaterTypeEnum IfcElectricHeaterType::getPredefinedType() const {
    IfcElectricHeaterType * deConstObject = const_cast< IfcElectricHeaterType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricHeaterType::setPredefinedType(IfcElectricHeaterTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricHeaterType::unsetPredefinedType() {
    m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
}

bool IfcElectricHeaterType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricHeaterTypeEnum_UNSET;
}

bool IfcElectricHeaterType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELECTRICPOINTHEATER.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICPOINTHEATER;
        }
        else if (arg == ".ELECTRICCABLEHEATER.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICCABLEHEATER;
        }
        else if (arg == ".ELECTRICMATHEATER.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICMATHEATER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricHeaterType::copy(const IfcElectricHeaterType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricHeaterType::s_type("IfcElectricHeaterType");
