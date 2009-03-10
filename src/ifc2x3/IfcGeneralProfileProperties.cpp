/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcGeneralProfileProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProfileProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGeneralProfileProperties::IfcGeneralProfileProperties(Step::Id id, Step::SPFData *args) : IfcProfileProperties(id, args) {
    m_physicalWeight = Step::getUnset(m_physicalWeight);
    m_perimeter = Step::getUnset(m_perimeter);
    m_minimumPlateThickness = Step::getUnset(m_minimumPlateThickness);
    m_maximumPlateThickness = Step::getUnset(m_maximumPlateThickness);
    m_crossSectionArea = Step::getUnset(m_crossSectionArea);
}

IfcGeneralProfileProperties::~IfcGeneralProfileProperties() {
}

bool IfcGeneralProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeneralProfileProperties(this);
}

const std::string &IfcGeneralProfileProperties::type() const {
    return IfcGeneralProfileProperties::s_type.getName();
}

const Step::ClassType &IfcGeneralProfileProperties::getClassType() {
    return IfcGeneralProfileProperties::s_type;
}

const Step::ClassType &IfcGeneralProfileProperties::getType() const {
    return IfcGeneralProfileProperties::s_type;
}

bool IfcGeneralProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcGeneralProfileProperties::s_type == t ? true : IfcProfileProperties::isOfType(t);
}

IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight() {
    if (Step::BaseObject::inited()) {
        return m_physicalWeight;
    }
    else {
        return Step::getUnset(m_physicalWeight);
    }
}

const IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getPhysicalWeight();
}

void IfcGeneralProfileProperties::setPhysicalWeight(IfcMassPerLengthMeasure value) {
    m_physicalWeight = value;
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter() {
    if (Step::BaseObject::inited()) {
        return m_perimeter;
    }
    else {
        return Step::getUnset(m_perimeter);
    }
}

const IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getPerimeter();
}

void IfcGeneralProfileProperties::setPerimeter(IfcPositiveLengthMeasure value) {
    m_perimeter = value;
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness() {
    if (Step::BaseObject::inited()) {
        return m_minimumPlateThickness;
    }
    else {
        return Step::getUnset(m_minimumPlateThickness);
    }
}

const IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getMinimumPlateThickness();
}

void IfcGeneralProfileProperties::setMinimumPlateThickness(IfcPositiveLengthMeasure value) {
    m_minimumPlateThickness = value;
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness() {
    if (Step::BaseObject::inited()) {
        return m_maximumPlateThickness;
    }
    else {
        return Step::getUnset(m_maximumPlateThickness);
    }
}

const IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getMaximumPlateThickness();
}

void IfcGeneralProfileProperties::setMaximumPlateThickness(IfcPositiveLengthMeasure value) {
    m_maximumPlateThickness = value;
}

IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionArea;
    }
    else {
        return Step::getUnset(m_crossSectionArea);
    }
}

const IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea() const {
    IfcGeneralProfileProperties * deConstObject = const_cast< IfcGeneralProfileProperties * > (this);
    return deConstObject->getCrossSectionArea();
}

void IfcGeneralProfileProperties::setCrossSectionArea(IfcAreaMeasure value) {
    m_crossSectionArea = value;
}

bool IfcGeneralProfileProperties::init() {
    bool status = IfcProfileProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_physicalWeight = Step::getUnset(m_physicalWeight);
    }
    else {
        m_physicalWeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_perimeter = Step::getUnset(m_perimeter);
    }
    else {
        m_perimeter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minimumPlateThickness = Step::getUnset(m_minimumPlateThickness);
    }
    else {
        m_minimumPlateThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maximumPlateThickness = Step::getUnset(m_maximumPlateThickness);
    }
    else {
        m_maximumPlateThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    }
    else {
        m_crossSectionArea = Step::spfToReal(arg);
    }
    return true;
}

void IfcGeneralProfileProperties::copy(const IfcGeneralProfileProperties &obj, const CopyOp &copyop) {
    IfcProfileProperties::copy(obj, copyop);
    setPhysicalWeight(obj.m_physicalWeight);
    setPerimeter(obj.m_perimeter);
    setMinimumPlateThickness(obj.m_minimumPlateThickness);
    setMaximumPlateThickness(obj.m_maximumPlateThickness);
    setCrossSectionArea(obj.m_crossSectionArea);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeneralProfileProperties::s_type("IfcGeneralProfileProperties");
