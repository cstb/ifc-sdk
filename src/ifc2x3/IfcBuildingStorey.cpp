#include "ifc2x3/IfcBuildingStorey.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBuildingStorey::IfcBuildingStorey(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElement(id, args) {
    m_elevation = Step::getUnset(m_elevation);
}

IfcBuildingStorey::~IfcBuildingStorey() {
}

bool IfcBuildingStorey::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingStorey(this);
}

const std::string &IfcBuildingStorey::type() const {
    return IfcBuildingStorey::s_type.getName();
}

const Step::ClassType &IfcBuildingStorey::getClassType() {
    return IfcBuildingStorey::s_type;
}

const Step::ClassType &IfcBuildingStorey::getType() const {
    return IfcBuildingStorey::s_type;
}

bool IfcBuildingStorey::isOfType(const Step::ClassType &t) const {
    return IfcBuildingStorey::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcLengthMeasure IfcBuildingStorey::getElevation() {
    if (Step::BaseObject::inited()) {
        return m_elevation;
    }
    else {
        return Step::getUnset(m_elevation);
    }
}

const IfcLengthMeasure IfcBuildingStorey::getElevation() const {
    IfcBuildingStorey * deConstObject = const_cast< IfcBuildingStorey * > (this);
    return deConstObject->getElevation();
}

void IfcBuildingStorey::setElevation(IfcLengthMeasure value) {
    m_elevation = value;
}

void IfcBuildingStorey::unsetElevation() {
    m_elevation = Step::getUnset(getElevation());
}

bool IfcBuildingStorey::testElevation() const {
    return !Step::isUnset(getElevation());
}

bool IfcBuildingStorey::init() {
    bool status = IfcSpatialStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elevation = Step::getUnset(m_elevation);
    }
    else {
        m_elevation = Step::spfToReal(arg);
    }
    return true;
}

void IfcBuildingStorey::copy(const IfcBuildingStorey &obj, const CopyOp &copyop) {
    IfcSpatialStructureElement::copy(obj, copyop);
    setElevation(obj.m_elevation);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingStorey::s_type("IfcBuildingStorey");
