#include "ifc2x3/IfcEnergyConversionDevice.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcEnergyConversionDevice::IfcEnergyConversionDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcEnergyConversionDevice::~IfcEnergyConversionDevice() {
}

bool IfcEnergyConversionDevice::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEnergyConversionDevice(this);
}

const std::string &IfcEnergyConversionDevice::type() const {
    return IfcEnergyConversionDevice::s_type.getName();
}

const Step::ClassType &IfcEnergyConversionDevice::getClassType() {
    return IfcEnergyConversionDevice::s_type;
}

const Step::ClassType &IfcEnergyConversionDevice::getType() const {
    return IfcEnergyConversionDevice::s_type;
}

bool IfcEnergyConversionDevice::isOfType(const Step::ClassType &t) const {
    return IfcEnergyConversionDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

bool IfcEnergyConversionDevice::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEnergyConversionDevice::copy(const IfcEnergyConversionDevice &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnergyConversionDevice::s_type("IfcEnergyConversionDevice");
