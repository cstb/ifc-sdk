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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcFlowInstrumentType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowInstrumentType::IfcFlowInstrumentType(Step::Id id, Step::SPFData *args) : IfcDistributionControlElementType(id, args) {
    m_predefinedType = IfcFlowInstrumentTypeEnum_UNSET;
}

IfcFlowInstrumentType::~IfcFlowInstrumentType() {
}

bool IfcFlowInstrumentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowInstrumentType(this);
}

const std::string &IfcFlowInstrumentType::type() const {
    return IfcFlowInstrumentType::s_type.getName();
}

const Step::ClassType &IfcFlowInstrumentType::getClassType() {
    return IfcFlowInstrumentType::s_type;
}

const Step::ClassType &IfcFlowInstrumentType::getType() const {
    return IfcFlowInstrumentType::s_type;
}

bool IfcFlowInstrumentType::isOfType(const Step::ClassType &t) const {
    return IfcFlowInstrumentType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcFlowInstrumentTypeEnum IfcFlowInstrumentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFlowInstrumentTypeEnum_UNSET;
    }
}

const IfcFlowInstrumentTypeEnum IfcFlowInstrumentType::getPredefinedType() const {
    IfcFlowInstrumentType * deConstObject = const_cast< IfcFlowInstrumentType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcFlowInstrumentType::setPredefinedType(IfcFlowInstrumentTypeEnum value) {
    m_predefinedType = value;
}

void IfcFlowInstrumentType::unsetPredefinedType() {
    m_predefinedType = IfcFlowInstrumentTypeEnum_UNSET;
}

bool IfcFlowInstrumentType::testPredefinedType() const {
    return getPredefinedType() != IfcFlowInstrumentTypeEnum_UNSET;
}

bool IfcFlowInstrumentType::init() {
    bool status = IfcDistributionControlElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFlowInstrumentTypeEnum_UNSET;
    }
    else {
        if (arg == ".PRESSUREGAUGE.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_PRESSUREGAUGE;
        }
        else if (arg == ".THERMOMETER.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_THERMOMETER;
        }
        else if (arg == ".AMMETER.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_AMMETER;
        }
        else if (arg == ".FREQUENCYMETER.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_FREQUENCYMETER;
        }
        else if (arg == ".POWERFACTORMETER.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_POWERFACTORMETER;
        }
        else if (arg == ".PHASEANGLEMETER.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_PHASEANGLEMETER;
        }
        else if (arg == ".VOLTMETER_PEAK.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_VOLTMETER_PEAK;
        }
        else if (arg == ".VOLTMETER_RMS.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_VOLTMETER_RMS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFlowInstrumentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFlowInstrumentType::copy(const IfcFlowInstrumentType &obj, const CopyOp &copyop) {
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowInstrumentType::s_type("IfcFlowInstrumentType");
