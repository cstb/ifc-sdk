#include "ifc2x3/IfcEquipmentStandard.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcEquipmentStandard::IfcEquipmentStandard(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
}

IfcEquipmentStandard::~IfcEquipmentStandard() {
}

bool IfcEquipmentStandard::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEquipmentStandard(this);
}

const std::string &IfcEquipmentStandard::type() const {
    return IfcEquipmentStandard::s_type.getName();
}

const Step::ClassType &IfcEquipmentStandard::getClassType() {
    return IfcEquipmentStandard::s_type;
}

const Step::ClassType &IfcEquipmentStandard::getType() const {
    return IfcEquipmentStandard::s_type;
}

bool IfcEquipmentStandard::isOfType(const Step::ClassType &t) const {
    return IfcEquipmentStandard::s_type == t ? true : IfcControl::isOfType(t);
}

bool IfcEquipmentStandard::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEquipmentStandard::copy(const IfcEquipmentStandard &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEquipmentStandard::s_type("IfcEquipmentStandard");
