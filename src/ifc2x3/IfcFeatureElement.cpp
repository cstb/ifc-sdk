#include "ifc2x3/IfcFeatureElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFeatureElement::IfcFeatureElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcFeatureElement::~IfcFeatureElement() {
}

bool IfcFeatureElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFeatureElement(this);
}

const std::string &IfcFeatureElement::type() const {
    return IfcFeatureElement::s_type.getName();
}

const Step::ClassType &IfcFeatureElement::getClassType() {
    return IfcFeatureElement::s_type;
}

const Step::ClassType &IfcFeatureElement::getType() const {
    return IfcFeatureElement::s_type;
}

bool IfcFeatureElement::isOfType(const Step::ClassType &t) const {
    return IfcFeatureElement::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcFeatureElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFeatureElement::copy(const IfcFeatureElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFeatureElement::s_type("IfcFeatureElement");
