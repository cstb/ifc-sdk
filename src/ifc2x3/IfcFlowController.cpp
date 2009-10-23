#include "ifc2x3/IfcFlowController.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowController::IfcFlowController(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowController::~IfcFlowController() {
}

bool IfcFlowController::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowController(this);
}

const std::string &IfcFlowController::type() const {
    return IfcFlowController::s_type.getName();
}

const Step::ClassType &IfcFlowController::getClassType() {
    return IfcFlowController::s_type;
}

const Step::ClassType &IfcFlowController::getType() const {
    return IfcFlowController::s_type;
}

bool IfcFlowController::isOfType(const Step::ClassType &t) const {
    return IfcFlowController::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

bool IfcFlowController::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowController::copy(const IfcFlowController &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowController::s_type("IfcFlowController");
