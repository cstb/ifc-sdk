#include "ifc2x3/IfcFlowControllerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowControllerType::IfcFlowControllerType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowControllerType::~IfcFlowControllerType() {
}

bool IfcFlowControllerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowControllerType(this);
}

const std::string &IfcFlowControllerType::type() const {
    return IfcFlowControllerType::s_type.getName();
}

const Step::ClassType &IfcFlowControllerType::getClassType() {
    return IfcFlowControllerType::s_type;
}

const Step::ClassType &IfcFlowControllerType::getType() const {
    return IfcFlowControllerType::s_type;
}

bool IfcFlowControllerType::isOfType(const Step::ClassType &t) const {
    return IfcFlowControllerType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcFlowControllerType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowControllerType::copy(const IfcFlowControllerType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowControllerType::s_type("IfcFlowControllerType");
