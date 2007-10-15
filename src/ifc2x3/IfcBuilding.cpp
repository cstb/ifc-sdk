/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include "ifc2x3/IfcBuilding.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBuilding::IfcBuilding(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElement(id, args) {
    m_elevationOfRefHeight = Step::getUnset(m_elevationOfRefHeight);
    m_elevationOfTerrain = Step::getUnset(m_elevationOfTerrain);
    m_buildingAddress = NULL;
}

IfcBuilding::~IfcBuilding() {
}

bool IfcBuilding::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBuilding(this);
}

const std::string &IfcBuilding::type() {
    return IfcBuilding::s_type.getName();
}

Step::ClassType IfcBuilding::getClassType() {
    return IfcBuilding::s_type;
}

Step::ClassType IfcBuilding::getType() const {
    return IfcBuilding::s_type;
}

bool IfcBuilding::isOfType(Step::ClassType t) {
    return IfcBuilding::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcLengthMeasure IfcBuilding::getElevationOfRefHeight() {
    if (Step::BaseObject::inited()) {
        return m_elevationOfRefHeight;
    }
    else {
        return Step::getUnset(m_elevationOfRefHeight);
    }
}

void IfcBuilding::setElevationOfRefHeight(IfcLengthMeasure value) {
    m_elevationOfRefHeight = value;
}

IfcLengthMeasure IfcBuilding::getElevationOfTerrain() {
    if (Step::BaseObject::inited()) {
        return m_elevationOfTerrain;
    }
    else {
        return Step::getUnset(m_elevationOfTerrain);
    }
}

void IfcBuilding::setElevationOfTerrain(IfcLengthMeasure value) {
    m_elevationOfTerrain = value;
}

IfcPostalAddress *IfcBuilding::getBuildingAddress() {
    if (Step::BaseObject::inited()) {
        return m_buildingAddress.get();
    }
    else {
        return NULL;
    }
}

void IfcBuilding::setBuildingAddress(const Step::RefPtr< IfcPostalAddress > &value) {
    m_buildingAddress = value;
}

void IfcBuilding::release() {
    IfcSpatialStructureElement::release();
    m_buildingAddress.release();
}

bool IfcBuilding::init() {
    bool status = IfcSpatialStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elevationOfRefHeight = Step::getUnset(m_elevationOfRefHeight);
    }
    else {
        m_elevationOfRefHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elevationOfTerrain = Step::getUnset(m_elevationOfTerrain);
    }
    else {
        m_elevationOfTerrain = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_buildingAddress = NULL;
    }
    else {
        m_buildingAddress = static_cast< IfcPostalAddress * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcBuilding::copy(const IfcBuilding &obj, const CopyOp &copyop) {
    IfcSpatialStructureElement::copy(obj, copyop);
    setElevationOfRefHeight(obj.m_elevationOfRefHeight);
    setElevationOfTerrain(obj.m_elevationOfTerrain);
    setBuildingAddress(copyop(obj.m_buildingAddress.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuilding::s_type("IfcBuilding");
