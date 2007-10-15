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

#include "ifc2x3/IfcDistributionChamberElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionChamberElementType::IfcDistributionChamberElementType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
    m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
}

IfcDistributionChamberElementType::~IfcDistributionChamberElementType() {
}

bool IfcDistributionChamberElementType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionChamberElementType(this);
}

const std::string &IfcDistributionChamberElementType::type() {
    return IfcDistributionChamberElementType::s_type.getName();
}

Step::ClassType IfcDistributionChamberElementType::getClassType() {
    return IfcDistributionChamberElementType::s_type;
}

Step::ClassType IfcDistributionChamberElementType::getType() const {
    return IfcDistributionChamberElementType::s_type;
}

bool IfcDistributionChamberElementType::isOfType(Step::ClassType t) {
    return IfcDistributionChamberElementType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

IfcDistributionChamberElementTypeEnum IfcDistributionChamberElementType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDistributionChamberElementTypeEnum_UNSET;
    }
}

void IfcDistributionChamberElementType::setPredefinedType(IfcDistributionChamberElementTypeEnum value) {
    m_predefinedType = value;
}

void IfcDistributionChamberElementType::release() {
    IfcDistributionFlowElementType::release();
}

bool IfcDistributionChamberElementType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
    }
    else {
        if (arg == ".FORMEDDUCT.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_FORMEDDUCT;
        }
        else if (arg == ".INSPECTIONCHAMBER.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONCHAMBER;
        }
        else if (arg == ".INSPECTIONPIT.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONPIT;
        }
        else if (arg == ".MANHOLE.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_MANHOLE;
        }
        else if (arg == ".METERCHAMBER.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_METERCHAMBER;
        }
        else if (arg == ".SUMP.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_SUMP;
        }
        else if (arg == ".TRENCH.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_TRENCH;
        }
        else if (arg == ".VALVECHAMBER.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_VALVECHAMBER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDistributionChamberElementType::copy(const IfcDistributionChamberElementType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionChamberElementType::s_type("IfcDistributionChamberElementType");
