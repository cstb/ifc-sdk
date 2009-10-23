#include "ifc2x3/IfcStructuredDimensionCallout.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCallout.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStructuredDimensionCallout::IfcStructuredDimensionCallout(Step::Id id, Step::SPFData *args) : IfcDraughtingCallout(id, args) {
}

IfcStructuredDimensionCallout::~IfcStructuredDimensionCallout() {
}

bool IfcStructuredDimensionCallout::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuredDimensionCallout(this);
}

const std::string &IfcStructuredDimensionCallout::type() const {
    return IfcStructuredDimensionCallout::s_type.getName();
}

const Step::ClassType &IfcStructuredDimensionCallout::getClassType() {
    return IfcStructuredDimensionCallout::s_type;
}

const Step::ClassType &IfcStructuredDimensionCallout::getType() const {
    return IfcStructuredDimensionCallout::s_type;
}

bool IfcStructuredDimensionCallout::isOfType(const Step::ClassType &t) const {
    return IfcStructuredDimensionCallout::s_type == t ? true : IfcDraughtingCallout::isOfType(t);
}

bool IfcStructuredDimensionCallout::init() {
    bool status = IfcDraughtingCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuredDimensionCallout::copy(const IfcStructuredDimensionCallout &obj, const CopyOp &copyop) {
    IfcDraughtingCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuredDimensionCallout::s_type("IfcStructuredDimensionCallout");
