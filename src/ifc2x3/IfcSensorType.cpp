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

#include "ifc2x3/IfcSensorType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSensorType::IfcSensorType(Step::Id id, Step::SPFData *args) : IfcDistributionControlElementType(id, args) {
    m_predefinedType = IfcSensorTypeEnum_UNSET;
}

IfcSensorType::~IfcSensorType() {
}

bool IfcSensorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSensorType(this);
}

const std::string &IfcSensorType::type() const {
    return IfcSensorType::s_type.getName();
}

const Step::ClassType &IfcSensorType::getClassType() {
    return IfcSensorType::s_type;
}

const Step::ClassType &IfcSensorType::getType() const {
    return IfcSensorType::s_type;
}

bool IfcSensorType::isOfType(const Step::ClassType &t) const {
    return IfcSensorType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcSensorTypeEnum IfcSensorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSensorTypeEnum_UNSET;
    }
}

const IfcSensorTypeEnum IfcSensorType::getPredefinedType() const {
    IfcSensorType * deConstObject = const_cast< IfcSensorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSensorType::setPredefinedType(IfcSensorTypeEnum value) {
    m_predefinedType = value;
}

void IfcSensorType::unsetPredefinedType() {
    m_predefinedType = IfcSensorTypeEnum_UNSET;
}

bool IfcSensorType::testPredefinedType() const {
    return getPredefinedType() != IfcSensorTypeEnum_UNSET;
}

bool IfcSensorType::init() {
    bool status = IfcDistributionControlElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSensorTypeEnum_UNSET;
    }
    else {
        if (arg == ".CO2SENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_CO2SENSOR;
        }
        else if (arg == ".FIRESENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_FIRESENSOR;
        }
        else if (arg == ".FLOWSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_FLOWSENSOR;
        }
        else if (arg == ".GASSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_GASSENSOR;
        }
        else if (arg == ".HEATSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_HEATSENSOR;
        }
        else if (arg == ".HUMIDITYSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_HUMIDITYSENSOR;
        }
        else if (arg == ".LIGHTSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_LIGHTSENSOR;
        }
        else if (arg == ".MOISTURESENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_MOISTURESENSOR;
        }
        else if (arg == ".MOVEMENTSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_MOVEMENTSENSOR;
        }
        else if (arg == ".PRESSURESENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_PRESSURESENSOR;
        }
        else if (arg == ".SMOKESENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_SMOKESENSOR;
        }
        else if (arg == ".SOUNDSENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_SOUNDSENSOR;
        }
        else if (arg == ".TEMPERATURESENSOR.") {
            m_predefinedType = IfcSensorTypeEnum_TEMPERATURESENSOR;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSensorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSensorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSensorType::copy(const IfcSensorType &obj, const CopyOp &copyop) {
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSensorType::s_type("IfcSensorType");
