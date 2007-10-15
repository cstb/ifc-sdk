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

#include "ifc2x3/IfcTransportElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTransportElement::IfcTransportElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
    m_operationType = IfcTransportElementTypeEnum_UNSET;
    m_capacityByWeight = Step::getUnset(m_capacityByWeight);
    m_capacityByNumber = Step::getUnset(m_capacityByNumber);
}

IfcTransportElement::~IfcTransportElement() {
}

bool IfcTransportElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTransportElement(this);
}

const std::string &IfcTransportElement::type() {
    return IfcTransportElement::s_type.getName();
}

Step::ClassType IfcTransportElement::getClassType() {
    return IfcTransportElement::s_type;
}

Step::ClassType IfcTransportElement::getType() const {
    return IfcTransportElement::s_type;
}

bool IfcTransportElement::isOfType(Step::ClassType t) {
    return IfcTransportElement::s_type == t ? true : IfcElement::isOfType(t);
}

IfcTransportElementTypeEnum IfcTransportElement::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcTransportElementTypeEnum_UNSET;
    }
}

void IfcTransportElement::setOperationType(IfcTransportElementTypeEnum value) {
    m_operationType = value;
}

IfcMassMeasure IfcTransportElement::getCapacityByWeight() {
    if (Step::BaseObject::inited()) {
        return m_capacityByWeight;
    }
    else {
        return Step::getUnset(m_capacityByWeight);
    }
}

void IfcTransportElement::setCapacityByWeight(IfcMassMeasure value) {
    m_capacityByWeight = value;
}

IfcCountMeasure IfcTransportElement::getCapacityByNumber() {
    if (Step::BaseObject::inited()) {
        return m_capacityByNumber;
    }
    else {
        return Step::getUnset(m_capacityByNumber);
    }
}

void IfcTransportElement::setCapacityByNumber(IfcCountMeasure value) {
    m_capacityByNumber = value;
}

void IfcTransportElement::release() {
    IfcElement::release();
}

bool IfcTransportElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcTransportElementTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELEVATOR.") {
            m_operationType = IfcTransportElementTypeEnum_ELEVATOR;
        }
        else if (arg == ".ESCALATOR.") {
            m_operationType = IfcTransportElementTypeEnum_ESCALATOR;
        }
        else if (arg == ".MOVINGWALKWAY.") {
            m_operationType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcTransportElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcTransportElementTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_capacityByWeight = Step::getUnset(m_capacityByWeight);
    }
    else {
        m_capacityByWeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_capacityByNumber = Step::getUnset(m_capacityByNumber);
    }
    else {
        m_capacityByNumber = Step::spfToInteger(arg);
    }
    return true;
}

void IfcTransportElement::copy(const IfcTransportElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setCapacityByWeight(obj.m_capacityByWeight);
    setCapacityByNumber(obj.m_capacityByNumber);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTransportElement::s_type("IfcTransportElement");
