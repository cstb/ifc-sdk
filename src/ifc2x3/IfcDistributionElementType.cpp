#include "ifc2x3/IfcDistributionElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDistributionElementType::IfcDistributionElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcDistributionElementType::~IfcDistributionElementType() {
}

bool IfcDistributionElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionElementType(this);
}

const std::string &IfcDistributionElementType::type() const {
    return IfcDistributionElementType::s_type.getName();
}

const Step::ClassType &IfcDistributionElementType::getClassType() {
    return IfcDistributionElementType::s_type;
}

const Step::ClassType &IfcDistributionElementType::getType() const {
    return IfcDistributionElementType::s_type;
}

bool IfcDistributionElementType::isOfType(const Step::ClassType &t) const {
    return IfcDistributionElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcDistributionElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionElementType::copy(const IfcDistributionElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionElementType::s_type("IfcDistributionElementType");
