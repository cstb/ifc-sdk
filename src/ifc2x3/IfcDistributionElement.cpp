#include "ifc2x3/IfcDistributionElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDistributionElement::IfcDistributionElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcDistributionElement::~IfcDistributionElement() {
}

bool IfcDistributionElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionElement(this);
}

const std::string &IfcDistributionElement::type() const {
    return IfcDistributionElement::s_type.getName();
}

const Step::ClassType &IfcDistributionElement::getClassType() {
    return IfcDistributionElement::s_type;
}

const Step::ClassType &IfcDistributionElement::getType() const {
    return IfcDistributionElement::s_type;
}

bool IfcDistributionElement::isOfType(const Step::ClassType &t) const {
    return IfcDistributionElement::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcDistributionElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionElement::copy(const IfcDistributionElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionElement::s_type("IfcDistributionElement");
