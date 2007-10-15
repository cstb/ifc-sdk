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

#include "ifc2x3/IfcRelSpaceBoundary.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcSpace.h"
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

IfcRelSpaceBoundary::IfcRelSpaceBoundary(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingSpace = NULL;
    m_relatedBuildingElement = NULL;
    m_connectionGeometry = NULL;
    m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
    m_internalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
}

IfcRelSpaceBoundary::~IfcRelSpaceBoundary() {
}

bool IfcRelSpaceBoundary::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelSpaceBoundary(this);
}

const std::string &IfcRelSpaceBoundary::type() {
    return IfcRelSpaceBoundary::s_type.getName();
}

Step::ClassType IfcRelSpaceBoundary::getClassType() {
    return IfcRelSpaceBoundary::s_type;
}

Step::ClassType IfcRelSpaceBoundary::getType() const {
    return IfcRelSpaceBoundary::s_type;
}

bool IfcRelSpaceBoundary::isOfType(Step::ClassType t) {
    return IfcRelSpaceBoundary::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSpace *IfcRelSpaceBoundary::getRelatingSpace() {
    if (Step::BaseObject::inited()) {
        return m_relatingSpace.get();
    }
    else {
        return NULL;
    }
}

void IfcRelSpaceBoundary::setRelatingSpace(const Step::RefPtr< IfcSpace > &value) {
    m_relatingSpace = value;
    m_relatingSpace->m_boundedBy.insert(this);
}

IfcElement *IfcRelSpaceBoundary::getRelatedBuildingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedBuildingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelSpaceBoundary::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatedBuildingElement = value;
    m_relatedBuildingElement->m_providesBoundaries.insert(this);
}

IfcConnectionGeometry *IfcRelSpaceBoundary::getConnectionGeometry() {
    if (Step::BaseObject::inited()) {
        return m_connectionGeometry.get();
    }
    else {
        return NULL;
    }
}

void IfcRelSpaceBoundary::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value) {
    m_connectionGeometry = value;
}

IfcPhysicalOrVirtualEnum IfcRelSpaceBoundary::getPhysicalOrVirtualBoundary() {
    if (Step::BaseObject::inited()) {
        return m_physicalOrVirtualBoundary;
    }
    else {
        return IfcPhysicalOrVirtualEnum_UNSET;
    }
}

void IfcRelSpaceBoundary::setPhysicalOrVirtualBoundary(IfcPhysicalOrVirtualEnum value) {
    m_physicalOrVirtualBoundary = value;
}

IfcInternalOrExternalEnum IfcRelSpaceBoundary::getInternalOrExternalBoundary() {
    if (Step::BaseObject::inited()) {
        return m_internalOrExternalBoundary;
    }
    else {
        return IfcInternalOrExternalEnum_UNSET;
    }
}

void IfcRelSpaceBoundary::setInternalOrExternalBoundary(IfcInternalOrExternalEnum value) {
    m_internalOrExternalBoundary = value;
}

void IfcRelSpaceBoundary::release() {
    IfcRelConnects::release();
    m_relatingSpace.release();
    m_relatedBuildingElement.release();
    m_connectionGeometry.release();
}

bool IfcRelSpaceBoundary::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingSpace = NULL;
    }
    else {
        m_relatingSpace = static_cast< IfcSpace * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedBuildingElement = NULL;
    }
    else {
        m_relatedBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionGeometry = NULL;
    }
    else {
        m_connectionGeometry = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
    }
    else {
        if (arg == ".PHYSICAL.") {
            m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_PHYSICAL;
        }
        else if (arg == ".VIRTUAL.") {
            m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_VIRTUAL;
        }
        else if (arg == ".NOTDEFINED.") {
            m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_internalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
    }
    else {
        if (arg == ".INTERNAL.") {
            m_internalOrExternalBoundary = IfcInternalOrExternalEnum_INTERNAL;
        }
        else if (arg == ".EXTERNAL.") {
            m_internalOrExternalBoundary = IfcInternalOrExternalEnum_EXTERNAL;
        }
        else if (arg == ".NOTDEFINED.") {
            m_internalOrExternalBoundary = IfcInternalOrExternalEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelSpaceBoundary::copy(const IfcRelSpaceBoundary &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingSpace(copyop(obj.m_relatingSpace.get()));
    setRelatedBuildingElement(copyop(obj.m_relatedBuildingElement.get()));
    setConnectionGeometry(copyop(obj.m_connectionGeometry.get()));
    setPhysicalOrVirtualBoundary(obj.m_physicalOrVirtualBoundary);
    setInternalOrExternalBoundary(obj.m_internalOrExternalBoundary);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelSpaceBoundary::s_type("IfcRelSpaceBoundary");
