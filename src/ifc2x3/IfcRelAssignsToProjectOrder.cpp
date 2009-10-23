#include "ifc2x3/IfcRelAssignsToProjectOrder.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssignsToProjectOrder::IfcRelAssignsToProjectOrder(Step::Id id, Step::SPFData *args) : IfcRelAssignsToControl(id, args) {
}

IfcRelAssignsToProjectOrder::~IfcRelAssignsToProjectOrder() {
}

bool IfcRelAssignsToProjectOrder::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToProjectOrder(this);
}

const std::string &IfcRelAssignsToProjectOrder::type() const {
    return IfcRelAssignsToProjectOrder::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToProjectOrder::getClassType() {
    return IfcRelAssignsToProjectOrder::s_type;
}

const Step::ClassType &IfcRelAssignsToProjectOrder::getType() const {
    return IfcRelAssignsToProjectOrder::s_type;
}

bool IfcRelAssignsToProjectOrder::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsToProjectOrder::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

bool IfcRelAssignsToProjectOrder::init() {
    bool status = IfcRelAssignsToControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelAssignsToProjectOrder::copy(const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProjectOrder::s_type("IfcRelAssignsToProjectOrder");
