#include "ifc2x3/IfcRelOccupiesSpaces.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssignsToActor.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelOccupiesSpaces::IfcRelOccupiesSpaces(Step::Id id, Step::SPFData *args) : IfcRelAssignsToActor(id, args) {
}

IfcRelOccupiesSpaces::~IfcRelOccupiesSpaces() {
}

bool IfcRelOccupiesSpaces::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelOccupiesSpaces(this);
}

const std::string &IfcRelOccupiesSpaces::type() const {
    return IfcRelOccupiesSpaces::s_type.getName();
}

const Step::ClassType &IfcRelOccupiesSpaces::getClassType() {
    return IfcRelOccupiesSpaces::s_type;
}

const Step::ClassType &IfcRelOccupiesSpaces::getType() const {
    return IfcRelOccupiesSpaces::s_type;
}

bool IfcRelOccupiesSpaces::isOfType(const Step::ClassType &t) const {
    return IfcRelOccupiesSpaces::s_type == t ? true : IfcRelAssignsToActor::isOfType(t);
}

bool IfcRelOccupiesSpaces::init() {
    bool status = IfcRelAssignsToActor::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelOccupiesSpaces::copy(const IfcRelOccupiesSpaces &obj, const CopyOp &copyop) {
    IfcRelAssignsToActor::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelOccupiesSpaces::s_type("IfcRelOccupiesSpaces");
