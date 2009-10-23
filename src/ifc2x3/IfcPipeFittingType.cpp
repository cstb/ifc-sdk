#include "ifc2x3/IfcPipeFittingType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPipeFittingType::IfcPipeFittingType(Step::Id id, Step::SPFData *args) : IfcFlowFittingType(id, args) {
    m_predefinedType = IfcPipeFittingTypeEnum_UNSET;
}

IfcPipeFittingType::~IfcPipeFittingType() {
}

bool IfcPipeFittingType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPipeFittingType(this);
}

const std::string &IfcPipeFittingType::type() const {
    return IfcPipeFittingType::s_type.getName();
}

const Step::ClassType &IfcPipeFittingType::getClassType() {
    return IfcPipeFittingType::s_type;
}

const Step::ClassType &IfcPipeFittingType::getType() const {
    return IfcPipeFittingType::s_type;
}

bool IfcPipeFittingType::isOfType(const Step::ClassType &t) const {
    return IfcPipeFittingType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcPipeFittingTypeEnum IfcPipeFittingType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPipeFittingTypeEnum_UNSET;
    }
}

const IfcPipeFittingTypeEnum IfcPipeFittingType::getPredefinedType() const {
    IfcPipeFittingType * deConstObject = const_cast< IfcPipeFittingType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcPipeFittingType::setPredefinedType(IfcPipeFittingTypeEnum value) {
    m_predefinedType = value;
}

void IfcPipeFittingType::unsetPredefinedType() {
    m_predefinedType = IfcPipeFittingTypeEnum_UNSET;
}

bool IfcPipeFittingType::testPredefinedType() const {
    return getPredefinedType() != IfcPipeFittingTypeEnum_UNSET;
}

bool IfcPipeFittingType::init() {
    bool status = IfcFlowFittingType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPipeFittingTypeEnum_UNSET;
    }
    else {
        if (arg == ".BEND.") {
            m_predefinedType = IfcPipeFittingTypeEnum_BEND;
        }
        else if (arg == ".CONNECTOR.") {
            m_predefinedType = IfcPipeFittingTypeEnum_CONNECTOR;
        }
        else if (arg == ".ENTRY.") {
            m_predefinedType = IfcPipeFittingTypeEnum_ENTRY;
        }
        else if (arg == ".EXIT.") {
            m_predefinedType = IfcPipeFittingTypeEnum_EXIT;
        }
        else if (arg == ".JUNCTION.") {
            m_predefinedType = IfcPipeFittingTypeEnum_JUNCTION;
        }
        else if (arg == ".OBSTRUCTION.") {
            m_predefinedType = IfcPipeFittingTypeEnum_OBSTRUCTION;
        }
        else if (arg == ".TRANSITION.") {
            m_predefinedType = IfcPipeFittingTypeEnum_TRANSITION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPipeFittingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPipeFittingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPipeFittingType::copy(const IfcPipeFittingType &obj, const CopyOp &copyop) {
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPipeFittingType::s_type("IfcPipeFittingType");
