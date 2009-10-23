#include "ifc2x3/IfcDimensionPair.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDimensionPair::IfcDimensionPair(Step::Id id, Step::SPFData *args) : IfcDraughtingCalloutRelationship(id, args) {
}

IfcDimensionPair::~IfcDimensionPair() {
}

bool IfcDimensionPair::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDimensionPair(this);
}

const std::string &IfcDimensionPair::type() const {
    return IfcDimensionPair::s_type.getName();
}

const Step::ClassType &IfcDimensionPair::getClassType() {
    return IfcDimensionPair::s_type;
}

const Step::ClassType &IfcDimensionPair::getType() const {
    return IfcDimensionPair::s_type;
}

bool IfcDimensionPair::isOfType(const Step::ClassType &t) const {
    return IfcDimensionPair::s_type == t ? true : IfcDraughtingCalloutRelationship::isOfType(t);
}

bool IfcDimensionPair::init() {
    bool status = IfcDraughtingCalloutRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDimensionPair::copy(const IfcDimensionPair &obj, const CopyOp &copyop) {
    IfcDraughtingCalloutRelationship::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionPair::s_type("IfcDimensionPair");
