#include "ifc2x3/IfcDuctSilencerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowTreatmentDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDuctSilencerType::IfcDuctSilencerType(Step::Id id, Step::SPFData *args) : IfcFlowTreatmentDeviceType(id, args) {
    m_predefinedType = IfcDuctSilencerTypeEnum_UNSET;
}

IfcDuctSilencerType::~IfcDuctSilencerType() {
}

bool IfcDuctSilencerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDuctSilencerType(this);
}

const std::string &IfcDuctSilencerType::type() const {
    return IfcDuctSilencerType::s_type.getName();
}

const Step::ClassType &IfcDuctSilencerType::getClassType() {
    return IfcDuctSilencerType::s_type;
}

const Step::ClassType &IfcDuctSilencerType::getType() const {
    return IfcDuctSilencerType::s_type;
}

bool IfcDuctSilencerType::isOfType(const Step::ClassType &t) const {
    return IfcDuctSilencerType::s_type == t ? true : IfcFlowTreatmentDeviceType::isOfType(t);
}

IfcDuctSilencerTypeEnum IfcDuctSilencerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDuctSilencerTypeEnum_UNSET;
    }
}

const IfcDuctSilencerTypeEnum IfcDuctSilencerType::getPredefinedType() const {
    IfcDuctSilencerType * deConstObject = const_cast< IfcDuctSilencerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcDuctSilencerType::setPredefinedType(IfcDuctSilencerTypeEnum value) {
    m_predefinedType = value;
}

void IfcDuctSilencerType::unsetPredefinedType() {
    m_predefinedType = IfcDuctSilencerTypeEnum_UNSET;
}

bool IfcDuctSilencerType::testPredefinedType() const {
    return getPredefinedType() != IfcDuctSilencerTypeEnum_UNSET;
}

bool IfcDuctSilencerType::init() {
    bool status = IfcFlowTreatmentDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDuctSilencerTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLATOVAL.") {
            m_predefinedType = IfcDuctSilencerTypeEnum_FLATOVAL;
        }
        else if (arg == ".RECTANGULAR.") {
            m_predefinedType = IfcDuctSilencerTypeEnum_RECTANGULAR;
        }
        else if (arg == ".ROUND.") {
            m_predefinedType = IfcDuctSilencerTypeEnum_ROUND;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDuctSilencerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDuctSilencerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDuctSilencerType::copy(const IfcDuctSilencerType &obj, const CopyOp &copyop) {
    IfcFlowTreatmentDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDuctSilencerType::s_type("IfcDuctSilencerType");
