#include "ifc2x3/IfcRelNests.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelNests::IfcRelNests(Step::Id id, Step::SPFData *args) : IfcRelDecomposes(id, args) {
}

IfcRelNests::~IfcRelNests() {
}

bool IfcRelNests::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelNests(this);
}

const std::string &IfcRelNests::type() const {
    return IfcRelNests::s_type.getName();
}

const Step::ClassType &IfcRelNests::getClassType() {
    return IfcRelNests::s_type;
}

const Step::ClassType &IfcRelNests::getType() const {
    return IfcRelNests::s_type;
}

bool IfcRelNests::isOfType(const Step::ClassType &t) const {
    return IfcRelNests::s_type == t ? true : IfcRelDecomposes::isOfType(t);
}

bool IfcRelNests::init() {
    bool status = IfcRelDecomposes::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelNests::copy(const IfcRelNests &obj, const CopyOp &copyop) {
    IfcRelDecomposes::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelNests::s_type("IfcRelNests");
