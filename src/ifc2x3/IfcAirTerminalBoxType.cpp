#include "ifc2x3/IfcAirTerminalBoxType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowControllerType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAirTerminalBoxType::IfcAirTerminalBoxType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcAirTerminalBoxTypeEnum_UNSET;
}

IfcAirTerminalBoxType::~IfcAirTerminalBoxType() {
}

bool IfcAirTerminalBoxType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAirTerminalBoxType(this);
}

const std::string &IfcAirTerminalBoxType::type() const {
    return IfcAirTerminalBoxType::s_type.getName();
}

const Step::ClassType &IfcAirTerminalBoxType::getClassType() {
    return IfcAirTerminalBoxType::s_type;
}

const Step::ClassType &IfcAirTerminalBoxType::getType() const {
    return IfcAirTerminalBoxType::s_type;
}

bool IfcAirTerminalBoxType::isOfType(const Step::ClassType &t) const {
    return IfcAirTerminalBoxType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcAirTerminalBoxTypeEnum IfcAirTerminalBoxType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcAirTerminalBoxTypeEnum_UNSET;
    }
}

const IfcAirTerminalBoxTypeEnum IfcAirTerminalBoxType::getPredefinedType() const {
    IfcAirTerminalBoxType * deConstObject = const_cast< IfcAirTerminalBoxType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcAirTerminalBoxType::setPredefinedType(IfcAirTerminalBoxTypeEnum value) {
    m_predefinedType = value;
}

void IfcAirTerminalBoxType::unsetPredefinedType() {
    m_predefinedType = IfcAirTerminalBoxTypeEnum_UNSET;
}

bool IfcAirTerminalBoxType::testPredefinedType() const {
    return getPredefinedType() != IfcAirTerminalBoxTypeEnum_UNSET;
}

bool IfcAirTerminalBoxType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcAirTerminalBoxTypeEnum_UNSET;
    }
    else {
        if (arg == ".CONSTANTFLOW.") {
            m_predefinedType = IfcAirTerminalBoxTypeEnum_CONSTANTFLOW;
        }
        else if (arg == ".VARIABLEFLOWPRESSUREDEPENDANT.") {
            m_predefinedType = IfcAirTerminalBoxTypeEnum_VARIABLEFLOWPRESSUREDEPENDANT;
        }
        else if (arg == ".VARIABLEFLOWPRESSUREINDEPENDANT.") {
            m_predefinedType = IfcAirTerminalBoxTypeEnum_VARIABLEFLOWPRESSUREINDEPENDANT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcAirTerminalBoxTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcAirTerminalBoxTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAirTerminalBoxType::copy(const IfcAirTerminalBoxType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAirTerminalBoxType::s_type("IfcAirTerminalBoxType");
