#include "ifc2x3/IfcFurnishingElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFurnishingElement::IfcFurnishingElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcFurnishingElement::~IfcFurnishingElement() {
}

bool IfcFurnishingElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFurnishingElement(this);
}

const std::string &IfcFurnishingElement::type() const {
    return IfcFurnishingElement::s_type.getName();
}

const Step::ClassType &IfcFurnishingElement::getClassType() {
    return IfcFurnishingElement::s_type;
}

const Step::ClassType &IfcFurnishingElement::getType() const {
    return IfcFurnishingElement::s_type;
}

bool IfcFurnishingElement::isOfType(const Step::ClassType &t) const {
    return IfcFurnishingElement::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcFurnishingElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFurnishingElement::copy(const IfcFurnishingElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnishingElement::s_type("IfcFurnishingElement");
