#include "ifc2x3/IfcZone.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcZone::IfcZone(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
}

IfcZone::~IfcZone() {
}

bool IfcZone::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcZone(this);
}

const std::string &IfcZone::type() const {
    return IfcZone::s_type.getName();
}

const Step::ClassType &IfcZone::getClassType() {
    return IfcZone::s_type;
}

const Step::ClassType &IfcZone::getType() const {
    return IfcZone::s_type;
}

bool IfcZone::isOfType(const Step::ClassType &t) const {
    return IfcZone::s_type == t ? true : IfcGroup::isOfType(t);
}

bool IfcZone::init() {
    bool status = IfcGroup::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcZone::copy(const IfcZone &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcZone::s_type("IfcZone");
