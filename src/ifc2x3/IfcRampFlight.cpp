#include "ifc2x3/IfcRampFlight.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRampFlight::IfcRampFlight(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcRampFlight::~IfcRampFlight() {
}

bool IfcRampFlight::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRampFlight(this);
}

const std::string &IfcRampFlight::type() const {
    return IfcRampFlight::s_type.getName();
}

const Step::ClassType &IfcRampFlight::getClassType() {
    return IfcRampFlight::s_type;
}

const Step::ClassType &IfcRampFlight::getType() const {
    return IfcRampFlight::s_type;
}

bool IfcRampFlight::isOfType(const Step::ClassType &t) const {
    return IfcRampFlight::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

bool IfcRampFlight::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRampFlight::copy(const IfcRampFlight &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRampFlight::s_type("IfcRampFlight");
