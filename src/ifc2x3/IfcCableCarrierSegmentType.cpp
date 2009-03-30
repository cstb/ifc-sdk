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

#include "ifc2x3/IfcCableCarrierSegmentType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowSegmentType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCableCarrierSegmentType::IfcCableCarrierSegmentType(Step::Id id, Step::SPFData *args) : IfcFlowSegmentType(id, args) {
    m_predefinedType = IfcCableCarrierSegmentTypeEnum_UNSET;
}

IfcCableCarrierSegmentType::~IfcCableCarrierSegmentType() {
}

bool IfcCableCarrierSegmentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCableCarrierSegmentType(this);
}

const std::string &IfcCableCarrierSegmentType::type() const {
    return IfcCableCarrierSegmentType::s_type.getName();
}

const Step::ClassType &IfcCableCarrierSegmentType::getClassType() {
    return IfcCableCarrierSegmentType::s_type;
}

const Step::ClassType &IfcCableCarrierSegmentType::getType() const {
    return IfcCableCarrierSegmentType::s_type;
}

bool IfcCableCarrierSegmentType::isOfType(const Step::ClassType &t) const {
    return IfcCableCarrierSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcCableCarrierSegmentTypeEnum IfcCableCarrierSegmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCableCarrierSegmentTypeEnum_UNSET;
    }
}

const IfcCableCarrierSegmentTypeEnum IfcCableCarrierSegmentType::getPredefinedType() const {
    IfcCableCarrierSegmentType * deConstObject = const_cast< IfcCableCarrierSegmentType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCableCarrierSegmentType::setPredefinedType(IfcCableCarrierSegmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcCableCarrierSegmentType::unsetPredefinedType() {
    m_predefinedType = IfcCableCarrierSegmentTypeEnum_UNSET;
}

bool IfcCableCarrierSegmentType::testPredefinedType() const {
    return getPredefinedType() != IfcCableCarrierSegmentTypeEnum_UNSET;
}

bool IfcCableCarrierSegmentType::init() {
    bool status = IfcFlowSegmentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCableCarrierSegmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".CABLELADDERSEGMENT.") {
            m_predefinedType = IfcCableCarrierSegmentTypeEnum_CABLELADDERSEGMENT;
        }
        else if (arg == ".CABLETRAYSEGMENT.") {
            m_predefinedType = IfcCableCarrierSegmentTypeEnum_CABLETRAYSEGMENT;
        }
        else if (arg == ".CABLETRUNKINGSEGMENT.") {
            m_predefinedType = IfcCableCarrierSegmentTypeEnum_CABLETRUNKINGSEGMENT;
        }
        else if (arg == ".CONDUITSEGMENT.") {
            m_predefinedType = IfcCableCarrierSegmentTypeEnum_CONDUITSEGMENT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCableCarrierSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCableCarrierSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableCarrierSegmentType::copy(const IfcCableCarrierSegmentType &obj, const CopyOp &copyop) {
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCableCarrierSegmentType::s_type("IfcCableCarrierSegmentType");
