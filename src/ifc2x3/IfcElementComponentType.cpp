#include "ifc2x3/IfcElementComponentType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcElementComponentType::IfcElementComponentType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcElementComponentType::~IfcElementComponentType() {
}

bool IfcElementComponentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementComponentType(this);
}

const std::string &IfcElementComponentType::type() const {
    return IfcElementComponentType::s_type.getName();
}

const Step::ClassType &IfcElementComponentType::getClassType() {
    return IfcElementComponentType::s_type;
}

const Step::ClassType &IfcElementComponentType::getType() const {
    return IfcElementComponentType::s_type;
}

bool IfcElementComponentType::isOfType(const Step::ClassType &t) const {
    return IfcElementComponentType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcElementComponentType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElementComponentType::copy(const IfcElementComponentType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementComponentType::s_type("IfcElementComponentType");
