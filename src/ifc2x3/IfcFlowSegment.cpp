#include "ifc2x3/IfcFlowSegment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowSegment::IfcFlowSegment(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowSegment::~IfcFlowSegment() {
}

bool IfcFlowSegment::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowSegment(this);
}

const std::string &IfcFlowSegment::type() const {
    return IfcFlowSegment::s_type.getName();
}

const Step::ClassType &IfcFlowSegment::getClassType() {
    return IfcFlowSegment::s_type;
}

const Step::ClassType &IfcFlowSegment::getType() const {
    return IfcFlowSegment::s_type;
}

bool IfcFlowSegment::isOfType(const Step::ClassType &t) const {
    return IfcFlowSegment::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

bool IfcFlowSegment::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowSegment::copy(const IfcFlowSegment &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowSegment::s_type("IfcFlowSegment");
