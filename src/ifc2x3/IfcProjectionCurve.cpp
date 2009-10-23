#include "ifc2x3/IfcProjectionCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcProjectionCurve::IfcProjectionCurve(Step::Id id, Step::SPFData *args) : IfcAnnotationCurveOccurrence(id, args) {
}

IfcProjectionCurve::~IfcProjectionCurve() {
}

bool IfcProjectionCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProjectionCurve(this);
}

const std::string &IfcProjectionCurve::type() const {
    return IfcProjectionCurve::s_type.getName();
}

const Step::ClassType &IfcProjectionCurve::getClassType() {
    return IfcProjectionCurve::s_type;
}

const Step::ClassType &IfcProjectionCurve::getType() const {
    return IfcProjectionCurve::s_type;
}

bool IfcProjectionCurve::isOfType(const Step::ClassType &t) const {
    return IfcProjectionCurve::s_type == t ? true : IfcAnnotationCurveOccurrence::isOfType(t);
}

bool IfcProjectionCurve::init() {
    bool status = IfcAnnotationCurveOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcProjectionCurve::copy(const IfcProjectionCurve &obj, const CopyOp &copyop) {
    IfcAnnotationCurveOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectionCurve::s_type("IfcProjectionCurve");
