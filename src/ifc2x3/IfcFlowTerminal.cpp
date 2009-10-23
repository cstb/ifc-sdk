#include "ifc2x3/IfcFlowTerminal.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowTerminal::IfcFlowTerminal(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowTerminal::~IfcFlowTerminal() {
}

bool IfcFlowTerminal::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowTerminal(this);
}

const std::string &IfcFlowTerminal::type() const {
    return IfcFlowTerminal::s_type.getName();
}

const Step::ClassType &IfcFlowTerminal::getClassType() {
    return IfcFlowTerminal::s_type;
}

const Step::ClassType &IfcFlowTerminal::getType() const {
    return IfcFlowTerminal::s_type;
}

bool IfcFlowTerminal::isOfType(const Step::ClassType &t) const {
    return IfcFlowTerminal::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

bool IfcFlowTerminal::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowTerminal::copy(const IfcFlowTerminal &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowTerminal::s_type("IfcFlowTerminal");
