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

#include "ifc2x3/IfcBridgeSegmentPart.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCivilElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridgeSegmentPart::IfcBridgeSegmentPart(Step::Id id, Step::SPFData *args) : IfcCivilElementPart(id, args) {
    m_subPartType = IfcBridgeSubPartType_UNSET;
    m_mechanicalRole = IfcBridgeMechanicalRoleType_UNSET;
}

IfcBridgeSegmentPart::~IfcBridgeSegmentPart() {
}

bool IfcBridgeSegmentPart::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgeSegmentPart(this);
}

const std::string &IfcBridgeSegmentPart::type() {
    return IfcBridgeSegmentPart::s_type.getName();
}

Step::ClassType IfcBridgeSegmentPart::getClassType() {
    return IfcBridgeSegmentPart::s_type;
}

Step::ClassType IfcBridgeSegmentPart::getType() const {
    return IfcBridgeSegmentPart::s_type;
}

bool IfcBridgeSegmentPart::isOfType(Step::ClassType t) {
    return IfcBridgeSegmentPart::s_type == t ? true : IfcCivilElementPart::isOfType(t);
}

IfcBridgeSubPartType IfcBridgeSegmentPart::getSubPartType() {
    if (Step::BaseObject::inited()) {
        return m_subPartType;
    }
    else {
        return IfcBridgeSubPartType_UNSET;
    }
}

void IfcBridgeSegmentPart::setSubPartType(IfcBridgeSubPartType value) {
    m_subPartType = value;
}

IfcBridgeMechanicalRoleType IfcBridgeSegmentPart::getMechanicalRole() {
    if (Step::BaseObject::inited()) {
        return m_mechanicalRole;
    }
    else {
        return IfcBridgeMechanicalRoleType_UNSET;
    }
}

void IfcBridgeSegmentPart::setMechanicalRole(IfcBridgeMechanicalRoleType value) {
    m_mechanicalRole = value;
}

void IfcBridgeSegmentPart::release() {
    IfcCivilElementPart::release();
}

bool IfcBridgeSegmentPart::init() {
    bool status = IfcCivilElementPart::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_subPartType = IfcBridgeSubPartType_UNSET;
    }
    else {
        if (arg == ".LEFT_WEB.") {
            m_subPartType = IfcBridgeSubPartType_LEFT_WEB;
        }
        else if (arg == ".RIGHT_WEB.") {
            m_subPartType = IfcBridgeSubPartType_RIGHT_WEB;
        }
        else if (arg == ".CENTRAL_WEB.") {
            m_subPartType = IfcBridgeSubPartType_CENTRAL_WEB;
        }
        else if (arg == ".TOP_SLAB.") {
            m_subPartType = IfcBridgeSubPartType_TOP_SLAB;
        }
        else if (arg == ".LOWER_SLAB.") {
            m_subPartType = IfcBridgeSubPartType_LOWER_SLAB;
        }
        else if (arg == ".RIGHT_OVERHANG.") {
            m_subPartType = IfcBridgeSubPartType_RIGHT_OVERHANG;
        }
        else if (arg == ".LEFT_OVERHANG.") {
            m_subPartType = IfcBridgeSubPartType_LEFT_OVERHANG;
        }
        else if (arg == ".UPPER_FLANGE_.") {
            m_subPartType = IfcBridgeSubPartType_UPPER_FLANGE_;
        }
        else if (arg == ".LOWER_FLANGE.") {
            m_subPartType = IfcBridgeSubPartType_LOWER_FLANGE;
        }
        else if (arg == ".LOWER_FLOORING.") {
            m_subPartType = IfcBridgeSubPartType_LOWER_FLOORING;
        }
        else if (arg == ".UPPER_FLOORING.") {
            m_subPartType = IfcBridgeSubPartType_UPPER_FLOORING;
        }
        else if (arg == ".MORPHOLOGY_NODE.") {
            m_subPartType = IfcBridgeSubPartType_MORPHOLOGY_NODE;
        }
        else if (arg == ".REFERENCE_FIBRE.") {
            m_subPartType = IfcBridgeSubPartType_REFERENCE_FIBRE;
        }
        else if (arg == ".BRANCH_WALL.") {
            m_subPartType = IfcBridgeSubPartType_BRANCH_WALL;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mechanicalRole = IfcBridgeMechanicalRoleType_UNSET;
    }
    else {
        if (arg == ".LONGITUDINAL.") {
            m_mechanicalRole = IfcBridgeMechanicalRoleType_LONGITUDINAL;
        }
        else if (arg == ".TRANSVERSAL.") {
            m_mechanicalRole = IfcBridgeMechanicalRoleType_TRANSVERSAL;
        }
        else if (arg == ".COMPLETE.") {
            m_mechanicalRole = IfcBridgeMechanicalRoleType_COMPLETE;
        }
        else if (arg == ".NONE.") {
            m_mechanicalRole = IfcBridgeMechanicalRoleType_NONE;
        }
        else if (arg == ".UNDEFINED.") {
            m_mechanicalRole = IfcBridgeMechanicalRoleType_UNDEFINED;
        }
    }
    return true;
}

void IfcBridgeSegmentPart::copy(const IfcBridgeSegmentPart &obj, const CopyOp &copyop) {
    IfcCivilElementPart::copy(obj, copyop);
    setSubPartType(obj.m_subPartType);
    setMechanicalRole(obj.m_mechanicalRole);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgeSegmentPart::s_type("IfcBridgeSegmentPart");
