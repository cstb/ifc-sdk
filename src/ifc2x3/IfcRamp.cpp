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

#include "ifc2x3/IfcRamp.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRamp::IfcRamp(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_shapeType = IfcRampTypeEnum_UNSET;
}

IfcRamp::~IfcRamp() {
}

bool IfcRamp::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRamp(this);
}

const std::string &IfcRamp::type() {
    return IfcRamp::s_type.getName();
}

Step::ClassType IfcRamp::getClassType() {
    return IfcRamp::s_type;
}

Step::ClassType IfcRamp::getType() const {
    return IfcRamp::s_type;
}

bool IfcRamp::isOfType(Step::ClassType t) {
    return IfcRamp::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRampTypeEnum IfcRamp::getShapeType() {
    if (Step::BaseObject::inited()) {
        return m_shapeType;
    }
    else {
        return IfcRampTypeEnum_UNSET;
    }
}

void IfcRamp::setShapeType(IfcRampTypeEnum value) {
    m_shapeType = value;
}

void IfcRamp::release() {
    IfcBuildingElement::release();
}

bool IfcRamp::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeType = IfcRampTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT_RUN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_STRAIGHT_RUN_RAMP;
        }
        else if (arg == ".TWO_STRAIGHT_RUN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_TWO_STRAIGHT_RUN_RAMP;
        }
        else if (arg == ".QUARTER_TURN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_QUARTER_TURN_RAMP;
        }
        else if (arg == ".TWO_QUARTER_TURN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_TWO_QUARTER_TURN_RAMP;
        }
        else if (arg == ".HALF_TURN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_HALF_TURN_RAMP;
        }
        else if (arg == ".SPIRAL_RAMP.") {
            m_shapeType = IfcRampTypeEnum_SPIRAL_RAMP;
        }
        else if (arg == ".USERDEFINED.") {
            m_shapeType = IfcRampTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_shapeType = IfcRampTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRamp::copy(const IfcRamp &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_shapeType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRamp::s_type("IfcRamp");
