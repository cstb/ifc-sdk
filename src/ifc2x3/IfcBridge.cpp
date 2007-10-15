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

#include "ifc2x3/IfcBridge.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBridgeStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridge::IfcBridge(Step::Id id, Step::SPFData *args) : IfcBridgeStructureElement(id, args) {
    m_structureType = IfcBridgeStructureType_UNSET;
}

IfcBridge::~IfcBridge() {
}

bool IfcBridge::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridge(this);
}

const std::string &IfcBridge::type() {
    return IfcBridge::s_type.getName();
}

Step::ClassType IfcBridge::getClassType() {
    return IfcBridge::s_type;
}

Step::ClassType IfcBridge::getType() const {
    return IfcBridge::s_type;
}

bool IfcBridge::isOfType(Step::ClassType t) {
    return IfcBridge::s_type == t ? true : IfcBridgeStructureElement::isOfType(t);
}

IfcBridgeStructureType IfcBridge::getStructureType() {
    if (Step::BaseObject::inited()) {
        return m_structureType;
    }
    else {
        return IfcBridgeStructureType_UNSET;
    }
}

void IfcBridge::setStructureType(IfcBridgeStructureType value) {
    m_structureType = value;
}

void IfcBridge::release() {
    IfcBridgeStructureElement::release();
}

bool IfcBridge::init() {
    bool status = IfcBridgeStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_structureType = IfcBridgeStructureType_UNSET;
    }
    else {
        if (arg == ".BOX_GIRDER_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_BOX_GIRDER_BRIDGE;
        }
        else if (arg == ".ARCHED_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_ARCHED_BRIDGE;
        }
        else if (arg == ".SUSPENSION_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_SUSPENSION_BRIDGE;
        }
        else if (arg == ".CABLE_STAYED_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_CABLE_STAYED_BRIDGE;
        }
        else if (arg == ".GIRDER_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_GIRDER_BRIDGE;
        }
        else if (arg == ".SLAB_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_SLAB_BRIDGE;
        }
        else if (arg == ".SLAB_BRIDGE_WITH_BROAD_CANTILEVER.") {
            m_structureType = IfcBridgeStructureType_SLAB_BRIDGE_WITH_BROAD_CANTILEVER;
        }
        else if (arg == ".BOW_STRING_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_BOW_STRING_BRIDGE;
        }
        else if (arg == ".LADDER_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_LADDER_BRIDGE;
        }
        else if (arg == ".FRAMEWORK_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_FRAMEWORK_BRIDGE;
        }
        else if (arg == ".GISCLARD_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_GISCLARD_BRIDGE;
        }
        else if (arg == ".PORTAL_BRIDGE.") {
            m_structureType = IfcBridgeStructureType_PORTAL_BRIDGE;
        }
    }
    return true;
}

void IfcBridge::copy(const IfcBridge &obj, const CopyOp &copyop) {
    IfcBridgeStructureElement::copy(obj, copyop);
    setStructureType(obj.m_structureType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridge::s_type("IfcBridge");
