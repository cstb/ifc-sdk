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

#include "ifc2x3/IfcStairFlightType.h"

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

IfcStairFlightType::IfcStairFlightType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcStairFlightTypeEnum_UNSET;
}

IfcStairFlightType::~IfcStairFlightType() {
}

bool IfcStairFlightType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStairFlightType(this);
}

const std::string &IfcStairFlightType::type() {
    return IfcStairFlightType::s_type.getName();
}

Step::ClassType IfcStairFlightType::getClassType() {
    return IfcStairFlightType::s_type;
}

Step::ClassType IfcStairFlightType::getType() const {
    return IfcStairFlightType::s_type;
}

bool IfcStairFlightType::isOfType(Step::ClassType t) {
    return IfcStairFlightType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcStairFlightTypeEnum IfcStairFlightType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcStairFlightTypeEnum_UNSET;
    }
}

void IfcStairFlightType::setPredefinedType(IfcStairFlightTypeEnum value) {
    m_predefinedType = value;
}

void IfcStairFlightType::release() {
    IfcBuildingElementType::release();
}

bool IfcStairFlightType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcStairFlightTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT.") {
            m_predefinedType = IfcStairFlightTypeEnum_STRAIGHT;
        }
        else if (arg == ".WINDER.") {
            m_predefinedType = IfcStairFlightTypeEnum_WINDER;
        }
        else if (arg == ".SPIRAL.") {
            m_predefinedType = IfcStairFlightTypeEnum_SPIRAL;
        }
        else if (arg == ".CURVED.") {
            m_predefinedType = IfcStairFlightTypeEnum_CURVED;
        }
        else if (arg == ".FREEFORM.") {
            m_predefinedType = IfcStairFlightTypeEnum_FREEFORM;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcStairFlightTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcStairFlightTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStairFlightType::copy(const IfcStairFlightType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStairFlightType::s_type("IfcStairFlightType");
