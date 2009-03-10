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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcRampFlightType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRampFlightType::IfcRampFlightType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcRampFlightTypeEnum_UNSET;
}

IfcRampFlightType::~IfcRampFlightType() {
}

bool IfcRampFlightType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRampFlightType(this);
}

const std::string &IfcRampFlightType::type() const {
    return IfcRampFlightType::s_type.getName();
}

const Step::ClassType &IfcRampFlightType::getClassType() {
    return IfcRampFlightType::s_type;
}

const Step::ClassType &IfcRampFlightType::getType() const {
    return IfcRampFlightType::s_type;
}

bool IfcRampFlightType::isOfType(const Step::ClassType &t) const {
    return IfcRampFlightType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcRampFlightTypeEnum_UNSET;
    }
}

const IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType() const {
    IfcRampFlightType * deConstObject = const_cast< IfcRampFlightType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcRampFlightType::setPredefinedType(IfcRampFlightTypeEnum value) {
    m_predefinedType = value;
}

bool IfcRampFlightType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcRampFlightTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT.") {
            m_predefinedType = IfcRampFlightTypeEnum_STRAIGHT;
        }
        else if (arg == ".SPIRAL.") {
            m_predefinedType = IfcRampFlightTypeEnum_SPIRAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcRampFlightTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcRampFlightTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRampFlightType::copy(const IfcRampFlightType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRampFlightType::s_type("IfcRampFlightType");
