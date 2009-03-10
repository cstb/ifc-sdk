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

#include "ifc2x3/IfcBuilding.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
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

bool IfcBuilding::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuilding(this);
}

const std::string &IfcBuilding::type() const {
    return IfcBuilding::s_type.getName();
}

const Step::ClassType &IfcBuilding::getClassType() {
    return IfcBuilding::s_type;
}

const Step::ClassType &IfcBuilding::getType() const {
    return IfcBuilding::s_type;
}

bool IfcBuilding::isOfType(const Step::ClassType &t) const {
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

const IfcLengthMeasure IfcBuilding::getElevationOfRefHeight() const {
    IfcBuilding * deConstObject = const_cast< IfcBuilding * > (this);
    return deConstObject->getElevationOfRefHeight();
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

const IfcLengthMeasure IfcBuilding::getElevationOfTerrain() const {
    IfcBuilding * deConstObject = const_cast< IfcBuilding * > (this);
    return deConstObject->getElevationOfTerrain();
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

const IfcPostalAddress *IfcBuilding::getBuildingAddress() const {
    IfcBuilding * deConstObject = const_cast< IfcBuilding * > (this);
    return deConstObject->getBuildingAddress();
}

void IfcBuilding::setBuildingAddress(const Step::RefPtr< IfcPostalAddress > &value) {
    m_buildingAddress = value;
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
        m_buildingAddress = static_cast< IfcPostalAddress * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcBuilding::copy(const IfcBuilding &obj, const CopyOp &copyop) {
    IfcSpatialStructureElement::copy(obj, copyop);
    setElevationOfRefHeight(obj.m_elevationOfRefHeight);
    setElevationOfTerrain(obj.m_elevationOfTerrain);
    setBuildingAddress((IfcPostalAddress*)copyop(obj.m_buildingAddress.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuilding::s_type("IfcBuilding");
