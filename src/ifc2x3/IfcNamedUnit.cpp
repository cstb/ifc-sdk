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

#include "ifc2x3/IfcNamedUnit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDimensionalExponents.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcNamedUnit::IfcNamedUnit(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_dimensions = NULL;
    m_unitType = IfcUnitEnum_UNSET;
}

IfcNamedUnit::~IfcNamedUnit() {
}

bool IfcNamedUnit::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcNamedUnit(this);
}

const std::string &IfcNamedUnit::type() {
    return IfcNamedUnit::s_type.getName();
}

Step::ClassType IfcNamedUnit::getClassType() {
    return IfcNamedUnit::s_type;
}

Step::ClassType IfcNamedUnit::getType() const {
    return IfcNamedUnit::s_type;
}

bool IfcNamedUnit::isOfType(Step::ClassType t) {
    return IfcNamedUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDimensionalExponents *IfcNamedUnit::getDimensions() {
    if (Step::BaseObject::inited()) {
        return m_dimensions.get();
    }
    else {
        return NULL;
    }
}

void IfcNamedUnit::setDimensions(const Step::RefPtr< IfcDimensionalExponents > &value) {
    m_dimensions = value;
}

IfcUnitEnum IfcNamedUnit::getUnitType() {
    if (Step::BaseObject::inited()) {
        return m_unitType;
    }
    else {
        return IfcUnitEnum_UNSET;
    }
}

void IfcNamedUnit::setUnitType(IfcUnitEnum value) {
    m_unitType = value;
}

void IfcNamedUnit::release() {
    m_dimensions.release();
}

bool IfcNamedUnit::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dimensions = NULL;
    }
    else {
        m_dimensions = static_cast< IfcDimensionalExponents * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unitType = IfcUnitEnum_UNSET;
    }
    else {
        if (arg == ".ABSORBEDDOSEUNIT.") {
            m_unitType = IfcUnitEnum_ABSORBEDDOSEUNIT;
        }
        else if (arg == ".AMOUNTOFSUBSTANCEUNIT.") {
            m_unitType = IfcUnitEnum_AMOUNTOFSUBSTANCEUNIT;
        }
        else if (arg == ".AREAUNIT.") {
            m_unitType = IfcUnitEnum_AREAUNIT;
        }
        else if (arg == ".DOSEEQUIVALENTUNIT.") {
            m_unitType = IfcUnitEnum_DOSEEQUIVALENTUNIT;
        }
        else if (arg == ".ELECTRICCAPACITANCEUNIT.") {
            m_unitType = IfcUnitEnum_ELECTRICCAPACITANCEUNIT;
        }
        else if (arg == ".ELECTRICCHARGEUNIT.") {
            m_unitType = IfcUnitEnum_ELECTRICCHARGEUNIT;
        }
        else if (arg == ".ELECTRICCONDUCTANCEUNIT.") {
            m_unitType = IfcUnitEnum_ELECTRICCONDUCTANCEUNIT;
        }
        else if (arg == ".ELECTRICCURRENTUNIT.") {
            m_unitType = IfcUnitEnum_ELECTRICCURRENTUNIT;
        }
        else if (arg == ".ELECTRICRESISTANCEUNIT.") {
            m_unitType = IfcUnitEnum_ELECTRICRESISTANCEUNIT;
        }
        else if (arg == ".ELECTRICVOLTAGEUNIT.") {
            m_unitType = IfcUnitEnum_ELECTRICVOLTAGEUNIT;
        }
        else if (arg == ".ENERGYUNIT.") {
            m_unitType = IfcUnitEnum_ENERGYUNIT;
        }
        else if (arg == ".FORCEUNIT.") {
            m_unitType = IfcUnitEnum_FORCEUNIT;
        }
        else if (arg == ".FREQUENCYUNIT.") {
            m_unitType = IfcUnitEnum_FREQUENCYUNIT;
        }
        else if (arg == ".ILLUMINANCEUNIT.") {
            m_unitType = IfcUnitEnum_ILLUMINANCEUNIT;
        }
        else if (arg == ".INDUCTANCEUNIT.") {
            m_unitType = IfcUnitEnum_INDUCTANCEUNIT;
        }
        else if (arg == ".LENGTHUNIT.") {
            m_unitType = IfcUnitEnum_LENGTHUNIT;
        }
        else if (arg == ".LUMINOUSFLUXUNIT.") {
            m_unitType = IfcUnitEnum_LUMINOUSFLUXUNIT;
        }
        else if (arg == ".LUMINOUSINTENSITYUNIT.") {
            m_unitType = IfcUnitEnum_LUMINOUSINTENSITYUNIT;
        }
        else if (arg == ".MAGNETICFLUXDENSITYUNIT.") {
            m_unitType = IfcUnitEnum_MAGNETICFLUXDENSITYUNIT;
        }
        else if (arg == ".MAGNETICFLUXUNIT.") {
            m_unitType = IfcUnitEnum_MAGNETICFLUXUNIT;
        }
        else if (arg == ".MASSUNIT.") {
            m_unitType = IfcUnitEnum_MASSUNIT;
        }
        else if (arg == ".PLANEANGLEUNIT.") {
            m_unitType = IfcUnitEnum_PLANEANGLEUNIT;
        }
        else if (arg == ".POWERUNIT.") {
            m_unitType = IfcUnitEnum_POWERUNIT;
        }
        else if (arg == ".PRESSUREUNIT.") {
            m_unitType = IfcUnitEnum_PRESSUREUNIT;
        }
        else if (arg == ".RADIOACTIVITYUNIT.") {
            m_unitType = IfcUnitEnum_RADIOACTIVITYUNIT;
        }
        else if (arg == ".SOLIDANGLEUNIT.") {
            m_unitType = IfcUnitEnum_SOLIDANGLEUNIT;
        }
        else if (arg == ".THERMODYNAMICTEMPERATUREUNIT.") {
            m_unitType = IfcUnitEnum_THERMODYNAMICTEMPERATUREUNIT;
        }
        else if (arg == ".TIMEUNIT.") {
            m_unitType = IfcUnitEnum_TIMEUNIT;
        }
        else if (arg == ".VOLUMEUNIT.") {
            m_unitType = IfcUnitEnum_VOLUMEUNIT;
        }
        else if (arg == ".USERDEFINED.") {
            m_unitType = IfcUnitEnum_USERDEFINED;
        }
    }
    return true;
}

void IfcNamedUnit::copy(const IfcNamedUnit &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDimensions(copyop(obj.m_dimensions.get()));
    setUnitType(obj.m_unitType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcNamedUnit::s_type("IfcNamedUnit");
