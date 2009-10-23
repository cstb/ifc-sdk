#include "ifc2x3/IfcJunctionBoxType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcJunctionBoxType::IfcJunctionBoxType(Step::Id id, Step::SPFData *args) : IfcFlowFittingType(id, args) {
    m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
}

IfcJunctionBoxType::~IfcJunctionBoxType() {
}

bool IfcJunctionBoxType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcJunctionBoxType(this);
}

const std::string &IfcJunctionBoxType::type() const {
    return IfcJunctionBoxType::s_type.getName();
}

const Step::ClassType &IfcJunctionBoxType::getClassType() {
    return IfcJunctionBoxType::s_type;
}

const Step::ClassType &IfcJunctionBoxType::getType() const {
    return IfcJunctionBoxType::s_type;
}

bool IfcJunctionBoxType::isOfType(const Step::ClassType &t) const {
    return IfcJunctionBoxType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcJunctionBoxTypeEnum IfcJunctionBoxType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcJunctionBoxTypeEnum_UNSET;
    }
}

const IfcJunctionBoxTypeEnum IfcJunctionBoxType::getPredefinedType() const {
    IfcJunctionBoxType * deConstObject = const_cast< IfcJunctionBoxType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcJunctionBoxType::setPredefinedType(IfcJunctionBoxTypeEnum value) {
    m_predefinedType = value;
}

void IfcJunctionBoxType::unsetPredefinedType() {
    m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
}

bool IfcJunctionBoxType::testPredefinedType() const {
    return getPredefinedType() != IfcJunctionBoxTypeEnum_UNSET;
}

bool IfcJunctionBoxType::init() {
    bool status = IfcFlowFittingType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcJunctionBoxTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcJunctionBoxTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcJunctionBoxType::copy(const IfcJunctionBoxType &obj, const CopyOp &copyop) {
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcJunctionBoxType::s_type("IfcJunctionBoxType");
