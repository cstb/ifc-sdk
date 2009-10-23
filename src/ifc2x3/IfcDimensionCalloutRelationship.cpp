#include "ifc2x3/IfcDimensionCalloutRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDimensionCalloutRelationship::IfcDimensionCalloutRelationship(Step::Id id, Step::SPFData *args) : IfcDraughtingCalloutRelationship(id, args) {
}

IfcDimensionCalloutRelationship::~IfcDimensionCalloutRelationship() {
}

bool IfcDimensionCalloutRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDimensionCalloutRelationship(this);
}

const std::string &IfcDimensionCalloutRelationship::type() const {
    return IfcDimensionCalloutRelationship::s_type.getName();
}

const Step::ClassType &IfcDimensionCalloutRelationship::getClassType() {
    return IfcDimensionCalloutRelationship::s_type;
}

const Step::ClassType &IfcDimensionCalloutRelationship::getType() const {
    return IfcDimensionCalloutRelationship::s_type;
}

bool IfcDimensionCalloutRelationship::isOfType(const Step::ClassType &t) const {
    return IfcDimensionCalloutRelationship::s_type == t ? true : IfcDraughtingCalloutRelationship::isOfType(t);
}

bool IfcDimensionCalloutRelationship::init() {
    bool status = IfcDraughtingCalloutRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDimensionCalloutRelationship::copy(const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop) {
    IfcDraughtingCalloutRelationship::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCalloutRelationship::s_type("IfcDimensionCalloutRelationship");
