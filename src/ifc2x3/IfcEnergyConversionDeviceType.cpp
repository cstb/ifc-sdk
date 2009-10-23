#include "ifc2x3/IfcEnergyConversionDeviceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcEnergyConversionDeviceType::IfcEnergyConversionDeviceType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcEnergyConversionDeviceType::~IfcEnergyConversionDeviceType() {
}

bool IfcEnergyConversionDeviceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEnergyConversionDeviceType(this);
}

const std::string &IfcEnergyConversionDeviceType::type() const {
    return IfcEnergyConversionDeviceType::s_type.getName();
}

const Step::ClassType &IfcEnergyConversionDeviceType::getClassType() {
    return IfcEnergyConversionDeviceType::s_type;
}

const Step::ClassType &IfcEnergyConversionDeviceType::getType() const {
    return IfcEnergyConversionDeviceType::s_type;
}

bool IfcEnergyConversionDeviceType::isOfType(const Step::ClassType &t) const {
    return IfcEnergyConversionDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcEnergyConversionDeviceType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEnergyConversionDeviceType::copy(const IfcEnergyConversionDeviceType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnergyConversionDeviceType::s_type("IfcEnergyConversionDeviceType");
