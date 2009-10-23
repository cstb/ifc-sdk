#include "ifc2x3/IfcFastenerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementComponentType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFastenerType::IfcFastenerType(Step::Id id, Step::SPFData *args) : IfcElementComponentType(id, args) {
}

IfcFastenerType::~IfcFastenerType() {
}

bool IfcFastenerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFastenerType(this);
}

const std::string &IfcFastenerType::type() const {
    return IfcFastenerType::s_type.getName();
}

const Step::ClassType &IfcFastenerType::getClassType() {
    return IfcFastenerType::s_type;
}

const Step::ClassType &IfcFastenerType::getType() const {
    return IfcFastenerType::s_type;
}

bool IfcFastenerType::isOfType(const Step::ClassType &t) const {
    return IfcFastenerType::s_type == t ? true : IfcElementComponentType::isOfType(t);
}

bool IfcFastenerType::init() {
    bool status = IfcElementComponentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFastenerType::copy(const IfcFastenerType &obj, const CopyOp &copyop) {
    IfcElementComponentType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFastenerType::s_type("IfcFastenerType");
