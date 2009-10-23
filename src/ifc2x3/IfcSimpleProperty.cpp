#include "ifc2x3/IfcSimpleProperty.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSimpleProperty::IfcSimpleProperty(Step::Id id, Step::SPFData *args) : IfcProperty(id, args) {
}

IfcSimpleProperty::~IfcSimpleProperty() {
}

bool IfcSimpleProperty::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSimpleProperty(this);
}

const std::string &IfcSimpleProperty::type() const {
    return IfcSimpleProperty::s_type.getName();
}

const Step::ClassType &IfcSimpleProperty::getClassType() {
    return IfcSimpleProperty::s_type;
}

const Step::ClassType &IfcSimpleProperty::getType() const {
    return IfcSimpleProperty::s_type;
}

bool IfcSimpleProperty::isOfType(const Step::ClassType &t) const {
    return IfcSimpleProperty::s_type == t ? true : IfcProperty::isOfType(t);
}

bool IfcSimpleProperty::init() {
    bool status = IfcProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSimpleProperty::copy(const IfcSimpleProperty &obj, const CopyOp &copyop) {
    IfcProperty::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSimpleProperty::s_type("IfcSimpleProperty");
