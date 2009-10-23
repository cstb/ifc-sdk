#include "ifc2x3/IfcClosedShell.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectedFaceSet.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcClosedShell::IfcClosedShell(Step::Id id, Step::SPFData *args) : IfcConnectedFaceSet(id, args) {
}

IfcClosedShell::~IfcClosedShell() {
}

bool IfcClosedShell::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcClosedShell(this);
}

const std::string &IfcClosedShell::type() const {
    return IfcClosedShell::s_type.getName();
}

const Step::ClassType &IfcClosedShell::getClassType() {
    return IfcClosedShell::s_type;
}

const Step::ClassType &IfcClosedShell::getType() const {
    return IfcClosedShell::s_type;
}

bool IfcClosedShell::isOfType(const Step::ClassType &t) const {
    return IfcClosedShell::s_type == t ? true : IfcConnectedFaceSet::isOfType(t);
}

bool IfcClosedShell::init() {
    bool status = IfcConnectedFaceSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcClosedShell::copy(const IfcClosedShell &obj, const CopyOp &copyop) {
    IfcConnectedFaceSet::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClosedShell::s_type("IfcClosedShell");
