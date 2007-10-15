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

#include "ifc2x3/IfcFilterType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowTreatmentDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFilterType::IfcFilterType(Step::Id id, Step::SPFData *args) : IfcFlowTreatmentDeviceType(id, args) {
    m_predefinedType = IfcFilterTypeEnum_UNSET;
}

IfcFilterType::~IfcFilterType() {
}

bool IfcFilterType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFilterType(this);
}

const std::string &IfcFilterType::type() {
    return IfcFilterType::s_type.getName();
}

Step::ClassType IfcFilterType::getClassType() {
    return IfcFilterType::s_type;
}

Step::ClassType IfcFilterType::getType() const {
    return IfcFilterType::s_type;
}

bool IfcFilterType::isOfType(Step::ClassType t) {
    return IfcFilterType::s_type == t ? true : IfcFlowTreatmentDeviceType::isOfType(t);
}

IfcFilterTypeEnum IfcFilterType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFilterTypeEnum_UNSET;
    }
}

void IfcFilterType::setPredefinedType(IfcFilterTypeEnum value) {
    m_predefinedType = value;
}

void IfcFilterType::release() {
    IfcFlowTreatmentDeviceType::release();
}

bool IfcFilterType::init() {
    bool status = IfcFlowTreatmentDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFilterTypeEnum_UNSET;
    }
    else {
        if (arg == ".AIRPARTICLEFILTER.") {
            m_predefinedType = IfcFilterTypeEnum_AIRPARTICLEFILTER;
        }
        else if (arg == ".ODORFILTER.") {
            m_predefinedType = IfcFilterTypeEnum_ODORFILTER;
        }
        else if (arg == ".OILFILTER.") {
            m_predefinedType = IfcFilterTypeEnum_OILFILTER;
        }
        else if (arg == ".STRAINER.") {
            m_predefinedType = IfcFilterTypeEnum_STRAINER;
        }
        else if (arg == ".WATERFILTER.") {
            m_predefinedType = IfcFilterTypeEnum_WATERFILTER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFilterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFilterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFilterType::copy(const IfcFilterType &obj, const CopyOp &copyop) {
    IfcFlowTreatmentDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFilterType::s_type("IfcFilterType");
