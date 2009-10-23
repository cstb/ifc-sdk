#include "ifc2x3/IfcBuildingElementComponent.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBuildingElementComponent::IfcBuildingElementComponent(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcBuildingElementComponent::~IfcBuildingElementComponent() {
}

bool IfcBuildingElementComponent::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingElementComponent(this);
}

const std::string &IfcBuildingElementComponent::type() const {
    return IfcBuildingElementComponent::s_type.getName();
}

const Step::ClassType &IfcBuildingElementComponent::getClassType() {
    return IfcBuildingElementComponent::s_type;
}

const Step::ClassType &IfcBuildingElementComponent::getType() const {
    return IfcBuildingElementComponent::s_type;
}

bool IfcBuildingElementComponent::isOfType(const Step::ClassType &t) const {
    return IfcBuildingElementComponent::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

bool IfcBuildingElementComponent::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBuildingElementComponent::copy(const IfcBuildingElementComponent &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementComponent::s_type("IfcBuildingElementComponent");
