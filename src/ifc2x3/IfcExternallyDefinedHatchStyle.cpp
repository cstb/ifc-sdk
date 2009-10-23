#include "ifc2x3/IfcExternallyDefinedHatchStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcExternallyDefinedHatchStyle::IfcExternallyDefinedHatchStyle(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcExternallyDefinedHatchStyle::~IfcExternallyDefinedHatchStyle() {
}

bool IfcExternallyDefinedHatchStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExternallyDefinedHatchStyle(this);
}

const std::string &IfcExternallyDefinedHatchStyle::type() const {
    return IfcExternallyDefinedHatchStyle::s_type.getName();
}

const Step::ClassType &IfcExternallyDefinedHatchStyle::getClassType() {
    return IfcExternallyDefinedHatchStyle::s_type;
}

const Step::ClassType &IfcExternallyDefinedHatchStyle::getType() const {
    return IfcExternallyDefinedHatchStyle::s_type;
}

bool IfcExternallyDefinedHatchStyle::isOfType(const Step::ClassType &t) const {
    return IfcExternallyDefinedHatchStyle::s_type == t ? true : IfcExternalReference::isOfType(t);
}

bool IfcExternallyDefinedHatchStyle::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcExternallyDefinedHatchStyle::copy(const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedHatchStyle::s_type("IfcExternallyDefinedHatchStyle");
