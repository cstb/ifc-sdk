#include "ifc2x3/IfcBeamType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBeamType::IfcBeamType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcBeamTypeEnum_UNSET;
}

IfcBeamType::~IfcBeamType() {
}

bool IfcBeamType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBeamType(this);
}

const std::string &IfcBeamType::type() const {
    return IfcBeamType::s_type.getName();
}

const Step::ClassType &IfcBeamType::getClassType() {
    return IfcBeamType::s_type;
}

const Step::ClassType &IfcBeamType::getType() const {
    return IfcBeamType::s_type;
}

bool IfcBeamType::isOfType(const Step::ClassType &t) const {
    return IfcBeamType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcBeamTypeEnum IfcBeamType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcBeamTypeEnum_UNSET;
    }
}

const IfcBeamTypeEnum IfcBeamType::getPredefinedType() const {
    IfcBeamType * deConstObject = const_cast< IfcBeamType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcBeamType::setPredefinedType(IfcBeamTypeEnum value) {
    m_predefinedType = value;
}

void IfcBeamType::unsetPredefinedType() {
    m_predefinedType = IfcBeamTypeEnum_UNSET;
}

bool IfcBeamType::testPredefinedType() const {
    return getPredefinedType() != IfcBeamTypeEnum_UNSET;
}

bool IfcBeamType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcBeamTypeEnum_UNSET;
    }
    else {
        if (arg == ".BEAM.") {
            m_predefinedType = IfcBeamTypeEnum_BEAM;
        }
        else if (arg == ".JOIST.") {
            m_predefinedType = IfcBeamTypeEnum_JOIST;
        }
        else if (arg == ".LINTEL.") {
            m_predefinedType = IfcBeamTypeEnum_LINTEL;
        }
        else if (arg == ".T_BEAM.") {
            m_predefinedType = IfcBeamTypeEnum_T_BEAM;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcBeamTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcBeamTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcBeamType::copy(const IfcBeamType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBeamType::s_type("IfcBeamType");
