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

#include "ifc2x3/IfcBuildingStorey.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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
