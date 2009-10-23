#include "ifc2x3/IfcFlowFittingType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowFittingType::IfcFlowFittingType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowFittingType::~IfcFlowFittingType() {
}

bool IfcFlowFittingType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowFittingType(this);
}

const std::string &IfcFlowFittingType::type() const {
    return IfcFlowFittingType::s_type.getName();
}

const Step::ClassType &IfcFlowFittingType::getClassType() {
    return IfcFlowFittingType::s_type;
}

const Step::ClassType &IfcFlowFittingType::getType() const {
    return IfcFlowFittingType::s_type;
}

bool IfcFlowFittingType::isOfType(const Step::ClassType &t) const {
    return IfcFlowFittingType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcFlowFittingType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowFittingType::copy(const IfcFlowFittingType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowFittingType::s_type("IfcFlowFittingType");
