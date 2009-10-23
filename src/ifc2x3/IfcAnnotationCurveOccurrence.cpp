#include "ifc2x3/IfcAnnotationCurveOccurrence.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAnnotationCurveOccurrence::IfcAnnotationCurveOccurrence(Step::Id id, Step::SPFData *args) : IfcAnnotationOccurrence(id, args) {
}

IfcAnnotationCurveOccurrence::~IfcAnnotationCurveOccurrence() {
}

bool IfcAnnotationCurveOccurrence::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotationCurveOccurrence(this);
}

const std::string &IfcAnnotationCurveOccurrence::type() const {
    return IfcAnnotationCurveOccurrence::s_type.getName();
}

const Step::ClassType &IfcAnnotationCurveOccurrence::getClassType() {
    return IfcAnnotationCurveOccurrence::s_type;
}

const Step::ClassType &IfcAnnotationCurveOccurrence::getType() const {
    return IfcAnnotationCurveOccurrence::s_type;
}

bool IfcAnnotationCurveOccurrence::isOfType(const Step::ClassType &t) const {
    return IfcAnnotationCurveOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

bool IfcAnnotationCurveOccurrence::init() {
    bool status = IfcAnnotationOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationCurveOccurrence::copy(const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationCurveOccurrence::s_type("IfcAnnotationCurveOccurrence");
