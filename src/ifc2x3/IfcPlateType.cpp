#include "ifc2x3/IfcPlateType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPlateType::IfcPlateType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcPlateTypeEnum_UNSET;
}

IfcPlateType::~IfcPlateType() {
}

bool IfcPlateType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlateType(this);
}

const std::string &IfcPlateType::type() const {
    return IfcPlateType::s_type.getName();
}

const Step::ClassType &IfcPlateType::getClassType() {
    return IfcPlateType::s_type;
}

const Step::ClassType &IfcPlateType::getType() const {
    return IfcPlateType::s_type;
}

bool IfcPlateType::isOfType(const Step::ClassType &t) const {
    return IfcPlateType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcPlateTypeEnum IfcPlateType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPlateTypeEnum_UNSET;
    }
}

const IfcPlateTypeEnum IfcPlateType::getPredefinedType() const {
    IfcPlateType * deConstObject = const_cast< IfcPlateType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcPlateType::setPredefinedType(IfcPlateTypeEnum value) {
    m_predefinedType = value;
}

void IfcPlateType::unsetPredefinedType() {
    m_predefinedType = IfcPlateTypeEnum_UNSET;
}

bool IfcPlateType::testPredefinedType() const {
    return getPredefinedType() != IfcPlateTypeEnum_UNSET;
}

bool IfcPlateType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPlateTypeEnum_UNSET;
    }
    else {
        if (arg == ".CURTAIN_PANEL.") {
            m_predefinedType = IfcPlateTypeEnum_CURTAIN_PANEL;
        }
        else if (arg == ".SHEET.") {
            m_predefinedType = IfcPlateTypeEnum_SHEET;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPlateTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPlateTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPlateType::copy(const IfcPlateType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlateType::s_type("IfcPlateType");
