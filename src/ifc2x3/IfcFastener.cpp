#include "ifc2x3/IfcFastener.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementComponent.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFastener::IfcFastener(Step::Id id, Step::SPFData *args) : IfcElementComponent(id, args) {
}

IfcFastener::~IfcFastener() {
}

bool IfcFastener::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFastener(this);
}

const std::string &IfcFastener::type() const {
    return IfcFastener::s_type.getName();
}

const Step::ClassType &IfcFastener::getClassType() {
    return IfcFastener::s_type;
}

const Step::ClassType &IfcFastener::getType() const {
    return IfcFastener::s_type;
}

bool IfcFastener::isOfType(const Step::ClassType &t) const {
    return IfcFastener::s_type == t ? true : IfcElementComponent::isOfType(t);
}

bool IfcFastener::init() {
    bool status = IfcElementComponent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFastener::copy(const IfcFastener &obj, const CopyOp &copyop) {
    IfcElementComponent::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFastener::s_type("IfcFastener");
