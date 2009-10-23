#include "ifc2x3/IfcWorkPlan.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcWorkControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcWorkPlan::IfcWorkPlan(Step::Id id, Step::SPFData *args) : IfcWorkControl(id, args) {
}

IfcWorkPlan::~IfcWorkPlan() {
}

bool IfcWorkPlan::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWorkPlan(this);
}

const std::string &IfcWorkPlan::type() const {
    return IfcWorkPlan::s_type.getName();
}

const Step::ClassType &IfcWorkPlan::getClassType() {
    return IfcWorkPlan::s_type;
}

const Step::ClassType &IfcWorkPlan::getType() const {
    return IfcWorkPlan::s_type;
}

bool IfcWorkPlan::isOfType(const Step::ClassType &t) const {
    return IfcWorkPlan::s_type == t ? true : IfcWorkControl::isOfType(t);
}

bool IfcWorkPlan::init() {
    bool status = IfcWorkControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWorkPlan::copy(const IfcWorkPlan &obj, const CopyOp &copyop) {
    IfcWorkControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWorkPlan::s_type("IfcWorkPlan");
