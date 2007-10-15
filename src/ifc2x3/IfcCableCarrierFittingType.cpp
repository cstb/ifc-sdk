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

#include "ifc2x3/IfcCableCarrierFittingType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCableCarrierFittingType::IfcCableCarrierFittingType(Step::Id id, Step::SPFData *args) : IfcFlowFittingType(id, args) {
    m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
}

IfcCableCarrierFittingType::~IfcCableCarrierFittingType() {
}

bool IfcCableCarrierFittingType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCableCarrierFittingType(this);
}

const std::string &IfcCableCarrierFittingType::type() {
    return IfcCableCarrierFittingType::s_type.getName();
}

Step::ClassType IfcCableCarrierFittingType::getClassType() {
    return IfcCableCarrierFittingType::s_type;
}

Step::ClassType IfcCableCarrierFittingType::getType() const {
    return IfcCableCarrierFittingType::s_type;
}

bool IfcCableCarrierFittingType::isOfType(Step::ClassType t) {
    return IfcCableCarrierFittingType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcCableCarrierFittingTypeEnum IfcCableCarrierFittingType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCableCarrierFittingTypeEnum_UNSET;
    }
}

void IfcCableCarrierFittingType::setPredefinedType(IfcCableCarrierFittingTypeEnum value) {
    m_predefinedType = value;
}

void IfcCableCarrierFittingType::release() {
    IfcFlowFittingType::release();
}

bool IfcCableCarrierFittingType::init() {
    bool status = IfcFlowFittingType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
    }
    else {
        if (arg == ".BEND.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_BEND;
        }
        else if (arg == ".CROSS.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_CROSS;
        }
        else if (arg == ".REDUCER.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_REDUCER;
        }
        else if (arg == ".TEE.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_TEE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableCarrierFittingType::copy(const IfcCableCarrierFittingType &obj, const CopyOp &copyop) {
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCableCarrierFittingType::s_type("IfcCableCarrierFittingType");
