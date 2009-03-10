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

#include "ifc2x3/IfcGridPlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectPlacement.h"
#include "ifc2x3/IfcVirtualGridIntersection.h"
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

IfcGridPlacement::IfcGridPlacement(Step::Id id, Step::SPFData *args) : IfcObjectPlacement(id, args) {
    m_placementLocation = NULL;
    m_placementRefDirection = NULL;
}

IfcGridPlacement::~IfcGridPlacement() {
}

bool IfcGridPlacement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGridPlacement(this);
}

const std::string &IfcGridPlacement::type() const {
    return IfcGridPlacement::s_type.getName();
}

const Step::ClassType &IfcGridPlacement::getClassType() {
    return IfcGridPlacement::s_type;
}

const Step::ClassType &IfcGridPlacement::getType() const {
    return IfcGridPlacement::s_type;
}

bool IfcGridPlacement::isOfType(const Step::ClassType &t) const {
    return IfcGridPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation() {
    if (Step::BaseObject::inited()) {
        return m_placementLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation() const {
    IfcGridPlacement * deConstObject = const_cast< IfcGridPlacement * > (this);
    return deConstObject->getPlacementLocation();
}

void IfcGridPlacement::setPlacementLocation(const Step::RefPtr< IfcVirtualGridIntersection > &value) {
    m_placementLocation = value;
}

IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_placementRefDirection.get();
    }
    else {
        return NULL;
    }
}

const IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection() const {
    IfcGridPlacement * deConstObject = const_cast< IfcGridPlacement * > (this);
    return deConstObject->getPlacementRefDirection();
}

void IfcGridPlacement::setPlacementRefDirection(const Step::RefPtr< IfcVirtualGridIntersection > &value) {
    m_placementRefDirection = value;
}

bool IfcGridPlacement::init() {
    bool status = IfcObjectPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementLocation = NULL;
    }
    else {
        m_placementLocation = static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementRefDirection = NULL;
    }
    else {
        m_placementRefDirection = static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcGridPlacement::copy(const IfcGridPlacement &obj, const CopyOp &copyop) {
    IfcObjectPlacement::copy(obj, copyop);
    setPlacementLocation((IfcVirtualGridIntersection*)copyop(obj.m_placementLocation.get()));
    setPlacementRefDirection((IfcVirtualGridIntersection*)copyop(obj.m_placementRefDirection.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGridPlacement::s_type("IfcGridPlacement");
