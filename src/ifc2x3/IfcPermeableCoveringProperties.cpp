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

#include "ifc2x3/IfcPermeableCoveringProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPermeableCoveringProperties::IfcPermeableCoveringProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_operationType = IfcPermeableCoveringOperationEnum_UNSET;
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    m_frameDepth = Step::getUnset(m_frameDepth);
    m_frameThickness = Step::getUnset(m_frameThickness);
    m_shapeAspectStyle = NULL;
}

IfcPermeableCoveringProperties::~IfcPermeableCoveringProperties() {
}

bool IfcPermeableCoveringProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPermeableCoveringProperties(this);
}

const std::string &IfcPermeableCoveringProperties::type() {
    return IfcPermeableCoveringProperties::s_type.getName();
}

Step::ClassType IfcPermeableCoveringProperties::getClassType() {
    return IfcPermeableCoveringProperties::s_type;
}

Step::ClassType IfcPermeableCoveringProperties::getType() const {
    return IfcPermeableCoveringProperties::s_type;
}

bool IfcPermeableCoveringProperties::isOfType(Step::ClassType t) {
    return IfcPermeableCoveringProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPermeableCoveringOperationEnum IfcPermeableCoveringProperties::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcPermeableCoveringOperationEnum_UNSET;
    }
}

void IfcPermeableCoveringProperties::setOperationType(IfcPermeableCoveringOperationEnum value) {
    m_operationType = value;
}

IfcWindowPanelPositionEnum IfcPermeableCoveringProperties::getPanelPosition() {
    if (Step::BaseObject::inited()) {
        return m_panelPosition;
    }
    else {
        return IfcWindowPanelPositionEnum_UNSET;
    }
}

void IfcPermeableCoveringProperties::setPanelPosition(IfcWindowPanelPositionEnum value) {
    m_panelPosition = value;
}

IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameDepth() {
    if (Step::BaseObject::inited()) {
        return m_frameDepth;
    }
    else {
        return Step::getUnset(m_frameDepth);
    }
}

void IfcPermeableCoveringProperties::setFrameDepth(IfcPositiveLengthMeasure value) {
    m_frameDepth = value;
}

IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameThickness() {
    if (Step::BaseObject::inited()) {
        return m_frameThickness;
    }
    else {
        return Step::getUnset(m_frameThickness);
    }
}

void IfcPermeableCoveringProperties::setFrameThickness(IfcPositiveLengthMeasure value) {
    m_frameThickness = value;
}

IfcShapeAspect *IfcPermeableCoveringProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

void IfcPermeableCoveringProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcPermeableCoveringProperties::release() {
    IfcPropertySetDefinition::release();
    m_shapeAspectStyle.release();
}

bool IfcPermeableCoveringProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcPermeableCoveringOperationEnum_UNSET;
    }
    else {
        if (arg == ".GRILL.") {
            m_operationType = IfcPermeableCoveringOperationEnum_GRILL;
        }
        else if (arg == ".LOUVER.") {
            m_operationType = IfcPermeableCoveringOperationEnum_LOUVER;
        }
        else if (arg == ".SCREEN.") {
            m_operationType = IfcPermeableCoveringOperationEnum_SCREEN;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcPermeableCoveringOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcPermeableCoveringOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_panelPosition = IfcWindowPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.") {
            m_panelPosition = IfcWindowPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.") {
            m_panelPosition = IfcWindowPanelPositionEnum_RIGHT;
        }
        else if (arg == ".BOTTOM.") {
            m_panelPosition = IfcWindowPanelPositionEnum_BOTTOM;
        }
        else if (arg == ".TOP.") {
            m_panelPosition = IfcWindowPanelPositionEnum_TOP;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelPosition = IfcWindowPanelPositionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frameDepth = Step::getUnset(m_frameDepth);
    }
    else {
        m_frameDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frameThickness = Step::getUnset(m_frameThickness);
    }
    else {
        m_frameThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeAspectStyle = NULL;
    }
    else {
        m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcPermeableCoveringProperties::copy(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setPanelPosition(obj.m_panelPosition);
    setFrameDepth(obj.m_frameDepth);
    setFrameThickness(obj.m_frameThickness);
    setShapeAspectStyle(copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPermeableCoveringProperties::s_type("IfcPermeableCoveringProperties");
