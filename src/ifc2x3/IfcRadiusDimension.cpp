#include "ifc2x3/IfcRadiusDimension.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRadiusDimension::IfcRadiusDimension(Step::Id id, Step::SPFData *args) : IfcDimensionCurveDirectedCallout(id, args) {
}

IfcRadiusDimension::~IfcRadiusDimension() {
}

bool IfcRadiusDimension::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRadiusDimension(this);
}

const std::string &IfcRadiusDimension::type() const {
    return IfcRadiusDimension::s_type.getName();
}

const Step::ClassType &IfcRadiusDimension::getClassType() {
    return IfcRadiusDimension::s_type;
}

const Step::ClassType &IfcRadiusDimension::getType() const {
    return IfcRadiusDimension::s_type;
}

bool IfcRadiusDimension::isOfType(const Step::ClassType &t) const {
    return IfcRadiusDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
}

bool IfcRadiusDimension::init() {
    bool status = IfcDimensionCurveDirectedCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRadiusDimension::copy(const IfcRadiusDimension &obj, const CopyOp &copyop) {
    IfcDimensionCurveDirectedCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRadiusDimension::s_type("IfcRadiusDimension");
