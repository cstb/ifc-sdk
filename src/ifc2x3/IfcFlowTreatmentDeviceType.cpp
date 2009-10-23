#include "ifc2x3/IfcFlowTreatmentDeviceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowTreatmentDeviceType::IfcFlowTreatmentDeviceType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowTreatmentDeviceType::~IfcFlowTreatmentDeviceType() {
}

bool IfcFlowTreatmentDeviceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowTreatmentDeviceType(this);
}

const std::string &IfcFlowTreatmentDeviceType::type() const {
    return IfcFlowTreatmentDeviceType::s_type.getName();
}

const Step::ClassType &IfcFlowTreatmentDeviceType::getClassType() {
    return IfcFlowTreatmentDeviceType::s_type;
}

const Step::ClassType &IfcFlowTreatmentDeviceType::getType() const {
    return IfcFlowTreatmentDeviceType::s_type;
}

bool IfcFlowTreatmentDeviceType::isOfType(const Step::ClassType &t) const {
    return IfcFlowTreatmentDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcFlowTreatmentDeviceType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowTreatmentDeviceType::copy(const IfcFlowTreatmentDeviceType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowTreatmentDeviceType::s_type("IfcFlowTreatmentDeviceType");
